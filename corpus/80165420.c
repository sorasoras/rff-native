#include "tc_rt.h"

void fn_80165420(u32 param_1)
{
    u32 ctr = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = 8u;
    (void)tc_call(0x80141170u, &a);
    a.r[0] = 9u;
    (void)tc_call(0x80141170u, &a);
    r3 = tc_call(0x800545e4u, &a);
    f1 = tc_lastf();
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[1] = 0x36eu;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    r3 = tc_call(0x80050dd4u, &a);
    r31 = r3;
    a.r[0] = r3;
    a.r[1] = 0u;
    (void)tc_call(0x800510bcu, &a);
    r5 = r31;
    r6 = param_1;
    r8 = 0u;
    do {
        r7 = r6;
        r9 = rd32(r5);
        ctr = 5u;
        do {
            wr8(r7, rd8(r9));
            wr8(r7 + 1u, rd8(r9 + 1u));
            wr8(r7 + 2u, rd8(r9 + 2u));
            wr8(r7 + 3u, 0u);
            wr8(r7 + 4u, rd8(r9 + 4u));
            wr8(r7 + 5u, rd8(r9 + 5u));
            wr8(r7 + 6u, rd8(r9 + 6u));
            wr8(r7 + 7u, 0u);
            wr8(r7 + 8u, rd8(r9 + 8u));
            wr8(r7 + 9u, rd8(r9 + 9u));
            wr8(r7 + 0xau, rd8(r9 + 0xau));
            wr8(r7 + 0xbu, 0u);
            wr8(r7 + 0xcu, rd8(r9 + 0xcu));
            wr8(r7 + 0xdu, rd8(r9 + 0xdu));
            wr8(r7 + 0xeu, rd8(r9 + 0xeu));
            wr8(r7 + 0xfu, 0u);
            wr8(r7 + 0x10u, rd8(r9 + 0x10u));
            wr8(r7 + 0x11u, rd8(r9 + 0x11u));
            wr8(r7 + 0x12u, rd8(r9 + 0x12u));
            wr8(r7 + 0x13u, 0u);
            wr8(r7 + 0x14u, rd8(r9 + 0x14u));
            wr8(r7 + 0x15u, rd8(r9 + 0x15u));
            r3 = (u32)rd8(r9 + 0x16u);
            r9 = r9 + 0x18u;
            wr8(r7 + 0x16u, (u8)r3);
            wr8(r7 + 0x17u, 0u);
            r7 = r7 + 0x18u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
        r8 = r8 + 1u;
        r6 = r6 + 0x78u;
        r5 = r5 + 4u;
    } while (r8 < 4u);
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
    r31 = 0u;
    do {
        a.r[0] = param_1;
        a.r[1] = r31;
        (void)tc_call(0x801655fcu, &a);
        r31 = r31 + 1u;
    } while (r31 < 4u);
    return;
}
