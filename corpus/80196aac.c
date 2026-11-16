#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

void fn_80196aac(s32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    r0 = (u32)(s8)param_3;
    f0 = (f64)rdf32(0x80575428u);
    wrf32d(0x817fdfe8u, (f64)rdf32(0x80575408u));
    wrf32d(0x817fdff0u, f0);
    if (r0 != 0x3fu) {
        if ((s32)r0 < 24 || (s32)r0 > 35) {
            r0 = (u32)(s8)param_3;
            if ((s32)r0 < 56 || (s32)r0 > 62) {
                r0 = (u32)(s8)param_3;
                if ((s32)r0 < 36 || (s32)r0 > 39) {
                    r0 = (u32)(s8)param_3;
                    if ((s32)r0 < 40 || (s32)r0 > 45) {
                        r0 = (u32)(s8)param_3;
                        if ((s32)r0 < 46 || (s32)r0 > 52) {
                            f2 = (f64)rdf32(0x80575418u);
                            r0 = ((u32)(s8)((u32)param_3 - 9u) << 4u) & 0xfffffff0u;
                            r3 = r0 - 0x7fc8fa10u;
                            f0 = (f64)(f32)((f64)(f32)((f64)rdf32(r3 + 4u) + (f64)rdf32(r3 + 0xcu)) * f2);
                            wrf32d(0x817fdfe8u, (f64)(f32)((f64)(f32)((f64)rdf32(r0 - 0x7fc8fa10u) + (f64)rdf32(r3 + 8u)) * f2));
                        } else {
                            f2 = (f64)rdf32(0x80575418u);
                            f0 = (f64)(f32)((f64)(f32)((f64)rdf32(0x80370784u) + (f64)rdf32(0x8037078cu)) * f2);
                            wrf32d(0x817fdfe8u, (f64)(f32)((f64)(f32)((f64)rdf32(0x80370780u) + (f64)rdf32(0x80370788u)) * f2));
                        }
                    } else {
                        f2 = (f64)rdf32(0x80575418u);
                        f0 = (f64)(f32)((f64)(f32)((f64)rdf32(0x80370754u) + (f64)rdf32(0x8037075cu)) * f2);
                        wrf32d(0x817fdfe8u, (f64)(f32)((f64)(f32)((f64)rdf32(0x80370750u) + (f64)rdf32(0x80370758u)) * f2));
                    }
                } else {
                    f2 = (f64)rdf32(0x80575418u);
                    f0 = (f64)(f32)((f64)(f32)((f64)rdf32(0x80370714u) + (f64)rdf32(0x8037071cu)) * f2);
                    wrf32d(0x817fdfe8u, (f64)(f32)((f64)(f32)((f64)rdf32(0x80370710u) + (f64)rdf32(0x80370718u)) * f2));
                }
            } else {
                f3 = (f64)rdf32(0x80575418u);
                f0 = ppc_fmadds((f64)rdf32((u32)param_1 + 0x400u), f3, (f64)rdf32((u32)param_1 + 0x3f4u));
                wrf32d(0x817fdfe8u, ppc_fmadds((f64)rdf32((u32)param_1 + 0x3fcu), f3, (f64)rdf32((u32)param_1 + 0x3f0u)));
            }
        } else {
            f3 = (f64)rdf32(0x80575418u);
            f0 = ppc_fmadds((f64)rdf32((u32)param_1 + 0x400u), f3, (f64)rdf32((u32)param_1 + 0x3f4u));
            wrf32d(0x817fdfe8u, ppc_fmadds((f64)rdf32((u32)param_1 + 0x3fcu), f3, (f64)rdf32((u32)param_1 + 0x3f0u)));
        }
    } else {
        f2 = (f64)rdf32(0x80575418u);
        f0 = (f64)(f32)((f64)(f32)((f64)rdf32(0x803706b4u) + (f64)rdf32(0x803706bcu)) * f2);
        wrf32d(0x817fdfe8u, (f64)(f32)((f64)(f32)((f64)rdf32(0x803706b0u) + (f64)rdf32(0x803706b8u)) * f2));
    }
    f1 = (f64)px_w2f(ppc_single_bits(f0));
    f0 = (f64)rdf32(0x817fdff0u);
    wrf32d(param_2, (f64)rdf32(0x817fdfe8u));
    wrf32d(param_2 + 4u, f1);
    wrf32d(param_2 + 8u, f0);
    return;
}
