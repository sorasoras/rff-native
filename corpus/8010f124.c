#include "tc_rt.h"

u32 fn_8010f124(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    (void)param_1;
    a.r[0] = rd32(param_2);
    r3 = tc_call(0x8014d8acu, &a);
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    return r3;
}
