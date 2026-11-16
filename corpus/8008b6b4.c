#include "tc_rt.h"

void fn_8008b6b4(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80085a3cu, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80086de8u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80086a9cu, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80085568u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = rd32((u32)param_1 + 0x3158u);
    a.r[2] = rd32((u32)param_1 + 0x3154u);
    (void)tc_call(0x80087fccu, &a);
    return;
}
