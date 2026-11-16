#include "tc_rt.h"

s32 fn_8008bd38(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = 0x800845d8u;
    a.r[2] = 0x80084d4cu;
    a.r[3] = 0x4150u;
    a.r[4] = 1u;
    (void)tc_call(0x80255624u, &a);
    a.r[0] = (u32)param_1 + 0x4154u;
    (void)tc_call(0x8007ae0cu, &a);
    a.r[0] = (u32)param_1 + 0x4190u;
    (void)tc_call(0x80189500u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80084df4u, &a);
    wr32((u32)param_1 + 0x4150u, 0u);
    return param_1;
}
