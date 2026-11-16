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

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

static u32 px_rec(u32 sp_, s32 param_1)
{
    u32 r0 = 0, r1 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0, t0 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(sp_ - 0x90u, sp_);
    r1 = sp_ - 0x90u;
    wr32(r1 + 0x94u, 0x817ff000u);
    wrf64(r1 + 0x80u, 0.0);
    t0 = r1 + 0x88u;
    wrf32d(t0, 0.0);
    wrf32d(t0 + 4u, 0.0);
    wr32(r1 + 0x7cu, 0u);
    wr32(r1 + 0x78u, 0u);
    wr32(r1 + 0x74u, 0u);
    wr32(r1 + 0x70u, 0u);
    if (rd32((u32)param_1 + 0x40u) == 0u) {
        r3 = 0u;
    } else {
        r4 = rd32((u32)param_1 + 0x4cu);
        if (r4 != 0u) {
            if (rd32(r4 + 0x40u) == 0u) {
                r3 = 0u;
                return r3;
            }
            r3 = rd32(r4 + 0x4cu);
            if (r3 != 0u) {
                if (rd32(r3 + 0x40u) == 0u) {
                    r3 = 0u;
                    return r3;
                }
                r4 = rd32(r3 + 0x4cu);
                if (r4 != 0u) {
                    if (rd32(r4 + 0x40u) == 0u) {
                        r3 = 0u;
                        return r3;
                    }
                    r28 = rd32(r4 + 0x4cu);
                    if (r28 != 0u) {
                        a.r[0] = r28;
                        r3 = tc_call(0x801115bcu, &a);
                        if (r3 == 0u) {
                            r3 = 0u;
                            return r3;
                        }
                        a.r[0] = r28;
                        r3 = tc_call(0x80111d7cu, &a);
                        if (r3 != 0u) {
                            a.r[0] = r28;
                            r3 = tc_call(0x80111d7cu, &a);
                            r3 = px_rec(r1, r3);
                            return r3;
                        }
                        a.r[0] = rd32(r28 + 0x48u);
                        r3 = tc_call(0x80111d84u, &a);
                        return r3;
                    }
                    a.r[0] = rd32(r4 + 0x48u);
                    r3 = tc_call(0x80111d84u, &a);
                    return r3;
                }
                r3 = rd32(r3 + 0x48u);
                a.r[0] = r3;
                r3 = tc_call(0x80111d84u, &a);
                return r3;
            }
            a.r[0] = rd32(r4 + 0x48u);
            r3 = tc_call(0x80111d84u, &a);
        } else {
            r30 = rd32((u32)param_1 + 0x48u);
            f0 = (f64)rdf32(0x80574124u);
            wrf32d(r1 + 0x10u, f0);
            wrf32d(r1 + 0xcu, f0);
            wrf32d(r1 + 8u, f0);
            wrf32d(r1 + 0x1cu, f0);
            wrf32d(r1 + 0x18u, f0);
            wrf32d(r1 + 0x14u, f0);
            wrf32d(r1 + 0x28u, f0);
            wrf32d(r1 + 0x24u, f0);
            wrf32d(r1 + 0x20u, f0);
            a.r[0] = r1 + 8u;
            (void)tc_call(0x8010fc28u, &a);
            a.r[0] = r1 + 0x14u;
            (void)tc_call(0x8010fc8cu, &a);
            r3 = r1 + 0x44u;
            r6 = rd32(r1 + 0xcu);
            r0 = rd32(r1 + 0x10u);
            wr32(r1 + 0x44u, rd32(r1 + 8u));
            wr32(r1 + 0x48u, r6);
            wr32(r1 + 0x4cu, r0);
            a.r[0] = r3;
            a.r[1] = r1 + 0x14u;
            a.r[2] = r3;
            (void)tc_call(0x802343a4u, &a);
            f3 = (f64)rdf32(r1 + 0x44u);
            r0 = 0u;
            f0 = (f64)rdf32(0x80574124u);
            f2 = (f64)rdf32(r1 + 0x48u);
            f1 = (f64)rdf32(r1 + 0x4cu);
            wrf32d(r1 + 0x20u, f3);
            wrf32d(r1 + 0x24u, f2);
            wrf32d(r1 + 0x28u, f1);
            if ((f0 == f3 && f0 == f2) && f0 == f1) {
                r0 = 1u;
            }
            if (r0 != 0u) {
                r3 = 0u;
            } else {
                a.r[0] = r1 + 0x20u;
                f1 = tc_callf(0x80234440u, &a);
                f31 = f1;
                if (f1 < (f64)rdf32(0x805707e0u)) {
                    a.r[0] = r30;
                    a.r[1] = r1 + 0x14u;
                    a.r[2] = r1 + 8u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    r3 = tc_call(rd32(rd32(r30 + 0x30u) + 0xcu), &a);
                } else {
                    r3 = r1 + 0x2cu;
                    r6 = rd32(r1 + 0xcu);
                    r0 = rd32(r1 + 0x10u);
                    wr32(r1 + 0x2cu, rd32(r1 + 8u));
                    wr32(r1 + 0x30u, r6);
                    wr32(r1 + 0x34u, r0);
                    a.r[0] = r3;
                    a.r[1] = r1 + 0x14u;
                    a.r[2] = r3;
                    (void)tc_call(0x802343a4u, &a);
                    f1 = (f64)rdf32(0x80574124u);
                    r0 = 0u;
                    if ((f1 == (f64)rdf32(r1 + 0x2cu) && f1 == (f64)rdf32(r1 + 0x30u)) && f1 == (f64)rdf32(r1 + 0x34u)) {
                        r0 = 1u;
                    }
                    if (r0 == 0u) {
                        r3 = r1 + 0x2cu;
                        a.r[0] = r3;
                        a.r[1] = r3;
                        (void)tc_call(0x802343e4u, &a);
                    }
                    r29 = 0u;
                    f3 = (f64)rdf32(0x80574124u);
                    f5 = (f64)(f32)px_fdiv(f31, (f64)rdf32(0x805707e0u));
                    f4 = (f64)rdf32(0x80574144u);
                    f2 = (f64)rdf32(r1 + 0x14u);
                    f1 = (f64)rdf32(r1 + 0x18u);
                    f0 = (f64)rdf32(r1 + 0x1cu);
                    wrf32d(r1 + 0x40u, f3);
                    f4 = (f64)(f32)(f4 + f5);
                    wrf32d(r1 + 0x3cu, f3);
                    wrf32d(r1 + 0x38u, f3);
                    wrf32d(r1 + 8u, f2);
                    wrf64(r1 + 0x68u, px_ctiw(f4, ppc_fctiwz(f4)));
                    r28 = rd32(r1 + 0x6cu);
                    wrf32d(r1 + 0xcu, f1);
                    r31 = r28 - 1u;
                    wrf32d(r1 + 0x10u, f0);
                    while ((s32)r29 < (s32)r28) {
                        r3 = r1 + 0x5cu;
                        r5 = rd32(r1 + 0x30u);
                        r0 = rd32(r1 + 0x34u);
                        f1 = (f64)rdf32(0x805707e0u);
                        wr32(r1 + 0x5cu, rd32(r1 + 0x2cu));
                        wr32(r1 + 0x60u, r5);
                        wr32(r1 + 0x64u, r0);
                        a.f[0] = f1;
                        a.r[0] = r3;
                        a.r[1] = r3;
                        (void)tc_call(0x802343c8u, &a);
                        r3 = r1 + 0x50u;
                        r6 = rd32(r1 + 0xcu);
                        r0 = rd32(r1 + 0x10u);
                        wr32(r1 + 0x50u, rd32(r1 + 8u));
                        wr32(r1 + 0x54u, r6);
                        wr32(r1 + 0x58u, r0);
                        a.r[0] = r3;
                        a.r[1] = r1 + 0x5cu;
                        a.r[2] = r3;
                        (void)tc_call(0x80234380u, &a);
                        f2 = (f64)rdf32(r1 + 0x50u);
                        f1 = (f64)rdf32(r1 + 0x54u);
                        f0 = (f64)rdf32(r1 + 0x58u);
                        wrf32d(r1 + 0x38u, f2);
                        wrf32d(r1 + 0x3cu, f1);
                        wrf32d(r1 + 0x40u, f0);
                        if (r29 == r31) {
                            a.r[0] = r1 + 0x38u;
                            f1 = tc_callf(0x8010fc28u, &a);
                            f2 = 0.0;
                        }
                        a.r[0] = r30;
                        a.r[1] = r1 + 8u;
                        a.r[2] = r1 + 0x38u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.f[0] = f1;
                        a.f[1] = f2;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        r3 = tc_call(rd32(rd32(r30 + 0x30u) + 0xcu), &a);
                        if (r3 != 0u) {
                            r3 = 1u;
                            return r3;
                        }
                        r29 = r29 + 1u;
                        f1 = (f64)rdf32(r1 + 0x3cu);
                        f0 = (f64)rdf32(r1 + 0x40u);
                        wrf32d(r1 + 8u, (f64)rdf32(r1 + 0x38u));
                        wrf32d(r1 + 0xcu, f1);
                        wrf32d(r1 + 0x10u, f0);
                    }
                    r3 = 0u;
                }
            }
        }
    }
    return r3;
}

u32 fn_801119d8(s32 param_1)
{
    return px_rec(0x817fe000u, param_1);
}
