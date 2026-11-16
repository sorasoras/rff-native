#include "tc_rt.h"

f64 fn_8003bc9c(f64 param_1, f64 param_2)
{
    f64 f2 = 0.0;
    f2 = param_2;
    if (param_1 > param_2) {
        return f2;
    }
    f2 = -param_2;
    if (param_1 < f2) {
        return f2;
    }
    f2 = param_1;
    return f2;
}
