#include "tc_rt.h"

void fn_801c2a64(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if ((u32)param_2 != 0u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801c2e10u, &a);
    } else {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801c2dacu, &a);
    }
    wr32((u32)param_1 + 0x9cu, (rd32((u32)param_1 + 0x9cu) & 0x7fffffffu) | (((u32)param_2 << 0x1fu) & 0x80000000u));
    return;
}
