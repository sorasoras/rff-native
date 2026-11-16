#include "tc_rt.h"

void fn_8007bf90(u32 param_1, s32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_1;
    r5 = rd32((u32)param_2 + 0x40u);
    r29 = rd32(rd32((u32)param_2 + 0x38u) + 0x1cu);
    if (r5 == 0u) {
        r30 = rd32((u32)param_2 + 0x54u);
    } else {
        r30 = rd32(r5 + 0x20u) + 0x40u;
    }
    r0 = (u32)(s8)rd8((u32)param_2 + 0x37u);
    c0lt = (s32)r0 < 3;
    if (r0 == 3u) {
        a.r[0] = 0x804927b0u;
        a.r[1] = rd32((u32)param_2 + 0x50u);
        r3 = tc_call(0x8007bca8u, &a);
        r31 = r3;
    } else if (!c0lt) {
        c0lt = (s32)r0 < 5;
        if (r0 == 5u) {
            a.r[0] = 0x804927b0u;
            a.r[1] = rd32((u32)param_2 + 0x50u);
            r3 = tc_call(0x8007be18u, &a);
            r31 = r3;
        } else if (!c0lt) {
            r31 = 0u;
        } else {
            a.r[0] = 0x804927b0u;
            a.r[1] = rd32((u32)param_2 + 0x50u);
            r3 = tc_call(0x8007b9fcu, &a);
            r31 = r3;
        }
    } else {
        c0lt = (s32)r0 < 1;
        if (r0 == 1u) {
            a.r[0] = 0x804927b0u;
            a.r[1] = rd32((u32)param_2 + 0x50u);
            r3 = tc_call(0x8007bb88u, &a);
            r31 = r3;
        } else if (!c0lt) {
            a.r[0] = 0x804927b0u;
            a.r[1] = rd32((u32)param_2 + 0x50u);
            r3 = tc_call(0x8007b894u, &a);
            r31 = r3;
        } else if ((s32)r0 >= 0) {
            r31 = rd32((u32)param_2 + 0x50u);
        } else {
            r31 = 0u;
        }
    }
    if ((u32)rd8(0x805706f9u) != 0u) {
        r3 = tc_call(0x8004d970u, &a);
        if (rd32(r3) != 0u) {
            a.r[0] = r30;
            a.r[1] = r31;
            a.r[2] = r3;
            r3 = tc_call(0x8007b504u, &a);
        } else {
            a.r[0] = r30;
            a.r[1] = r31;
            a.r[2] = r3;
            r3 = tc_call(0x8007b204u, &a);
        }
        if (r3 == 0u) {
            return;
        }
    }
    a.r[0] = (u32)param_2;
    a.r[1] = r31;
    (void)tc_call(0x8007be9cu, &a);
    a.r[0] = 0u;
    a.r[1] = r31;
    (void)tc_call(0x8004cc20u, &a);
    r4 = rd32((u32)param_2 + 0x44u);
    if (r4 != 0u) {
        a.r[0] = 0x800dadd0u;
        a.r[1] = r4;
        (void)tc_call(0x8003dd7cu, &a);
    }
    r4 = rd32((u32)param_2 + 0x40u);
    if (r4 == 0u) {
        a.r[0] = r29;
        (void)tc_call(0x8003a404u, &a);
    } else {
        a.r[0] = r29;
        a.r[1] = r4;
        (void)tc_call(0x8003a8c0u, &a);
    }
    if (rd32((u32)param_2 + 0x44u) != 0u) {
        (void)tc_call(0x80040128u, &a);
        a.r[0] = 0u;
        a.r[1] = 0u;
        (void)tc_call(0x8003dd7cu, &a);
    }
    return;
}
