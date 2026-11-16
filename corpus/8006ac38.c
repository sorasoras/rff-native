#include "tc_rt.h"

void fn_8006ac38(u32 param_1, u32 param_2, s32 param_3)
{
    TcArgs a = {0};
    if ((u32)param_3 != 0u) {
        a.r[0] = param_1;
        a.r[1] = param_2;
        (void)tc_call(0x801a9f2cu, &a);
        return;
    }
    if ((rd32(0x8057118cu) & 0x200u) != 0u) {
        a.r[0] = param_1;
        a.r[1] = param_2;
        (void)tc_call(0x8006ac58u, &a);
        return;
    }
    return;
}
