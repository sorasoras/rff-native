#include "tc_rt.h"

void fn_801e7e04(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    r0 = rd32(0x80571188u);
    r5 = r0 | 1u;
    if (rd32((u32)param_1 + 0xa2cu) != 0u) {
        r5 = r0 & 0xfffffffeu;
    }
    wr32(0x80571188u, r5);
    r4 = r5 | 2u;
    if (rd32((u32)param_1 + 0xa30u) != 0u) {
        r4 = r5 & 0xfffffffdu;
    }
    wr32(0x80571188u, r4);
    r5 = r4 | 4u;
    if (rd32((u32)param_1 + 0xa34u) != 0u) {
        r5 = r4 & 0xfffffffbu;
    }
    wr32(0x80571188u, r5);
    r4 = r5 | 0x10u;
    if (rd32((u32)param_1 + 0xa3cu) != 0u) {
        r4 = r5 & 0xffffffefu;
    }
    r3 = rd32(0x80571140u);
    r0 = rd32(0x8057118cu) | 0x40000u;
    wr32(0x80571188u, r4);
    wr32(0x8057118cu, r0);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = rd32((u32)param_1 + 0xa50u);
        a.r[2] = r5;
        a.f[0] = 0.0;
        (void)tc_call(rd32(rd32(r3) + 0x68u), &a);
    }
    wr32((u32)param_1 + 0xa50u, 0u);
    return;
}
