#include "tc_rt.h"

void fn_8026ed74(u32 param_1, u32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r28 = 0, r29 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdd20u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    a.r[0] = 2u;
    r3 = tc_call(0x8026ed10u, &a);
    if (r3 != 0u) {
        r31 = r3 - 0x80000000u;
        a.r[0] = 1u;
        r3 = tc_call(0x8026ed10u, &a);
        a.r[0] = 1u;
        a.r[1] = (r3 & 0x30u) | 4u;
        (void)tc_call(0x8026ed20u, &a);
        wr32(0xcd000030u, 0x40000000u);
        a.r[0] = r31;
        a.r[1] = 0x20u;
        (void)tc_call(0x8022770cu, &a);
        r0 = rd32(r31 + 8u);
        c0lt = (s32)r0 < 6;
        if (r0 == 6u) {
            r3 = rd32(r31 + 0x18u);
            if (r3 == 0u) {
                r0 = 0u;
            } else {
                r0 = r3 - 0x80000000u;
            }
            wr32(r31 + 0x18u, r0);
            a.r[0] = rd32(r31 + 0x10u);
            a.r[1] = rd32(r31 + 0x14u);
            (void)tc_call(0x8022770cu, &a);
            a.r[0] = rd32(r31 + 0x18u);
            a.r[1] = rd32(r31 + 0x1cu);
            (void)tc_call(0x8022770cu, &a);
        } else if (!c0lt) {
            if ((s32)r0 < 8) {
                r3 = rd32(r31 + 0x18u);
                if (r3 == 0u) {
                    r3 = 0u;
                } else {
                    r3 = r3 - 0x80000000u;
                }
                wr32(r31 + 0x18u, r3);
                a.r[0] = r3;
                a.r[1] = ((rd32(r31 + 0x10u) + rd32(r31 + 0x14u)) << 3u) & 0xfffffff8u;
                (void)tc_call(0x8022770cu, &a);
                r28 = 0u;
                r29 = 0u;
                while (r28 < (rd32(r31 + 0x10u) + rd32(r31 + 0x14u))) {
                    r3 = rd32(rd32(r31 + 0x18u) + r29);
                    if (r3 == 0u) {
                        r0 = 0u;
                    } else {
                        r0 = r3 - 0x80000000u;
                    }
                    wr32(rd32(r31 + 0x18u) + r29, r0);
                    r3 = rd32(r31 + 0x18u);
                    r4 = r3 + r29;
                    r3 = rd32(r3 + r29);
                    r4 = rd32(r4 + 4u);
                    a.r[0] = r3;
                    a.r[1] = r4;
                    (void)tc_call(0x8022770cu, &a);
                    r28 = r28 + 1u;
                    r29 = r29 + 8u;
                }
                if (rd32(0x80571a88u) != 0u && rd32(0x80571a90u) == r31) {
                    r3 = rd32(0x80570c38u);
                    wr32(0x80571a88u, 0u);
                    if ((s32)r3 < 1) {
                        wr32(0x80570c38u, r3 + 1u);
                    }
                }
            }
        } else if (r0 == 3u) {
            r3 = rd32(r31 + 0xcu);
            if (r3 == 0u) {
                r0 = 0u;
            } else {
                r0 = r3 - 0x80000000u;
            }
            wr32(r31 + 0xcu, r0);
            r4 = rd32(r31 + 4u);
            if ((s32)r4 > 0) {
                a.r[0] = rd32(r31 + 0xcu);
                a.r[1] = r4;
                (void)tc_call(0x8022770cu, &a);
            }
        }
        if (rd32(r31 + 0x20u) == 0u) {
            a.r[0] = r31 + 0x2cu;
            (void)tc_call(0x802300d0u, &a);
        } else {
            a.r[0] = 0x817fdd28u;
            (void)tc_call(0x80228148u, &a);
            a.r[0] = 0x817fdd28u;
            f1 = tc_callf(0x80227f20u, &a);
            a.r[0] = rd32(r31 + 4u);
            a.r[1] = rd32(r31 + 0x24u);
            a.f[0] = f1;
            (void)tc_call(rd32(r31 + 0x20u), &a);
            a.r[0] = 0x817fdd28u;
            (void)tc_call(0x80228148u, &a);
            a.r[0] = param_2;
            (void)tc_call(0x80227f20u, &a);
            a.r[0] = rd32(0x80570c3cu);
            a.r[1] = r31;
            (void)tc_call(0x80270908u, &a);
        }
        a.r[0] = 1u;
        r3 = tc_call(0x8026ed10u, &a);
        a.r[0] = 1u;
        a.r[1] = (r3 & 0x30u) | 8u;
        (void)tc_call(0x8026ed20u, &a);
        a.r[0] = r31;
        a.r[1] = rd32(r31 + 8u);
        (void)tc_call(0x80270c3cu, &a);
    }
    return;
}
