#include "tc_rt.h"

f64 fn_801dc338(s32 param_1, s32 param_2)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    f1 = tc_callf(0x802344e8u, &a);
    return f1;
}
