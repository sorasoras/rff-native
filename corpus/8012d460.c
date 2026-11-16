#include "tc_rt.h"

void fn_8012d460(s32 param_1)
{
    u32 r0 = 0, r5 = 0;
    TcArgs a = {0};
    r5 = rd32((u32)param_1 + 0xcu);
    if ((s32)r5 > 1) {
        r0 = rd32((u32)param_1 + 0x810u) - 1u;
        wr32((u32)param_1 + 0x810u, r0);
        if ((s32)r0 < 0) {
            wr32((u32)param_1 + 0x810u, r5 - 1u);
        }
        a.r[0] = rd32((u32)param_1 + 0x814u);
        a.r[1] = 0x8033a033u;
        (void)tc_call(0x801f100cu, &a);
        a.r[0] = rd32((u32)param_1 + 0x814u);
        a.r[1] = 0u;
        (void)tc_call(0x801f10b8u, &a);
        a.r[0] = (u32)param_1 + 0x834u;
        a.r[1] = 0x8033a03bu;
        (void)tc_call(0x801f100cu, &a);
        a.r[0] = (u32)param_1 + 0x834u;
        a.r[1] = 0u;
        (void)tc_call(0x801f10b8u, &a);
    }
    return;
}
