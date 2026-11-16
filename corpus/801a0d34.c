#include "tc_rt.h"

void fn_801a0d34(u32 param_1)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r31 = 0x8033af38u;
    r30 = param_1;
    r29 = 0u;
    do {
        r3 = tc_call(0x80097da4u, &a);
        f1 = tc_lastf();
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = rd32(r31);
        r3 = tc_call(0x800a3168u, &a);
        f1 = tc_lastf();
        r29 = r29 + 1u;
        wr32(r30 + 4u, r3);
        r30 = r30 + 4u;
        r31 = r31 + 4u;
    } while ((s32)r29 < 10);
    return;
}
