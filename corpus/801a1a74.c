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

void fn_801a1a74(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    (void)tc_call(0x801e77f8u, &a);
    r3 = rd32((u32)param_1 + 0xcfcu);
    if (r3 == 0xbu && rd32((u32)param_1 + 0xd04u) == 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = param_2;
        (void)tc_call(0x801a3f64u, &a);
    } else {
        if (r3 == 0xau) {
            a.r[0] = (u32)param_1;
            a.r[1] = param_2;
            (void)tc_call(0x801a3f0cu, &a);
        } else {
            if (r3 == 0xcu && rd32((u32)param_1 + 0xd04u) == 1u) {
                a.r[0] = (u32)param_1;
                a.r[1] = param_2;
                (void)tc_call(0x801a3dd0u, &a);
            } else {
                if (r3 == 8u && rd32((u32)param_1 + 0xd04u) == 1u) {
                    a.r[0] = (u32)param_1;
                    a.r[1] = param_2;
                    a.r[2] = param_3;
                    (void)tc_call(0x801a3cb0u, &a);
                } else {
                    if (r3 == 7u && rd32((u32)param_1 + 0xd04u) == 0u) {
                        f0 = (f64)rdf32(rd32((u32)param_1 + 0x70u) + 0x54u);
                        f0 = px_ctiw(f0, ppc_fctiwz(f0));
                        wrf64(0x817fdfd0u, f0);
                        if ((s32)rd32(0x817fdfd4u) < 20) {
                            return;
                        }
                        r0 = rd32((u32)param_1 + 0x180u);
                        wr32(0x817fdfc4u, rd32((u32)param_1 + 0x17cu));
                        wr32(0x817fdfc8u, r0);
                        wr32(0x817fdfccu, rd32((u32)param_1 + 0x184u));
                        a.r[0] = 0x817fdfc4u;
                        f1 = tc_callf(0x80234440u, &a);
                        f0 = (f64)rdf32(0x805758b0u);
                        if ((f1 > f0) || (f1 == f0)) {
                            a.f[0] = (f64)rdf32((u32)param_1 + 0xd3cu);
                            a.r[0] = 0x817fdfc4u;
                            a.r[1] = 0x817fdfc4u;
                            (void)tc_call(0x802343c8u, &a);
                        }
                        wrf32d((u32)param_1 + 0x170u, (f64)rdf32(0x804890c8u));
                        wrf32d((u32)param_1 + 0x174u, (f64)rdf32(0x804890ccu));
                        wrf32d((u32)param_1 + 0x178u, (f64)rdf32(0x804890d0u));
                        wrf32d((u32)param_1 + 0x17cu, (f64)rdf32(0x817fdfc4u));
                        wrf32d((u32)param_1 + 0x180u, (f64)rdf32(0x817fdfc8u));
                        wrf32d((u32)param_1 + 0x184u, (f64)rdf32(0x817fdfccu));
                    } else {
                        if (r3 == 3u || r3 == 0x10u) {
                            r0 = rd32((u32)param_1 + 0x180u);
                            wr32(0x817fdfb8u, rd32((u32)param_1 + 0x17cu));
                            wr32(0x817fdfbcu, r0);
                            wr32(0x817fdfc0u, rd32((u32)param_1 + 0x184u));
                            a.r[0] = 0x817fdfb8u;
                            f1 = tc_callf(0x80234440u, &a);
                            f2 = (f64)rdf32((u32)param_1 + 0xd20u);
                            f31 = (f64)(f32)(f1 + (f64)rdf32((u32)param_1 + 0xd34u));
                            if (f31 > f2) {
                                f31 = f2;
                            }
                            f1 = (f64)rdf32(0x80575868u);
                            r0 = 0u;
                            if ((f1 == (f64)rdf32(0x817fdfb8u) && f1 == (f64)rdf32(0x817fdfbcu)) && f1 == (f64)rdf32(0x817fdfc0u)) {
                                r0 = 1u;
                            }
                            if (r0 == 0u) {
                                f1 = (f64)rdf32(0x80575868u);
                                r0 = 0u;
                                if ((f1 == (f64)rdf32(0x817fdfb8u) && f1 == (f64)rdf32(0x817fdfbcu)) && f1 == (f64)rdf32(0x817fdfc0u)) {
                                    r0 = 1u;
                                }
                                if (r0 == 0u) {
                                    a.r[0] = 0x817fdfb8u;
                                    a.r[1] = 0x817fdfb8u;
                                    (void)tc_call(0x802343e4u, &a);
                                }
                            }
                            a.f[0] = f31;
                            a.r[0] = 0x817fdfb8u;
                            a.r[1] = 0x817fdfb8u;
                            (void)tc_call(0x802343c8u, &a);
                            wrf32d((u32)param_1 + 0x170u, (f64)rdf32(0x804890c8u));
                            wrf32d((u32)param_1 + 0x174u, (f64)rdf32(0x804890ccu));
                            wrf32d((u32)param_1 + 0x178u, (f64)rdf32(0x804890d0u));
                            wrf32d((u32)param_1 + 0x17cu, (f64)rdf32(0x817fdfb8u));
                            wrf32d((u32)param_1 + 0x180u, (f64)rdf32(0x817fdfbcu));
                            wrf32d((u32)param_1 + 0x184u, (f64)rdf32(0x817fdfc0u));
                        } else {
                            if (r3 == 0x11u) {
                                a.r[0] = (u32)param_1;
                                (void)tc_call(0x801a4034u, &a);
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}
