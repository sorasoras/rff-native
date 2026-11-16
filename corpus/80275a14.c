#include "tc_rt.h"

void fn_80275a14(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r26 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf60u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r28 = rd32(param_1 + 4u);
    a.r[0] = param_1;
    a.r[1] = param_2;
    r3 = tc_call(0x80275d08u, &a);
    f1 = tc_lastf();
    r6 = 0u;
    r7 = 0u;
    c0lt = (s32)r3 < 0;
    if (!c0lt) {
        if (!c0lt) {
            r3 = r3 * 0xcu;
            if ((rd32(r28 + r3) & 0xff000000u) == 0u) {
                wr32(param_3, param_1);
                r4 = r28 + r3;
                wr32(param_3 + 4u, rd32(r4 + 4u));
                wr32(param_3 + 8u, rd32(r4 + 8u));
            }
        }
    } else {
        r29 = rd32(param_1 + 0x18u);
        r28 = rd32(param_1 + 4u);
        if (r29 != 0u) {
            r0 = r29 * 0xcu;
            r7 = rd32(param_1 + 0x10u);
            r3 = r28 + r0;
            r0 = rd32(r28 + r0);
            r3 = rd32(r3 + 4u);
            r0 = r0 & 0xffffffu;
            r30 = r7 + r0;
            if (r3 != 0u) {
                r0 = r3 * 0xcu;
                r3 = r28 + r0;
                r0 = rd32(r28 + r0);
                r3 = rd32(r3 + 4u);
                r0 = r0 & 0xffffffu;
                r31 = r7 + r0;
                if (r3 != 0u) {
                    r4 = r3 * 0xcu;
                    r0 = rd32(r28 + r4);
                    r4 = r28 + r4;
                    r4 = rd32(r4 + 4u);
                    r0 = r0 & 0xffffffu;
                    r26 = r7 + r0;
                    a.r[0] = param_1;
                    a.r[1] = r4;
                    a.r[2] = 0x817fdf68u;
                    a.r[3] = 0x80u;
                    r3 = tc_call(0x80275f6cu, &a);
                    f1 = tc_lastf();
                    r6 = 0u;
                    r7 = 0u;
                    r4 = r3;
                    if (r3 != 0x80u) {
                        r4 = r3 + 1u;
                        wr8(r3 - 0x7e802098u, 0x2fu);
                        r6 = 0x80u - r4;
                        r3 = r6;
                        r5 = r4 - 0x7e802098u;
                        while (r3 != 0u && (u32)(s8)rd8(r26) != 0u) {
                            r0 = (u32)rd8(r26);
                            r3 = r3 - 1u;
                            r26 = r26 + 1u;
                            wr8(r5, (u8)r0);
                            r5 = r5 + 1u;
                        }
                        r4 = r4 + (r6 - r3);
                    }
                } else {
                    r4 = 0u;
                }
                if (r4 != 0x80u) {
                    r5 = r4 + 1u;
                    wr8(r4 - 0x7e802098u, 0x2fu);
                    r6 = 0x80u - r5;
                    r4 = r6;
                    r3 = r5 - 0x7e802098u;
                    while (r4 != 0u && (u32)(s8)rd8(r31) != 0u) {
                        r0 = (u32)rd8(r31);
                        r4 = r4 - 1u;
                        r31 = r31 + 1u;
                        wr8(r3, (u8)r0);
                        r3 = r3 + 1u;
                    }
                    r4 = r5 + (r6 - r4);
                }
            } else {
                r4 = 0u;
            }
            if (r4 != 0x80u) {
                r5 = r4 + 1u;
                wr8(r4 - 0x7e802098u, 0x2fu);
                r6 = 0x80u - r5;
                r4 = r6;
                r3 = r5 - 0x7e802098u;
                while (r4 != 0u && (u32)(s8)rd8(r30) != 0u) {
                    r0 = (u32)rd8(r30);
                    r4 = r4 - 1u;
                    r30 = r30 + 1u;
                    wr8(r3, (u8)r0);
                    r3 = r3 + 1u;
                }
                r4 = r5 + (r6 - r4);
            }
        } else {
            r4 = 0u;
        }
        if (r4 != 0x80u) {
            if ((rd32(r28 + (r29 * 0xcu)) & 0xff000000u) == 0u) {
                wr8(r4 - 0x7e802098u, 0u);
            } else if (r4 != 0x7fu) {
                wr8(r4 - 0x7e802098u, 0x2fu);
                r4 = r4 + 1u;
                wr8(r4 - 0x7e802098u, 0u);
            } else {
                wr8(r4 - 0x7e802098u, 0u);
            }
        } else {
            wr8(0x817fdfe7u, 0u);
        }
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x8038f9bcu;
        a.r[1] = param_2;
        a.r[2] = 0x817fdf68u;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x80228554u, &a);
    }
    return;
}
