#include "tc_rt.h"

void fn_800629e8(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r0 = rd32(param_2 + 4u);
    wr32(0x817fdfe8u, rd32(param_2));
    wr32(0x817fdfecu, r0);
    wr32(0x817fdff0u, rd32(param_2 + 8u));
    a.r[0] = param_1;
    a.r[1] = 0x817fdfe8u;
    (void)tc_call(0x80063d50u, &a);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfe8u;
    f1 = tc_callf(0x80062af4u, &a);
    if ((u32)((s32)((rd32(param_1 + 0x9cu) << 6u) & 0xc0000000u) >> 31) == 0u) {
        a.r[0] = param_1;
        a.r[1] = 0x817fdfe8u;
        a.r[2] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        f1 = tc_callf(rd32(rd32(param_1) + 0x64u), &a);
        r4 = tc_lastr4();
        f2 = (f64)(f32)f1;
        f0 = (f64)rdf32(0x80572568u);
        wrf32d(0x817fdfecu, f1);
        if ((f2 > f0) || (f2 == f0)) {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.f[0] = f1;
            a.f[1] = f2;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            wrf32d(0x817fdfecu, (f64)rdf32(r3 + 4u));
        }
    }
    wrf32d(param_2, (f64)rdf32(0x817fdfe8u));
    wrf32d(param_2 + 4u, (f64)rdf32(0x817fdfecu));
    wrf32d(param_2 + 8u, (f64)rdf32(0x817fdff0u));
    return;
}
