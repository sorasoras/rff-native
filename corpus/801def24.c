#include "tc_rt.h"

void fn_801def24(s32 param_1)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r0 = rd32(0x805710e0u) * 0x6d0u;
    wr32(0x8057118cu, rd32(0x8057118cu) | 0x20000u);
    r3 = r0 - 0x7fc2e738u;
    a.r[0] = r3;
    a.r[1] = rd32(r3 + 0x194u);
    f1 = tc_callf(0x800564f8u, &a);
    r3 = rd32((u32)param_1 + 0xd0cu);
    c0eq = r3 == 0u;
    if (!c0eq && !c0eq) {
        a.r[0] = r3;
        a.r[1] = 1u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3 + 0x24u) + 8u), &a);
    }
    a.r[0] = rd32((u32)param_1 + 0xd10u);
    a.r[1] = 1u;
    (void)tc_call(0x801dcc14u, &a);
    r31 = rd32((u32)param_1 + 0xd14u);
    if (r31 != 0u) {
        a.r[0] = r31;
        a.r[1] = 0x801dd304u;
        a.r[2] = 0x1c4u;
        a.r[3] = 0x80u;
        (void)tc_call(0x8025571cu, &a);
        r3 = tc_call(0x800545e4u, &a);
        r6 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r31;
            a.r[2] = r5;
            a.r[3] = r6;
            (void)tc_call(0x80040e98u, &a);
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = r31;
                (void)tc_call(0x80094ec0u, &a);
            } else {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r31;
                a.r[2] = r5;
                a.r[3] = r6;
                (void)tc_call(0x80040e98u, &a);
            }
        }
    }
    r31 = rd32((u32)param_1 + 0xd1cu);
    r3 = tc_call(0x800545e4u, &a);
    r6 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r5 = rd32(r3 + 0xcu);
        r3 = rd32(r3);
        r6 = r6 + 0x18u;
        a.r[0] = r3;
        a.r[1] = r31;
        a.r[2] = r5;
        a.r[3] = r6;
        (void)tc_call(0x80040e98u, &a);
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = r31;
            (void)tc_call(0x80094ec0u, &a);
        } else {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r31;
            a.r[2] = r5;
            a.r[3] = r6;
            (void)tc_call(0x80040e98u, &a);
        }
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801df0ccu, &a);
    a.r[0] = 0xbf6eu;
    r3 = tc_call(0x800a7a44u, &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3) + 0x4cu), &a);
    }
    return;
}
