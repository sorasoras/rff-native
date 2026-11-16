#include "tc_rt.h"

u32 fn_800a36d0(u32 param_r3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_r3;
    r3 = tc_call(0x800a35f8u, &a);
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    return r3;
}
