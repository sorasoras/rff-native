#include "tc_rt.h"

void fn_802cbae4(s32 param_1, s32 param_2)
{
    u32 r31 = 0;
    TcArgs a = {0};
    (void)tc_call(0x8024f870u, &a);
    a.r[0] = 9u;
    a.r[1] = 1u;
    (void)tc_call(0x8024f27cu, &a);
    if ((u32)param_1 != 0u) {
        a.r[0] = 0xbu;
        a.r[1] = 1u;
        (void)tc_call(0x8024f27cu, &a);
    }
    r31 = 0u;
    while ((s32)r31 < param_2) {
        a.r[0] = r31 + 0xdu;
        a.r[1] = 1u;
        (void)tc_call(0x8024f27cu, &a);
        r31 = r31 + 1u;
    }
    a.r[0] = 0u;
    a.r[1] = 9u;
    a.r[2] = 0u;
    a.r[3] = 4u;
    a.r[4] = 0u;
    (void)tc_call(0x8024f8a4u, &a);
    if ((u32)param_1 != 0u) {
        a.r[0] = 0u;
        a.r[1] = 0xbu;
        a.r[2] = 1u;
        a.r[3] = 5u;
        a.r[4] = 0u;
        (void)tc_call(0x8024f8a4u, &a);
    }
    r31 = 0u;
    while ((s32)r31 < param_2) {
        a.r[0] = 0u;
        a.r[1] = r31 + 0xdu;
        a.r[2] = 1u;
        a.r[3] = 4u;
        a.r[4] = 0u;
        (void)tc_call(0x8024f8a4u, &a);
        r31 = r31 + 1u;
    }
    return;
}
