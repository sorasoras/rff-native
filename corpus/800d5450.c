#include "tc_rt.h"

void fn_800d5450(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r5 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = (u32)param_2;
    a.r[0] = (u32)param_2;
    a.r[1] = 0xau;
    r3 = tc_call(0x8025e8c0u, &a);
    r31 = r3;
    while (r3 != 0u) {
        r5 = r3 - r30;
        r5 = (u32)((s32)(((r5 >> 0x1fu) & 1u) + r5) >> 1);
        a.r[0] = param_1;
        a.r[1] = r30;
        a.r[2] = r5;
        (void)tc_call(0x800d56f0u, &a);
        r30 = r31 + 2u;
        if ((u32)rd16(r31 + 2u) == 0u) {
            return;
        }
        a.r[0] = r30;
        a.r[1] = 0xau;
        r3 = tc_call(0x8025e8c0u, &a);
        r31 = r3;
    }
    a.r[0] = r30;
    r3 = tc_call(0x8025e7a4u, &a);
    if (r3 != 0u) {
        a.r[0] = param_1;
        a.r[1] = r30;
        a.r[2] = r3;
        (void)tc_call(0x800d56f0u, &a);
    }
    return;
}
