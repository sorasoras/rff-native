#include "tc_rt.h"

void fn_801b74c8(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((s32)rd32((u32)param_1 + 0x78u) > 0) {
        r3 = rd32((u32)param_1 + 0x2cu);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x8012d0c8u, &a);
        }
        r3 = rd32((u32)param_1 + 0x28u);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x8012c614u, &a);
        }
    }
    if (rd32((u32)param_1 + 0x74u) != 0u) {
        (void)tc_call(0x801f87a4u, &a);
    }
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x9c8u;
    (void)tc_call(0x8019124cu, &a);
    return;
}
