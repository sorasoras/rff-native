#include "tc_rt.h"

f64 fn_800cca68(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    f1 = tc_callf(0x800cc60cu, &a);
    f31 = f1;
    a.r[0] = param_1;
    r3 = tc_call(0x800cb948u, &a);
    a.r[0] = r3;
    a.r[1] = param_2;
    f1 = tc_callf(0x80079cd4u, &a);
    f1 = (f64)(f32)(f1 * f31);
    return f1;
}
