#include "tc_rt.h"

void fn_800c9d78(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x49cu) == 4u) {
        if ((u32)param_2 != 6u) {
            return;
        }
        a.r[0] = (u32)param_1;
        (void)tc_call(0x800c985cu, &a);
        return;
    }
    if (rd32((u32)param_1 + 0x490u) == 0u) {
        return;
    }
    if ((u32)param_2 == 0xfffffffeu) {
        return;
    }
    if ((u32)param_2 == 4u) {
        return;
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800c985cu, &a);
    return;
}
