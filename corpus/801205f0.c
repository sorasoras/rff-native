#include "tc_rt.h"

void fn_801205f0(s32 param_1, s32 param_2, u32 param_3)
{
    u32 c0eq = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    if (param_2 >= 0) {
        r31 = (u32)param_1 + (((u32)param_2 << 7u) & 0xffffff80u);
        r3 = rd32(r31 + 0x44u);
        c0eq = r3 == 0u;
        if (!c0eq && !c0eq) {
            a.r[0] = r3;
            a.r[1] = (((0u - param_3) | param_3) >> 0x1fu) & 1u;
            a.r[2] = 0u;
            (void)tc_call(0x802f61c0u, &a);
        }
        r3 = rd32(r31 + 0x48u);
        c0eq = r3 == 0u;
        if (!c0eq && !c0eq) {
            a.r[0] = r3;
            a.r[1] = (((0u - param_3) | param_3) >> 0x1fu) & 1u;
            a.r[2] = 0u;
            (void)tc_call(0x802f61c0u, &a);
        }
    }
    return;
}
