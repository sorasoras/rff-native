#include "tc_rt.h"

void fn_800b86c8(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800b91fcu, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800b9c40u, &a);
    (void)tc_call(0x80224e74u, &a);
    a.r[0] = (u32)param_1 + 0x1f34u;
    (void)tc_call(0x801ca900u, &a);
    return;
}
