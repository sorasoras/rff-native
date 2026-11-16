#include "tc_rt.h"

void fn_80124018(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80040b64u, &a);
    r31 = (r3 >> 5u) & 1u;
    wr32((u32)param_1 + 8u, 1u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801244ccu, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = r31;
    (void)tc_call(0x80124214u, &a);
    return;
}
