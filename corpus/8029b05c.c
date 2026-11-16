#include "tc_rt.h"

void fn_8029b05c(u32 param_1, u32 param_2, u32 param_3, s32 param_4, u32 param_5)
{
    u32 c0eq = 0, ctr = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x80295360u, &a);
    f1 = tc_lastf();
    r30 = r3;
    if (r3 == 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x80295188u, &a);
        f1 = tc_lastf();
        r30 = r3;
        if (r3 == 0u) {
            if ((u32)rd8(0x80540118u) >= 2u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0xd0001u;
                a.r[1] = 0x80394610u;
                a.r[2] = param_2;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                f1 = tc_callf(0x8028cc6cu, &a);
            }
            if (param_5 != 0u) {
                a.r[0] = param_1;
                a.r[1] = 0u;
                a.r[2] = 3u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.f[0] = f1;
                (void)tc_call(param_5, &a);
            }
            return;
        }
    }
    wr16(r3 + 0x18u, (u16)param_3);
    r4 = 0x8053f2e8u;
    r3 = 0u;
    ctr = 4u;
    for (;;) {
        if (((u32)rd8(r4 + 0xeu) & 0x80u) != 0u && (u32)rd16(r4 + 0xcu) == param_2) {
            fl_ = 1u;
            break;
        }
        r0 = (u32)rd8(r4 + 0x4au);
        r4 = r4 + 0x3cu;
        r0 = r0 & 0x80u;
        if (r0 != 0u && (u32)rd16(r4 + 0xcu) == param_2) {
            fl_ = 6u;
            break;
        }
        r0 = (u32)rd8(r4 + 0x4au);
        r4 = r4 + 0x3cu;
        r0 = r0 & 0x80u;
        if (r0 != 0u && (u32)rd16(r4 + 0xcu) == param_2) {
            fl_ = 5u;
            break;
        }
        r0 = (u32)rd8(r4 + 0x4au);
        r4 = r4 + 0x3cu;
        r0 = r0 & 0x80u;
        if (r0 != 0u && (u32)rd16(r4 + 0xcu) == param_2) {
            fl_ = 4u;
            break;
        }
        r0 = (u32)rd8(r4 + 0x4au);
        r4 = r4 + 0x3cu;
        r0 = r0 & 0x80u;
        if (r0 != 0u && (u32)rd16(r4 + 0xcu) == param_2) {
            fl_ = 3u;
            break;
        }
        r0 = (u32)rd8(r4 + 0x4au);
        r4 = r4 + 0x3cu;
        r0 = r0 & 0x80u;
        if (r0 != 0u && (u32)rd16(r4 + 0xcu) == param_2) {
            fl_ = 2u;
            break;
        }
        r3 = r3 + 5u;
        r4 = r4 + 0x3cu;
        ctr = ctr - 1u;
        if (ctr == 0u) {
            r4 = 0u;
            fl_ = 1u;
            break;
        }
    }
    if (fl_ == 6u) {
        fl_ = 0u;
    } else if (fl_ == 5u) {
        fl_ = 0u;
    } else if (fl_ == 4u) {
        fl_ = 0u;
    } else if (fl_ == 3u) {
        fl_ = 0u;
    } else if (fl_ == 2u) {
        fl_ = 0u;
    } else if (fl_ == 1u) {
        fl_ = 0u;
    }
    if (r4 != 0u) {
        c0eq = (u32)param_4 == 0u;
        if (c0eq || (!c0eq && rd32(r30) == 0u)) {
            wr32(r30, r4);
        }
        r29 = (u32)rd8(r4 + 0xeu);
        r7 = 0x8053f2e8u;
        r6 = 0u;
        r5 = 0u;
        ctr = 6u;
        for (;;) {
            if (((u32)rd8(r7 + 0xeu) & 0x80u) != 0u && (u32)rd16(r7 + 0xcu) == (u32)rd16(r4 + 0xcu)) {
                if (r6 != 0u) {
                    fl_ = 7u;
                    break;
                }
                if (r4 == r7) {
                    r6 = 1u;
                }
            }
            r0 = (u32)rd8(r7 + 0x4au);
            r7 = r7 + 0x3cu;
            r0 = r0 & 0x80u;
            if (r0 != 0u && (u32)rd16(r7 + 0xcu) == (u32)rd16(r4 + 0xcu)) {
                if (r6 != 0u) {
                    fl_ = 7u;
                    break;
                }
                if (r4 == r7) {
                    r6 = 1u;
                }
            }
            r0 = (u32)rd8(r7 + 0x4au);
            r7 = r7 + 0x3cu;
            r0 = r0 & 0x80u;
            if (r0 != 0u && (u32)rd16(r7 + 0xcu) == (u32)rd16(r4 + 0xcu)) {
                if (r6 != 0u) {
                    fl_ = 7u;
                    break;
                }
                if (r4 == r7) {
                    r6 = 1u;
                }
            }
            r0 = (u32)rd8(r7 + 0x4au);
            r7 = r7 + 0x3cu;
            r0 = r0 & 0x80u;
            if (r0 != 0u && (u32)rd16(r7 + 0xcu) == (u32)rd16(r4 + 0xcu)) {
                if (r6 != 0u) {
                    fl_ = 7u;
                    break;
                }
                if (r4 == r7) {
                    r6 = 1u;
                }
            }
            r5 = r5 + 3u;
            r7 = r7 + 0x3cu;
            ctr = ctr - 1u;
            if (ctr == 0u) {
                fl_ = 8u;
                break;
            }
        }
        do {
            if (fl_ == 8u) {
                fl_ = 0u;
            } else if (fl_ == 7u) {
                fl_ = 0u;
                break;
            }
            r7 = 0u;
        } while (0);
        if (r7 == 0u) {
            wr32(r30 + 4u, param_5);
            wr32(r30 + 8u, 0u);
            wr8(r30 + 0x81u, (u8)r29);
            wr8(r30 + 0x80u, (u8)param_4);
            if ((u32)rd8(0x80540118u) >= 4u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0xd0003u;
                a.r[1] = 0x803946d0u;
                a.r[2] = param_2;
                a.r[3] = param_3;
                a.r[4] = (u32)rd8(r30 + 0x7fu);
                a.r[5] = (u32)rd8(r30 + 0x76u);
                a.r[6] = r29;
                a.r[7] = 0u;
                f1 = tc_callf(0x8028ccccu, &a);
                r5 = 0u;
                r6 = 0u;
                r7 = 0u;
            }
            if ((u32)param_4 == 0u && (r29 & 1u) != 0u) {
                wr8(r30 + 0x76u, (u8)((u32)rd8(r30 + 0x76u) & 0xfeu));
                if ((u32)rd8(0x80540118u) >= 4u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0xd0003u;
                    a.r[1] = 0x80394728u;
                    a.r[2] = rd32(r30 + 0x14u);
                    a.r[3] = rd32(r30 + 0x10u);
                    a.r[4] = (u32)rd8(r30 + 0x76u);
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    f1 = tc_callf(0x8028cc9cu, &a);
                    r5 = 0u;
                    r6 = 0u;
                    r7 = 0u;
                }
            }
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r30;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x8029cfb0u, &a);
            f1 = tc_lastf();
            r5 = r3 & 0xffu;
            if (r5 != 1u && param_5 != 0u) {
                a.r[0] = param_1;
                a.r[1] = rd32(r30 + 8u);
                a.r[2] = r5;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.f[0] = f1;
                (void)tc_call(param_5, &a);
                wr32(r30 + 4u, 0u);
            }
        } else {
            if ((u32)rd8(0x80540118u) >= 4u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0xd0003u;
                a.r[1] = 0x8039468cu;
                a.r[2] = param_2;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                f1 = tc_callf(0x8028cc6cu, &a);
                r6 = 0u;
                r7 = 0u;
            }
            if (param_5 != 0u) {
                a.r[0] = param_1;
                a.r[1] = 0u;
                a.r[2] = 0u;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.f[0] = f1;
                (void)tc_call(param_5, &a);
            }
        }
    } else {
        if ((u32)rd8(0x80540118u) >= 2u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0xd0001u;
            a.r[1] = 0x80394648u;
            a.r[2] = param_2;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x8028cc6cu, &a);
        }
        if (param_5 != 0u) {
            a.r[0] = param_1;
            a.r[1] = 0u;
            a.r[2] = 4u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.f[0] = f1;
            (void)tc_call(param_5, &a);
        }
    }
    return;
}
