#include "tc_rt.h"

void fn_801c8c94(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_1 + 0x1b0cu;
    (void)tc_call(0x800b2b40u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_1 + 0x1b14u;
    (void)tc_call(0x800b2b40u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_1 + 0x1dd4u;
    (void)tc_call(0x800b2b40u, &a);
    wr32((u32)param_1 + 0xed0u, 0x28u);
    wr32((u32)param_1 + 0xe94u, 0u);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    a.r[2] = 8u;
    (void)tc_call(0x801c8eb8u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 0x2au;
    (void)tc_call(0x800b31a0u, &a);
    wr8((u32)param_1 + 0x368u, 0u);
    return;
}
