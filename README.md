# rff-native — Rune Factory Frontier, recompiled and running on Windows

The native build of the 100 %-verified decompilation: all 13,963 real function bodies compiled
to x64, a real-call dispatch instead of the verifier's mocks, and a Win32 + Vulkan front end.

## What runs today

    build.bat                 # shaders -> objects -> rff.exe (needs VS 2022 + Vulkan SDK)
    rff.exe                   # boots the retail DOL and runs the game's own code

- `__start` → `__init_registers/hardware` → OS init → **DSP/AX audio init** → DVD/EXI/IOS/USB
  init → **`__init_user`/`__init_cpp` (the game's C++ constructors)** → **`main`** →
  `GXInit`/`__GXInitGX` → the frame loop (`GXDrawDone`, `VIWaitForRetrace`).
- The game's own diagnostics print, with their real arguments: `Console Type: NDEV 2.1`,
  `Kernel built : Jan 30 2008`, the whole SDK banner set (OS/DVD/NAND/VI/PAD/GX/WPAD/KPAD/AI/AX
  and NW4R EF/SND).
- **The game's own geometry renders.** The GX FIFO is captured at command level (see the replay
  section), each draw is decoded with its real vertex count and vertex block, and the vertices
  are mapped from the game's screen space into clip space. A frame submits a few draws
  (`0x9f` tristrips and `0x87`/`0x97` textured quads); those become triangles on the swapchain.

## Layout

| path | what |
|---|---|
| `corpus/` | 14,720 verified function bodies (one `.c` per guest address) |
| `gen/dispatch.c` | 14,720 generated wrappers: guest address -> real call, with the PPC ABI |
| `gen_dispatch.py` | the generator (register order, float-in-FPR vs float-in-GPR) |
| `rt/tc_rt.c` | guest MEM1 + the dispatch + the HAL (MMIO register file, DSP mailboxes, time base) |
| `rt/tc_ppc.c` | the PowerPC instruction helpers (bit-exact with the oracle) |
| `rt/boot.c` | the entry, the frame thread, the diagnostic probes |
| `rt/render.c` | the Vulkan renderer: window, swapchain, pipeline, display-list replay |

## The GX path (how the game's picture is produced)

1. **Capture at command level.** The SDK writes every FIFO command as `wr8(opcode)` followed by
   its own `wr8`/`wr16`/`wr32` payload, so `gx_fifo_feed` records the command structure as it
   arrives: an 8-bit write starts a command (or supplies a draw's vertex format), a 16-bit write
   after a draw opcode is that draw's vertex count, and a 32-bit write is a payload word.
   Recording the writes beats guessing lengths from a table: the CP table has a dozen variants
   and one wrong guess desynchronises the whole stream (which is exactly what happened while
   this was being built).
2. **Decode with the real descriptors.** A draw is `3 + count * vertexBlockBytes`. The boot's
   draws use the SDK's float position - three big-endian floats per vertex, confirmed against the
   captured stream (the full-screen quad's four corners read back as `(0,0)`, `(640,0)`,
   `(0,480)`, `(640,480)`).
3. **Replay.** Each draw expands into a triangle list (quads as two triangles, strips and fans
   by the standard walks) and every vertex is mapped from the game's screen space to clip space.



## Key device models (all in `rt/tc_rt.c`, each with its rationale in-line)

- **The call ABI**: register-order params for Ghidra's bare `param_N`, floats in FPRs (912
  confirmed against the pipeline's own metas), 64-bit results as the r3:r4 pair.
- **The stack**: the bodies address a fixed stack window; `tc_call`/`tc_callf` rebase it one frame
  per nesting level so a callee cannot clobber its caller's slots. A stack pointer passed as an
  argument is lifted by the same frame delta on the way in, so the callee's own rebase lands on
  the caller's physical slot (without this, a passed `&size` was double-rebased and read garbage).
- **Interrupt stand-ins**: DI transfer-complete, VI retrace, the AX/ARAM audio cursors, the EXI
  in-progress bits, the DSP mail handshake - each raised on the frame tick or the call path.
- **The HLE set**: the time base, `OSReport` (host console), the IOS IPC surface (`/dev/di`),
  EXI bus primitives, SRAM (no card), the memory-card manager, USB (no device), NWC24 (offline).

## The disc: decrypted and loading

The retail ISO's file data is Wii-encrypted, but the key is recoverable with the emulator's own
common key, so the game now loads its archives:

1. **Title key from the ticket.** The original `Rune Factory Frontier (Undub-Fix).iso` has an intact
   partition table (the trimmed `work/disc.img` had it scrubbed to zero). The DATA partition is at
   `0xF800000`, title ID `0001000052554645`. Its ticket holds the encrypted title key at `+0x1bf`;
   AES-128-CBC decrypting it with the **Wii common key** (`ebe42a225e8593e448d9c5457381aaf7`, the
   value hard-coded in Dolphin) and IV = the title ID zero-padded to 16 bytes yields the RUFE title
   key `bbe41c82dfafa9b1c63027399a6ee1ff`. (This is exactly `TicketReader::GetTitleKey` in Dolphin.)
2. **Cluster decryption.** The data area starts at partition `+0x20000` (`0xF820000`). It is a
   stream of `0x8000` clusters: a `0x400` header (the CBC IV sits at `+0x3d0`) followed by `0x7c00`
   of AES-128-CBC payload under the title key. `work/make_dec_img.py` decrypts every cluster into a
   contiguous data-area image `work/disc_dec.img` (~2.4 GB, covers every FST file).
3. **The FST offset is a word offset.** Wii FST file offsets are shifted `<<2` (Dolphin
   `FileSystemGCWii` uses `offset_shift = 2`); the length field is already bytes. `host_dvd_fastopen`
   now publishes `startAddr = fst_offset * 4`, so `RUNEFACTORY.bin` (FST `0x11de916c`) reads at
   `0x477a45b0` and comes back as plaintext `NLCM...` with entry count 1 - not the ciphertext that
   made `fn_80036CB0` spin.

`rff.exe` auto-discovers `work/disc_dec.img` (or set `RFF_DISC_IMG`). To rebuild it from the ISO:
`python work/make_dec_img.py`. `DolphinTool.exe extract -g` on the original ISO produces the same
plaintext files and was used to cross-check the decryption byte for byte.

## What is NOT done (honest scope)

- **Gameplay progression past the title state.** With the disc decrypted (see below) the game
  loads `RUNEFACTORY.bin`, parses its `NLCM` archive header (entry count 1), and runs its own main
  frame loop (`fn_800455E4` / `fn_8004F0D4`) at ~45 fps, submitting ~2000 tristrips a frame. It then
  loops without opening further disc files - consistent with a title state waiting on input, which
  is not wired (below). Reaching playable gameplay needs input, audio and the renderer coverage
  below, not the disc path.
- **Renderer coverage**: the capture and decode are real, and the positions reach the screen. TEV
  combiner stages, texture decode/upload (I4/I8/IA/RGB565/RGB5A3/CMPR), EFB copies, fog, and GX's
  fixed-function lighting are not implemented - the captured stream carries them, the backend
  does not yet consume them. Today's draws therefore render as flat white triangles at their
  correct positions.
- **Audio**: the CPU side of AX is running and builds its parameter blocks; there is no DSP
  uCode emulation and no WASAPI device, so no sound is produced.
- **Input**: the pad/SI HLE reports no input; nothing is wired to the keyboard or a gamepad.
- **The REL modules** on the disc are not decompiled yet (main.dol is 100 % verified).
