#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

f64 fn_802edb1c(f64 param_1, u32 param_2, s32 param_3)
{
    u32 c0lt = 0, r0 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f12 = 0.0, f13 = 0.0, f31 = 0.0;
    if ((u32)param_3 != 1u) {
        f0 = (f64)rdf32(param_2);
        if (!((param_1 < f0) || (param_1 == f0))) {
            r5 = param_2 + ((u32)param_3 * 0xcu);
            f0 = (f64)rdf32(r5 - 0xcu);
            if (!((param_1 > f0) || (param_1 == f0))) {
                r7 = (u32)param_3 - 1u;
                r6 = 0u;
                while (r6 != (r7 - 1u) && r6 != r7) {
                    r5 = r6 + r7;
                    r5 = (u32)((s32)(((r5 >> 0x1fu) & 1u) + r5) >> 1);
                    f0 = (f64)rdf32(param_2 + (r5 * 0xcu));
                    c0lt = param_1 < f0;
                    r0 = (((c0lt << 0x1fu) | ((param_1 > f0) << 0x1eu) | ((c0lt || (param_1 == f0)) << 0x1du) | (((param_1 != param_1) || (f0 != f0)) << 0x1cu)) >> 0x1du) & 1u;
                    if (r0 != 0u) {
                        r7 = r5;
                    }
                    if (r0 == 0u) {
                        r6 = r5;
                    }
                }
                r5 = r7 * 0xcu;
                r0 = 0u;
                r8 = param_2 + r5;
                f2 = (f64)(f32)(param_1 - (f64)rdf32(param_2 + r5));
                r5 = param_2 + (r6 * 0xcu);
                if ((f64)rdf32(0x805774f0u) < f2 && f2 < (f64)rdf32(0x805774f4u)) {
                    r0 = 1u;
                }
                if (r0 == 0u) {
                    f2 = (f64)rdf32(r5);
                    f7 = (f64)(f32)(param_1 - f2);
                    f6 = (f64)rdf32(0x805774f8u);
                    f4 = (f64)rdf32(0x805774fcu);
                    f5 = (f64)(f32)px_fdiv(f6, (f64)(f32)((f64)rdf32(r8) - f2));
                    f12 = (f64)(f32)(f5 * (f64)(f32)(f7 * f7));
                    f2 = (f64)(f32)(f12 * f5);
                    f13 = (f64)(f32)(f7 * f2);
                    f2 = (f64)(f32)((f64)rdf32(0x80577500u) * f2);
                    f31 = (f64)(f32)(f13 * f5);
                    f0 = (f64)(f32)((f64)(f32)((f64)rdf32(r5 + 4u) * (f64)(f32)(f6 + (f64)(f32)((f64)(f32)(f4 * f31) - f2))) + (f64)(f32)((f64)rdf32(r8 + 4u) * (f64)(f32)((f64)(f32)((f64)rdf32(0x80577504u) * f31) + f2)));
                    f0 = (f64)(f32)((f64)(f32)((f64)rdf32(r5 + 8u) * (f64)(f32)(f7 + (f64)(f32)(f13 - (f64)(f32)(f4 * f12)))) + f0);
                    f1 = (f64)(f32)((f64)(f32)((f64)rdf32(r8 + 8u) * (f64)(f32)(f13 - f12)) + f0);
                    return f1;
                }
                if (r7 < ((u32)param_3 - 1u)) {
                    r0 = (r7 + 1u) * 0xcu;
                    if ((f64)rdf32(r8) == (f64)rdf32(param_2 + r0)) {
                        f1 = (f64)rdf32(param_2 + r0 + 4u);
                        return f1;
                    }
                }
                f1 = (f64)rdf32(r8 + 4u);
                return f1;
            }
            f1 = (f64)rdf32(r5 - 8u);
            return f1;
        }
    }
    f1 = (f64)rdf32(param_2 + 4u);
    return f1;
}
