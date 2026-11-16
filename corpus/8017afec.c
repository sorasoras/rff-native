#include "tc_rt.h"

u32 fn_8017afec(u32 param_r3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_r3;
    r3 = tc_call(0x800cd704u, &a);
    r3 = r3 & 0xffu;
    return r3;
}
