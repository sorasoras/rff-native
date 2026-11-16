#include "tc_rt.h"

void fn_800ac540(s32 param_1)
{
    u32 c0lt = 0, r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    c0lt = param_1 < 2;
    if ((u32)param_1 != 2u) {
        if (!c0lt) {
            return;
        }
        if (param_1 < 1) {
            return;
        }
        a.r[0] = 1u;
        a.r[1] = 0u;
        (void)tc_call(0x800a730cu, &a);
        r3 = tc_call(0x80097da4u, &a);
        r31 = rd32(r3);
        r3 = tc_call(0x80097da4u, &a);
        r30 = rd32(r3 + 0x1cu);
        a.r[0] = r31;
        (void)tc_call(0x800a3570u, &a);
        a.r[0] = r30;
        (void)tc_call(0x8010c1b4u, &a);
    } else {
        a.r[0] = 1u;
        a.r[1] = 0u;
        (void)tc_call(0x800a730cu, &a);
        r3 = tc_call(0x800a7854u, &a);
        if (r3 != 0u) {
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x20u);
            a.r[0] = r3;
            (void)tc_call(0x8010f228u, &a);
        }
    }
    return;
}
