#include "tc_rt.h"

u32 fn_800818cc(s32 param_1, s32 param_2)
{
    u32 c0lt = 0, ctr = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    a.r[0] = rd32(0x804863d8u);
    r3 = tc_call(0x8006e5d4u, &a);
    if (r3 != 0u) {
        r4 = (u32)rd8(0x80499098u);
        if (r4 < 0x63u) {
            r30 = (u32)param_1 + (u32)rd16(0x80499080u);
            r31 = (u32)rd16(((r4 << 2u) & 0xfffffffcu) - 0x7fb5395cu);
            if (r30 < r31) {
                r0 = r30 & 0xffffu;
                if (r0 >= 0xffffu) {
                    r0 = 0xffffu;
                }
                r3 = 0u;
                wr16(0x80499080u, (u16)r0);
            } else {
                r0 = (r4 + 1u) & 0xffu;
                if (r0 >= 0x63u) {
                    r0 = 0x63u;
                }
                wr8(0x80499098u, (u8)r0);
                r3 = tc_call(0x80040b64u, &a);
                r8 = r3 & 3u;
                r6 = 1u;
                r7 = 0u;
                do {
                    ctr = 4u - r8;
                    if (r8 < 4u) {
                        for (;;) {
                            c0lt = (s32)r8 < 2;
                            if (r8 == 2u) {
                                r3 = (u32)rd8(0x8049909bu);
                                if (r3 < 0x63u) {
                                    r0 = (r3 + 1u) & 0xffu;
                                    if (r0 >= 0x63u) {
                                        r0 = 0x63u;
                                    }
                                    wr8(0x8049909bu, (u8)r0);
                                    r7 = r7 + 1u;
                                }
                            } else if (!c0lt) {
                                if ((s32)r8 < 4) {
                                    r3 = (u32)rd8(0x8049909cu);
                                    if (r3 < 0x63u) {
                                        r0 = (r3 + 1u) & 0xffu;
                                        if (r0 >= 0x63u) {
                                            r0 = 0x63u;
                                        }
                                        wr8(0x8049909cu, (u8)r0);
                                        r7 = r7 + 1u;
                                    }
                                }
                            } else {
                                c0lt = (s32)r8 < 0;
                                if (r8 == 0u) {
                                    r3 = (u32)rd8(0x80499099u);
                                    if (r3 < 0x63u) {
                                        r0 = (r3 + 1u) & 0xffu;
                                        if (r0 >= 0x63u) {
                                            r0 = 0x63u;
                                        }
                                        wr8(0x80499099u, (u8)r0);
                                        r7 = r7 + 1u;
                                    }
                                } else if (!c0lt) {
                                    r3 = (u32)rd8(0x8049909au);
                                    if (r3 < 0x63u) {
                                        r0 = (r3 + 1u) & 0xffu;
                                        if (r0 >= 0x63u) {
                                            r0 = 0x63u;
                                        }
                                        wr8(0x8049909au, (u8)r0);
                                        r7 = r7 + 1u;
                                    }
                                }
                            }
                            if (r7 == 3u) {
                                fl_ = 1u;
                                break;
                            }
                            r8 = r8 + 1u;
                            ctr = ctr - 1u;
                            if (ctr == 0u) {
                                fl_ = 2u;
                                break;
                            }
                        }
                        if (fl_ == 2u) {
                            fl_ = 0u;
                        } else if (fl_ == 1u) {
                            fl_ = 0u;
                            break;
                        }
                    }
                    r6 = r6 - 1u;
                    r8 = 0u;
                } while ((s32)r6 >= 0);
                (void)tc_call(0x800816b0u, &a);
                r4 = (u32)rd16(0x80499088u) + rd32(0x8049e14cu);
                if ((s32)r4 <= 0) {
                    r4 = 0u;
                }
                if ((s32)r4 >= 65535) {
                    r4 = 0xffffu;
                }
                if ((s32)r4 <= 0) {
                    r4 = 0x64u;
                }
                r4 = r4 & 0xffffu;
                if (r4 >= 0xffffu) {
                    r4 = 0xffffu;
                }
                r5 = (r30 - r31) & 0xffffu;
                wr16(0x8049908au, (u16)r4);
                wr16(0x8049908cu, 0x2710u);
                if (r5 >= 0xffffu) {
                    r5 = 0xffffu;
                }
                wr16(0x80499080u, (u16)r5);
                if ((u32)param_2 != 0u) {
                    f0 = (f64)rdf32(0x805728c8u);
                    r3 = rd32(0x804863d8u);
                    wrf32d(0x817fdfe0u, f0);
                    wrf32d(0x817fdfdcu, f0);
                    wrf32d(0x817fdfd8u, f0);
                    a.r[0] = r3;
                    a.r[1] = 0x817fdfd8u;
                    (void)tc_call(0x8019fbdcu, &a);
                    a.f[0] = (f64)rdf32(0x805728ccu);
                    a.r[0] = 0x2du;
                    a.r[1] = 0x817fdfd8u;
                    a.r[2] = 0x804b15c0u;
                    a.r[3] = 0x804890c8u;
                    (void)tc_call(0x800d783cu, &a);
                }
                r3 = 1u;
            }
        } else {
            r3 = 0u;
        }
    } else {
        r3 = 0u;
    }
    return r3;
}
