#include "tc_rt.h"

u32 fn_801b76f8(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x30u;
    a.r[1] = 1u;
    r3 = tc_call(0x800f857cu, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r3 = rd32((u32)param_1 + 0x2cu);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x8012ceb4u, &a);
        }
        r3 = rd32((u32)param_1 + 0x28u);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x8012c6b4u, &a);
        }
        r3 = rd32((u32)param_1 + 0x2cu);
        if (r3 != 0u && rd32((u32)param_1 + 0x28u) != 0u) {
            a.r[0] = r3;
            r3 = tc_call(0x8012d6e0u, &a);
            a.r[0] = rd32((u32)param_1 + 0x28u);
            a.r[1] = r3;
            (void)tc_call(0x8012c8b4u, &a);
        }
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801b7550u, &a);
        r3 = 1u;
    }
    return r3;
}
