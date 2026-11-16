#include "tc_rt.h"

void fn_80119430(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)param_2 != 0u) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x800cf718u, &a);
        if (r3 != 0u) {
            wr32((u32)param_1 + 0xcu, (u32)param_2);
            return;
        }
        a.r[0] = (u32)param_1;
        (void)tc_call(0x800cf688u, &a);
    } else {
        a.r[0] = 0x804b14fcu;
        a.r[1] = (u32)param_1;
        a.r[2] = 0u;
        r3 = tc_call(0x8007b0f4u, &a);
        if (r3 != 0u) {
            a.r[0] = 0x804b14fcu;
            a.r[1] = r3;
            (void)tc_call(0x8007aff0u, &a);
        }
    }
    wr32((u32)param_1 + 0xcu, (u32)param_2);
    return;
}
