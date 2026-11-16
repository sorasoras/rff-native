#include "tc_rt.h"

void fn_80280efc(u32 param_r3, u32 param_r4)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r28 = r3;
    r31 = rd32(((param_r3 << 2u) & 0x3fcu) - 0x7faf46b0u);
    r5 = 0u;
    r30 = r31 + ((u32)rd8(r31 + 0x8c8u) * 0x60u) + 0xa0u;
    ctr = 2u;
    do {
        wr8(r30 + r5, 0u);
        r4 = r30 + r5;
        r5 = r5 + 8u;
        wr8(r4 + 1u, 0u);
        wr8(r4 + 2u, 0u);
        wr8(r4 + 3u, 0u);
        wr8(r4 + 4u, 0u);
        wr8(r4 + 5u, 0u);
        wr8(r4 + 6u, 0u);
        wr8(r4 + 7u, 0u);
        r4 = r30 + r5;
        wr8(r30 + r5, 0u);
        r5 = r5 + 8u;
        wr8(r4 + 1u, 0u);
        wr8(r4 + 2u, 0u);
        wr8(r4 + 3u, 0u);
        wr8(r4 + 4u, 0u);
        wr8(r4 + 5u, 0u);
        wr8(r4 + 6u, 0u);
        wr8(r4 + 7u, 0u);
        r4 = r30 + r5;
        wr8(r30 + r5, 0u);
        r5 = r5 + 8u;
        wr8(r4 + 1u, 0u);
        wr8(r4 + 2u, 0u);
        wr8(r4 + 3u, 0u);
        wr8(r4 + 4u, 0u);
        wr8(r4 + 5u, 0u);
        wr8(r4 + 6u, 0u);
        wr8(r4 + 7u, 0u);
        r4 = r30 + r5;
        wr8(r30 + r5, 0u);
        r5 = r5 + 8u;
        wr8(r4 + 1u, 0u);
        wr8(r4 + 2u, 0u);
        wr8(r4 + 3u, 0u);
        wr8(r4 + 4u, 0u);
        wr8(r4 + 5u, 0u);
        wr8(r4 + 6u, 0u);
        wr8(r4 + 7u, 0u);
        r4 = r30 + r5;
        wr8(r30 + r5, 0u);
        r5 = r5 + 8u;
        wr8(r4 + 1u, 0u);
        wr8(r4 + 2u, 0u);
        wr8(r4 + 3u, 0u);
        wr8(r4 + 4u, 0u);
        wr8(r4 + 5u, 0u);
        wr8(r4 + 6u, 0u);
        wr8(r4 + 7u, 0u);
        r4 = r30 + r5;
        wr8(r30 + r5, 0u);
        r5 = r5 + 8u;
        wr8(r4 + 1u, 0u);
        wr8(r4 + 2u, 0u);
        wr8(r4 + 3u, 0u);
        wr8(r4 + 4u, 0u);
        wr8(r4 + 5u, 0u);
        wr8(r4 + 6u, 0u);
        wr8(r4 + 7u, 0u);
        ctr = ctr - 1u;
    } while (ctr != 0u);
    wr16(r30, (u16)((((u32)rd8(param_r4 + 1u) & 0xffff00ffu) | (((u32)rd8(param_r4 + 2u) << 8u) & 0xff00u)) & 0x9f1fu));
    r0 = rd32(r31 + 0x8b8u);
    if (r0 == 0u || r0 == 3u || r0 == 6u) {
        wr8(r30 + 0x29u, 0u);
    } else {
        wr8(r30 + 0x29u, 0xfcu);
    }
    wr8(r30 + 0x28u, rd8(r31 + 0x8c1u));
    wr32(r31 + 0x848u, ((u32)rd8(param_r4 + 1u) >> 7u) & 1u);
    a.r[0] = 0x8050f098u;
    a.r[1] = param_r4 + 3u;
    a.r[2] = 8u;
    (void)tc_call(0x80004338u, &a);
    a.r[0] = param_r3;
    a.r[1] = param_r4 + 3u;
    a.r[2] = 8u;
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
                    wr16(r4 + 0xccu, (u16)((u32)(s16)((u32)(s16)((u32)(s16)(((u32)rd8(param_r4 + 3u) << 2u) & 0xfffffffcu) & 0xfffffffcu) | ((u32)rd8(param_r4 + 7u) & 3u)) - 0x200u));
                    r29 = r4 + 0xa0u;
                    wr16(r29 + 0x30u, (u16)((u32)(s16)((u32)(s16)((u32)(s16)(((u32)rd8(param_r4 + 4u) << 2u) & 0xfffffffcu) & 0xfffffffcu) | (((u32)rd8(param_r4 + 7u) >> 2u) & 3u)) - 0x200u));
                    wr16(r29 + 0x2eu, (u16)((u32)(s16)((u32)(s16)((u32)(s16)(((u32)rd8(param_r4 + 5u) << 2u) & 0xfffffffcu) & 0xfffffffcu) | (((u32)rd8(param_r4 + 7u) >> 4u) & 3u)) - 0x200u));
                    wr16(r29 + 0x32u, (u16)((u32)(s16)((u32)(s16)((u32)(s16)(((u32)rd8(param_r4 + 6u) << 2u) & 0xfffffffcu) & 0xfffffffcu) | (u32)((s32)rd8(param_r4 + 7u) >> 6)) - 0x200u));
                    wr8(r29 + 0x34u, rd8(param_r4 + 8u));
                    wr8(r29 + 0x35u, rd8(param_r4 + 9u));
                    wr16(r29 + 0x2au, (u16)((((u32)rd8(param_r4 + 0xbu) & 0xffff00ffu) | (((u32)rd8(param_r4 + 0xau) << 8u) & 0xff00u)) ^ 0xffffu));
                } else if (!c0lt) {
                    if ((s32)r0 < 4) {
                        r4 = r31 + ((u32)rd8(r31 + 0x8c8u) * 0x60u);
                        r29 = r4 + 0xa0u;
                        wr16(r4 + 0xccu, (u16)((u32)(s16)(((u32)rd8(param_r4 + 3u) << 2u) & 0xfffffffcu) - 0x200u));
                        wr16(r4 + 0xd0u, (u16)((u32)(s16)(((u32)rd8(param_r4 + 4u) << 2u) & 0xfffffffcu) - 0x200u));
                        wr16(r4 + 0xceu, (u16)((u32)(s16)(((u32)rd8(param_r4 + 5u) << 2u) & 0xfffffffcu) - 0x200u));
                        wr16(r4 + 0xd2u, (u16)((u32)(s16)(((u32)rd8(param_r4 + 6u) << 2u) & 0xfffffffcu) - 0x200u));
                        wr8(r4 + 0xd4u, rd8(param_r4 + 7u));
                        wr8(r4 + 0xd5u, rd8(param_r4 + 8u));
                        wr16(r4 + 0xcau, (u16)((((u32)rd8(param_r4 + 0xau) & 0xffff00ffu) | (((u32)rd8(param_r4 + 9u) << 8u) & 0xff00u)) ^ 0xffffu));
                    }
                } else if ((s32)r0 >= 1) {
                    r4 = r31 + ((u32)rd8(r31 + 0x8c8u) * 0x60u);
                    r29 = r4 + 0xa0u;
                    wr16(r4 + 0xccu, (u16)((u32)(s16)(((u32)rd8(param_r4 + 3u) << 4u) & 0x3f0u) - 0x200u));
                    wr16(r4 + 0xceu, (u16)((u32)(s16)(((u32)rd8(param_r4 + 4u) << 4u) & 0x3f0u) - 0x200u));
                    wr16(r29 + 0x30u, (u16)((u32)(s16)(((u32)(s16)((u32)((s32)rd8(param_r4 + 5u) >> 7) | ((((u32)rd8(param_r4 + 4u) >> 5u) & 6u) | (((u32)rd8(param_r4 + 3u) >> 3u) & 0x18u))) << 5u) & 0xffffffe0u) - 0x200u));
                    wr16(r29 + 0x32u, (u16)((u32)(s16)(((u32)rd8(param_r4 + 5u) << 5u) & 0x3e0u) - 0x200u));
                    wr8(r29 + 0x34u, (u8)(((((u32)((s32)rd8(param_r4 + 6u) >> 5) & 0xffffffe7u) | ((u32)((s32)rd8(param_r4 + 5u) >> 2) & 0x18u)) << 3u) & 0xf8u));
                    wr8(r29 + 0x35u, (u8)(((u32)rd8(param_r4 + 6u) << 3u) & 0xf8u));
                    wr16(r29 + 0x2au, (u16)((((u32)rd8(param_r4 + 8u) & 0xffff00ffu) | (((u32)rd8(param_r4 + 7u) << 8u) & 0xff00u)) ^ 0xffffu));
                }
                if ((u32)rd8(r31 + 0x911u) == 0u) {
                    wr8(r31 + 0x911u, 1u);
                    wr16(r31 + 0x882u, rd16(r29 + 0x2cu));
                    wr16(r31 + 0x888u, rd16(r29 + 0x2eu));
                    wr16(r31 + 0x88eu, rd16(r29 + 0x30u));
                    wr16(r31 + 0x894u, rd16(r29 + 0x32u));
                    wr8(r31 + 0x89au, rd8(r29 + 0x34u));
                    wr8(r31 + 0x89bu, rd8(r29 + 0x35u));
                }
                r4 = (u32)(s16)((u32)(s16)rd16(r29 + 0x2cu) - (u32)(s16)rd16(r31 + 0x882u));
                r3 = (u32)(s16)((u32)(s16)rd16(r29 + 0x2eu) - (u32)(s16)rd16(r31 + 0x888u));
                if ((s32)r4 >= -512) {
                    if ((s32)r4 <= 511) {
                        wr16(r29 + 0x2cu, (u16)r4);
                    } else {
                        wr16(r29 + 0x2cu, 0x1ffu);
                    }
                } else {
                    wr16(r29 + 0x2cu, 0xfe00u);
                }
                if ((s32)r3 >= -512) {
                    if ((s32)r3 <= 511) {
                        wr16(r29 + 0x2eu, (u16)r3);
                    } else {
                        wr16(r29 + 0x2eu, 0x1ffu);
                    }
                } else {
                    wr16(r29 + 0x2eu, 0xfe00u);
                }
                r4 = (u32)(s16)((u32)(s16)rd16(r29 + 0x30u) - (u32)(s16)rd16(r31 + 0x88eu));
                r3 = (u32)(s16)((u32)(s16)rd16(r29 + 0x32u) - (u32)(s16)rd16(r31 + 0x894u));
                if ((s32)r4 >= -512) {
                    if ((s32)r4 <= 511) {
                        wr16(r29 + 0x30u, (u16)r4);
                    } else {
                        wr16(r29 + 0x30u, 0x1ffu);
                    }
                } else {
                    wr16(r29 + 0x30u, 0xfe00u);
                }
                if ((s32)r3 >= -512) {
                    if ((s32)r3 <= 511) {
                        wr16(r29 + 0x32u, (u16)r3);
                    } else {
                        wr16(r29 + 0x32u, 0x1ffu);
                    }
                } else {
                    wr16(r29 + 0x32u, 0xfe00u);
                }
                r4 = (u32)(s16)((u32)rd8(r29 + 0x34u) - (u32)rd8(r31 + 0x89au));
                r3 = (u32)(s16)((u32)rd8(r29 + 0x35u) - (u32)rd8(r31 + 0x89bu));
                if ((s32)r4 >= 0) {
                    wr8(r29 + 0x34u, (u8)r4);
                } else {
                    wr8(r29 + 0x34u, 0u);
                }
                if ((s32)r3 >= 0) {
                    wr8(r29 + 0x35u, (u8)r3);
                } else {
                    wr8(r29 + 0x35u, 0u);
                }
                if ((u32)rd8(param_r3 - 0x7fa8e4ecu) != 0u) {
                    wr16(r29 + 0x30u, 0u);
                    wr16(r29 + 0x32u, 0u);
                    wr8(r29 + 0x34u, 0u);
                    wr8(r29 + 0x35u, 0u);
                }
            }
        } else {
            r3 = r31 + ((u32)rd8(r31 + 0x8c8u) * 0x60u);
            wr8(r3 + 0xd0u, rd8(param_r4 + 3u));
            wr8(r3 + 0xd1u, rd8(param_r4 + 4u));
            wr16(r3 + 0xcau, (u16)((u32)(s16)((u32)(s16)((u32)(s16)(((u32)rd8(param_r4 + 5u) << 2u) & 0xfffffffcu) & 0xfffffffcu) | (((u32)rd8(param_r4 + 8u) >> 2u) & 3u)) - (u32)(s16)rd16(r31 + 0x88eu)));
            wr16(r3 + 0xccu, (u16)((u32)(s16)((u32)(s16)((u32)(s16)(((u32)rd8(param_r4 + 6u) << 2u) & 0xfffffffcu) & 0xfffffffcu) | (((u32)rd8(param_r4 + 8u) >> 4u) & 3u)) - (u32)(s16)rd16(r31 + 0x890u)));
            wr16(r3 + 0xceu, (u16)((u32)(s16)((u32)(s16)((u32)(s16)(((u32)rd8(param_r4 + 7u) << 2u) & 0xfffffffcu) & 0xfffffffcu) | (u32)((s32)rd8(param_r4 + 8u) >> 6)) - (u32)(s16)rd16(r31 + 0x892u)));
            r0 = (u32)rd8(param_r4 + 8u);
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
        a.r[2] = 8u;
        r3 = tc_call(0x802592d8u, &a);
        if (r3 == 0u && (u32)(s8)rd8(r30 + 0x29u) == 0u) {
            wr8(r30 + 0x29u, 0xf9u);
        }
    }
    wr8(r31 + 0x8c8u, (u8)((ppc_cntlzw((u32)rd8(r31 + 0x8c8u)) >> 5u) & 0xffu));
    a.r[0] = r28;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
