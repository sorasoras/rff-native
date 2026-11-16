#include "tc_rt.h"

void fn_802ccc08(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0eq = 0, c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r15 = 0, r16 = 0, r17 = 0, r18 = 0, r19 = 0, r20 = 0, r21 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfb8u, 0u);
    wr32(0x817fdfbcu, 0u);
    wr32(0x817fdfc0u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = param_2;
    a.r[1] = 0x524c5954u;
    r3 = tc_call(0x802cb77cu, &a);
    if (r3 != 0u) {
        r0 = (u32)rd16(param_2 + 0xcu);
        wr32(0x817fdfb4u, param_3);
        r16 = param_2 + r0;
        r20 = 0u;
        wr32(0x817fdfa8u, 0u);
        r19 = 0u;
        r18 = 0u;
        wr32(0x817fdfacu, 0u);
        r17 = 0u;
        r15 = 0u;
        wr32(0x817fdfb0u, 0u);
        while ((s32)r15 < (s32)rd16(param_2 + 0xeu)) {
            r3 = rd32(r16);
            c0lt = (s32)r3 < 1885431089;
            do {
                if (r3 == 0x70616531u) {
                    r19 = r20;
                    r20 = rd32(r20 + 0xcu);
                } else {
                    if (!c0lt) {
                        c0lt = (s32)r3 < 1954049073;
                        if (r3 == 0x74786c31u) {
                            wr32(0x817fdfa8u, r16);
                            break;
                        }
                        if (!c0lt) {
                            c0lt = (s32)r3 < 2003723313;
                            if (r3 != 0x776e6431u) {
                                if (!c0lt) break;
                                if (r3 != 0x74787431u) break;
                            }
                        } else {
                            c0lt = (s32)r3 < 1885434673;
                            if (r3 == 0x70617331u) {
                                r20 = r19;
                                break;
                            }
                            if (!c0lt) {
                                if (r3 != 0x70696331u) break;
                            } else if (r3 != 0x70616e31u) {
                                break;
                            }
                        }
                    } else {
                        c0lt = (s32)r3 < 1735553073;
                        if (r3 == 0x67727031u) {
                            if (r18 != 0u) {
                                if (rd32(param_1 + 0x14u) == 0u || r17 != 1u) break;
                                r21 = rd32(param_1 + 0x10u);
                                a.r[0] = rd32(0x805474e0u);
                                r3 = tc_call(0x8026d490u, &a);
                                c0eq = r3 == 0u;
                                if (c0eq) {
                                    r4 = 0u;
                                } else {
                                    r4 = r3;
                                    if (!c0eq) {
                                        a.r[0] = r3;
                                        a.r[1] = r16;
                                        a.r[2] = r21;
                                        r3 = tc_call(0x802cc5ccu, &a);
                                        r4 = r3;
                                    }
                                }
                                if (r4 == 0u) break;
                                a.r[0] = rd32(param_1 + 0x14u);
                                a.r[1] = r4;
                                (void)tc_call(0x802cc848u, &a);
                                break;
                            }
                            r18 = 1u;
                            a.r[0] = rd32(0x805474e0u);
                            r3 = tc_call(0x8026d490u, &a);
                            c0eq = r3 == 0u;
                            if (c0eq) {
                                r3 = 0u;
                            } else if (!c0eq) {
                                wr32(r3 + 4u, 0u);
                                r4 = r3 + 4u;
                                wr32(r3 + 8u, 0u);
                                wr32(r3, 0u);
                                wr32(r3 + 4u, r4);
                                wr32(r3 + 8u, r4);
                            }
                            wr32(param_1 + 0x14u, r3);
                            break;
                        }
                        if (!c0lt) {
                            c0lt = (s32)r3 < 1819898929;
                            if (r3 == 0x6c797431u) {
                                r3 = (u32)rd8(r16 + 8u);
                                f0 = (f64)rdf32(r16 + 0x10u);
                                wrf32d(param_1 + 0x18u, (f64)rdf32(r16 + 0xcu));
                                wr8(param_1 + 0x20u, (u8)((((0u - r3) | r3) >> 0x1fu) & 1u));
                                wrf32d(param_1 + 0x1cu, f0);
                                break;
                            }
                            if (!c0lt) {
                                if (r3 == 0x6d617431u) {
                                    wr32(0x817fdfb0u, r16);
                                    break;
                                }
                                break;
                            }
                            if (r3 == 0x67727331u) {
                                r17 = r17 + 1u;
                                break;
                            }
                            break;
                        }
                        c0lt = (s32)r3 < 1718512689;
                        if (r3 == 0x666e6c31u) {
                            wr32(0x817fdfacu, r16);
                            break;
                        }
                        if (!c0lt) {
                            if (r3 == 0x67726531u) {
                                r17 = r17 - 1u;
                                break;
                            }
                            break;
                        }
                        if (r3 != 0x626e6431u) break;
                    }
                    a.r[0] = r3;
                    a.r[1] = r16;
                    a.r[2] = 0x817fdfa8u;
                    r3 = tc_call(0x802cd384u, &a);
                    r21 = r3;
                    if (r3 != 0u) {
                        if (rd32(param_1 + 0x10u) == 0u) {
                            wr32(param_1 + 0x10u, r3);
                        }
                        if (r20 != 0u) {
                            a.r[0] = r20;
                            a.r[1] = r3;
                            (void)tc_call(0x802d0c34u, &a);
                        }
                        r19 = r21;
                    }
                }
            } while (0);
            r15 = r15 + 1u;
            r16 = r16 + rd32(r16 + 4u);
        }
    }
    return;
}
