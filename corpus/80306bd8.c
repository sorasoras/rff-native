#include "tc_rt.h"

u32 fn_80306bd8(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x802f08ccu, &a);
    a.r[0] = r3;
    a.r[1] = (u32)param_1 + 0x36cu;
    a.r[2] = 0x80306accu;
    (void)tc_call(0x802f0ec4u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80306cf0u, &a);
    r3 = tc_call(0x802f08ccu, &a);
    a.r[0] = r3;
    a.r[1] = (u32)param_1 + 0x36cu;
    (void)tc_call(0x802f0f30u, &a);
    return 0u;
}
