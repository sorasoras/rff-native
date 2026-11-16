#include "tc_rt.h"

void fn_8016125c(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    r4 = (u32)param_2;
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(param_1 + 0x14cu, 1u);
    if ((u32)param_2 == 1u) {
        r3 = rd32(param_1 + 0x11cu);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = param_1;
            a.r[2] = 5u;
            a.r[3] = 0u;
            a.f[0] = 0.0;
            (void)tc_call(rd32(rd32(r3) + 0x7cu), &a);
            r4 = tc_lastr4();
        }
        if (rd32(param_1 + 0x1e0u) != 0xffffffffu) {
            f1 = (f64)rdf32(0x80574a78u);
            f0 = (f64)rdf32(0x80574ac0u);
            wrf32d(0x817fdfe8u, f1);
            wrf32d(0x817fdfecu, f0);
            wrf32d(0x817fdff0u, f1);
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            a.f[0] = (f64)rdf32(0x80574a7cu);
            a.r[0] = rd32(param_1 + 0x1e0u);
            a.r[1] = r3;
            a.r[2] = 0x817fdfe8u;
            a.r[3] = 0x804b15c0u;
            f1 = tc_callf(0x800d782cu, &a);
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            a.r[0] = 0x804b9da0u;
            a.r[1] = 0x1078u;
            a.r[2] = r3;
            (void)tc_call(0x8010a754u, &a);
        }
    }
    return;
}
