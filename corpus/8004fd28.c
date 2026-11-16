#include "tc_rt.h"

s32 fn_8004fd28(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        r3 = (u32)param_1 + 0x370u;
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x8030571cu, &a);
        }
        a.r[0] = (u32)param_1 + 0x32cu;
        a.r[1] = 0x8004f528u;
        a.r[2] = 4u;
        a.r[3] = 0x11u;
        (void)tc_call(0x8025571cu, &a);
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
