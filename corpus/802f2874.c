#include "tc_rt.h"

void fn_802f2874(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r25 = 0, r27 = 0, r28 = 0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r27 = param_2;
    r28 = param_3;
    r3 = tc_call(0x8022c2b0u, &a);
    r25 = r3;
    if (rd32(param_1) != 0u) {
        if (param_4 <= param_6) {
            if (param_2 == 0u) {
                r3 = tc_call(0x802f08ccu, &a);
                a.r[0] = r3;
                r3 = tc_call(0x802f0ebcu, &a);
                r0 = rd32(param_1 + 0x14u);
                if (r3 != 0u) {
                    r3 = r3 - 0x80000000u;
                }
                c0lt = (s32)r0 < 2;
                r5 = 0u;
                if (r0 == 2u) {
                    r5 = r3;
                } else if (!c0lt) {
                    if ((s32)r0 < 4) {
                        r3 = (r3 << 1u) & 0xfffffffeu;
                        r5 = r3 + 2u;
                    }
                } else if ((s32)r0 >= 1) {
                    r5 = (r3 >> 1u) & 0x7fffffffu;
                }
            } else {
                r0 = rd32(param_1 + 0x14u);
                r3 = param_3;
                if (param_3 != 0u) {
                    r3 = param_3 - 0x80000000u;
                }
                c0lt = (s32)r0 < 2;
                r5 = 0u;
                if (r0 == 2u) {
                    r5 = r3 + param_5;
                } else if (!c0lt) {
                    if ((s32)r0 < 4) {
                        r3 = (r3 << 1u) & 0xfffffffeu;
                        r5 = ppc_mulhwu(0x24924925u, param_5);
                        r5 = (((param_5 - r5) >> 1u) & 0x7fffffffu) + r5;
                        r4 = (r5 << 1u) & 0xfffffff0u;
                        r5 = param_5 - (((r5 >> 3u) & 0x1fffffffu) * 0xeu);
                        r3 = r5 + r3;
                        r5 = r3 + r4 + 2u;
                    }
                } else if ((s32)r0 >= 1) {
                    r3 = (r3 >> 1u) & 0x7fffffffu;
                    r5 = r3 + param_5;
                }
            }
            r3 = param_3;
            if (param_3 != 0u) {
                r3 = param_3 - 0x80000000u;
            }
            c0lt = (s32)r0 < 2;
            r4 = 0u;
            if (r0 == 2u) {
                r4 = r3 + param_4;
            } else if (!c0lt) {
                if ((s32)r0 < 4) {
                    r3 = (r3 << 1u) & 0xfffffffeu;
                    r6 = ppc_mulhwu(0x24924925u, param_4);
                    r6 = (((param_4 - r6) >> 1u) & 0x7fffffffu) + r6;
                    r4 = (r6 << 1u) & 0xfffffff0u;
                    r6 = param_4 - (((r6 >> 3u) & 0x1fffffffu) * 0xeu);
                    r3 = r6 + r3;
                    r4 = r3 + r4;
                    r4 = r4 + 2u;
                }
            } else if ((s32)r0 >= 1) {
                r3 = (r3 >> 1u) & 0x7fffffffu;
                r4 = r3 + param_4;
            }
            if (param_3 != 0u) {
                r28 = param_3 - 0x80000000u;
            }
            c0lt = (s32)r0 < 2;
            r8 = 0u;
            if (r0 == 2u) {
                r8 = r28 + param_6 - 1u;
            } else if (!c0lt) {
                if ((s32)r0 < 4) {
                    r8 = param_6 - 1u;
                    r6 = ppc_mulhwu(0x24924925u, r8);
                    r6 = (((r8 - r6) >> 1u) & 0x7fffffffu) + r6;
                    r3 = (r6 << 1u) & 0xfffffff0u;
                    r6 = r8 - (((r6 >> 3u) & 0x1fffffffu) * 0xeu);
                    r8 = r6 + ((r28 << 1u) & 0xfffffffeu) + r3 + 2u;
                }
            } else if ((s32)r0 >= 1) {
                r8 = param_6 + ((r28 >> 1u) & 0x7fffffffu) - 1u;
            }
        } else {
            r3 = tc_call(0x802f08ccu, &a);
            a.r[0] = r3;
            r3 = tc_call(0x802f0ebcu, &a);
            r6 = rd32(param_1 + 0x14u);
            r0 = r3;
            r27 = 0u;
            if (r3 != 0u) {
                r0 = r3 - 0x80000000u;
            }
            c0lt = (s32)r6 < 2;
            r4 = 0u;
            if (r6 == 2u) {
                r4 = r0;
            } else if (!c0lt) {
                if ((s32)r6 < 4) {
                    r4 = ((r0 << 1u) & 0xfffffffeu) + 2u;
                }
            } else if ((s32)r6 >= 1) {
                r4 = (r0 >> 1u) & 0x7fffffffu;
            }
            r0 = r3;
            if (r3 != 0u) {
                r0 = r3 - 0x80000000u;
            }
            c0lt = (s32)r6 < 2;
            r5 = 0u;
            if (r6 == 2u) {
                r5 = r0;
            } else if (!c0lt) {
                if ((s32)r6 < 4) {
                    r5 = ((r0 << 1u) & 0xfffffffeu) + 2u;
                }
            } else if ((s32)r6 >= 1) {
                r5 = (r0 >> 1u) & 0x7fffffffu;
            }
            if (r3 != 0u) {
                r3 = r3 - 0x80000000u;
            }
            c0lt = (s32)r6 < 2;
            r8 = 0u;
            if (r6 == 2u) {
                r8 = r3 + 1u;
            } else if (!c0lt) {
                if ((s32)r6 < 4) {
                    r3 = (r3 << 1u) & 0xfffffffeu;
                    r8 = r3 + 3u;
                }
            } else if ((s32)r6 >= 1) {
                r3 = (r3 >> 1u) & 0x7fffffffu;
                r8 = r3 + 1u;
            }
        }
        wr16(0x817fdfc8u, (u16)r27);
        r0 = rd32(param_1 + 0x14u);
        c0lt = (s32)r0 < 2;
        if (r0 == 2u) {
            r7 = 0x19u;
        } else if (!c0lt) {
            if ((s32)r0 >= 4) {
                r7 = 0u;
            } else {
                r7 = 0u;
            }
        } else if ((s32)r0 >= 1) {
            r7 = 0xau;
        } else {
            r7 = 0u;
        }
        wr16(0x817fdfcau, (u16)r7);
        wr16(0x817fdfccu, (u16)((r5 >> 0x10u) & 0xffffu));
        wr16(0x817fdfceu, (u16)r5);
        wr16(0x817fdfd0u, (u16)((r8 >> 0x10u) & 0xffffu));
        wr16(0x817fdfd2u, (u16)r8);
        wr16(0x817fdfd4u, (u16)((r4 >> 0x10u) & 0xffffu));
        wr16(0x817fdfd6u, (u16)r4);
        r3 = rd32(param_1);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 0x817fdfc8u;
            (void)tc_call(0x80246338u, &a);
        }
        a.r[0] = r25;
        (void)tc_call(0x8022c2d8u, &a);
    } else {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
