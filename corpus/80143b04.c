#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

u32 fn_80143b04(u32 param_1)
{
    u32 c0gt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r30 = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1 + 0x10u;
    (void)tc_call(0x80145798u, &a);
    a.r[0] = param_1 + 0x10u;
    a.r[1] = param_1 + 0x4acu;
    (void)tc_call(0x8014596cu, &a);
    a.r[0] = param_1 + 0x10u;
    a.r[1] = param_1 + 0x53cu;
    (void)tc_call(0x8014596cu, &a);
    a.r[0] = param_1 + 0x10u;
    a.r[1] = param_1 + 0x5ccu;
    (void)tc_call(0x8014596cu, &a);
    a.r[0] = param_1 + 0x5ccu;
    (void)tc_call(0x8005250cu, &a);
    wr32(param_1 + 0x5f4u, 1u);
    a.r[0] = param_1 + 0x53cu;
    (void)tc_call(0x8005250cu, &a);
    wr32(param_1 + 0x564u, 1u);
    a.r[0] = param_1 + 0x4acu;
    (void)tc_call(0x8005250cu, &a);
    wr32(param_1 + 0x4d4u, 1u);
    a.r[0] = param_1 + 0x10u;
    (void)tc_call(0x80145468u, &a);
    r5 = rd32(param_1);
    wr32(param_1 + 0x4a0u, rd32(param_1 + 0x4a0u) + 1u);
    do {
        if (rd32(r5 + 0x50u) == 0u) {
            if (rd32(param_1 + 0x49cu) != 0u) {
                a.r[0] = r5;
                r3 = tc_call(0x8014261cu, &a);
                r30 = r3;
                r3 = tc_call(0x80040b64u, &a);
                if ((r3 - (((ppc_mulhwu(0x51eb851fu, r3) >> 5u) & 0x7ffffffu) * 0x64u)) < r30) {
                    f0 = (f64)rdf32(0x80574490u);
                    wr32(rd32(param_1) + 0x50u, 1u);
                    f2 = (f64)rdf32(param_1 + 0x10u);
                    wr32(param_1 + 0xcu, 0u);
                    if (!(f2 > f0)) {
                        f0 = (f64)(f32)(f2 - (f64)(f32)(px_b2f((u64)(rd32(rd32(param_1) + 0x2cu) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x805744c0u)));
                    } else {
                        f0 = (f64)(f32)(f2 + (f64)(f32)(px_b2f((u64)(rd32(rd32(param_1) + 0x2cu) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x805744c0u)));
                    }
                    wrf32d(param_1 + 0x10u, f0);
                    break;
                }
            }
            r5 = rd32(rd32(param_1) + 0x54u);
            a.r[0] = param_1 + 0x10u;
            a.r[1] = (u32)((s32)(((r5 >> 0x1fu) & 1u) + r5) >> 1);
            a.r[2] = r5;
            (void)tc_call(0x801455f4u, &a);
        } else {
            f3 = rdf64(0x805744c0u);
            f0 = ppc_fmadds((f64)rdf32(0x805744c8u), (f64)(f32)(px_b2f((u64)(rd32(r5 + 0x58u) ^ 0x80000000u) | 0x4330000000000000ull) - f3), (f64)(f32)(px_b2f((u64)(rd32(r5 + 0x54u) ^ 0x80000000u) | 0x4330000000000000ull) - f3));
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            a.r[0] = param_1 + 0x10u;
            a.r[1] = (u32)px_f2b(f0);
            a.r[2] = 0x64u;
            (void)tc_call(0x801455f4u, &a);
        }
    } while (0);
    a.r[0] = param_1 + 0x10u;
    (void)tc_call(0x80145798u, &a);
    a.r[0] = param_1 + 0x10u;
    (void)tc_call(0x801454e4u, &a);
    r5 = rd32(0x803541bcu);
    if (r5 != 0u) {
        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r0 != 1u) {
            if (r0 != 2u) {
                r4 = 0u;
            } else {
                r4 = rd32(0x80354174u);
            }
        } else {
            r4 = rd32(0x80354140u);
        }
    } else {
        r4 = 0u;
    }
    if (r5 != 0u) {
        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r0 != 1u) {
            if (r0 != 2u) {
                r0 = 0u;
            } else {
                r0 = r4 & rd32(rd32(0x803541a8u));
            }
        } else {
            r0 = r4 & rd32(rd32(0x80354198u));
        }
    } else {
        r0 = 0u;
    }
    do {
        if (r0 == 0u) {
            if (r5 != 0u) {
                r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                if (r0 != 1u) {
                    if (r0 != 2u) {
                        r4 = 0u;
                    } else {
                        r4 = rd32(0x80354190u);
                    }
                } else {
                    r4 = rd32(0x8035415cu);
                }
            } else {
                r4 = 0u;
            }
            if (r5 != 0u) {
                r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                if (r0 != 1u) {
                    if (r0 != 2u) {
                        r0 = 0u;
                    } else {
                        r0 = r4 & rd32(rd32(0x803541a8u));
                    }
                } else {
                    r0 = r4 & rd32(rd32(0x80354198u));
                }
            } else {
                r0 = 0u;
            }
            if (r0 == 0u) break;
        }
        if (rd32(param_1 + 0x65cu) == 0u) {
            c0gt = (f64)rdf32(param_1 + 0x10u) > (f64)rdf32(0x80574490u);
            wr32(param_1 + 0x65cu, rd32(param_1 + 0x4a0u));
            if (!c0gt) {
                wrf32d(param_1 + 0x10u, (f64)rdf32(0x805744d0u));
            } else {
                wrf32d(param_1 + 0x10u, (f64)rdf32(0x805744ccu));
            }
        }
    } while (0);
    r3 = rd32(param_1 + 0x65cu);
    if (r3 != 0u) {
        if (!((f64)rdf32(param_1 + 0x10u) > (f64)rdf32(0x80574490u))) {
            wrf32d(param_1 + 0x10u, (f64)(f32)((f64)rdf32(0x805744d0u) + (f64)(f32)(px_b2f((u64)((rd32(param_1 + 0x4a0u) - r3) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x805744c0u))));
        } else {
            wrf32d(param_1 + 0x10u, (f64)(f32)((f64)rdf32(0x805744ccu) - (f64)(f32)(px_b2f((u64)((rd32(param_1 + 0x4a0u) - r3) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x805744c0u))));
        }
        if ((rd32(param_1 + 0x65cu) + 0xau) == rd32(param_1 + 0x4a0u)) {
            a.r[0] = param_1 + 0x10u;
            r3 = tc_call(0x80145758u, &a);
            wr32(param_1 + 0xcu, r3);
            r0 = 0x64u;
            r4 = rd32(param_1);
            wr32(r4 + 0x40u, rd32(r4 + 0x40u) - 1u);
            r4 = rd32(param_1 + 0xcu);
            r3 = r4 & ~(u32)((s32)r4 >> 31);
            wr32(param_1 + 0xcu, r3);
            if ((s32)r3 <= 100) {
                r0 = r3;
            }
            wr32(param_1 + 0xcu, r0);
            r3 = 0u;
            return r3;
        }
    }
    a.r[0] = 0xe0u;
    r3 = tc_call(0x800a8624u, &a);
    if (r3 == 0u || rd32(param_1 + 0x65cu) != 0u) {
        if ((s32)rd32(param_1 + 0x4a0u) <= 600) {
            r5 = rd32(0x803541bcu);
            if (r5 != 0u) {
                r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                if (r0 != 1u) {
                    if (r0 != 2u) {
                        r4 = 0u;
                    } else {
                        r4 = rd32(0x80354178u);
                    }
                } else {
                    r4 = rd32(0x80354144u);
                }
            } else {
                r4 = 0u;
            }
            if (r5 != 0u) {
                r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                if (r0 != 1u) {
                    if (r0 != 2u) {
                        r0 = 0u;
                    } else {
                        r0 = r4 & rd32(rd32(0x803541a8u));
                    }
                } else {
                    r0 = r4 & rd32(rd32(0x80354198u));
                }
            } else {
                r0 = 0u;
            }
            if (r0 == 0u) {
                r3 = 1u;
                return r3;
            }
        }
        r3 = 0u;
        wr32(param_1 + 0xcu, 0u);
    } else {
        a.r[0] = param_1 + 0x10u;
        r3 = tc_call(0x80145758u, &a);
        wr32(param_1 + 0xcu, r3);
        r0 = 0x64u;
        r4 = rd32(param_1);
        wr32(r4 + 0x40u, rd32(r4 + 0x40u) - 1u);
        r4 = rd32(param_1 + 0xcu);
        r3 = r4 & ~(u32)((s32)r4 >> 31);
        wr32(param_1 + 0xcu, r3);
        if ((s32)r3 <= 100) {
            r0 = r3;
        }
        wr32(param_1 + 0xcu, r0);
        r3 = 0u;
    }
    return r3;
}
