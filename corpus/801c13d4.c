#include "tc_rt.h"

void fn_801c13d4(s32 param_1)
{
    TcArgs a = {0};
    wr16((u32)param_1 + 0x20cu, 0x2e8u);
    a.r[0] = (u32)param_1 + 0x98u;
    (void)tc_call(0x801a7844u, &a);
    a.r[0] = (u32)param_1 + 0x114u;
    (void)tc_call(0x801a7844u, &a);
    a.r[0] = (u32)param_1 + 0x190u;
    (void)tc_call(0x801a7844u, &a);
    return;
}
