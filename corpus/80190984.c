#include "tc_rt.h"

void fn_80190984(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0xc4u) != 0u) {
        r3 = rd32((u32)param_1 + 0xcu);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x800fe9bcu, &a);
        }
        a.r[0] = rd32((u32)param_1 + 0x14u);
        (void)tc_call(0x800fe9bcu, &a);
        a.r[0] = rd32((u32)param_1 + 0x6cu);
        (void)tc_call(0x800fe9bcu, &a);
    }
    return;
}
