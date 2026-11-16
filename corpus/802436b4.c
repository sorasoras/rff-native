#include "tc_rt.h"

void fn_802436b4(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    a.r[0] = param_1;
    (void)tc_call(0x80243434u, &a);
    r5 = ((u32)param_2 << 2u) & 0xfffffffcu;
    r3 = rd32(r5 - 0x7fb19c80u);
    wr32(param_1, r3);
    wr32(param_1 + 4u, 0u);
    if (r3 != 0u) {
        wr32(rd32(r5 - 0x7fb19c80u) + 4u, param_1);
        wr32(r5 - 0x7fb19c80u, param_1);
    } else {
        wr32(r5 - 0x7fb19c80u, param_1);
        wr32(r5 - 0x7fb19c00u, param_1);
    }
    wr32(param_1 + 0xcu, (u32)param_2);
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
