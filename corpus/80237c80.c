#include "tc_rt.h"

static void px_rec(u32 sp_)
{
    u32 c0lt = 0, r0 = 0, r1 = 0, r3 = 0, r4 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(sp_ - 0x10u, sp_);
    r1 = sp_ - 0x10u;
    wr32(r1 + 0x14u, 0x817ff000u);
    wr32(r1 + 0xcu, 0u);
    r3 = tc_call(0x80239be4u, &a);
    if (r3 != 0u) {
        if (rd32(0x805715c4u) == 0u) {
            r3 = tc_call(0x80239b44u, &a);
            f1 = tc_lastf();
            r0 = rd32(0x805715ccu);
            wr32(0x80571650u, r3);
            if (r0 == 0u) {
                wr32(0x80571644u, rd32(r3 + 8u));
                if (rd32(0x80571644u) == 0x20u || rd32(0x80571644u) == 0xeu || rd32(0x80571644u) == 0x23u) {
                    wr32(0x805715d4u, 0u);
                }
                if (rd32(0x805715d4u) == 0u) {
                    r0 = rd32(0x80571630u);
                    c0lt = (s32)r0 < 1;
                    if (r0 != 1u) {
                        if (!c0lt) {
                            if ((s32)r0 < 3) {
                                if (rd32(0x805715ecu) == 0u) {
                                    wr32(r3 + 0xcu, 3u);
                                    a.f[0] = f1;
                                    a.f[1] = 0.0;
                                    a.f[2] = 0.0;
                                    a.f[3] = 0.0;
                                    a.f[4] = 0.0;
                                    a.f[5] = 0.0;
                                    a.f[6] = 0.0;
                                    a.f[7] = 0.0;
                                    a.r[7] = 0u;
                                    (void)tc_call(0x80237184u, &a);
                                    return;
                                }
                                wr32(r3 + 0xcu, 0xcu);
                                return;
                            }
                        } else if ((s32)r0 >= 0) {
                            wr32(r3 + 0xcu, 1u);
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            a.f[4] = 0.0;
                            a.f[5] = 0.0;
                            a.f[6] = 0.0;
                            a.f[7] = 0.0;
                            a.r[0] = rd32(0x80571650u);
                            a.r[7] = 0u;
                            (void)tc_call(0x80237fa8u, &a);
                            return;
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
                    a.r[7] = 0u;
                    (void)tc_call(0x80237184u, &a);
                } else {
                    r0 = rd32(0x805715d4u);
                    c0lt = (s32)r0 < 4;
                    do {
                        if (r0 == 4u) {
                            wr32(r3 + 0xcu, 5u);
                            r0 = rd32(0x805715e4u);
                            wr32(0x80571630u, 1u);
                            if (r0 == 0u && rd32(0x805715e8u) == 0u) {
                                wr32(0x805715e4u, 1u);
                                a.r[0] = 0x804e5bc0u;
                                (void)tc_call(0x8022671cu, &a);
                                r3 = tc_call(0x802302b4u, &a);
                                a.r[0] = 0x804e5bc0u;
                                a.r[1] = 0x10624dd3u;
                                a.r[2] = 0u;
                                a.r[3] = r3;
                                a.r[4] = 0u;
                                a.r[5] = ((ppc_mulhwu(0x10624dd3u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 6u) & 0x3ffffffu) * 0x64u;
                                a.r[6] = 0x80237c5cu;
                                (void)tc_call(0x802269ecu, &a);
                            }
                        } else {
                            if (!c0lt) {
                                if ((s32)r0 >= 8) break;
                                if ((s32)r0 < 6) {
                                    a.r[0] = rd32(0x8057163cu);
                                    a.r[1] = 0x802355ecu;
                                    (void)tc_call(0x8023a598u, &a);
                                    break;
                                }
                            } else {
                                c0lt = (s32)r0 < 2;
                                if (r0 == 2u) {
                                    wr32(r3 + 0xcu, 0xbu);
                                    r0 = rd32(0x805715e4u);
                                    wr32(0x80571630u, 1u);
                                    if (r0 != 0u || rd32(0x805715e8u) != 0u) break;
                                    wr32(0x805715e4u, 1u);
                                    a.r[0] = 0x804e5bc0u;
                                    (void)tc_call(0x8022671cu, &a);
                                    r3 = tc_call(0x802302b4u, &a);
                                    a.r[0] = 0x804e5bc0u;
                                    a.r[1] = 0x10624dd3u;
                                    a.r[2] = 0u;
                                    a.r[3] = r3;
                                    a.r[4] = 0u;
                                    a.r[5] = ((ppc_mulhwu(0x10624dd3u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 6u) & 0x3ffffffu) * 0x64u;
                                    a.r[6] = 0x80237c5cu;
                                    (void)tc_call(0x802269ecu, &a);
                                    break;
                                }
                                if (!c0lt) {
                                    wr32(r3 + 0xcu, 4u);
                                    r0 = rd32(0x805715e4u);
                                    wr32(0x80571630u, 1u);
                                    if (r0 != 0u || rd32(0x805715e8u) != 0u) break;
                                    wr32(0x805715e4u, 1u);
                                    a.r[0] = 0x804e5bc0u;
                                    (void)tc_call(0x8022671cu, &a);
                                    r3 = tc_call(0x802302b4u, &a);
                                    a.r[0] = 0x804e5bc0u;
                                    a.r[1] = 0x10624dd3u;
                                    a.r[2] = 0u;
                                    a.r[3] = r3;
                                    a.r[4] = 0u;
                                    a.r[5] = ((ppc_mulhwu(0x10624dd3u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 6u) & 0x3ffffffu) * 0x64u;
                                    a.r[6] = 0x80237c5cu;
                                    (void)tc_call(0x802269ecu, &a);
                                    break;
                                }
                                if ((s32)r0 < 1) break;
                            }
                            wr32(r3 + 0xcu, 3u);
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            a.f[4] = 0.0;
                            a.f[5] = 0.0;
                            a.f[6] = 0.0;
                            a.f[7] = 0.0;
                            a.r[7] = 0u;
                            (void)tc_call(0x80237184u, &a);
                        }
                    } while (0);
                    wr32(0x805715d4u, 0u);
                }
            } else {
                wr32(r3 + 0xcu, 0xffffffffu);
                r4 = rd32(0x80571650u);
                wr32(0x80571650u, 0x804e5b60u);
                r12 = rd32(r4 + 0x28u);
                if (r12 != 0u) {
                    a.r[0] = 0xffffffffu;
                    a.r[1] = r4;
                    a.r[2] = 0x804e5b60u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(r12, &a);
                }
                px_rec(r1);
            }
        } else {
            wr32(0x805715c8u, 1u);
            wr32(0x80571650u, 0u);
        }
    } else {
        wr32(0x80571650u, 0u);
    }
    return;
}

void fn_80237c80(void)
{
    px_rec(0x817fe000u);
}
