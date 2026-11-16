#include "tc_rt.h"

void fn_802f1550(u32 param_r3, u32 param_r4)
{
    u32 c0lt = 0, r3 = 0, r4 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    f1 = tc_lastf();
    r31 = r3;
    r4 = param_r3 + (param_r4 * 0xcu);
    r28 = r4 + 0xb4u;
    if (rd32(r4 + 0xb4u) != 0u) {
        r30 = rd32(r28 + 4u);
        r29 = r28 + 4u;
        while (r30 != r29) {
            a.r[0] = r30 - 4u;
            a.r[1] = r4;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r30 - 4u) + 0x10u), &a);
            r4 = tc_lastr4();
            r30 = rd32(r30);
        }
        a.r[0] = r28;
        (void)tc_call(0x802deaf8u, &a);
        c0lt = (s32)param_r4 < 1;
        if (param_r4 == 1u) {
            a.r[0] = 0u;
            a.r[1] = 0u;
            (void)tc_call(0x80243e78u, &a);
            wr32(param_r3 + 0xf8u, 0u);
        } else if (!c0lt) {
            if ((s32)param_r4 < 3) {
                a.r[0] = 0u;
                a.r[1] = 0u;
                (void)tc_call(0x80243edcu, &a);
                wr32(param_r3 + 0xfcu, 0u);
            }
        } else if ((s32)param_r4 >= 0) {
            a.r[0] = 0u;
            a.r[1] = 0u;
            (void)tc_call(0x80243e14u, &a);
            wr32(param_r3 + 0xf4u, 0u);
        }
        a.r[0] = r31;
        (void)tc_call(0x8022c2d8u, &a);
    } else {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
