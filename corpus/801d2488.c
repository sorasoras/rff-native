#include "tc_rt.h"

u32 fn_801d2488(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    r4 = (u32)param_2;
    r31 = 1u;
    if ((u32)param_2 == 0u) {
        a.r[0] = param_1;
        a.r[1] = 3u;
        a.r[2] = 1u;
        a.r[3] = 0u;
        a.f[0] = (f64)rdf32(0x80575ed4u);
        a.f[1] = 0.0;
        f1 = tc_callf(rd32(rd32(param_1) + 0x54u), &a);
        f0 = (f64)rdf32(0x80575ea8u);
        wr32(param_1 + 0x36cu, 0u);
        wrf32d(param_1 + 0x360u, f0);
        wr32(param_1 + 0x370u, 0u);
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        (void)tc_call(rd32(rd32(param_1) + 0x1a8u), &a);
        wr32(param_1 + 0x380u, 1u);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0xfc2u;
        (void)tc_call(0x8010a74cu, &a);
    } else {
        if ((u32)param_2 == 1u) {
            if ((s32)rd32(param_1 + 0x370u) >= 26 && (rd32(param_1 + 0x36cu) & 1u) == 0u) {
                a.r[0] = param_1;
                a.r[1] = 1u;
                (void)tc_call(0x801d1fd8u, &a);
                r4 = tc_lastr4();
                wr32(param_1 + 0x36cu, rd32(param_1 + 0x36cu) | 1u);
            }
            r3 = rd32(param_1 + 0xe0u);
            f1 = (f64)(f32)((f64)rdf32(param_1 + 0x360u) + (f64)rdf32(0x80575e98u));
            f0 = (f64)rdf32(0x80575ea0u);
            wrf32d(param_1 + 0x360u, f1);
            f2 = (f64)rdf32(r3 + 0xd60u);
            f0 = (f64)(f32)(f0 * f2);
            if ((f1 > f0) || (f1 == f0)) {
                a.r[0] = param_1;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = f2;
                r3 = tc_call(rd32(rd32(param_1) + 0xd0u), &a);
                f1 = tc_lastf();
                a.r[0] = param_1;
                a.r[1] = r3;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                (void)tc_call(rd32(rd32(param_1) + 0xd4u), &a);
                a.r[0] = param_1;
                a.r[1] = 0u;
                (void)tc_call(0x801d1fd8u, &a);
                r31 = 0u;
                wr32(param_1 + 0x380u, 0u);
            }
        }
    }
    return r31;
}
