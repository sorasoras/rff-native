#include "tc_rt.h"

void fn_800add14(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0xcu;
    (void)tc_call(0x800ada04u, &a);
    a.r[0] = (u32)param_1 + 0x1cu;
    (void)tc_call(0x800ada04u, &a);
    a.r[0] = (u32)param_1 + 0x2cu;
    (void)tc_call(0x800ada04u, &a);
    wr32((u32)param_1 + 0x3cu, 0u);
    wr32((u32)param_1 + 0x44u, 0u);
    wr32((u32)param_1 + 0x40u, 0u);
    return;
}
