#include "tc_rt.h"

f64 fn_8032b32c(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r5 = 0;
    f64 f1 = 0.0;
    r5 = rd32((u32)param_1 + 0xc8u);
    r0 = (u32)rd16(rd32(r5 + 0x24u) + 0x9cu) & 0x6000u;
    c0lt = (s32)r0 < 16384;
    if (r0 != 0x4000u) {
        if (c0lt) {
            if (r0 == 0x2000u) {
                f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x30u) * (f64)rdf32((u32)param_1 + 0x3cu));
                f1 = (f64)(f32)(f1 * (f64)rdf32(r5 + 0x5cu));
                return f1;
            }
            f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x34u) * (f64)rdf32((u32)param_1 + 0x3cu));
            f1 = (f64)(f32)(f1 * (f64)rdf32(r5 + 0x5cu));
            return f1;
        }
        if (r0 == 0x6000u) {
            f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x30u) * (f64)rdf32((u32)param_1 + 0x38u));
            f1 = (f64)(f32)(f1 * (f64)rdf32(r5 + 0x5cu));
            return f1;
        }
        f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x34u) * (f64)rdf32((u32)param_1 + 0x3cu));
        f1 = (f64)(f32)(f1 * (f64)rdf32(r5 + 0x5cu));
        return f1;
    }
    f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x34u) * (f64)rdf32((u32)param_1 + 0x38u));
    f1 = (f64)(f32)(f1 * (f64)rdf32(r5 + 0x5cu));
    return f1;
}
