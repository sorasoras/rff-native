#include "tc_rt.h"

void fn_801c3098(f64 param_1, u32 param_2, s32 param_3, u32 param_4, u32 param_5)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_2;
    a.r[1] = (u32)param_3;
    a.r[2] = param_4;
    a.r[3] = param_5;
    a.f[0] = param_1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    r3 = tc_call(rd32(rd32(param_2) + 0x20cu), &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if ((u32)param_3 != r3) {
        a.r[0] = param_2;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        r3 = tc_call(rd32(rd32(param_2) + 0x1f0u), &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if ((u32)param_3 != r3) {
            wr32(param_2 + 0xf04u, 0u);
        } else {
            wr32(param_2 + 0xf04u, 1u);
            a.r[0] = param_2;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            r3 = tc_call(rd32(rd32(param_2) + 0x220u), &a);
            r0 = rd32(param_2 + 0x1bcu);
            wr32(param_2 + 0xf08u, r3);
            if (r0 != 0x47u) {
                wrf32d(param_2 + 0xf0cu, (f64)rdf32(0x80575d2cu));
            } else {
                wrf32d(param_2 + 0xf0cu, (f64)rdf32(0x80575d28u));
            }
        }
    } else {
        wr32(param_2 + 0xf04u, 1u);
        a.r[0] = param_2;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        r3 = tc_call(rd32(rd32(param_2) + 0x220u), &a);
        f0 = (f64)rdf32(0x80575d24u);
        wr32(param_2 + 0xf08u, r3);
        wrf32d(param_2 + 0xf0cu, f0);
    }
    a.f[0] = param_1;
    a.r[0] = param_2;
    a.r[1] = (u32)param_3;
    a.r[2] = param_4;
    a.r[3] = param_5;
    (void)tc_call(0x80064c6cu, &a);
    f2 = (f64)rdf32(param_2 + 0xd38u);
    f1 = (f64)rdf32(0x80575cfcu);
    if (f2 < f1) {
        f0 = (f64)rdf32(param_2 + 0x10cu);
        if ((f0 > f1) || (f0 == f1)) {
            r4 = rd32(param_2 + 0x70u);
            wrf32d(r4 + 0x54u, (f64)(f32)((f64)rdf32(rd32(r4 + 0x48u) + 0x18u) - (f64)rdf32(0x80575cd8u)));
            wrf32d(rd32(param_2 + 0x70u) + 0x60u, f1);
        }
    }
    wrf32d(param_2 + 0x10cu, f2);
    wrf32d(rd32(param_2 + 0x70u) + 0x58u, f2);
    return;
}
