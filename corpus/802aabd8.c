#include "tc_rt.h"

u32 fn_802aabd8(s32 param_1)
{
    u32 r0 = 0, r8 = 0;
    r8 = rd32(0x805411d0u);
    if (r8 == 0u) {
        return 0u;
    }
    r0 = r8 + 0x7fabf468u;
    wr32(0x805411d0u, rd32(r8 + 8u));
    wr8(r8, 1u);
    r0 = ppc_mulhw(-2078209981, (s32)r0) + r0;
    r0 = (u32)((s32)r0 >> 6);
    r0 = r0 + ((r0 >> 0x1fu) & 1u);
    r0 = (r0 & 0xffffu) + 0x40u;
    wr16(r8 + 0x14u, (u16)r0);
    wr32(r8 + 0x10u, (u32)param_1);
    if (rd32((u32)param_1 + 8u) == 0u) {
        wr32((u32)param_1 + 0xcu, r8);
        wr32((u32)param_1 + 8u, r8);
        wr32(r8 + 8u, 0u);
        wr32(r8 + 0xcu, 0u);
    } else {
        wr32(r8 + 8u, 0u);
        wr32(r8 + 0xcu, rd32((u32)param_1 + 0xcu));
        wr32(rd32((u32)param_1 + 0xcu) + 8u, r8);
        wr32((u32)param_1 + 0xcu, r8);
    }
    wr16(r8 + 0x3cu, 0xffffu);
    wr16(r8 + 0x3au, 0x2a0u);
    wr16(r8 + 0x38u, 0x2a0u);
    wr8(r8 + 0x59u, 1u);
    wr8(r8 + 0x41u, 1u);
    wr32(r8 + 0x5cu, 0u);
    wr32(r8 + 0x44u, 0u);
    wr32(r8 + 0x60u, 0u);
    wr32(r8 + 0x48u, 0u);
    wr32(r8 + 0x64u, 0u);
    wr32(r8 + 0x4cu, 0u);
    wr32(r8 + 0x68u, 0xffffffffu);
    wr32(r8 + 0x50u, 0xffffffffu);
    wr32(r8 + 0x6cu, 0xffffffffu);
    wr32(r8 + 0x54u, 0xffffffffu);
    wr8(r8 + 0x34u, 0u);
    wr32(r8 + 4u, 0u);
    wr8(r8 + 0x37u, 1u);
    wr32(r8 + 0x28u, r8);
    return r8;
}
