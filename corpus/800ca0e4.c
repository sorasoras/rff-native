#include "tc_rt.h"

void fn_800ca0e4(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32(0x805706e8u);
    r3 = tc_call(0x8007d150u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (rd32(r3 + 4u) == 1u) {
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0x2739u;
        a.r[2] = r3;
        (void)tc_call(0x8010a794u, &a);
    } else {
        a.r[0] = rd32(0x805706e8u);
        r3 = tc_call(0x8007d150u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (rd32(r3 + 4u) == 0u) {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            a.r[0] = 0x804b9da0u;
            a.r[1] = 0x271eu;
            a.r[2] = r3;
            (void)tc_call(0x8010a794u, &a);
        } else {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            a.r[0] = 0x804b9da0u;
            a.r[1] = 0x2b27u;
            a.r[2] = r3;
            (void)tc_call(0x8010a794u, &a);
        }
    }
    if ((u32)param_2 != 0u) {
        wrf32d(rd32(param_1 + 0x70u) + 0x58u, (f64)rdf32(0x80572f54u));
    } else {
        wrf32d(rd32(param_1 + 0x70u) + 0x58u, (f64)rdf32(0x80572f58u));
        r4 = rd32(param_1 + 0x70u);
        wrf32d(r4 + 0x54u, (f64)rdf32(rd32(r4 + 0x48u) + 0x18u));
    }
    wr32(param_1 + 0x124u, 0u);
    return;
}
