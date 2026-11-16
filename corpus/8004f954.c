#include "tc_rt.h"

u32 fn_8004f954(u32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if (param_1 != 0u) {
        a.r[0] = rd32(param_1);
        (void)tc_call(0x8022d648u, &a);
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
