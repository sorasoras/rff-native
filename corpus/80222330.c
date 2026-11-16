#include "tc_rt.h"

void fn_80222330(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    r3 = tc_call(0x802223d8u, &a);
    if (r3 != 0u) {
        r3 = (u32)param_1 + ((u32)param_2 * 0x74u);
        if (rd32(r3 + 0x30u) != 0u) {
            r3 = r3 + 0xcu;
            a.r[0] = r3;
            (void)tc_call(0x800cb5a8u, &a);
        }
    }
    return;
}
