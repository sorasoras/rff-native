#include "tc_rt.h"

void fn_801eb340(s32 param_1, s32 param_2, s32 param_3, s32 param_4)
{
    u32 c0lt = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    c0lt = param_3 < 2;
    f3 = (f64)rdf32(0x80576348u);
    if ((u32)param_3 == 2u) {
        f3 = (f64)rdf32(0x80576360u);
    } else if (!c0lt) {
        if (param_3 < 4) {
            f3 = (f64)rdf32(0x805763a4u);
        }
    } else {
        c0lt = param_3 < 0;
        if ((u32)param_3 != 0u && !c0lt) {
            f3 = (f64)rdf32(0x80576410u);
        }
    }
    c0lt = param_4 < 0;
    if ((u32)param_4 == 0u) {
        r3 = (u32)param_1 + (((u32)rd8((u32)param_1 + 0x159cu) << 2u) & 0xfffffffcu);
        if ((u32)rd8(r3 + 0x1578u) >= 5u || (u32)rd8(r3 + 0x1579u) >= 5u || (u32)rd8(r3 + 0x157au) >= 5u || (u32)rd8(r3 + 0x157bu) >= 5u) {
            f2 = (f64)rdf32(0x805763a4u);
            f0 = (f64)rdf32(0x80576360u);
            wrf32d((u32)param_2 + 0x3cu, f3);
            wrf32d((u32)param_2 + 0x40u, f2);
            wrf32d((u32)param_2 + 0x44u, (f64)(f32)(f2 + f3));
            wrf32d((u32)param_2 + 0x48u, f0);
            return;
        }
        f2 = (f64)rdf32(0x80576360u);
        f1 = (f64)(f32)((f64)rdf32(0x805763a4u) + f3);
        f0 = (f64)rdf32(0x80576410u);
        wrf32d((u32)param_2 + 0x3cu, f3);
        wrf32d((u32)param_2 + 0x40u, f2);
        wrf32d((u32)param_2 + 0x44u, f1);
        wrf32d((u32)param_2 + 0x48u, f0);
        return;
    }
    if (!c0lt) {
        if (param_4 >= 2) {
            return;
        }
        f1 = (f64)rdf32(0x805763a4u);
        f2 = (f64)rdf32(0x80576348u);
        wrf32d((u32)param_2 + 0x3cu, f3);
        wrf32d((u32)param_2 + 0x40u, f2);
        wrf32d((u32)param_2 + 0x44u, (f64)(f32)(f1 + f3));
        wrf32d((u32)param_2 + 0x48u, f1);
        return;
    }
    if (param_4 >= -1) {
        f2 = (f64)rdf32(0x80576410u);
        f1 = (f64)(f32)((f64)rdf32(0x805763a4u) + f3);
        f0 = (f64)rdf32(0x805763a8u);
        wrf32d((u32)param_2 + 0x3cu, f3);
        wrf32d((u32)param_2 + 0x40u, f2);
        wrf32d((u32)param_2 + 0x44u, f1);
        wrf32d((u32)param_2 + 0x48u, f0);
        return;
    }
    return;
}
