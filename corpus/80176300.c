#include "tc_rt.h"

void fn_80176300(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = (u32)param_2;
    f1 = tc_callf(0x80175bbcu, &a);
    r4 = tc_lastr4();
    if ((u32)param_2 != 0u) {
        if (rd32(param_1 + 0x124u) == 0u || rd32(param_1 + 0x14cu) != 0u) {
            return;
        }
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        a.f[0] = (f64)rdf32(0x80574f5cu);
        a.r[0] = 0x11u;
        a.r[1] = r3;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        r3 = tc_call(0x800d7768u, &a);
        wr32(param_1 + 0x14cu, r3);
    } else {
        r3 = rd32(param_1 + 0x14cu);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x80157e6cu, &a);
            wr32(param_1 + 0x14cu, 0u);
        }
    }
    return;
}
