#include "tc_rt.h"

void fn_801b7550(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x2cu) != 0u) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x801b7544u, &a);
        a.r[0] = rd32((u32)param_1 + 0x2cu);
        a.r[1] = r3;
        (void)tc_call(0x8012d718u, &a);
        a.r[0] = rd32((u32)param_1 + 0x2cu);
        a.r[1] = rd32((u32)param_1 + 0x1cu) + 0x44u;
        r3 = tc_call(0x8012d718u, &a);
        r31 = r3;
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x801b7544u, &a);
        a.r[0] = r3;
        a.r[1] = r31;
        (void)tc_call(0x80119ffcu, &a);
    }
    return;
}
