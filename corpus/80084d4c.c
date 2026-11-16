#include "tc_rt.h"

s32 fn_80084d4c(s32 param_1, s32 param_2)
{
    u32 c0eq = 0, r3 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        a.r[0] = (u32)param_1 + 0x2a74u;
        a.r[1] = 0x80084d0cu;
        a.r[2] = 0x2cu;
        a.r[3] = 0x28u;
        (void)tc_call(0x8025571cu, &a);
        a.r[0] = (u32)param_1 + 0x2294u;
        a.r[1] = 0x80084c54u;
        a.r[2] = 0xa8u;
        a.r[3] = 0xcu;
        (void)tc_call(0x8025571cu, &a);
        r3 = (u32)param_1 + 0x524u;
        c0eq = r3 == 0u;
        if (!c0eq && !c0eq) {
            a.r[0] = r3;
            a.r[1] = 0u;
            (void)tc_call(0x8007ae30u, &a);
        }
        r3 = (u32)param_1 + 8u;
        c0eq = r3 == 0u;
        if (!c0eq && !c0eq) {
            a.r[0] = r3;
            a.r[1] = 0u;
            (void)tc_call(0x8007ae30u, &a);
        }
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
