#include "tc_rt.h"

u32 fn_8026e7d0(s32 param_1, u32 param_2)
{
    u32 c0eq = 0, r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 0u;
    if ((u32)param_1 == 0u) {
        r31 = 0xffffff9bu;
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = 0x40u;
        r3 = tc_call(0x8026ed48u, &a);
        r31 = r3;
        if (r3 != 0x40u) {
            a.r[0] = rd32(0x80571a6cu);
            a.r[1] = 0x140u;
            a.r[2] = 0x20u;
            r3 = tc_call(0x80270904u, &a);
            r30 = r3;
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = (u32)param_1;
                a.r[2] = r31 + 1u;
                (void)tc_call(0x80004338u, &a);
                a.r[0] = r30;
                a.r[1] = param_2;
                r3 = tc_call(0x8026f5f8u, &a);
                r31 = r3;
            } else {
                r31 = 0xffffffeau;
            }
        } else {
            r31 = 0xffffff9bu;
        }
    }
    c0eq = r30 == 0u;
    if (!c0eq && !c0eq) {
        a.r[0] = rd32(0x80571a6cu);
        a.r[1] = r30;
        (void)tc_call(0x80270908u, &a);
    }
    return r31;
}
