#include "tc_rt.h"

void fn_801b2610(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3);
    a.r[0] = r3;
    a.r[1] = 0x9fu;
    a.r[2] = 0u;
    (void)tc_call(0x800a31c0u, &a);
    a.r[0] = param_2;
    r3 = tc_call(0x80255850u, &a);
    if (r3 != 0u) {
        r0 = rd32(param_2 + 4u);
        wr32((u32)param_1 + 0x44u, rd32(param_2));
        wr32((u32)param_1 + 0x48u, r0);
        wr32((u32)param_1 + 0x4cu, rd32(param_2 + 8u));
    }
    r0 = rd32(0x803724e8u);
    wr32((u32)param_1 + 0x38u, rd32(0x803724e4u));
    wr32((u32)param_1 + 0x3cu, r0);
    wr32((u32)param_1 + 0x40u, rd32(0x803724ecu));
    return;
}
