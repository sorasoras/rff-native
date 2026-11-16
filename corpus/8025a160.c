#include "tc_rt.h"

u32 fn_8025a160(f64 param_1, s32 param_2, s32 param_3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r9 = 0, r29 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdf70u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    r0 = rd32((u32)param_3 + 0xcu);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe0u, 0u);
    r5 = rd32(0x8038eb18u);
    wrf64(0x817fdf78u, param_1);
    r31 = (u32)rd8(r5);
    if ((s32)r0 <= 509) {
        wr8(0x817fdf80u, 0u);
        wr16(0x817fdf82u, 0x20u);
        a.f[0] = param_1;
        a.r[0] = 0x817fdf80u;
        a.r[1] = 0x817fdfa8u;
        (void)tc_call(0x802584d4u, &a);
        if (rdf64(0x80576d88u) != ppc_fabs(param_1)) {
            r0 = (u32)rd8(0x817fdfadu);
            if (r0 != 0x49u) {
                if (r0 != 0x4eu) {
                    r3 = (u32)rd8(0x817fdf78u);
                    r0 = ((u32)rd8(0x817fdf79u) << 0x11u) & 0xfffe0000u;
                    wr8(0x817fdf98u, 1u);
                    r0 = (r0 & 0x1ffffffu) | ((r3 << 0x19u) & 0xfe000000u);
                    wr8(0x817fdf99u, 1u);
                    r3 = ((r0 >> 0x15u) & 0x7ffu) - 0x3ffu;
                    wr8(0x817fdf9au, 0u);
                    wr8(0x817fdf9bu, 0u);
                    r6 = rd32(0x817fdf98u);
                    wr8(0x817fdf9cu, 0u);
                    wr8(0x817fdf9du, 0x64u);
                    r0 = rd32(0x817fdf9cu);
                    wr32(0x817fdfa0u, 0u);
                    wr32(0x817fdfa4u, 1u);
                    wr32(0x817fdf88u, r6);
                    wr32(0x817fdf8cu, r0);
                    wr32(0x817fdf90u, 0u);
                    wr32(0x817fdf94u, 1u);
                    a.r[0] = r3;
                    a.r[1] = (u32)param_2;
                    a.r[2] = 0x817fdf88u;
                    r3 = tc_call(0x80259c98u, &a);
                    if ((u32)rd8((u32)param_3 + 5u) != 0x61u) {
                        r4 = r3 - 1u;
                        wr8(r3 - 1u, 0x50u);
                    } else {
                        r4 = r3 - 1u;
                        wr8(r3 - 1u, 0x70u);
                    }
                    r0 = rd32((u32)param_3 + 0xcu);
                    r9 = ((r0 << 2u) & 0xfffffffcu) + 0xbu;
                    ctr = r0;
                    if ((s32)r0 >= 1) {
                        do {
                            if ((s32)r9 >= 64) {
                                r3 = 0x30u;
                            } else {
                                r7 = (u32)((s32)r9 >> 3) - 0x7e802088u;
                                r5 = (u32)rd8(r7);
                                r6 = 7u - (r9 & 7u);
                                r3 = (((r6 & 0x20u) != 0u) ? (u32)((s32)r5 >> 31) : (u32)((s32)r5 >> (s32)(r6 & 0x1fu))) & 0xffu;
                                if ((r9 & 0xfffffff8u) != ((r9 - 4u) & 0xfffffff8u)) {
                                    r0 = ((u32)rd8(r7 - 1u) << 8u) & 0xffffff00u;
                                    r0 = ((r6 & 0x20u) != 0u) ? (u32)((s32)r0 >> 31) : (u32)((s32)r0 >> (s32)(r6 & 0x1fu));
                                    r0 = r3 | r0;
                                    r3 = r0 & 0xffu;
                                }
                                r3 = r3 & 0xfu;
                                if (r3 >= 0xau) {
                                    if ((u32)rd8((u32)param_3 + 5u) != 0x61u) {
                                        r3 = (r3 + 0x37u) & 0xffu;
                                    } else {
                                        r3 = (r3 + 0x57u) & 0xffu;
                                    }
                                } else {
                                    r3 = (r3 + 0x30u) & 0xffu;
                                }
                            }
                            wr8(r4 - 1u, (u8)r3);
                            r4 = r4 - 1u;
                            r9 = r9 - 4u;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                    if (rd32((u32)param_3 + 0xcu) != 0u || (u32)rd8((u32)param_3 + 3u) != 0u) {
                        wr8(r4 - 1u, (u8)r31);
                        r4 = r4 - 1u;
                    }
                    r0 = (u32)rd8((u32)param_3 + 5u);
                    wr8(r4 - 1u, 0x31u);
                    if (r0 != 0x61u) {
                        wr8(r4 - 2u, 0x58u);
                        r4 = r4 - 2u;
                    } else {
                        wr8(r4 - 2u, 0x78u);
                        r4 = r4 - 2u;
                    }
                    wr8(r4 - 1u, 0x30u);
                    r4 = r4 - 1u;
                    if ((u32)(s8)rd8(0x817fdfa8u) == 0u) {
                        r0 = (u32)rd8((u32)param_3 + 1u);
                        if (r0 != 1u) {
                            if (r0 == 2u) {
                                wr8(r4 - 1u, 0x20u);
                                r4 = r4 - 1u;
                            }
                        } else {
                            wr8(r4 - 1u, 0x2bu);
                            r4 = r4 - 1u;
                        }
                    } else {
                        wr8(r4 - 1u, 0x2du);
                        r4 = r4 - 1u;
                    }
                    r3 = r4;
                } else {
                    if ((u32)(s8)rd8(0x817fdfa8u) == 0u) {
                        r29 = (u32)param_2 - 4u;
                        if ((u32)rd8((u32)param_3 + 5u) != 0x41u) {
                            a.r[0] = r29;
                            a.r[1] = 0x8033d15eu;
                            (void)tc_call(0x8025bd34u, &a);
                        } else {
                            a.r[0] = r29;
                            a.r[1] = 0x8033d15au;
                            (void)tc_call(0x8025bd34u, &a);
                        }
                    } else {
                        r29 = (u32)param_2 - 5u;
                        if ((u32)rd8((u32)param_3 + 5u) != 0x41u) {
                            a.r[0] = r29;
                            a.r[1] = 0x8033d155u;
                            (void)tc_call(0x8025bd34u, &a);
                        } else {
                            a.r[0] = r29;
                            a.r[1] = 0x8033d150u;
                            (void)tc_call(0x8025bd34u, &a);
                        }
                    }
                    r3 = r29;
                }
            } else {
                if ((u32)(s8)rd8(0x817fdfa8u) == 0u) {
                    r29 = (u32)param_2 - 4u;
                    if ((u32)rd8((u32)param_3 + 5u) != 0x41u) {
                        a.r[0] = r29;
                        a.r[1] = 0x8033d14cu;
                        (void)tc_call(0x8025bd34u, &a);
                    } else {
                        a.r[0] = r29;
                        a.r[1] = 0x8033d148u;
                        (void)tc_call(0x8025bd34u, &a);
                    }
                } else {
                    r29 = (u32)param_2 - 5u;
                    if ((u32)rd8((u32)param_3 + 5u) != 0x41u) {
                        a.r[0] = r29;
                        a.r[1] = 0x8033d143u;
                        (void)tc_call(0x8025bd34u, &a);
                    } else {
                        a.r[0] = r29;
                        a.r[1] = 0x8033d13eu;
                        (void)tc_call(0x8025bd34u, &a);
                    }
                }
                r3 = r29;
            }
        } else {
            r29 = (u32)param_2 - 6u;
            a.r[0] = r29;
            a.r[1] = 0x8033d138u;
            (void)tc_call(0x8025bd34u, &a);
            r3 = r29;
        }
    } else {
        r3 = 0u;
    }
    return r3;
}
