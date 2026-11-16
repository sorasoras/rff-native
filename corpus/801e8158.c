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

void fn_801e8158(u32 param_r3, u32 param_r4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r12 = 0, r19 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0, t3 = 0.0, t5 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
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
    wr32(0x817fdf98u, rd32(param_r3 + 0x348u));
    r30 = param_r3 + 0x34cu;
    r29 = 0u;
    do {
        a.r[0] = 0x817fdf98u;
        a.r[1] = r29;
        r3 = tc_call(0x8014a1c4u, &a);
        if ((s32)param_r4 >= (s32)r3) {
            r3 = rd32(param_r3 + 0x334u);
            r4 = ((r29 & 0x20u) != 0u) ? 0u : (1u << (r29 & 0x1fu));
            if ((r4 & r3) != 0u) {
                a.r[0] = param_r3;
                a.r[1] = r29;
                (void)tc_call(0x801e83ccu, &a);
            } else {
                wr32(param_r3 + 0x334u, r3 | r4);
                a.r[0] = 0x817fdf98u;
                a.r[1] = r29;
                f1 = tc_callf(0x8014a180u, &a);
                wrf64(0x817fdfc0u, px_ctiw(f1, ppc_fctiwz(f1)));
                r28 = rd32(0x817fdfc4u);
                if (r28 != 0xffffffffu) {
                    a.r[0] = 0x817fdf98u;
                    a.r[1] = r29;
                    r3 = tc_call(0x8014a204u, &a);
                    r27 = r3;
                    a.r[0] = 0x817fdfb4u;
                    a.r[1] = 0x817fdf98u;
                    a.r[2] = r29;
                    f1 = tc_callf(0x8014a224u, &a);
                    a.r[0] = param_r3;
                    a.r[1] = tc_lastr4();
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    r3 = tc_call(rd32(rd32(param_r3) + 0x28u), &a);
                    r0 = rd32(r3 + 4u);
                    wr32(0x817fdfa8u, rd32(r3));
                    wr32(0x817fdfacu, r0);
                    wr32(0x817fdfb0u, rd32(r3 + 8u));
                    a.r[0] = rd32(param_r3 + 0x70u);
                    a.r[1] = 0x1du;
                    r3 = tc_call(0x80031cf8u, &a);
                    if (r3 != 0u) {
                        r3 = rd32(r3 + 0x48u);
                        if (r3 != 0u) {
                            t3 = (f64)rdf32(r3 + 4u);
                            t5 = (f64)rdf32(r3 + 8u);
                            wrf32d(0x817fdf9cu, (f64)rdf32(r3));
                            wrf32d(0x817fdfa0u, t3);
                            wrf32d(0x817fdfa4u, t5);
                            a.f[0] = (f64)rdf32(0x817fdf9cu);
                            a.f[1] = (f64)rdf32(0x817fdfa4u);
                            a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
                            a.r[1] = 0u;
                            a.r[2] = 0u;
                            f1 = tc_callf(0x80089fc8u, &a);
                            r12 = rd32(param_r3);
                            wrf32d(0x817fdfa0u, f1);
                            r12 = rd32(r12 + 0x1cu);
                            a.r[0] = param_r3;
                            a.r[1] = 0x817fdfa8u;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            (void)tc_call(r12, &a);
                        }
                    }
                    if (r27 != 0u) {
                        a.r[0] = rd32(param_r3 + 0x70u);
                        a.r[1] = r27;
                        r3 = tc_call(0x80031be0u, &a);
                        if (r3 != 0u) {
                            r3 = rd32(r3 + 0x50u);
                            wrf32d(0x817fdfa8u, (f64)rdf32(r3 + 0xcu));
                            wrf32d(0x817fdfacu, (f64)rdf32(r3 + 0x1cu));
                            wrf32d(0x817fdfb0u, (f64)rdf32(r3 + 0x2cu));
                        }
                    }
                    a.r[0] = 0x817fdf98u;
                    a.r[1] = r29;
                    r3 = tc_call(0x8014a1e4u, &a);
                    r27 = r3;
                    r19 = 0u;
                    if (rd32(((r28 << 2u) & 0xfffffffcu) - 0x7fca9e94u) != 0u) {
                        a.r[0] = r28;
                        a.r[1] = 0x817fdfa8u;
                        a.r[2] = r30;
                        (void)tc_call(0x800d7908u, &a);
                        r28 = r30;
                        r19 = 1u;
                    } else {
                        a.f[0] = (f64)rdf32(0x8057632cu);
                        a.r[0] = r28;
                        a.r[1] = 0x817fdfa8u;
                        a.r[2] = 0x817fdfb4u;
                        a.r[3] = 0x804b15c0u;
                        r3 = tc_call(0x800d782cu, &a);
                        r28 = r3;
                    }
                    if (r28 != 0u) {
                        a.r[0] = r28;
                        r3 = tc_call(0x80320fe4u, &a);
                        if (r3 != 0u) {
                            a.r[1] = 0xffffffffu;
                            r3 = tc_call(0x8010b43cu, &a);
                            wr32(r28 + 0x20u, r3);
                            wr32(r28 + 0x24u, 0u);
                            if (r27 != 0xffffffffu) {
                                a.r[0] = r28;
                                a.r[1] = r27;
                                (void)tc_call(0x80157f70u, &a);
                            } else {
                                if (r19 != 0u) {
                                    a.r[0] = r28;
                                    a.r[1] = 0x78u;
                                    (void)tc_call(0x80157f70u, &a);
                                }
                            }
                        }
                    }
                }
            }
        }
        r29 = r29 + 1u;
        r30 = r30 + 0x54u;
    } while ((s32)r29 < 20);
    return;
}
