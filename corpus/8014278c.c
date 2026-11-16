#include "tc_rt.h"

void fn_8014278c(u32 param_1, s32 param_2, u32 param_3)
{
    TcArgs a = {0};
    a.r[0] = 0x804beb38u;
    (void)tc_call(0x801421ecu, &a);
    a.r[0] = 0x804beba0u;
    a.r[1] = param_1;
    a.r[2] = (u32)(s8)((u32)param_2 - 1u);
    a.r[3] = param_3;
    (void)tc_call(0x80142f50u, &a);
    return;
}
