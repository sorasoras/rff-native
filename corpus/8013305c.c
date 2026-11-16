#include "tc_rt.h"

u32 fn_8013305c(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32(param_1);
    a.r[1] = 1u;
    r3 = tc_call(0x800cd6b4u, &a);
    r3 = r3 & 0xffffu;
    return r3;
}
