#include "tc_rt.h"

u32 fn_80148ea4(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801f02d4u, &a);
    a.r[0] = (u32)param_1 + 0x150u;
    (void)tc_call(0x80147160u, &a);
    return 0u;
}
