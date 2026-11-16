#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

f64 fn_80159310(void)
{
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f1 = tc_callf(0x80159380u, &a);
    f31 = f1;
    f1 = tc_callf(0x80159308u, &a);
    f1 = (f64)(f32)px_fdiv(f1, f31);
    return f1;
}
