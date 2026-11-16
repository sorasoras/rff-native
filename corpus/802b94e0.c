#include "tc_rt.h"

u32 fn_802b94e0(s32 param_1, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    r8 = param_r8;
    r9 = param_r9;
    f0 = (f64)rdf32(0x80570ec8u);
    r6 = (u32)param_1 + 0xf4u;
    r0 = (u32)param_1 + 0x10cu;
    f4 = (f64)(f32)(f0 * f0);
    do {
        if ((u32)(s8)rd8(r6 + 8u) == 0u && (u32)(s8)rd8(r6 + 9u) == 0u) {
            r7 = (u32)param_1 + 0xc4u;
            r4 = (u32)param_1 + 0xf4u;
            do {
                if ((u32)(s8)rd8(r7 + 8u) == 0u) {
                    f2 = (f64)(f32)((f64)rdf32(r6) - (f64)rdf32(r7));
                    f0 = (f64)(f32)((f64)rdf32(r6 + 4u) - (f64)rdf32(r7 + 4u));
                    f0 = (f64)(f32)(f0 * f0);
                    f0 = (f64)(f32)((f64)(f32)(f2 * f2) + f0);
                    if (f0 < f4) {
                        f4 = f0;
                        r8 = r6;
                        r9 = r7;
                    }
                }
                r7 = r7 + 0xcu;
            } while (r7 < r4);
        }
        r6 = r6 + 0xcu;
    } while (r6 < r0);
    f0 = (f64)rdf32(0x80570ec8u);
    f0 = (f64)(f32)(f0 * f0);
    if (f4 == f0) {
        return 0u;
    }
    r4 = rd32(r9 + 4u);
    wr32(r8, rd32(r9));
    wr32(r8 + 4u, r4);
    wr32(r8 + 8u, rd32(r9 + 8u));
    f5 = (f64)rdf32((u32)param_1 + 0xb0u);
    f0 = (f64)rdf32((u32)param_1 + 0x4b8u);
    f3 = (f64)rdf32((u32)param_1 + 0xb4u);
    f1 = (f64)rdf32((u32)param_1 + 0x4bcu);
    f4 = (f64)(f32)(f5 * f0);
    f2 = (f64)(f32)(f3 * f0);
    f0 = (f64)rdf32((u32)param_1 + 0x490u);
    f3 = (f64)(f32)(f3 * f1);
    f1 = (f64)(f32)(f5 * f1);
    f3 = (f64)(f32)(f4 + f3);
    f1 = (f64)(f32)(f2 - f1);
    f2 = (f64)(f32)(f0 * f3);
    wrf32d((u32)param_1 + 0x494u, f3);
    f3 = (f64)(f32)(f0 * f1);
    wrf32d((u32)param_1 + 0x498u, f1);
    if (r8 == ((u32)param_1 + 0xf4u)) {
        wrf32d((u32)param_1 + 0x100u, (f64)(f32)((f64)rdf32(r8) + f2));
        f0 = (f64)(f32)((f64)rdf32(r8 + 4u) + f3);
        wr8((u32)param_1 + 0x108u, 0u);
        wr8((u32)param_1 + 0x109u, 0xffu);
        wrf32d((u32)param_1 + 0x104u, f0);
    } else {
        wrf32d((u32)param_1 + 0xf4u, (f64)(f32)((f64)rdf32(r8) - f2));
        f0 = (f64)(f32)((f64)rdf32(r8 + 4u) - f3);
        wr8((u32)param_1 + 0xfcu, 0u);
        wr8((u32)param_1 + 0xfdu, 0xffu);
        wrf32d((u32)param_1 + 0xf8u, f0);
    }
    if ((s32)(s8)rd8((u32)param_1 + 0x5eu) < 0) {
        return 0xffffffffu;
    }
    return 1u;
}
