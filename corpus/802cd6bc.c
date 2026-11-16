#include "tc_rt.h"

void fn_802cd6bc(u32 param_1, u32 param_2)
{
    u32 r6 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    f2 = (f64)rdf32(param_2);
    f3 = (f64)rdf32(param_2 + 4u);
    f8 = ppc_fabs(f2);
    f0 = (f64)rdf32(0x80348a44u);
    f4 = (f64)rdf32(param_2 + 8u);
    f9 = ppc_fabs(f3);
    f5 = (f64)rdf32(param_2 + 0xcu);
    r6 = 0u;
    f6 = (f64)rdf32(param_2 + 0x10u);
    f7 = (f64)rdf32(param_2 + 0x14u);
    f10 = ppc_fabs(f4);
    f11 = ppc_fabs(f5);
    wr32(0x817fe004u, 0x817ff000u);
    f12 = ppc_fabs(f6);
    f13 = ppc_fabs(f7);
    if ((f8 > f0) || (f8 == f0) || (f9 > f0) || (f9 == f0) || (f10 > f0) || (f10 == f0) || (f11 > f0) || (f11 == f0) || (f12 > f0) || (f12 == f0) || (f13 > f0) || (f13 == f0)) {
        f1 = (f64)rdf32(0x80348a38u);
        f0 = (f64)rdf32(0x80348a44u);
        while ((s32)(s8)r6 < 46) {
            f8 = (f64)(f32)(f8 * f1);
            f2 = (f64)(f32)(f2 * f1);
            f3 = (f64)(f32)(f3 * f1);
            f4 = (f64)(f32)(f4 * f1);
            f5 = (f64)(f32)(f5 * f1);
            f6 = (f64)(f32)(f6 * f1);
            f7 = (f64)(f32)(f7 * f1);
            f9 = (f64)(f32)(f9 * f1);
            f10 = (f64)(f32)(f10 * f1);
            f11 = (f64)(f32)(f11 * f1);
            f12 = (f64)(f32)(f12 * f1);
            f13 = (f64)(f32)(f13 * f1);
            r6 = r6 + 1u;
            if (!(f8 > f0) && f8 != f0 && !(f9 > f0) && f9 != f0 && !(f10 > f0) && f10 != f0 && !(f11 > f0) && f11 != f0 && !(f12 > f0) && f12 != f0 && !(f13 > f0) && f13 != f0) break;
        }
    } else {
        f1 = (f64)rdf32(0x80348a38u);
        if (f8 < f1 && f9 < f1 && f10 < f1 && f11 < f1 && f12 < f1 && f13 < f1) {
            f0 = (f64)rdf32(0x80348a48u);
            do {
                f8 = (f64)(f32)(f8 * f0);
                r6 = r6 - 1u;
                f2 = (f64)(f32)(f2 * f0);
                f3 = (f64)(f32)(f3 * f0);
                f4 = (f64)(f32)(f4 * f0);
                f5 = (f64)(f32)(f5 * f0);
                f6 = (f64)(f32)(f6 * f0);
                f7 = (f64)(f32)(f7 * f0);
                f9 = (f64)(f32)(f9 * f0);
                f10 = (f64)(f32)(f10 * f0);
                f11 = (f64)(f32)(f11 * f0);
                f12 = (f64)(f32)(f12 * f0);
                f13 = (f64)(f32)(f13 * f0);
            } while (f8 < f1 && f9 < f1 && f10 < f1 && f11 < f1 && f12 < f1 && f13 < f1 && (s32)(s8)r6 > -17);
        }
    }
    wrf32d(0x817fdfe8u, f2);
    wrf32d(0x817fdfecu, f3);
    wrf32d(0x817fdff0u, f4);
    wrf32d(0x817fdff4u, f5);
    wrf32d(0x817fdff8u, f6);
    wrf32d(0x817fdffcu, f7);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfe8u;
    a.r[2] = (u32)(s8)r6;
    (void)tc_call(0x80252f28u, &a);
    return;
}
