#include "tc_rt.h"

void fn_800ada1c(u32 param_1, u32 param_2, u32 param_3)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800ad9d4u, &a);
    wrf32d(param_1, (f64)(f32)((f64)rdf32(param_2) + (f64)rdf32(param_3)));
    wrf32d(param_1 + 4u, (f64)(f32)((f64)rdf32(param_2 + 4u) + (f64)rdf32(param_3 + 4u)));
    wrf32d(param_1 + 8u, (f64)(f32)((f64)rdf32(param_2 + 8u) + (f64)rdf32(param_3 + 8u)));
    wrf32d(param_1 + 0xcu, (f64)(f32)((f64)rdf32(param_2 + 0xcu) + (f64)rdf32(param_3 + 0xcu)));
    return;
}
