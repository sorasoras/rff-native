#include "tc_rt.h"

void fn_8004f304(s32 param_1)
{
    u32 c0lt = 0, r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    c0lt = param_1 < 2;
    if ((u32)param_1 == 2u) {
        r31 = 1u;
        r3 = 1u;
        r30 = 2u;
    } else if (!c0lt) {
        if (param_1 >= 4) {
            r31 = 0u;
            r3 = 0u;
            r30 = 1u;
        } else {
            r31 = 2u;
            r3 = 2u;
            r30 = 3u;
        }
    } else {
        c0lt = param_1 < 0;
        if ((u32)param_1 == 0u) {
            r31 = 3u;
            r3 = 0u;
            r30 = 0u;
        } else if (!c0lt) {
            r31 = 0u;
            r3 = 0u;
            r30 = 1u;
        } else {
            r31 = 0u;
            r3 = 0u;
            r30 = 1u;
        }
    }
    a.r[0] = r3;
    (void)tc_call(0x802449b4u, &a);
    a.r[0] = r30;
    (void)tc_call(0x8024996cu, &a);
    r3 = tc_call(0x802f08ccu, &a);
    a.r[0] = r3;
    a.r[1] = r31;
    (void)tc_call(0x802f0f88u, &a);
    return;
}
