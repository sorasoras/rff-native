#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80214788(u32 param_r3)
{
    u32 r0 = 0, r1 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r23 = 0, r25 = 0;
    u32 r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf30u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfbcu, 0u);
    wr32(0x817fdfc0u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    if ((u32)rd8(param_r3) != 0u && (s32)rd32(param_r3 + 4u) < (s32)rd32(rd32(param_r3 + 0x4dcu))) {
        a.r[0] = param_r3;
        a.r[1] = 9u;
        a.r[2] = 0u;
        (void)tc_call(0x80213504u, &a);
        if ((((u32)rd8(param_r3 + 0x28u) >> 7u) & 1u) != 0u) {
            a.r[0] = param_r3;
            a.r[1] = 0u;
            r3 = tc_call(0x80213f64u, &a);
            if (r3 == 0u) {
                return;
            }
        }
        r29 = rd32(param_r3 + 0x54u) * 0x1eu;
        r26 = rd32(param_r3 + 0x4dcu) + (rd32(param_r3 + 4u) * 0x14u);
        a.r[0] = rd32(param_r3 + 0x50u);
        a.r[1] = 0u;
        r3 = tc_call(0x802125b0u, &a);
        r25 = r3;
        a.r[0] = 6u;
        a.r[1] = 0u;
        a.r[2] = 0u;
        r3 = tc_call(0x8021258cu, &a);
        r25 = r3 + r25;
        a.r[0] = (u32)rd8(0x80492824u);
        a.r[1] = (u32)rd8(0x80492825u);
        a.r[2] = (u32)rd8(0x80492826u);
        r3 = tc_call(0x8021258cu, &a);
        r28 = r3 - r25;
        if ((s32)r28 >= 0) {
            r0 = r29 - 0x41u;
            if ((s32)r28 < (s32)r0) {
                wr32(0x817fdfacu, r28 ^ 0x80000000u);
                r0 = r0 ^ 0x80000000u;
                f2 = rdf64(0x805769b8u);
                wr32(0x817fdfa8u, 0x43300000u);
                r3 = rd32(param_r3 + 0x2cu);
                f0 = rdf64(0x817fdfa8u);
                wr32(0x817fdfb4u, r0);
                r0 = rd32(param_r3 + 0x30u);
                wr32(0x817fdfb0u, 0x43300000u);
                f31 = (f64)(f32)px_fdiv((f64)(f32)(f0 - f2), (f64)(f32)(rdf64(0x817fdfb0u) - f2));
                if (r3 == r0) {
                    r3 = param_r3 + 0x104u;
                    r4 = rd32(param_r3 + 0x34u);
                    r0 = rd32(param_r3 + 0x38u);
                    r6 = rd32(param_r3 + 0x4dcu) + (rd32(param_r3 + 4u) * 0x14u);
                    r8 = rd32(r6 + 8u);
                    r6 = (rd32(r6 + 4u) << 2u) & 0xfffffffcu;
                    r6 = rd32(r3 + r6 + 0x290u) + (r8 * 0x14u);
                    f2 = (f64)rdf32(r6 + 0xcu);
                    f0 = (f64)rdf32(r6 + 4u);
                    wrf32d(0x817fdf9cu, (f64)rdf32(r6 + 8u));
                    wr32(0x817fdf5cu, r4);
                    wr32(0x817fdf60u, r0);
                    r0 = rd32(param_r3 + 0x3cu);
                    wrf32d(0x817fdf98u, f0);
                    wr32(0x817fdf64u, r0);
                    wrf32d(0x817fdfa0u, f2);
                    a.r[0] = r3;
                    a.r[1] = rd32(param_r3 + 8u);
                    a.r[2] = 0x817fdf5cu;
                    r3 = tc_call(0x80215ab0u, &a);
                    r23 = r3;
                    r0 = rd32(param_r3 + 0x44u);
                    wr32(0x817fdf50u, rd32(param_r3 + 0x40u));
                    wr32(0x817fdf54u, r0);
                    wr32(0x817fdf58u, rd32(param_r3 + 0x48u));
                    a.r[0] = param_r3 + 0x104u;
                    a.r[1] = rd32(param_r3 + 8u);
                    a.r[2] = 0x817fdf50u;
                    r3 = tc_call(0x80215ab0u, &a);
                    if (r23 != 0xffffffffu && r3 != 0xffffffffu) {
                        a.r[0] = param_r3 + 0x104u;
                        a.r[1] = rd32(param_r3 + 8u);
                        a.r[2] = r23;
                        a.r[3] = r3;
                        a.r[4] = 0x817fdf38u;
                        r3 = tc_call(0x80216658u, &a);
                        r5 = 2u;
                        r4 = 0x18u;
                        r25 = rd32(0x817fdf38u) + 4u;
                        r26 = (0u - ((r25 << 2u) & 0xfffffffcu)) & 0xfffffff8u;
                        wr32(r26 - 0x7e8020d0u, rd32(0x817fdf30u));
                        r1 = r26 - 0x7e8020d0u;
                        r7 = r25 * 0xcu;
                        r27 = (0u - r7) & 0xfffffff8u;
                        wr32(r1 + r27, rd32(r1));
                        r1 = r1 + r27;
                        f0 = (f64)rdf32(0x80576960u);
                        r27 = r1 + 8u;
                        r6 = r27;
                        r0 = r27 + (((ppc_mulhwu(0xaaaaaaabu, r7) >> 3u) & 0x1fffffffu) * 0xcu);
                        do {
                            wrf32d(r6 + 8u, f0);
                            wrf32d(r6 + 4u, f0);
                            wrf32d(r6, f0);
                            r6 = r6 + 0xcu;
                        } while (r6 < r0);
                        f0 = (f64)rdf32(param_r3 + 0x34u);
                        r9 = param_r3 + 0x104u;
                        r10 = 0u;
                        r6 = 0u;
                        wrf32d(r27 + 0xcu, f0);
                        f2 = (f64)(f32)f0;
                        f0 = (f64)rdf32(param_r3 + 0x38u);
                        wrf32d(r27 + 0x10u, f0);
                        f1 = (f64)(f32)f0;
                        f0 = (f64)rdf32(param_r3 + 0x3cu);
                        wrf32d(r27 + 0x14u, f0);
                        f0 = (f64)(f32)f0;
                        wrf32d(r27, f2);
                        wrf32d(r27 + 4u, f1);
                        wrf32d(r27 + 8u, f0);
                        while ((s32)r10 < (s32)rd32(0x817fdf38u)) {
                            r7 = r27 + r4;
                            r5 = r5 + 1u;
                            r0 = rd32(r3 + r6) * 0xcu;
                            r10 = r10 + 1u;
                            r6 = r6 + 4u;
                            r8 = rd32(r9 + ((rd32(param_r3 + 8u) << 2u) & 0xfffffffcu)) + r0;
                            f2 = (f64)rdf32(r8 + 0xcu);
                            f1 = (f64)rdf32(r8 + 8u);
                            f0 = (f64)rdf32(r8 + 4u);
                            wrf32d(0x817fdf48u, f1);
                            wrf32d(r27 + r4, f0);
                            r4 = r4 + 0xcu;
                            wrf32d(r7 + 4u, f1);
                            wrf32d(0x817fdf44u, f0);
                            wrf32d(0x817fdf4cu, f2);
                            wrf32d(r7 + 8u, f2);
                        }
                        r0 = r5 * 0xcu;
                        r5 = r5 + 1u;
                        wrf32d(r27 + r0, (f64)rdf32(param_r3 + 0x40u));
                        r6 = r27 + r0;
                        r0 = r5 * 0xcu;
                        wrf32d(r6 + 4u, (f64)rdf32(param_r3 + 0x44u));
                        r7 = r27 + r0;
                        wrf32d(r6 + 8u, (f64)rdf32(param_r3 + 0x48u));
                        wrf32d(r27 + r0, (f64)rdf32(param_r3 + 0x40u));
                        wrf32d(r7 + 4u, (f64)rdf32(param_r3 + 0x44u));
                        wrf32d(r7 + 8u, (f64)rdf32(param_r3 + 0x48u));
                        a.r[0] = param_r3;
                        a.r[1] = r25;
                        a.r[2] = r27;
                        (void)tc_call(0x80213eb4u, &a);
                        a.f[0] = f31;
                        a.r[0] = param_r3;
                        a.r[1] = r25;
                        a.r[2] = rd32(param_r3 + 8u);
                        a.r[3] = r27;
                        (void)tc_call(0x80213cfcu, &a);
                    }
                } else {
                    r0 = rd32(param_r3 + 0x38u);
                    wr32(0x817fdf8cu, rd32(param_r3 + 0x34u));
                    wr32(0x817fdf90u, r0);
                    wr32(0x817fdf94u, rd32(param_r3 + 0x3cu));
                    a.r[0] = param_r3 + 0x104u;
                    a.r[1] = rd32(param_r3 + 0x2cu);
                    a.r[2] = 0x817fdf8cu;
                    r3 = tc_call(0x80215ab0u, &a);
                    r25 = r3;
                    a.r[0] = param_r3 + 0x104u;
                    a.r[1] = rd32(param_r3 + 0x2cu);
                    a.r[2] = rd32(param_r3 + 0x30u);
                    r3 = tc_call(0x80215bc4u, &a);
                    r26 = r3;
                    a.r[0] = param_r3 + 0x104u;
                    a.r[1] = rd32(param_r3 + 0x30u);
                    a.r[2] = rd32(param_r3 + 0x2cu);
                    r3 = tc_call(0x80215bc4u, &a);
                    r27 = r3;
                    r0 = rd32(param_r3 + 0x44u);
                    wr32(0x817fdf80u, rd32(param_r3 + 0x40u));
                    wr32(0x817fdf84u, r0);
                    wr32(0x817fdf88u, rd32(param_r3 + 0x48u));
                    a.r[0] = param_r3 + 0x104u;
                    a.r[1] = rd32(param_r3 + 0x30u);
                    a.r[2] = 0x817fdf80u;
                    r3 = tc_call(0x80215ab0u, &a);
                    r23 = r3;
                    a.r[0] = param_r3 + 0x104u;
                    a.r[1] = rd32(param_r3 + 0x2cu);
                    a.r[2] = r25;
                    a.r[3] = r26;
                    a.r[4] = 0x817fdf40u;
                    r3 = tc_call(0x80216658u, &a);
                    r30 = r3;
                    a.r[0] = param_r3 + 0x104u;
                    a.r[1] = rd32(param_r3 + 0x30u);
                    a.r[2] = r27;
                    a.r[3] = r23;
                    a.r[4] = 0x817fdf3cu;
                    r3 = tc_call(0x80216658u, &a);
                    r27 = rd32(0x817fdf40u) + 3u;
                    r5 = r27 * 0xcu;
                    r26 = rd32(0x817fdf3cu) + 3u;
                    r25 = (0u - r5) & 0xfffffff8u;
                    wr32(r25 - 0x7e8020d0u, rd32(0x817fdf30u));
                    r1 = r25 - 0x7e8020d0u;
                    f0 = (f64)rdf32(0x80576960u);
                    r25 = r1 + 8u;
                    r4 = r25;
                    r0 = r25 + (((ppc_mulhwu(0xaaaaaaabu, r5) >> 3u) & 0x1fffffffu) * 0xcu);
                    do {
                        wrf32d(r4 + 8u, f0);
                        wrf32d(r4 + 4u, f0);
                        wrf32d(r4, f0);
                        r4 = r4 + 0xcu;
                    } while (r4 < r0);
                    f0 = (f64)rdf32(param_r3 + 0x34u);
                    r9 = param_r3 + 0x104u;
                    r4 = 2u;
                    r5 = 0x18u;
                    wrf32d(r25 + 0xcu, f0);
                    f2 = (f64)(f32)f0;
                    r10 = 0u;
                    r6 = 0u;
                    f0 = (f64)rdf32(param_r3 + 0x38u);
                    wrf32d(r25 + 0x10u, f0);
                    f1 = (f64)(f32)f0;
                    f0 = (f64)rdf32(param_r3 + 0x3cu);
                    wrf32d(r25 + 0x14u, f0);
                    f0 = (f64)(f32)f0;
                    wrf32d(r25, f2);
                    wrf32d(r25 + 4u, f1);
                    wrf32d(r25 + 8u, f0);
                    while ((s32)r10 < (s32)rd32(0x817fdf40u)) {
                        r7 = r25 + r5;
                        r10 = r10 + 1u;
                        r0 = rd32(r30 + r6) * 0xcu;
                        r4 = r4 + 1u;
                        r6 = r6 + 4u;
                        r8 = rd32(r9 + ((rd32(param_r3 + 0x2cu) << 2u) & 0xfffffffcu)) + r0;
                        f2 = (f64)rdf32(r8 + 0xcu);
                        f1 = (f64)rdf32(r8 + 8u);
                        f0 = (f64)rdf32(r8 + 4u);
                        wrf32d(0x817fdf78u, f1);
                        wrf32d(r25 + r5, f0);
                        r5 = r5 + 0xcu;
                        wrf32d(r7 + 4u, f1);
                        wrf32d(0x817fdf74u, f0);
                        wrf32d(0x817fdf7cu, f2);
                        wrf32d(r7 + 8u, f2);
                    }
                    r5 = (r4 - 1u) * 0xcu;
                    r0 = r4 * 0xcu;
                    f0 = (f64)rdf32(r25 + r5);
                    r5 = r25 + r5;
                    wrf32d(r25 + r0, f0);
                    r6 = r26 * 0xcu;
                    r4 = r25 + r0;
                    wrf32d(r4 + 4u, (f64)rdf32(r5 + 4u));
                    r30 = (0u - r6) & 0xfffffff8u;
                    wrf32d(r4 + 8u, (f64)rdf32(r5 + 8u));
                    wr32(r1 + r30, rd32(r1));
                    r1 = r1 + r30;
                    f0 = (f64)rdf32(0x80576960u);
                    r30 = r1 + 8u;
                    r4 = r30;
                    r0 = r30 + (((ppc_mulhwu(0xaaaaaaabu, r6) >> 3u) & 0x1fffffffu) * 0xcu);
                    do {
                        wrf32d(r4 + 8u, f0);
                        wrf32d(r4 + 4u, f0);
                        wrf32d(r4, f0);
                        r4 = r4 + 0xcu;
                    } while (r4 < r0);
                    r9 = param_r3 + 0x104u;
                    r4 = 1u;
                    r5 = 0xcu;
                    r10 = 0u;
                    r6 = 0u;
                    while ((s32)r10 < (s32)rd32(0x817fdf3cu)) {
                        r7 = r30 + r5;
                        r10 = r10 + 1u;
                        r0 = rd32(r3 + r6) * 0xcu;
                        r4 = r4 + 1u;
                        r6 = r6 + 4u;
                        r8 = rd32(r9 + ((rd32(param_r3 + 0x30u) << 2u) & 0xfffffffcu)) + r0;
                        f2 = (f64)rdf32(r8 + 0xcu);
                        f1 = (f64)rdf32(r8 + 8u);
                        f0 = (f64)rdf32(r8 + 4u);
                        wrf32d(0x817fdf6cu, f1);
                        wrf32d(r30 + r5, f0);
                        r5 = r5 + 0xcu;
                        wrf32d(r7 + 4u, f1);
                        wrf32d(0x817fdf68u, f0);
                        wrf32d(0x817fdf70u, f2);
                        wrf32d(r7 + 8u, f2);
                    }
                    r5 = r4 * 0xcu;
                    r4 = r4 + 1u;
                    wrf32d(r30, (f64)rdf32(r30 + 0xcu));
                    r0 = r4 * 0xcu;
                    r6 = r30 + r5;
                    wrf32d(r30 + 4u, (f64)rdf32(r30 + 0x10u));
                    r7 = r30 + r0;
                    wrf32d(r30 + 8u, (f64)rdf32(r30 + 0x14u));
                    wrf32d(r6, (f64)rdf32(param_r3 + 0x40u));
                    wrf32d(r6 + 4u, (f64)rdf32(param_r3 + 0x44u));
                    wrf32d(r6 + 8u, (f64)rdf32(param_r3 + 0x48u));
                    wrf32d(r30 + r0, (f64)rdf32(param_r3 + 0x40u));
                    wrf32d(r7 + 4u, (f64)rdf32(param_r3 + 0x44u));
                    wrf32d(r7 + 8u, (f64)rdf32(param_r3 + 0x48u));
                    a.r[0] = param_r3;
                    a.r[1] = r27;
                    a.r[2] = r25;
                    f1 = tc_callf(0x80213eb4u, &a);
                    f30 = f1;
                    a.r[0] = param_r3;
                    a.r[1] = r26;
                    a.r[2] = r30;
                    f1 = tc_callf(0x80213eb4u, &a);
                    f0 = (f64)(f32)(f31 * (f64)(f32)(f30 + f1));
                    if (!((f0 < f30) || (f0 == f30))) {
                        f0 = (f64)(f32)(f0 - f30);
                        f1 = (f64)(f32)px_fdiv(f0, f1);
                        a.f[0] = f1;
                        a.r[0] = param_r3;
                        a.r[1] = r26;
                        a.r[2] = rd32(param_r3 + 0x30u);
                        a.r[3] = r30;
                        (void)tc_call(0x80213cfcu, &a);
                    } else {
                        a.f[0] = (f64)(f32)px_fdiv(f0, f30);
                        a.r[0] = param_r3;
                        a.r[1] = r27;
                        a.r[2] = rd32(param_r3 + 0x2cu);
                        a.r[3] = r25;
                        (void)tc_call(0x80213cfcu, &a);
                    }
                }
                a.r[0] = param_r3;
                (void)tc_call(0x8021421cu, &a);
            } else {
                a.r[0] = 9u;
                r3 = tc_call(0x80074e90u, &a);
                f1 = tc_lastf();
                if (r3 != 0u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = rd32(param_r3 + 0x5cu);
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    r3 = tc_call(0x80097c5cu, &a);
                    if (r3 == 0u && (r28 - (r29 - 0x41u)) == 0u) {
                        a.r[0] = 9u;
                        r3 = tc_call(0x800a4500u, &a);
                        r30 = r3;
                        if (r3 != 0u) {
                            if (rd32(param_r3 + 4u) != (rd32(rd32(param_r3 + 0x4dcu)) - 1u)) {
                                r5 = 0x92u;
                            } else {
                                r5 = 0xc5u;
                            }
                            a.r[0] = rd32(rd32(param_r3 + 0x5cu) + 0xcu);
                            a.r[1] = 9u;
                            a.r[2] = r5;
                            r3 = tc_call(0x800ed39cu, &a);
                            r25 = (u32)(s8)r3;
                            if (r25 != rd32(r30 + 0x100u)) {
                                r5 = rd32(r26 + 8u);
                                r4 = rd32(param_r3 + 0x104u + ((rd32(r26 + 4u) << 2u) & 0xfffffffcu) + 0x290u) + (r5 * 0x14u);
                                a.r[0] = r30;
                                a.r[1] = r4;
                                a.r[2] = r5;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.r[6] = 0u;
                                a.r[7] = 0u;
                                a.f[0] = (f64)(f32)((f64)rdf32(0x805769b4u) * (f64)rdf32(r4 + 0x10u));
                                a.f[1] = 0.0;
                                (void)tc_call(rd32(rd32(r30) + 0x24u), &a);
                                a.r[0] = r30;
                                a.r[1] = r25;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.r[6] = 0u;
                                a.r[7] = 0u;
                                a.f[0] = (f64)rdf32(0x80576988u);
                                a.f[1] = 0.0;
                                (void)tc_call(rd32(rd32(r30) + 0x54u), &a);
                            }
                        }
                    }
                }
            }
            if ((s32)r28 >= (s32)(r29 - 1u)) {
                wr8(param_r3 + 0x28u, (u8)((u32)rd8(param_r3 + 0x28u) | 0x80u));
                a.r[0] = param_r3;
                (void)tc_call(0x80214facu, &a);
            }
        }
    }
    return;
}
