#include "tc_rt.h"

u32 fn_801980dc(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)rd16((u32)param_1 + 0xbcu);
    a.r[1] = 1u;
    r3 = tc_call(0x800cd6b4u, &a);
    r3 = r3 & 0xffffu;
    return r3;
}
