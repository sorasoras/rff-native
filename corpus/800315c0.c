#include "tc_rt.h"

void fn_800315c0(s32 param_1, u32 param_2)
{
    u32 c0lt = 0, r0 = 0;
    TcArgs a = {0};
    r0 = (u32)(s16)rd16((u32)param_1 + 0x32u);
    c0lt = (s32)r0 < 2;
    if (r0 != 2u) {
        if (!c0lt) {
            return;
        }
        if ((s32)r0 >= 1) {
            a.r[0] = (u32)param_1;
            a.r[1] = param_2;
            (void)tc_call(0x80031520u, &a);
            return;
        }
        return;
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8003149cu, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    (void)tc_call(0x80031520u, &a);
    return;
}
