#include "tc_rt.h"

void fn_80282610(u32 param_1, s32 param_2)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r7 = 0u;
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r31 = rd32(((param_1 << 2u) & 0x3fcu) - 0x7faf46b0u);
    r5 = r31 + ((u32)rd8(r31 + 0x8c8u) * 0x60u) + 0xa0u;
    wr32(0x817fdfe8u, r5);
    ctr = 2u;
    do {
        wr8(r5 + r7, 0u);
        r6 = r5 + r7;
        r7 = r7 + 8u;
        wr8(r6 + 1u, 0u);
        wr8(r6 + 2u, 0u);
        wr8(r6 + 3u, 0u);
        wr8(r6 + 4u, 0u);
        wr8(r6 + 5u, 0u);
        wr8(r6 + 6u, 0u);
        wr8(r6 + 7u, 0u);
        r6 = r5 + r7;
        wr8(r5 + r7, 0u);
        r7 = r7 + 8u;
        wr8(r6 + 1u, 0u);
        wr8(r6 + 2u, 0u);
        wr8(r6 + 3u, 0u);
        wr8(r6 + 4u, 0u);
        wr8(r6 + 5u, 0u);
        wr8(r6 + 6u, 0u);
        wr8(r6 + 7u, 0u);
        r6 = r5 + r7;
        wr8(r5 + r7, 0u);
        r7 = r7 + 8u;
        wr8(r6 + 1u, 0u);
        wr8(r6 + 2u, 0u);
        wr8(r6 + 3u, 0u);
        wr8(r6 + 4u, 0u);
        wr8(r6 + 5u, 0u);
        wr8(r6 + 6u, 0u);
        wr8(r6 + 7u, 0u);
        r6 = r5 + r7;
        wr8(r5 + r7, 0u);
        r7 = r7 + 8u;
        wr8(r6 + 1u, 0u);
        wr8(r6 + 2u, 0u);
        wr8(r6 + 3u, 0u);
        wr8(r6 + 4u, 0u);
        wr8(r6 + 5u, 0u);
        wr8(r6 + 6u, 0u);
        wr8(r6 + 7u, 0u);
        r6 = r5 + r7;
        wr8(r5 + r7, 0u);
        r7 = r7 + 8u;
        wr8(r6 + 1u, 0u);
        wr8(r6 + 2u, 0u);
        wr8(r6 + 3u, 0u);
        wr8(r6 + 4u, 0u);
        wr8(r6 + 5u, 0u);
        wr8(r6 + 6u, 0u);
        wr8(r6 + 7u, 0u);
        r6 = r5 + r7;
        wr8(r5 + r7, 0u);
        r7 = r7 + 8u;
        wr8(r6 + 1u, 0u);
        wr8(r6 + 2u, 0u);
        wr8(r6 + 3u, 0u);
        wr8(r6 + 4u, 0u);
        wr8(r6 + 5u, 0u);
        wr8(r6 + 6u, 0u);
        wr8(r6 + 7u, 0u);
        ctr = ctr - 1u;
    } while (ctr != 0u);
    wr16(rd32(0x817fdfe8u), (u16)((((u32)rd8((u32)param_2 + 1u) & 0xffff00ffu) | (((u32)rd8((u32)param_2 + 2u) << 8u) & 0xff00u)) & 0x9f1fu));
    if (rd32(r31 + 0x8b8u) > 8u) {
        wr8(rd32(0x817fdfe8u) + 0x29u, 0xfcu);
    } else {
        wr8(rd32(0x817fdfe8u) + 0x29u, 0u);
    }
    wr8(rd32(0x817fdfe8u) + 0x28u, rd8(r31 + 0x8c1u));
    wr32(r31 + 0x848u, ((u32)rd8((u32)param_2 + 1u) >> 7u) & 1u);
    wr16(rd32(0x817fdfe8u) + 2u, (u16)((u32)(s16)((u32)(s16)((u32)(s16)(((u32)rd8((u32)param_2 + 3u) << 2u) & 0xfffffffcu) & 0xfffffffcu) | (((u32)rd8((u32)param_2 + 1u) >> 5u) & 3u)) - (u32)(s16)rd16(r31 + 0x874u)));
    wr16(rd32(0x817fdfe8u) + 4u, (u16)((u32)(s16)((u32)(s16)((u32)(s16)(((u32)rd8((u32)param_2 + 4u) << 2u) & 0xfffffffcu) & 0xfffffffcu) | (u32)(s16)(((u32)rd8((u32)param_2 + 2u) >> 4u) & 2u)) - (u32)(s16)rd16(r31 + 0x876u)));
    wr16(rd32(0x817fdfe8u) + 6u, (u16)((u32)(s16)((u32)(s16)((u32)(s16)(((u32)rd8((u32)param_2 + 5u) << 2u) & 0xfffffffcu) & 0xfffffffcu) | (u32)(s16)(((u32)rd8((u32)param_2 + 2u) >> 5u) & 2u)) - (u32)(s16)rd16(r31 + 0x878u)));
    a.r[0] = param_1;
    a.r[1] = 0x817fdfe8u;
    a.r[2] = (u32)rd8(r31 + 0x8cbu);
    a.r[3] = (u32)param_2 + 6u;
    a.r[4] = 0xau;
    (void)tc_call(0x8028069cu, &a);
    a.r[0] = 0x8050f098u;
    a.r[1] = (u32)param_2 + 0x10u;
    a.r[2] = 6u;
    (void)tc_call(0x80004338u, &a);
    a.r[0] = param_1;
    a.r[1] = (u32)param_2 + 0x10u;
    a.r[2] = 6u;
    a.r[3] = 0u;
    (void)tc_call(0x80284864u, &a);
    if (rd32(r31 + 0x840u) != 0u) {
        r0 = (u32)rd8(r31 + 0x8c1u);
        if (r0 != 1u) {
            if (r0 == 2u) {
                r0 = (u32)rd8(r31 + 0x8c2u);
                c0lt = (s32)r0 < 2;
                if (r0 == 2u) {
                    r4 = r31 + ((u32)rd8(r31 + 0x8c8u) * 0x60u);
                    wr16(r4 + 0xccu, (u16)((u32)(s16)((u32)(s16)((u32)(s16)(((u32)rd8((u32)param_2 + 0x10u) << 2u) & 0xfffffffcu) & 0xfffffffcu) | ((u32)rd8((u32)param_2 + 0x14u) & 3u)) - 0x200u));
                    r30 = r4 + 0xa0u;
                    wr16(r30 + 0x30u, (u16)((u32)(s16)((u32)(s16)((u32)(s16)(((u32)rd8((u32)param_2 + 0x11u) << 2u) & 0xfffffffcu) & 0xfffffffcu) | (((u32)rd8((u32)param_2 + 0x14u) >> 2u) & 3u)) - 0x200u));
                    wr16(r30 + 0x2eu, (u16)((u32)(s16)((u32)(s16)((u32)(s16)(((u32)rd8((u32)param_2 + 0x12u) << 2u) & 0xfffffffcu) & 0xfffffffcu) | (((u32)rd8((u32)param_2 + 0x14u) >> 4u) & 3u)) - 0x200u));
                    wr16(r30 + 0x32u, (u16)((u32)(s16)((u32)(s16)((u32)(s16)(((u32)rd8((u32)param_2 + 0x13u) << 2u) & 0xfffffffcu) & 0xfffffffcu) | (u32)((s32)rd8((u32)param_2 + 0x14u) >> 6)) - 0x200u));
                    wr8(r30 + 0x34u, rd8((u32)param_2 + 0x15u));
                    wr8(r30 + 0x35u, 0u);
                    wr16(r30 + 0x2au, 0u);
                } else if (!c0lt) {
                    if ((s32)r0 < 4) {
                        r4 = r31 + ((u32)rd8(r31 + 0x8c8u) * 0x60u);
                        wr16(r4 + 0xccu, (u16)((u32)(s16)(((u32)rd8((u32)param_2 + 0x10u) << 2u) & 0xfffffffcu) - 0x200u));
                        r30 = r4 + 0xa0u;
                        wr16(r4 + 0xd0u, (u16)((u32)(s16)(((u32)rd8((u32)param_2 + 0x11u) << 2u) & 0xfffffffcu) - 0x200u));
                        wr16(r4 + 0xceu, (u16)((u32)(s16)(((u32)rd8((u32)param_2 + 0x12u) << 2u) & 0xfffffffcu) - 0x200u));
                        wr16(r4 + 0xd2u, (u16)((u32)(s16)(((u32)rd8((u32)param_2 + 0x13u) << 2u) & 0xfffffffcu) - 0x200u));
                        wr8(r4 + 0xd4u, rd8((u32)param_2 + 0x14u));
                        wr8(r4 + 0xd5u, rd8((u32)param_2 + 0x15u));
                        wr16(r4 + 0xcau, 0u);
                    }
                } else if ((s32)r0 >= 1) {
                    r4 = r31 + ((u32)rd8(r31 + 0x8c8u) * 0x60u);
                    r30 = r4 + 0xa0u;
                    wr16(r4 + 0xccu, (u16)((u32)(s16)(((u32)rd8((u32)param_2 + 0x10u) << 4u) & 0x3f0u) - 0x200u));
                    wr16(r4 + 0xceu, (u16)((u32)(s16)(((u32)rd8((u32)param_2 + 0x11u) << 4u) & 0x3f0u) - 0x200u));
                    r0 = (u32)(s16)(((u32)(s16)((u32)((s32)rd8((u32)param_2 + 0x12u) >> 7) | ((((u32)rd8((u32)param_2 + 0x11u) >> 5u) & 6u) | (((u32)rd8((u32)param_2 + 0x10u) >> 3u) & 0x18u))) << 5u) & 0xffffffe0u) - 0x200u;
                    wr16(r30 + 0x30u, (u16)r0);
                    wr16(r30 + 0x32u, (u16)((u32)(s16)(((u32)rd8((u32)param_2 + 0x12u) << 5u) & 0x3e0u) - 0x200u));
                    wr8(r30 + 0x34u, (u8)(((((u32)((s32)rd8((u32)param_2 + 0x13u) >> 5) & 0xffffffe7u) | ((u32)((s32)rd8((u32)param_2 + 0x12u) >> 2) & 0x18u)) << 3u) & 0xf8u));
                    wr8(r30 + 0x35u, (u8)(((u32)rd8((u32)param_2 + 0x13u) << 3u) & 0xf8u));
                    wr16(r30 + 0x2au, (u16)((((u32)rd8((u32)param_2 + 0x15u) & 0xffff00ffu) | (((u32)rd8((u32)param_2 + 0x14u) << 8u) & 0xff00u)) ^ 0xffffu));
                }
                if ((u32)rd8(r31 + 0x911u) == 0u) {
                    wr8(r31 + 0x911u, 1u);
                    wr16(r31 + 0x882u, rd16(r30 + 0x2cu));
                    wr16(r31 + 0x888u, rd16(r30 + 0x2eu));
                    wr16(r31 + 0x88eu, rd16(r30 + 0x30u));
                    wr16(r31 + 0x894u, rd16(r30 + 0x32u));
                    wr8(r31 + 0x89au, rd8(r30 + 0x34u));
                    wr8(r31 + 0x89bu, rd8(r30 + 0x35u));
                }
                r4 = (u32)(s16)((u32)(s16)rd16(r30 + 0x2cu) - (u32)(s16)rd16(r31 + 0x882u));
                r3 = (u32)(s16)((u32)(s16)rd16(r30 + 0x2eu) - (u32)(s16)rd16(r31 + 0x888u));
                if ((s32)r4 >= -512) {
                    if ((s32)r4 <= 511) {
                        wr16(r30 + 0x2cu, (u16)r4);
                    } else {
                        wr16(r30 + 0x2cu, 0x1ffu);
                    }
                } else {
                    wr16(r30 + 0x2cu, 0xfe00u);
                }
                if ((s32)r3 >= -512) {
                    if ((s32)r3 <= 511) {
                        wr16(r30 + 0x2eu, (u16)r3);
                    } else {
                        wr16(r30 + 0x2eu, 0x1ffu);
                    }
                } else {
                    wr16(r30 + 0x2eu, 0xfe00u);
                }
                r4 = (u32)(s16)((u32)(s16)rd16(r30 + 0x30u) - (u32)(s16)rd16(r31 + 0x88eu));
                r3 = (u32)(s16)((u32)(s16)rd16(r30 + 0x32u) - (u32)(s16)rd16(r31 + 0x894u));
                if ((s32)r4 >= -512) {
                    if ((s32)r4 <= 511) {
                        wr16(r30 + 0x30u, (u16)r4);
                    } else {
                        wr16(r30 + 0x30u, 0x1ffu);
                    }
                } else {
                    wr16(r30 + 0x30u, 0xfe00u);
                }
                if ((s32)r3 >= -512) {
                    if ((s32)r3 <= 511) {
                        wr16(r30 + 0x32u, (u16)r3);
                    } else {
                        wr16(r30 + 0x32u, 0x1ffu);
                    }
                } else {
                    wr16(r30 + 0x32u, 0xfe00u);
                }
                r4 = (u32)(s16)((u32)rd8(r30 + 0x34u) - (u32)rd8(r31 + 0x89au));
                r3 = (u32)(s16)((u32)rd8(r30 + 0x35u) - (u32)rd8(r31 + 0x89bu));
                if ((s32)r4 >= 0) {
                    wr8(r30 + 0x34u, (u8)r4);
                } else {
                    wr8(r30 + 0x34u, 0u);
                }
                if ((s32)r3 >= 0) {
                    wr8(r30 + 0x35u, (u8)r3);
                } else {
                    wr8(r30 + 0x35u, 0u);
                }
                if ((u32)rd8(param_1 - 0x7fa8e4ecu) != 0u) {
                    wr16(r30 + 0x30u, 0u);
                    wr16(r30 + 0x32u, 0u);
                    wr8(r30 + 0x34u, 0u);
                    wr8(r30 + 0x35u, 0u);
                }
            }
        } else {
            r3 = r31 + ((u32)rd8(r31 + 0x8c8u) * 0x60u);
            wr8(r3 + 0xd0u, rd8((u32)param_2 + 0x10u));
            wr8(r3 + 0xd1u, rd8((u32)param_2 + 0x11u));
            wr16(r3 + 0xcau, (u16)((u32)(s16)((u32)(s16)((u32)(s16)(((u32)rd8((u32)param_2 + 0x12u) << 2u) & 0xfffffffcu) & 0xfffffffcu) | (((u32)rd8((u32)param_2 + 0x15u) >> 2u) & 3u)) - (u32)(s16)rd16(r31 + 0x88eu)));
            wr16(r3 + 0xccu, (u16)((u32)(s16)((u32)(s16)((u32)(s16)(((u32)rd8((u32)param_2 + 0x13u) << 2u) & 0xfffffffcu) & 0xfffffffcu) | (((u32)rd8((u32)param_2 + 0x15u) >> 4u) & 3u)) - (u32)(s16)rd16(r31 + 0x890u)));
            wr16(r3 + 0xceu, (u16)((u32)(s16)((u32)(s16)((u32)(s16)(((u32)rd8((u32)param_2 + 0x14u) << 2u) & 0xfffffffcu) & 0xfffffffcu) | (u32)((s32)rd8((u32)param_2 + 0x15u) >> 6)) - (u32)(s16)rd16(r31 + 0x892u)));
            r0 = (u32)rd8((u32)param_2 + 0x15u);
            r0 = ~(r0 | r0);
            r0 = (r0 << 0xdu) & 0x6000u;
            r0 = (u32)rd16(r3 + 0xa0u) | r0;
            wr16(r3 + 0xa0u, (u16)r0);
            if ((u32)rd8(r31 + 0x911u) == 0u) {
                wr8(r31 + 0x911u, 1u);
                wr16(r31 + 0x882u, (u16)(s8)rd8(r3 + 0xd0u));
                wr16(r31 + 0x888u, (u16)(s8)rd8(r3 + 0xd1u));
            }
            r5 = (u32)(s16)((u32)rd8(r3 + 0xd0u) - ((u32)(s16)rd16(r31 + 0x882u) & 0xffu));
            r4 = (u32)(s16)((u32)rd8(r3 + 0xd1u) - ((u32)(s16)rd16(r31 + 0x888u) & 0xffu));
            if ((s32)r5 >= -128) {
                if ((s32)r5 <= 127) {
                    wr8(r3 + 0xd0u, (u8)r5);
                } else {
                    wr8(r3 + 0xd0u, 0x7fu);
                }
            } else {
                wr8(r3 + 0xd0u, 0x80u);
            }
            if ((s32)r4 >= -128) {
                if ((s32)r4 <= 127) {
                    wr8(r3 + 0xd1u, (u8)r4);
                } else {
                    wr8(r3 + 0xd1u, 0x7fu);
                }
            } else {
                wr8(r3 + 0xd1u, 0x80u);
            }
        }
        a.r[0] = 0x8050f098u;
        a.r[1] = 0x8038fe08u;
        a.r[2] = 6u;
        r3 = tc_call(0x802592d8u, &a);
        if (r3 == 0u) {
            r3 = rd32(0x817fdfe8u);
            if ((u32)(s8)rd8(r3 + 0x29u) == 0u) {
                wr8(r3 + 0x29u, 0xf9u);
            }
        }
    }
    r3 = tc_call(0x8022c2b0u, &a);
    wr8(r31 + 0x8c8u, (u8)((ppc_cntlzw((u32)rd8(r31 + 0x8c8u)) >> 5u) & 0xffu));
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
