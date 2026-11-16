#include "tc_rt.h"

void fn_801c25cc(f64 param_1, u32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    if (rd32(param_2) != 0u) {
        f0 = (f64)rdf32(param_2 + 8u);
        f1 = (f64)(f32)((f64)rdf32(param_2 + 0xcu) + param_1);
        wrf32d(param_2 + 0xcu, f1);
        if ((f1 > f0) || (f1 == f0)) {
            a.r[0] = 0x804b9da0u;
            a.r[1] = rd32(param_2 + 4u);
            (void)tc_call(0x8010a75cu, &a);
            wrf32d(param_2 + 0xcu, (f64)rdf32(0x80575cfcu));
        }
    }
    return;
}
