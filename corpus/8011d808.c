#include "tc_rt.h"

void fn_8011d808(u32 param_1, u32 param_2)
{
    f64 f1 = 0.0;
    f1 = (f64)rdf32(0x80574254u);
    wrf32d(param_1, (f64)(f32)((f64)rdf32(param_1) - (f64)rdf32(0x80574250u)));
    wrf32d(param_2, (f64)(f32)(f1 - (f64)rdf32(param_2)));
    return;
}
