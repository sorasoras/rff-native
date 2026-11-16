#include "tc_rt.h"

u32 fn_80118fd8(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    r3 = tc_call(0x80118fc4u, &a);
    r31 = r3;
    a.r[0] = param_3;
    a.r[1] = param_4;
    r3 = tc_call(0x80118fc4u, &a);
    r30 = r3;
    a.r[0] = param_5;
    a.r[1] = param_5;
    r3 = tc_call(0x80118fc4u, &a);
    r29 = r3;
    if ((s32)r31 > (s32)r30) {
        if ((s32)r30 >= (s32)r3) {
            a.r[0] = r3;
            r3 = tc_call(0x80118fd0u, &a);
            r29 = r29 + r3;
        }
        a.r[0] = r30;
        r3 = tc_call(0x80118fd0u, &a);
        r30 = r30 + r3;
    }
    r3 = 0u;
    if ((s32)r29 >= (s32)r31 && (s32)r29 <= (s32)r30) {
        r3 = 1u;
    }
    return r3;
}
