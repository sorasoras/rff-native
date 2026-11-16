#include "tc_rt.h"

void fn_80257bb4(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r8 = tc_argr(5u), r30 = 0, r31 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    (void)param_2;
    r31 = param_3;
    r30 = param_4;
    wr8(param_1, 0u);
    wr8(param_1 + 4u, 0u);
    while ((r30 | r31) != 0u) {
        a.r[0] = r31;
        a.r[1] = r30;
        a.r[2] = 0u;
        a.r[3] = 0xau;
        r3 = tc_call(0x80255c94u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r8 = (u32)rd8(param_1 + 4u);
        wr8(param_1 + r8 + 5u, (u8)r4);
        wr8(param_1 + 4u, (u8)(r8 + 1u));
        a.r[0] = r31;
        a.r[1] = r30;
        a.r[2] = 0u;
        a.r[3] = 0xau;
        r3 = tc_call(0x80255a70u, &a);
        f1 = tc_lastf();
        r30 = tc_lastr4();
        r31 = r3;
    }
    r4 = param_1 + 5u;
    r3 = param_1 + (u32)rd8(param_1 + 4u) + 5u;
    for (;;) {
        r3 = r3 - 1u;
        if (r4 >= r3) break;
        r5 = (u32)rd8(r4);
        wr8(r4, rd8(r3));
        r4 = r4 + 1u;
        wr8(r3, (u8)r5);
    }
    wr16(param_1 + 2u, (u16)((u32)rd8(param_1 + 4u) - 1u));
    return;
}
