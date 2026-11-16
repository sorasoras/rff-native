#include "tc_rt.h"

f64 fn_800acaf8(f64 param_1, f64 param_2, f64 param_3)
{
    f64 f3 = 0.0;
    f3 = param_3;
    if (!(param_3 < param_1)) {
        f3 = param_1;
    }
    if (!(param_2 > f3)) {
        return f3;
    }
    return param_2;
}
