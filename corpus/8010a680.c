#include "tc_rt.h"

u32 fn_8010a680(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x19b8u;
    a.r[1] = 3u;
    (void)tc_call(0x801630d0u, &a);
    a.r[0] = (u32)param_1 + 0x19b8u;
    a.r[1] = 0x68u;
    a.r[2] = 3u;
    (void)tc_call(0x80162e44u, &a);
    a.r[0] = (u32)param_1 + 0x19b8u;
    a.r[1] = 0x69u;
    a.r[2] = 3u;
    (void)tc_call(0x80162e44u, &a);
    return 0x69u;
}
