#include "tc_rt.h"

u32 fn_80191b44(u32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = tc_argr(1u), r5 = tc_argr(2u), r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r30 = 0xffffffffu;
    wr32(0x817fdff4u, 0u);
    r29 = 0u;
    wr32(0x817fdff0u, 0u);
    r5 = rd32(0x80571398u);
    wr16(0x817fdfa8u, 0u);
    wr16(0x817fdfaau, 0u);
    wr16(0x817fdfacu, 0u);
    wr16(0x817fdfaeu, 0u);
    wr16(0x817fdfb0u, 0u);
    wr16(0x817fdfb2u, 0u);
    wr16(0x817fdfb4u, 0u);
    wr16(0x817fdfb6u, 0u);
    wr16(0x817fdfb8u, 0u);
    wr16(0x817fdfbau, 0u);
    wr16(0x817fdfbcu, 0u);
    wr16(0x817fdfbeu, 0u);
    wr16(0x817fdfc0u, 0u);
    wr16(0x817fdfc2u, 0u);
    wr16(0x817fdfc4u, 0u);
    wr16(0x817fdfc6u, 0u);
    wr16(0x817fdfc8u, 0u);
    wr16(0x817fdfcau, 0u);
    wr16(0x817fdfccu, 0u);
    wr16(0x817fdfceu, 0u);
    wr16(0x817fdfd0u, 0u);
    wr16(0x817fdfd2u, 0u);
    wr16(0x817fdfd4u, 0u);
    wr16(0x817fdfd6u, 0u);
    wr16(0x817fdfd8u, 0u);
    wr16(0x817fdfdau, 0u);
    wr16(0x817fdfdcu, 0u);
    wr16(0x817fdfdeu, 0u);
    wr16(0x817fdfe0u, 0u);
    wr16(0x817fdfe2u, 0u);
    wr16(0x817fdfe4u, 0u);
    wr16(0x817fdfe6u, 0u);
    r4 = rd32(r5 + 0x38u);
    r31 = (u32)rd16(r4 + 0x20cu);
    a.r[0] = 0x8049f1b0u;
    a.r[1] = r31;
    r3 = tc_call(0x8015f2b0u, &a);
    f1 = tc_lastf();
    r0 = r3 & 0xffu;
    r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
    r0 = r0 & 0x1fu;
    r3 = 0u;
    if (r0 != 0u) {
        r3 = 1u;
    }
    if (r3 == 0u) {
        a.r[0] = 0x8049f1b0u;
        a.r[1] = r31;
        r3 = tc_call(0x8015f2b0u, &a);
        f1 = tc_lastf();
        r0 = r3 & 0xffu;
        r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
        r0 = r0 & 0x1ffe0u;
        r3 = 0u;
        if (r0 != 0u) {
            r3 = 1u;
        }
        if (r3 == 0u) {
            a.r[0] = 0x8049f1b0u;
            a.r[1] = r31;
            r3 = tc_call(0x8015f2b0u, &a);
            f1 = tc_lastf();
            r0 = r3 & 0xffu;
            r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
            r0 = r0 & 0x180000u;
            r3 = 0u;
            if (r0 != 0u) {
                r3 = 1u;
            }
            if (r3 != 0u) {
                if ((s32)r31 < 37 || (s32)r31 > 84) {
                    if ((s32)r31 < 115 || (s32)r31 > 133) {
                        if ((s32)r31 < 134 || (s32)r31 > 336) {
                            if ((s32)r31 >= 337 && (s32)r31 <= 352) {
                                r29 = r31 - 0x43u;
                            }
                        } else {
                            r29 = r31 - 0x43u;
                        }
                    } else {
                        r29 = r31 - 0x43u;
                    }
                } else {
                    r29 = r31 - 0x25u;
                }
                r30 = (u32)(s8)rd8(((r29 << 4u) & 0xfffffff0u) - 0x7fb5fb9fu);
                if ((s32)r31 < 37 || (s32)r31 > 84) {
                    if ((s32)r31 < 115 || (s32)r31 > 133) {
                        if ((s32)r31 < 134 || (s32)r31 > 336) {
                            if ((s32)r31 >= 337 && (s32)r31 <= 352) {
                                r31 = r31 - 0x43u;
                            }
                        } else {
                            r31 = r31 - 0x43u;
                        }
                    } else {
                        r31 = r31 - 0x43u;
                    }
                } else {
                    r31 = r31 - 0x25u;
                }
                r29 = (u32)(s8)rd8(((r31 << 4u) & 0xfffffff0u) - 0x7fb5fb9eu);
            }
        } else {
            r3 = ((r31 - 0x1f8u) * 0x14u) - 0x7fb60e50u;
            r30 = (u32)(s8)rd8(r3 + 0x622u);
            r29 = (u32)(s8)rd8(r3 + 0x623u);
        }
    } else {
        r3 = (((r31 - 0x287u) << 4u) & 0xfffffff0u) - 0x7fb60e50u;
        r30 = (u32)(s8)rd8(r3 + 0xeu);
        r29 = (u32)(s8)rd8(r3 + 0xfu);
    }
    if ((s32)r30 >= 0) {
        a.r[0] = 0xeu;
        a.r[1] = r30;
        a.r[2] = 0u;
        r3 = tc_call(0x801412f8u, &a);
        f1 = tc_lastf();
        r31 = r3;
        a.r[0] = r30;
        r3 = tc_call(0x801a8f54u, &a);
        f1 = tc_lastf();
        r4 = r3 & 0xffu;
        r3 = 0x817fdfa8u;
        r30 = 0u;
        for (;;) {
            r0 = (u32)rd16(r31);
            if (r0 == 0u) break;
            wr16(r3, (u16)r0);
            r3 = r3 + 2u;
            r30 = r30 + 1u;
            r31 = r31 + 2u;
        }
        c0lt = (s32)r4 < 2;
        if (r4 == 2u) {
            a.r[0] = r29;
            a.r[1] = ((r30 << 1u) & 0xfffffffeu) - 0x7e802058u;
            r3 = tc_call(0x800f8d6cu, &a);
            f1 = tc_lastf();
            r30 = r30 + r3;
            a.r[0] = 0x805708c0u;
            a.r[1] = (((r30 - 1u) << 1u) & 0xfffffffeu) - 0x7e802058u;
            a.r[2] = 1u;
            r3 = tc_call(0x800f8ebcu, &a);
            f1 = tc_lastf();
        } else if (!c0lt) {
            c0lt = (s32)r4 < 4;
            if (r4 == 4u) {
                r4 = ((r30 << 1u) & 0xfffffffeu) - 0x7e802058u;
                r30 = r30 + 1u;
                a.r[0] = 0x805708c8u;
                a.r[1] = r4;
                a.r[2] = 1u;
                r3 = tc_call(0x800f8ebcu, &a);
                f1 = tc_lastf();
                a.r[0] = r29;
                a.r[1] = ((r30 << 1u) & 0xfffffffeu) - 0x7e802058u;
                r3 = tc_call(0x800f8d6cu, &a);
                f1 = tc_lastf();
            } else if (c0lt) {
                r4 = ((r30 << 1u) & 0xfffffffeu) - 0x7e802058u;
                r30 = r30 + 1u;
                a.r[0] = 0x805708c4u;
                a.r[1] = r4;
                a.r[2] = 1u;
                r3 = tc_call(0x800f8ebcu, &a);
                f1 = tc_lastf();
                a.r[0] = r29;
                a.r[1] = ((r30 << 1u) & 0xfffffffeu) - 0x7e802058u;
                r3 = tc_call(0x800f8d6cu, &a);
                f1 = tc_lastf();
            }
        } else {
            c0lt = (s32)r4 < 0;
            if (r4 != 0u && !c0lt) {
                if ((s32)r29 <= 0) {
                    r29 = r29 - ((r29 << 1u) & 0xfffffffeu);
                    r3 = 0x805708bcu;
                } else {
                    r3 = 0x805708b8u;
                }
                r4 = ((r30 << 1u) & 0xfffffffeu) - 0x7e802058u;
                r30 = r30 + 1u;
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 1u;
                r3 = tc_call(0x800f8ebcu, &a);
                f1 = tc_lastf();
                a.r[0] = r29;
                a.r[1] = ((r30 << 1u) & 0xfffffffeu) - 0x7e802058u;
                r3 = tc_call(0x800f8d6cu, &a);
                f1 = tc_lastf();
            }
        }
        a.r[0] = param_1;
        a.r[1] = 0x817fdfa8u;
        a.r[2] = 0u;
        r3 = tc_call(0x80100670u, &a);
        f1 = tc_lastf();
    }
    return 1u;
}
