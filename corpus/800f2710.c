#include "tc_rt.h"

u32 fn_800f2710(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x800545e4u, &a);
    if (rd32(r3 + 0x10u) != 0u) {
        r3 = rd32(r3 + 4u) - rd32(r3 + 8u);
    } else {
        r3 = r3 + 0x24u;
        a.r[0] = r3;
        r3 = tc_call(0x80094e44u, &a);
        r3 = (r3 << 4u) & 0xfffffff0u;
    }
    r31 = r3 - 0x100000u;
    wr32(0x8057122cu, r31);
    r3 = tc_call(0x800545e4u, &a);
    r6 = r3;
    if (r31 == 0u) {
        r3 = 0u;
    } else {
        if (rd32(r3 + 0x10u) != 0u) {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r31;
            a.r[2] = r5;
            a.r[3] = r6;
            r3 = tc_call(0x80040db8u, &a);
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = r31;
                r3 = tc_call(0x80094e80u, &a);
            } else {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r31;
                a.r[2] = r5;
                a.r[3] = r6;
                r3 = tc_call(0x80040cd8u, &a);
            }
        }
    }
    wr32(0x80571228u, r3);
    a.r[0] = r3;
    a.r[1] = rd32(0x8057122cu);
    (void)tc_call(0x80041274u, &a);
    (void)tc_call(0x8004122cu, &a);
    a.r[0] = param_3;
    (void)tc_call(0x800411a4u, &a);
    a.r[0] = param_4;
    (void)tc_call(0x800411b4u, &a);
    r4 = rd32(0x80571100u);
    a.r[0] = (((1u - r4) | (r4 - 1u)) >> 0x1fu) & 1u;
    (void)tc_call(0x800411c4u, &a);
    a.r[0] = param_1;
    a.r[1] = param_2;
    (void)tc_call(0x80041024u, &a);
    return 1u;
}
