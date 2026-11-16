#include "tc_rt.h"

void fn_800bb4c4(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32(0x80571140u);
    a.r[0] = r31;
    a.r[1] = 0u;
    r3 = tc_call(0x800b1048u, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_1 + 0xf80u;
        (void)tc_call(0x8005250cu, &a);
        wr32((u32)param_1 + 0xfa8u, 1u);
    }
    a.r[0] = r31;
    a.r[1] = 1u;
    r3 = tc_call(0x800b1048u, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_1 + 0x1010u;
        (void)tc_call(0x8005250cu, &a);
        wr32((u32)param_1 + 0x1038u, 1u);
    }
    a.r[0] = r31;
    a.r[1] = 2u;
    r3 = tc_call(0x800b1048u, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_1 + 0x10a0u;
        (void)tc_call(0x8005250cu, &a);
        wr32((u32)param_1 + 0x10c8u, 1u);
    }
    a.r[0] = r31;
    a.r[1] = 4u;
    r3 = tc_call(0x800b1048u, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_1 + 0x1130u;
        (void)tc_call(0x8005250cu, &a);
        wr32((u32)param_1 + 0x1158u, 1u);
    }
    a.r[0] = r31;
    a.r[1] = 5u;
    r3 = tc_call(0x800b1048u, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_1 + 0x11c0u;
        (void)tc_call(0x8005250cu, &a);
        wr32((u32)param_1 + 0x11e8u, 1u);
    }
    r3 = tc_call(0x800b3880u, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_1 + 0x1250u;
        (void)tc_call(0x8005250cu, &a);
        wr32((u32)param_1 + 0x1278u, 1u);
    }
    return;
}
