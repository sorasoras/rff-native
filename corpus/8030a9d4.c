#include "tc_rt.h"

s32 fn_8030a9d4(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        a.r[0] = (u32)param_1 + 0x100u;
        a.r[1] = 0xffffffffu;
        (void)tc_call(0x80307b78u, &a);
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
