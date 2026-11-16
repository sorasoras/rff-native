#include "tc_rt.h"

void fn_8032b25c(f64 param_1, f64 param_2, f64 param_3, u32 param_4)
{
    wrf32d(param_4, param_1);
    wrf32d(param_4 + 4u, param_2);
    wrf32d(param_4 + 8u, param_3);
    return;
}
