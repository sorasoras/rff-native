#include "tc_rt.h"

s32 fn_8008bdfc(s32 param_1, s32 param_2)
{
    u32 c0eq = 0, r3 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        a.r[0] = (u32)param_1 + 0x4190u;
        a.r[1] = 0xffffffffu;
        (void)tc_call(0x801897e4u, &a);
        r3 = (u32)param_1 + 0x4154u;
        c0eq = r3 == 0u;
        if (!c0eq && !c0eq) {
            a.r[0] = r3;
            a.r[1] = 0u;
            (void)tc_call(0x8007ae30u, &a);
        }
        a.r[0] = (u32)param_1;
        a.r[1] = 0x80084d4cu;
        a.r[2] = 0x4150u;
        a.r[3] = 1u;
        (void)tc_call(0x8025571cu, &a);
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
