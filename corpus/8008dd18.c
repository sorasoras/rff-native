#include "tc_rt.h"

f64 fn_8008dd18(u32 param_1, s32 param_2, u32 param_3, u32 param_4)
{
    f64 f1 = 0.0;
    (void)param_1;
    f1 = (f64)rdf32(0x80572968u);
    if ((param_3 != 0u && param_2 < 18) && param_2 >= 3) {
        if (param_3 != 1u) {
            if (param_3 < 2u || param_3 > 4u) {
                if (param_3 < 5u || param_3 > 7u) {
                    f1 = (f64)(f32)(f1 * (f64)rdf32(0x80572980u));
                } else {
                    f1 = (f64)(f32)(f1 * (f64)rdf32(0x8057297cu));
                }
            } else {
                f1 = (f64)(f32)(f1 * (f64)rdf32(0x80572978u));
            }
        } else {
            f1 = (f64)(f32)(f1 * (f64)rdf32(0x80572974u));
        }
    }
    if (param_4 == 0u) {
        return f1;
    }
    if (param_2 >= 18) {
        return f1;
    }
    if (param_2 < 3) {
        return f1;
    }
    if (param_4 != 1u) {
        if (param_4 < 2u || param_4 > 4u) {
            if (param_4 < 5u || param_4 > 7u) {
                f1 = (f64)(f32)(f1 * (f64)rdf32(0x8057296cu));
                return f1;
            }
            f1 = (f64)(f32)(f1 * (f64)rdf32(0x8057298cu));
            return f1;
        }
        f1 = (f64)(f32)(f1 * (f64)rdf32(0x80572988u));
        return f1;
    }
    f1 = (f64)(f32)(f1 * (f64)rdf32(0x80572984u));
    return f1;
}
