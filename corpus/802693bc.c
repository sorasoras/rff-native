#include "tc_rt.h"

u32 fn_802693bc(u32 param_1)
{
    u32 c0eq = 0, c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r7 = 0;
    TcArgs a = {0};
    r0 = rd32(param_1);
    r3 = 0u;
    if ((s32)r0 < 5 && (s32)r0 >= 3) {
        c0eq = rd32(0x8038f464u) == 0u;
        if (!c0eq) {
            r7 = 1u;
            wr32(0x805029b0u, rd32(0x805029b0u) & 0xfffffbffu);
            if (!c0eq && (rd32(0x80502ab0u) & 0xffffu) == 0xd00u) {
                r0 = rd32(0x8038f468u);
                c0lt = (s32)r0 < 1;
                if (r0 == 1u) {
                    r4 = rd32(0x80502838u);
                    if (r4 >= rd32(0x8038f470u) && r4 <= rd32(0x8038f474u)) {
                        r7 = 0u;
                    }
                } else if (c0lt && ((s32)r0 >= 0 && rd32(0x8038f46cu) != 0u)) {
                    r7 = 0u;
                }
            }
            if (r7 == 0u) {
                r7 = rd32(0x8038f468u);
                r0 = rd32(0x805029b0u) | 0x400u;
                wr32(0x8038f464u, 1u);
                wr32(0x805029b0u, r0);
                if (r7 == 0u || r7 == 0x10u) {
                    wr32(0x8038f46cu, rd32(0x8038f46cu) - 1u);
                }
                wr32(0x805027acu, 0u);
            } else {
                wr32(0x8038f464u, 0u);
            }
        }
        if (rd32(0x8038f464u) == 0u) {
            wr32(0x805027acu, 1u);
            a.r[0] = 0x90u;
            r3 = tc_call(0x802689ecu, &a);
        }
    }
    return r3;
}
