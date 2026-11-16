#include "tc_rt.h"

void fn_80230fd0(s32 param_1)
{
    u32 c0lt = 0, ca = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    u32 r11 = 0, r12 = 0, r30 = 0, sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    r30 = 0u;
    r0 = rd32(0x80571550u);
    wr32(0x8057155cu, (u32)param_1);
    if (r0 == 0u) {
        if (rd32(0x80571558u) == 0u) {
            r0 = rd32(0x80570a98u);
            if (r0 > 6u) {
                wr32(0x80570a98u, 7u);
                wr32(0x8057154cu, 1u);
                return;
            }
            r0 = (r0 << 2u) & 0xfffffffcu;
            r4 = rd32(r0 - 0x7fc7958cu);
            sw_ = r4;
            switch (sw_) {
            case 0x80231040u:
                wr32(0x80570a98u, 1u);
                break;
            case 0x8023104cu:
                if ((u32)param_1 != 0xfffffff6u) {
                    if ((u32)param_1 != 0u) {
                        wr32(0x8057154cu, 1u);
                        wr32(0x80570a98u, 7u);
                        return;
                    }
                    if (rd32(0x80571548u) != 0u) {
                        wr32(0x80570a98u, 4u);
                        break;
                    }
                    wr32(0x80570a98u, 2u);
                    break;
                }
                wr32(0x80571558u, 1u);
                a.r[0] = 0x804e0da0u;
                (void)tc_call(0x8022671cu, &a);
                a.r[0] = 0x804e0da0u;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = (rd32(0x800000f8u) >> 2u) & 0x3fffffffu;
                a.r[4] = 0x80230fc4u;
                (void)tc_call(0x8022697cu, &a);
                return;
            case 0x802310c8u:
                if ((u32)param_1 != 0x80u) {
                    wr32(0x8057154cu, 1u);
                    wr32(0x80570a98u, 6u);
                    break;
                }
                r3 = rd32(0x804e0d80u);
                r4 = rd32(0x804e0d84u);
                wr32(0x80571548u, 1u);
                wr32(0x80571564u, r4);
                wr32(0x80571560u, r3);
                wr32(0x80570a98u, 3u);
                break;
            case 0x8023110cu:
                if ((u32)param_1 != 0u) {
                    wr32(0x8057154cu, 1u);
                    wr32(0x80570a98u, 6u);
                    break;
                }
                wr32(0x80570a98u, 4u);
                break;
            case 0x80231134u:
                wr32(0x80570a98u, 5u);
                break;
            case 0x80231140u:
                if ((u32)param_1 != 0x80u) {
                    wr32(0x8057154cu, 1u);
                    wr32(0x80570a98u, 6u);
                    break;
                }
                r3 = tc_call(0x8023029cu, &a);
                r4 = tc_lastr4();
                r8 = rd32(0x80571564u);
                ca = r8 <= r4;
                r8 = r4 - r8;
                r7 = (rd32(0x800000f8u) >> 2u) & 0x3fffffffu;
                r0 = ppc_mulhwu(r7, 0x12cu) ^ 0x80000000u;
                if ((0u - (u32)((u64)~r0 + (u64)r0 + (u64)(u32)(((u64)~((u32)((u64)~rd32(0x80571560u) + (u64)r3 + (u64)ca) ^ 0x80000000u) + (u64)r0 + (u64)(r8 <= (r7 * 0x12cu))) >> 0x20ull))) == 0u) {
                    wr32(0x80570a98u, 3u);
                    break;
                }
                wr32(0x80570a98u, 6u);
                break;
            case 0x802311c8u:
                if (rd32(0x8057154cu) == 0u) {
                    if ((u32)param_1 != 0u) {
                        wr32(0x80570a98u, 7u);
                        wr32(0x8057154cu, 1u);
                        return;
                    }
                    r4 = rd32(0x804e0d84u);
                    wr32(0x80571560u, rd32(0x804e0d80u));
                    wr32(0x80571564u, r4);
                    wr32(0x80570a98u, 1u);
                    break;
                }
                wr32(0x80570a98u, 7u);
                return;
            default:
                a.r[0] = (u32)param_1;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.f[0] = 0.0;
                r3 = tc_call(sw_, &a);
                r0 = 0u;
                r4 = tc_lastr4();
                r5 = 0u;
                r6 = 0u;
                r7 = 0u;
                r8 = 0u;
                r9 = 0u;
                r10 = 0u;
                r11 = 0u;
                r12 = 0u;
                f0 = 0.0;
                f2 = 0.0;
                f3 = 0.0;
                f4 = 0.0;
                f5 = 0.0;
                f6 = 0.0;
                f7 = 0.0;
                f8 = 0.0;
                f9 = 0.0;
                f10 = 0.0;
                f11 = 0.0;
                f12 = 0.0;
                f13 = 0.0;
                ctr = 0u;
                return;
            }
        }
        r0 = rd32(0x80570a98u);
        wr32(0x80571558u, 0u);
        c0lt = (s32)r0 < 4;
        if (r0 == 4u) {
            a.r[0] = 0x804e0da0u;
            (void)tc_call(0x8022671cu, &a);
            r5 = (rd32(0x800000f8u) >> 2u) & 0x3fffffffu;
            a.r[0] = 0x804e0da0u;
            a.r[1] = 0u;
            a.r[2] = ppc_mulhwu(r5, 0x3cu);
            a.r[3] = r5 * 0x3cu;
            a.r[4] = 0x80230fc4u;
            (void)tc_call(0x8022697cu, &a);
        } else if (!c0lt) {
            c0lt = (s32)r0 < 6;
            if (r0 == 6u) {
                a.r[0] = 0x804e0dd0u;
                a.r[1] = 0x80230fd0u;
                a.r[2] = 0x804e0e5cu;
                r3 = tc_call(0x80271d50u, &a);
                r30 = r3;
            } else if (c0lt) {
                r3 = tc_call(0x8023029cu, &a);
                wr32(0x804e0d84u, tc_lastr4());
                r6 = 0x804e0d24u;
                r4 = 0u;
                wr32(0x804e0d80u, r3);
                ctr = 0x1fu;
                do {
                    r0 = rd32(r6);
                    r6 = r6 + 4u;
                    r4 = r4 + r0;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
                wr32(0x804e0d20u, r4);
                a.r[0] = 0x804e0dd0u;
                a.r[1] = 0x804e0d20u;
                a.r[2] = 0x80u;
                a.r[3] = 0x80230fd0u;
                a.r[4] = 0x804e0e5cu;
                r3 = tc_call(0x80271290u, &a);
                r30 = r3;
            }
        } else {
            c0lt = (s32)r0 < 2;
            if (r0 == 2u) {
                a.r[0] = 0x804e0dd0u;
                a.r[1] = 0x804e0d20u;
                a.r[2] = 0x80u;
                a.r[3] = 0x80230fd0u;
                a.r[4] = 0x804e0e5cu;
                r3 = tc_call(0x802711b0u, &a);
                r30 = r3;
            } else if (!c0lt) {
                a.r[0] = 0x804e0dd0u;
                a.r[1] = 0u;
                a.r[2] = 0u;
                a.r[3] = 0x80230fd0u;
                a.r[4] = 0x804e0e5cu;
                r3 = tc_call(0x80271308u, &a);
                r30 = r3;
            } else if ((s32)r0 >= 1) {
                a.r[0] = 0x80386a48u;
                a.r[1] = 0x804e0dd0u;
                a.r[2] = 3u;
                a.r[3] = 0x80230fd0u;
                a.r[4] = 0x804e0e5cu;
                r3 = tc_call(0x80271b7cu, &a);
                r30 = r3;
            }
        }
        do {
            if (r30 != 0u) {
                if (r30 != 0xfffffffdu) {
                    r0 = rd32(0x80570a98u);
                    wr32(0x8057154cu, 1u);
                    c0lt = (s32)r0 < 4;
                    if (r0 == 4u) {
                        wr32(0x80570a98u, 7u);
                    } else {
                        if (!c0lt) {
                            if ((s32)r0 >= 6) {
                                wr32(0x80570a98u, 7u);
                                break;
                            }
                        } else if ((s32)r0 < 2) {
                            wr32(0x80570a98u, 7u);
                            break;
                        }
                        wr32(0x80570a98u, 6u);
                        a.r[0] = 0x804e0dd0u;
                        a.r[1] = 0x80230fd0u;
                        a.r[2] = 0x804e0e5cu;
                        r3 = tc_call(0x80271d50u, &a);
                        r30 = r3;
                        if (r3 == 0xfffffffdu) {
                            wr32(0x80571558u, 1u);
                            a.r[0] = 0x804e0da0u;
                            (void)tc_call(0x8022671cu, &a);
                            a.r[0] = 0x804e0da0u;
                            a.r[1] = tc_lastr4();
                            a.r[2] = 0u;
                            a.r[3] = (rd32(0x800000f8u) >> 2u) & 0x3fffffffu;
                            a.r[4] = 0x80230fc4u;
                            (void)tc_call(0x8022697cu, &a);
                        }
                    }
                } else {
                    a.r[0] = 0x804e0da0u;
                    (void)tc_call(0x8022671cu, &a);
                    a.r[0] = 0x804e0da0u;
                    a.r[1] = tc_lastr4();
                    a.r[2] = 0u;
                    a.r[3] = (rd32(0x800000f8u) >> 2u) & 0x3fffffffu;
                    a.r[4] = 0x80230fc4u;
                    (void)tc_call(0x8022697cu, &a);
                    wr32(0x80571558u, 1u);
                }
            }
        } while (0);
        wr32(0x8057155cu, r30);
    } else {
        wr32(0x80571554u, 1u);
    }
    return;
}
