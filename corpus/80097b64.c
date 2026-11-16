#include "tc_rt.h"

void fn_80097b64(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = 1u;
    (void)tc_call(0x8009a64cu, &a);
    a.r[0] = rd32((u32)param_1 + 0x60u);
    (void)tc_call(0x802135a0u, &a);
    a.r[0] = 0u;
    a.r[1] = 0x23u;
    (void)tc_call(0x800a730cu, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    (void)tc_call(0x8009a64cu, &a);
    wr32(rd32((u32)param_1 + 0x4cu) + 0x10u, 0u);
    return;
}
