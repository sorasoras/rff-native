#include "tc_rt.h"

void fn_801eb9e0(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x20u;
    a.r[1] = 0u;
    a.r[2] = 0x18u;
    (void)tc_call(0x8000443cu, &a);
    wr8((u32)param_1 + 0x20u, 1u);
    wr8((u32)param_1 + 0x25u, 0x80u);
    wr8((u32)param_1 + 0x24u, 0x80u);
    wr8((u32)param_1 + 0x23u, 0x80u);
    wr8((u32)param_1 + 0x22u, 0x80u);
    wr8((u32)param_1 + 0x21u, 0x80u);
    wr8((u32)param_1 + 0x34u, 1u);
    wr8((u32)param_1 + 0x35u, 1u);
    return;
}
