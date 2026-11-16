#include "tc_rt.h"

u32 fn_802b24c0(u32 param_1, u32 param_2)
{
    u32 c1lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 9u;
    if (rd32(param_2) == 0u) {
        wr32(param_2, rd32(0x8054283cu));
    }
    a.r[0] = rd32(param_2);
    r3 = tc_call(0x802b2ba8u, &a);
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = 0xfau;
        (void)tc_call(0x8000443cu, &a);
        r31 = 0u;
        a.r[0] = r30;
        a.r[1] = 0x200u;
        a.r[2] = 0x200u;
        r3 = tc_call(0x802b2c04u, &a);
        if (r3 != 0u) {
            r4 = rd32(r3 + 4u);
            wr16(param_1, (u16)((((u32)rd8(r4) << 8u) & 0xffffff00u) + (u32)rd8(r4 + 1u)));
        }
        a.r[0] = r30;
        a.r[1] = 0x201u;
        a.r[2] = 0x201u;
        r3 = tc_call(0x802b2c04u, &a);
        if (r3 != 0u) {
            r4 = rd32(r3 + 4u);
            wr16(param_1 + 2u, (u16)((((u32)rd8(r4) << 8u) & 0xffffff00u) + (u32)rd8(r4 + 1u)));
        }
        a.r[0] = r30;
        a.r[1] = 0x202u;
        a.r[2] = 0x202u;
        r3 = tc_call(0x802b2c04u, &a);
        if (r3 != 0u) {
            r4 = rd32(r3 + 4u);
            wr16(param_1 + 6u, (u16)((((u32)rd8(r4) << 8u) & 0xffffff00u) + (u32)rd8(r4 + 1u)));
        }
        a.r[0] = r30;
        a.r[1] = 0x203u;
        a.r[2] = 0x203u;
        r3 = tc_call(0x802b2c04u, &a);
        if (r3 != 0u) {
            r4 = rd32(r3 + 4u);
            wr16(param_1 + 8u, (u16)((((u32)rd8(r4) << 8u) & 0xffffff00u) + (u32)rd8(r4 + 1u)));
        }
        a.r[0] = r30;
        a.r[1] = 0x205u;
        a.r[2] = 0x205u;
        r3 = tc_call(0x802b2c04u, &a);
        if (r3 != 0u) {
            r4 = rd32(r3 + 4u);
            wr16(param_1 + 4u, (u16)((((u32)rd8(r4) << 8u) & 0xffffff00u) + (u32)rd8(r4 + 1u)));
        }
        a.r[0] = r30;
        a.r[1] = 0x204u;
        a.r[2] = 0x204u;
        r3 = tc_call(0x802b2c04u, &a);
        if (r3 != 0u) {
            r3 = rd32(r3 + 4u);
            wr8(param_1 + 0xau, rd8(r3));
        }
        a.r[0] = r30;
        a.r[1] = 0xbu;
        a.r[2] = 0xbu;
        r3 = tc_call(0x802b2c04u, &a);
        if (r3 != 0u) {
            r0 = rd32(r3);
            r4 = 0x50u;
            if (r0 < 0x50u) {
                r4 = r0;
            }
            c1lt = (s32)r4 < 0;
            r7 = rd32(r3 + 4u);
            r8 = 0u;
            if ((s32)r4 > 0) {
                r5 = r4 - 8u;
                if ((s32)r4 > 8) {
                    r6 = 0u;
                    if (!c1lt && (s32)r4 <= 2147483646) {
                        r6 = 1u;
                    }
                    if (r6 != 0u) {
                        r3 = param_1 + 0xbu;
                        ctr = ((r5 + 7u) >> 3u) & 0x1fffffffu;
                        if ((s32)r5 > 0) {
                            do {
                                r8 = r8 + 8u;
                                wr8(r3, rd8(r7));
                                wr8(r3 + 1u, rd8(r7 + 1u));
                                wr8(r3 + 2u, rd8(r7 + 2u));
                                wr8(r3 + 3u, rd8(r7 + 3u));
                                wr8(r3 + 4u, rd8(r7 + 4u));
                                wr8(r3 + 5u, rd8(r7 + 5u));
                                wr8(r3 + 6u, rd8(r7 + 6u));
                                r0 = (u32)rd8(r7 + 7u);
                                r7 = r7 + 8u;
                                wr8(r3 + 7u, (u8)r0);
                                r3 = r3 + 8u;
                                ctr = ctr - 1u;
                            } while (ctr != 0u);
                        }
                    }
                }
                r3 = param_1 + r8 + 0xbu;
                ctr = r4 - r8;
                if ((s32)r8 < (s32)r4) {
                    do {
                        r0 = (u32)rd8(r7);
                        r7 = r7 + 1u;
                        wr8(r3, (u8)r0);
                        r3 = r3 + 1u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        a.r[0] = r30;
        a.r[1] = 0x101u;
        a.r[2] = 0x101u;
        r3 = tc_call(0x802b2c04u, &a);
        if (r3 != 0u) {
            r0 = rd32(r3);
            r4 = 0x50u;
            if (r0 < 0x50u) {
                r4 = r0;
            }
            c1lt = (s32)r4 < 0;
            r7 = rd32(r3 + 4u);
            r8 = 0u;
            if ((s32)r4 > 0) {
                r5 = r4 - 8u;
                if ((s32)r4 > 8) {
                    r6 = 0u;
                    if (!c1lt && (s32)r4 <= 2147483646) {
                        r6 = 1u;
                    }
                    if (r6 != 0u) {
                        r3 = param_1 + 0x5bu;
                        ctr = ((r5 + 7u) >> 3u) & 0x1fffffffu;
                        if ((s32)r5 > 0) {
                            do {
                                r8 = r8 + 8u;
                                wr8(r3, rd8(r7));
                                wr8(r3 + 1u, rd8(r7 + 1u));
                                wr8(r3 + 2u, rd8(r7 + 2u));
                                wr8(r3 + 3u, rd8(r7 + 3u));
                                wr8(r3 + 4u, rd8(r7 + 4u));
                                wr8(r3 + 5u, rd8(r7 + 5u));
                                wr8(r3 + 6u, rd8(r7 + 6u));
                                r0 = (u32)rd8(r7 + 7u);
                                r7 = r7 + 8u;
                                wr8(r3 + 7u, (u8)r0);
                                r3 = r3 + 8u;
                                ctr = ctr - 1u;
                            } while (ctr != 0u);
                        }
                    }
                }
                r3 = param_1 + r8 + 0x5bu;
                ctr = r4 - r8;
                if ((s32)r8 < (s32)r4) {
                    do {
                        r0 = (u32)rd8(r7);
                        r7 = r7 + 1u;
                        wr8(r3, (u8)r0);
                        r3 = r3 + 1u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        a.r[0] = r30;
        a.r[1] = 0xau;
        a.r[2] = 0xau;
        r3 = tc_call(0x802b2c04u, &a);
        if (r3 == 0u) {
            return r31;
        }
        r0 = rd32(r3);
        r4 = 0x50u;
        if (r0 < 0x50u) {
            r4 = r0;
        }
        c1lt = (s32)r4 < 0;
        r7 = rd32(r3 + 4u);
        r8 = 0u;
        if ((s32)r4 <= 0) {
            return r31;
        }
        r5 = r4 - 8u;
        if ((s32)r4 > 8) {
            r6 = 0u;
            if (!c1lt && (s32)r4 <= 2147483646) {
                r6 = 1u;
            }
            if (r6 != 0u) {
                r3 = param_1 + 0xabu;
                ctr = ((r5 + 7u) >> 3u) & 0x1fffffffu;
                if ((s32)r5 > 0) {
                    do {
                        r8 = r8 + 8u;
                        wr8(r3, rd8(r7));
                        wr8(r3 + 1u, rd8(r7 + 1u));
                        wr8(r3 + 2u, rd8(r7 + 2u));
                        wr8(r3 + 3u, rd8(r7 + 3u));
                        wr8(r3 + 4u, rd8(r7 + 4u));
                        wr8(r3 + 5u, rd8(r7 + 5u));
                        wr8(r3 + 6u, rd8(r7 + 6u));
                        r0 = (u32)rd8(r7 + 7u);
                        r7 = r7 + 8u;
                        wr8(r3 + 7u, (u8)r0);
                        r3 = r3 + 8u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r3 = param_1 + r8 + 0xabu;
        ctr = r4 - r8;
        if ((s32)r8 >= (s32)r4) {
            return r31;
        }
        do {
            r0 = (u32)rd8(r7);
            r7 = r7 + 1u;
            wr8(r3, (u8)r0);
            r3 = r3 + 1u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    } else {
        wr32(param_2, 0u);
    }
    return r31;
}
