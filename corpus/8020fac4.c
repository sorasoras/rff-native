#include "tc_rt.h"

void fn_8020fac4(u32 param_1)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x94u), &a);
    if (r3 == 0u) {
        if ((f64)rdf32(param_1 + 0x180u) < (f64)rdf32(0x8057685cu)) {
            a.r[0] = param_1;
            (void)tc_call(0x8020fb5cu, &a);
        }
        a.r[0] = param_1;
        (void)tc_call(0x800d9ffcu, &a);
        if ((u32)((s32)rd32(param_1 + 0x74u) >> 31) != 0u) {
            a.r[0] = param_1;
            (void)tc_call(0x8020ffbcu, &a);
            f0 = (f64)rdf32(param_1 + 0x180u);
            f1 = (f64)(f32)((f64)rdf32(param_1 + 0x17cu) + (f64)rdf32(0x80576860u));
            wrf32d(param_1 + 0x17cu, f1);
            if (f1 > f0) {
                f0 = (f64)(f32)(f1 - f0);
                wrf32d(param_1 + 0x17cu, f0);
            }
        }
    }
    return;
}
