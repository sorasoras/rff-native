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

u32 fn_801479b8(s32 param_1, s32 param_2)
{
    u32 c0eq = 0, c0gt = 0, c0lt = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r28 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdec0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe0u, 0u);
    r5 = rd32((u32)param_2 + 4u) + 1u;
    r0 = rd32((u32)param_2 + 8u) - 1u;
    wr32((u32)param_2 + 8u, r0);
    wr32((u32)param_2 + 4u, r5);
    if ((s32)r5 < 0) {
        r3 = 1u;
    } else {
        if ((s32)r0 <= 0) {
            r3 = 0u;
        } else {
            f1 = (f64)rdf32((u32)param_2 + 0x2cu);
            r30 = 1u;
            f2 = -(f64)rdf32((u32)param_2 + 0x34u);
            r0 = rd32((u32)param_2 + 0x14u);
            f0 = (f64)rdf32(0x805745f0u);
            wr32(0x817fdeccu, rd32((u32)param_2 + 0x10u));
            wr32(0x817fded0u, r0);
            r0 = rd32((u32)param_2 + 0x18u);
            wrf32d(0x817fdf58u, f0);
            wrf32d(0x817fdf5cu, f2);
            wrf32d(0x817fdf60u, f0);
            wr32(0x817fded4u, r0);
            a.f[0] = f1;
            a.r[0] = 0x817fdeccu;
            a.r[1] = 0x817fdeccu;
            (void)tc_call(0x802343c8u, &a);
            r6 = rd32(0x817fdf58u);
            r5 = rd32(0x817fdf5cu);
            wr32(0x817fdfccu, rd32((u32)param_2 + 4u) ^ 0x80000000u);
            r0 = rd32(0x817fdf60u);
            wr32(0x817fdfc8u, 0x43300000u);
            f1 = rdf64(0x80574628u);
            f0 = rdf64(0x817fdfc8u);
            wr32(0x817fded8u, r6);
            f1 = (f64)(f32)(f0 - f1);
            wr32(0x817fdedcu, r5);
            wr32(0x817fdee0u, r0);
            a.f[0] = f1;
            a.r[0] = 0x817fded8u;
            a.r[1] = 0x817fded8u;
            (void)tc_call(0x802343c8u, &a);
            r6 = rd32(0x817fdedcu);
            r0 = rd32(0x817fdee0u);
            wr32(0x817fdf4cu, rd32(0x817fded8u));
            wr32(0x817fdf50u, r6);
            wr32(0x817fdf54u, r0);
            a.r[0] = 0x817fdf4cu;
            a.r[1] = 0x817fdeccu;
            a.r[2] = 0x817fdf4cu;
            (void)tc_call(0x80234380u, &a);
            f1 = (f64)(f32)((f64)rdf32((u32)param_2 + 0x2cu) * (f64)rdf32((u32)param_2 + 0x30u));
            c0lt = f1 < rdf64(0x80574608u);
            wrf32d((u32)param_2 + 0x2cu, f1);
            if (c0lt) {
                wrf32d((u32)param_2 + 0x2cu, (f64)rdf32(0x80574610u));
            }
            r31 = rd32((u32)param_1 + 0x50u);
            a.r[0] = 0x817fdf98u;
            a.r[1] = (u32)param_2 + 0x1cu;
            (void)tc_call(0x80233d84u, &a);
            a.r[0] = r31;
            a.r[1] = 0x817fdf98u;
            a.r[2] = r31;
            (void)tc_call(0x802337a0u, &a);
            f0 = (f64)rdf32(0x805745f0u);
            wrf32d(0x817fdf48u, f0);
            wrf32d(0x817fdf44u, f0);
            wrf32d(0x817fdf40u, f0);
            wrf32d(0x817fdf40u, (f64)rdf32(r31 + 0xcu));
            wrf32d(0x817fdf44u, (f64)rdf32(r31 + 0x1cu));
            wrf32d(0x817fdf48u, (f64)rdf32(r31 + 0x2cu));
            a.r[0] = 0x817fdf40u;
            a.r[1] = 0x817fdf4cu;
            a.r[2] = 0x817fdf40u;
            (void)tc_call(0x80234380u, &a);
            wrf32d(r31 + 0xcu, (f64)rdf32(0x817fdf40u));
            wrf32d(r31 + 0x1cu, (f64)rdf32(0x817fdf44u));
            wrf32d(r31 + 0x2cu, (f64)rdf32(0x817fdf48u));
            r0 = rd32(r31 + 4u);
            wr32(0x817fdf68u, rd32(r31));
            wr32(0x817fdf6cu, r0);
            r0 = rd32(r31 + 0xcu);
            wr32(0x817fdf70u, rd32(r31 + 8u));
            wr32(0x817fdf74u, r0);
            r0 = rd32(r31 + 0x14u);
            wr32(0x817fdf78u, rd32(r31 + 0x10u));
            wr32(0x817fdf7cu, r0);
            r0 = rd32(r31 + 0x1cu);
            wr32(0x817fdf80u, rd32(r31 + 0x18u));
            wr32(0x817fdf84u, r0);
            r0 = rd32(r31 + 0x24u);
            wr32(0x817fdf88u, rd32(r31 + 0x20u));
            wr32(0x817fdf8cu, r0);
            r0 = rd32(r31 + 0x2cu);
            wr32(0x817fdf90u, rd32(r31 + 0x28u));
            wr32(0x817fdf94u, r0);
            r3 = rd32((u32)param_1 + 0x40u);
            if (r3 != 0u) {
                r3 = rd32(r3 + 0x20u);
                r28 = r3 + 0x40u;
            } else {
                r28 = rd32((u32)param_1 + 0x54u);
            }
            f0 = (f64)rdf32(0x805745f0u);
            f2 = (f64)rdf32(0x805745f8u);
            wrf32d(0x817fdf3cu, f0);
            wrf32d(0x817fdf38u, f0);
            wrf32d(0x817fdf34u, f0);
            f1 = (f64)rdf32(r28);
            wrf32d(0x817fdf34u, ppc_fmadds(f2, (f64)(f32)((f64)rdf32(r28 + 0xcu) - f1), f1));
            f1 = (f64)rdf32(r28 + 4u);
            wrf32d(0x817fdf38u, ppc_fmadds(f2, (f64)(f32)((f64)rdf32(r28 + 0x10u) - f1), f1));
            f1 = (f64)rdf32(r28 + 8u);
            wrf32d(0x817fdf3cu, ppc_fmadds(f2, (f64)(f32)((f64)rdf32(r28 + 0x14u) - f1), f1));
            a.r[0] = 0x817fdf34u;
            a.r[1] = 0x817fdf68u;
            a.r[2] = 0x817fdf34u;
            (void)tc_call(0x80042474u, &a);
            f0 = (f64)rdf32(0x805745f0u);
            wrf32d(0x817fdf30u, f0);
            wrf32d(0x817fdf2cu, f0);
            wrf32d(0x817fdf28u, f0);
            a.r[0] = r28 + 0xcu;
            a.r[1] = r28;
            a.r[2] = 0x817fdf28u;
            (void)tc_call(0x802343a4u, &a);
            r0 = rd32(0x80471a18u) * 0x4150u;
            f2 = (f64)rdf32(0x817fdf3cu);
            f1 = (f64)rdf32(0x817fdf34u);
            f31 = (f64)(f32)((f64)rdf32(0x817fdf2cu) * rdf64(0x80574618u));
            wrf32d(0x817fdec8u, (f64)rdf32(0x805745f0u));
            a.f[0] = f1;
            a.f[1] = f2;
            a.r[0] = r0 - 0x7fb92738u;
            a.r[1] = 0u;
            a.r[2] = 0u;
            f1 = tc_callf(0x80089fc8u, &a);
            f2 = (f64)(f32)f1;
            f0 = (f64)rdf32(0x80574620u);
            wrf32d(0x817fdec8u, f1);
            c0gt = f2 > f0;
            c0eq = f2 == f0;
            f0 = f1;
            c0eq = c0gt || c0eq;
            if (c0eq) {
                f0 = (f64)rdf32(0x805745f0u);
                wrf32d(0x817fdec8u, f0);
            }
            f0 = (f64)(f32)f0;
            f1 = (f64)(f32)((f64)rdf32(0x817fdf38u) - f31);
            if ((f1 < f0) || (f1 == f0)) {
                f4 = (f64)rdf32(0x805745f0u);
                r0 = 0u;
                f2 = (f64)rdf32(0x817fdf4cu);
                f3 = (f64)rdf32(0x805745f4u);
                f1 = (f64)rdf32(0x817fdf50u);
                f0 = (f64)rdf32(0x817fdf54u);
                wrf32d(0x817fdf24u, f4);
                wrf32d(0x817fdf20u, f4);
                wrf32d(0x817fdf1cu, f4);
                wrf32d(0x817fdf10u, f4);
                wrf32d(0x817fdf14u, f3);
                wrf32d(0x817fdf18u, f4);
                wrf32d(0x817fdf04u, f2);
                wrf32d(0x817fdf08u, f1);
                wrf32d(0x817fdf0cu, f0);
                if ((f4 == f2 && f4 == f1) && f4 == f0) {
                    r0 = 1u;
                }
                if (r0 == 0u) {
                    f1 = (f64)rdf32(0x805745f0u);
                    r0 = 0u;
                    if ((f1 == (f64)rdf32(0x817fdf04u) && f1 == (f64)rdf32(0x817fdf08u)) && f1 == (f64)rdf32(0x817fdf0cu)) {
                        r0 = 1u;
                    }
                    if (r0 == 0u) {
                        a.r[0] = 0x817fdf04u;
                        a.r[1] = 0x817fdf04u;
                        (void)tc_call(0x802343e4u, &a);
                    }
                }
                a.r[0] = 0x817fdf1cu;
                a.r[1] = 0x817fdf04u;
                a.r[2] = 0x817fdf10u;
                (void)tc_call(0x8004c7b8u, &a);
                a.r[0] = 0x817fdf4cu;
                f1 = tc_callf(0x80234440u, &a);
                f2 = rdf64(0x80574618u);
                wrf32d((u32)param_2 + 0x10u, (f64)rdf32(0x817fdf1cu));
                f2 = f1 * f2;
                f0 = (f64)rdf32(0x805745f0u);
                wrf32d((u32)param_2 + 0x14u, (f64)rdf32(0x817fdf20u));
                f2 = (f64)(f32)f2;
                wrf32d((u32)param_2 + 0x18u, (f64)rdf32(0x817fdf24u));
                wrf32d((u32)param_2 + 0x2cu, f2);
                wrf32d(0x817fdf00u, f0);
                wrf32d(0x817fdefcu, f0);
                wrf32d(0x817fdef8u, f0);
                a.r[0] = (u32)param_2 + 0x1cu;
                a.r[1] = 0x817fdef8u;
                r3 = tc_call(0x80042ac0u, &a);
                r3 = (u32)(s16)r3;
                wr32(0x817fdfc8u, 0x43300000u);
                f2 = rdf64(0x80574628u);
                wr32(0x817fdfccu, r3 ^ 0x80000000u);
                f0 = (f64)(f32)((f64)(f32)(rdf64(0x817fdfc8u) - f2) * (f64)rdf32(0x805745f8u));
                f0 = px_ctiw(f0, ppc_fctiwz(f0));
                wrf64(0x817fdfd0u, f0);
                a.r[0] = 0x817fdee8u;
                a.r[1] = 0x817fdef8u;
                a.r[2] = (u32)(s16)rd32(0x817fdfd4u);
                (void)tc_call(0x80042904u, &a);
                wrf32d((u32)param_2 + 0x1cu, (f64)rdf32(0x817fdee8u));
                wrf32d((u32)param_2 + 0x20u, (f64)rdf32(0x817fdeecu));
                wrf32d((u32)param_2 + 0x24u, (f64)rdf32(0x817fdef0u));
                wrf32d((u32)param_2 + 0x28u, (f64)rdf32(0x817fdef4u));
                wrf32d(0x817fdf44u, (f64)(f32)((f64)rdf32(0x817fdf44u) - (f64)(f32)((f64)(f32)((f64)rdf32(0x817fdf38u) - f31) - (f64)rdf32(0x817fdec8u))));
                r3 = rd32((u32)param_2 + 0xcu);
                wr32((u32)param_2 + 4u, 1u);
                if ((s32)r3 <= 0) {
                    r30 = 0u;
                }
                f1 = (f64)rdf32((u32)param_2 + 0x38u);
                wr32((u32)param_2 + 0xcu, r3 - 1u);
                a.f[0] = f1;
                a.r[0] = 0x817fdec8u;
                r3 = tc_call(0x80147988u, &a);
                if (r3 == 0u) {
                    r30 = 0u;
                    wrf32d(0x817fdf44u, (f64)(f32)((f64)rdf32(0x817fdf44u) - (f64)rdf32(0x817fdec8u)));
                }
            }
            r3 = r30;
            wrf32d(r31 + 0xcu, (f64)rdf32(0x817fdf40u));
            wrf32d(r31 + 0x1cu, (f64)rdf32(0x817fdf44u));
            wrf32d(r31 + 0x2cu, (f64)rdf32(0x817fdf48u));
        }
    }
    return r3;
}
