#include "tc_rt.h"

void fn_8014fdd4(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32((u32)param_2 + 0x30u);
    if ((r31 & 0x100000u) != 0u) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x8014fcbcu, &a);
        if (r3 != 0u) {
            if ((r31 & 0x8000u) == 0u) {
                a.f[0] = (f64)rdf32(0x805747d8u);
                a.r[0] = 0x19u;
                a.r[1] = param_3;
                a.r[2] = 0x804b15c0u;
                a.r[3] = 0x804890c8u;
                r3 = tc_call(0x800d783cu, &a);
                r31 = r3;
                a.r[1] = 0xffffffffu;
                r3 = tc_call(0x8010b43cu, &a);
                wr32(r31 + 0x20u, r3);
                wr32(r31 + 0x24u, 0u);
            }
            a.r[0] = (u32)param_1;
            a.r[1] = 0u;
            a.r[2] = 0u;
            (void)tc_call(0x8014fd24u, &a);
            r5 = rd32((u32)param_1 + 0x1668u);
            if (r5 != 0u) {
                a.r[0] = (u32)param_1;
                a.r[1] = 0u;
                a.r[2] = r5;
                (void)tc_call(0x8014fd24u, &a);
            }
        }
    }
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = param_3;
    (void)tc_call(0x800b4010u, &a);
    return;
}
