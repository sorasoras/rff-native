#include "tc_rt.h"

void fn_801b2928(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x724u) != (u32)param_2) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801b2dd4u, &a);
    }
    wr32((u32)param_1 + 0x724u, (u32)param_2);
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    (void)tc_call(0x801b297cu, &a);
    return;
}
