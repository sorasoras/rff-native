#include "tc_rt.h"

u32 fn_801b73a0(s32 param_1)
{
    u32 c0eq = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    a.r[0] = rd32((u32)param_1 + 0x28u);
    r3 = tc_call(0x8012c8c8u, &a);
    if (r3 != 0u) {
        r31 = 1u;
    }
    c0eq = r31 == 0u;
    r31 = 0u;
    if (!c0eq) {
        a.r[0] = rd32((u32)param_1 + 0x2cu);
        r3 = tc_call(0x8012ccc0u, &a);
        if (r3 != 0u) {
            r31 = 1u;
        }
    }
    return r31;
}
