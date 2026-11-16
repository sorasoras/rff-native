#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

f64 fn_800dcc18(f64 param_1, s32 param_2)
{
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    f2 = rdf64(0x80573a70u);
    if (!((f64)(f32)ppc_fabs((f64)(f32)((f64)rdf32((u32)param_2 + 0x10u) - (f64)rdf32(0x80573a68u))) < f2) || !((f64)(f32)ppc_fabs((f64)(f32)((f64)rdf32((u32)param_2 + 0xcu) - param_1)) < f2)) {
        f2 = rdf64(0x80573a70u);
        if (!((f64)(f32)ppc_fabs((f64)(f32)((f64)rdf32((u32)param_2 + 0x14u) - (f64)rdf32(0x80573a68u))) < f2) || !((f64)(f32)ppc_fabs((f64)(f32)((f64)rdf32((u32)param_2 + 0xcu) - param_1)) < f2)) {
            f4 = (f64)rdf32((u32)param_2 + 0xcu);
            if ((param_1 > f4) || (param_1 == f4)) {
                f2 = (f64)rdf32((u32)param_2 + 0x10u);
                if (param_1 < (f64)(f32)(f4 + f2)) {
                    f3 = -f2;
                    f2 = (f64)rdf32(0x80573a78u);
                    return ppc_fmadds((f64)(f32)px_fdiv(f2, f3), (f64)(f32)(param_1 - f4), f2);
                }
            }
            f2 = (f64)rdf32((u32)param_2 + 0xcu);
            if (param_1 < f2) {
                f0 = (f64)(f32)(f2 - (f64)rdf32((u32)param_2 + 0x14u));
                if ((param_1 > f0) || (param_1 == f0)) {
                    return (f64)rdf32(0x80573a78u);
                }
            }
            return (f64)rdf32(0x80573a68u);
        }
    }
    return (f64)rdf32(0x80573a78u);
}
