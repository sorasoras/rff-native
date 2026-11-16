#include "tc_rt.h"

void fn_801531a0(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x140u) != 0u) {
        a.r[0] = (u32)param_1 + 0xf8u;
        (void)tc_call(0x8007020cu, &a);
        if ((u32)param_2 == 0u) {
            a.r[0] = (u32)param_1 + 0xf8u;
            (void)tc_call(0x8006ff00u, &a);
        } else {
            a.r[0] = (u32)param_1 + 0xf8u;
            (void)tc_call(0x80070068u, &a);
        }
    }
    return;
}
