#include "tc_rt.h"

void fn_801bbce8(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1a4u);
    a.r[1] = rd32((u32)param_1 + 0x1a0u);
    a.r[2] = 1u;
    (void)tc_call(0x800f8f10u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8019736cu, &a);
    return;
}
