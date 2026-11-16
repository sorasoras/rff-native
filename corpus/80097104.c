#include "tc_rt.h"

void fn_80097104(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3);
    a.r[0] = r3;
    a.r[1] = 1u;
    a.r[2] = param_2;
    r3 = tc_call(0x800a2cf0u, &a);
    if (r3 != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x4cu);
        a.r[1] = 2u;
        (void)tc_call(0x800ac4c0u, &a);
        r3 = tc_call(0x800a7854u, &a);
        r3 = rd32(r3 + 0xa48u);
        if (r3 == 0u) {
            r31 = 0u;
        } else {
            r31 = (u32)rd8(r3 + 0x78u);
        }
        r3 = tc_call(0x800a7854u, &a);
        r5 = rd32(r3 + 0xa48u);
        r3 = rd32((u32)param_1 + 0x20u);
        if (r5 == 0u) {
            r5 = 0u;
        } else {
            r5 = (u32)rd8(r5 + 0x79u);
        }
        a.r[0] = r3;
        a.r[1] = param_3;
        a.r[2] = r5;
        a.r[3] = r31;
        (void)tc_call(0x8010f218u, &a);
    }
    return;
}
