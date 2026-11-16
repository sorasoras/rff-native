#include "tc_rt.h"

u32 fn_80037e20(u32 param_1)
{
    u32 r31 = 0;
    TcArgs a = {0};
    r31 = rd32(param_1) + 0x10u;
    a.r[0] = r31;
    a.r[1] = 0x80335a07u;
    (void)tc_call(0x80037a90u, &a);
    return rd32(r31);
}
