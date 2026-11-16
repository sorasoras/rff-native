#include "tc_rt.h"

u32 fn_80057d6c(u32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r29 = 0, r31 = 0;
    TcArgs a = {0};
    r6 = rd32(param_1);
    while (r6 != 0u) {
        r3 = r6;
        r6 = rd32(r6);
        r31 = rd32(r3 + 8u);
        if (rd32(r31 + 0x10u) == (u32)param_2) {
            r3 = rd32(r31 + 0x18u) - 1u;
            r0 = r3 & ~(u32)((s32)r3 >> 31);
            wr32(r31 + 0x18u, r0);
            if (r0 == 0u) {
                r0 = rd32(r31 + 0x1cu);
                if (r0 == 1u || (r0 == 0u && (u32)param_3 != 0u)) {
                    r29 = rd32(r31);
                    r3 = tc_call(0x80057a90u, &a);
                    r6 = r3;
                    if (rd32(r3 + 0x10u) != 0u) {
                        r5 = rd32(r3 + 0xcu);
                        r3 = rd32(r3);
                        r6 = r6 + 0x18u;
                        a.r[0] = r3;
                        a.r[1] = r29;
                        a.r[2] = r5;
                        a.r[3] = r6;
                        (void)tc_call(0x80040e98u, &a);
                    } else {
                        if (rd32(r3 + 0x20u) != 0u) {
                            r3 = r3 + 0x24u;
                            a.r[0] = r3;
                            a.r[1] = r29;
                            (void)tc_call(0x80094ec0u, &a);
                        } else {
                            r5 = rd32(r3 + 0xcu);
                            r3 = rd32(r3);
                            r6 = r6 + 0x18u;
                            a.r[0] = r3;
                            a.r[1] = r29;
                            a.r[2] = r5;
                            a.r[3] = r6;
                            (void)tc_call(0x80040e98u, &a);
                        }
                    }
                    wr32(r31, 0u);
                    a.r[0] = param_1;
                    a.r[1] = rd32(r31 + 0x14u);
                    (void)tc_call(0x8007aff0u, &a);
                    if (r31 == 0u) {
                        r3 = 1u;
                        return r3;
                    }
                } else {
                    r3 = 0u;
                    return r3;
                }
                r3 = tc_call(0x80057a90u, &a);
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
                r3 = 1u;
                return r3;
            }
            if ((u32)param_3 != 0u) {
                r29 = rd32(r31);
                r3 = tc_call(0x80057a90u, &a);
                r6 = r3;
                if (rd32(r3 + 0x10u) != 0u) {
                    r5 = rd32(r3 + 0xcu);
                    r3 = rd32(r3);
                    r6 = r6 + 0x18u;
                    a.r[0] = r3;
                    a.r[1] = r29;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    (void)tc_call(0x80040e98u, &a);
                } else {
                    if (rd32(r3 + 0x20u) != 0u) {
                        r3 = r3 + 0x24u;
                        a.r[0] = r3;
                        a.r[1] = r29;
                        (void)tc_call(0x80094ec0u, &a);
                    } else {
                        r5 = rd32(r3 + 0xcu);
                        r3 = rd32(r3);
                        r6 = r6 + 0x18u;
                        a.r[0] = r3;
                        a.r[1] = r29;
                        a.r[2] = r5;
                        a.r[3] = r6;
                        (void)tc_call(0x80040e98u, &a);
                    }
                }
                wr32(r31, 0u);
                a.r[0] = param_1;
                a.r[1] = rd32(r31 + 0x14u);
                (void)tc_call(0x8007aff0u, &a);
                if (r31 != 0u) {
                    r3 = tc_call(0x80057a90u, &a);
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
                r3 = 1u;
                return r3;
            }
        }
    }
    r3 = 0u;
    return r3;
}
