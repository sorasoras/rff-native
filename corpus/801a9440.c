#include "tc_rt.h"

void fn_801a9440(u32 param_r3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r12 = 0, r26 = 0, r27 = 0, r28 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdee0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    r28 = 0u;
    if (rd32(param_r3 + 0x290u) == 9u) {
        r0 = rd32(param_r3 + 0x5c0u);
        if ((s32)r0 >= 353 && (s32)r0 <= 356) {
            wr32(param_r3 + 0x9f0u, 5u);
            a.r[0] = param_r3;
            (void)tc_call(0x801a9e70u, &a);
            r28 = 1u;
        } else {
            if (r0 == 0x165u) {
                f3 = (f64)rdf32(0x80575a28u);
                f0 = (f64)rdf32(0x80575a38u);
                r28 = 1u;
                wrf32d(0x817fdfb0u, f3);
                f4 = (f64)rdf32(0x80575a3cu);
                wrf32d(0x817fdfa0u, f0);
                f2 = (f64)rdf32(0x80575a40u);
                f1 = (f64)rdf32(0x80575a44u);
                wrf32d(0x817fdfc0u, f3);
                wrf32d(0x817fdfa4u, f3);
                wrf32d(0x817fdfb4u, f0);
                wrf32d(0x817fdfc4u, f3);
                wrf32d(0x817fdfa8u, f3);
                wrf32d(0x817fdfb8u, f3);
                wrf32d(0x817fdfc8u, f0);
                wrf32d(0x817fdfacu, f3);
                wrf32d(0x817fdfbcu, f3);
                wrf32d(0x817fdfccu, f3);
                r12 = rd32(param_r3);
                wrf32d(0x817fdef8u, f4);
                r12 = rd32(r12 + 0x2cu);
                wrf32d(0x817fdefcu, f3);
                wrf32d(0x817fdf00u, f3);
                wrf32d(0x817fdf04u, f2);
                wrf32d(0x817fdf08u, f3);
                wrf32d(0x817fdf0cu, f1);
                a.r[0] = param_r3;
                a.r[1] = 0u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                a.f[3] = f4;
                f1 = tc_callf(r12, &a);
                f0 = (f64)rdf32(0x80575a28u);
                f2 = (f64)rdf32(0x80575a38u);
                wrf32d(0x817fdf50u, f0);
                wrf32d(0x817fdf40u, f2);
                wrf32d(0x817fdf60u, f0);
                wrf32d(0x817fdf44u, f0);
                wrf32d(0x817fdf54u, f2);
                wrf32d(0x817fdf64u, f0);
                wrf32d(0x817fdf48u, f0);
                wrf32d(0x817fdf58u, f0);
                wrf32d(0x817fdf68u, f2);
                wrf32d(0x817fdf4cu, f0);
                wrf32d(0x817fdf5cu, f0);
                wrf32d(0x817fdf6cu, f0);
                a.f[0] = f1;
                a.r[0] = 0x817fdf40u;
                a.r[1] = 0x79u;
                (void)tc_call(0x80233a2cu, &a);
                a.r[0] = 0x817fdf40u;
                a.r[1] = 0x817fdfa0u;
                a.r[2] = 0x817fdfa0u;
                f1 = tc_callf(0x802337a0u, &a);
                a.r[0] = param_r3;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                r3 = tc_call(rd32(rd32(param_r3) + 0x28u), &a);
                f0 = (f64)rdf32(0x80575a28u);
                f1 = (f64)rdf32(0x80575a38u);
                wrf32d(0x817fdf20u, f0);
                wrf32d(0x817fdf10u, f1);
                wrf32d(0x817fdf30u, f0);
                wrf32d(0x817fdf14u, f0);
                wrf32d(0x817fdf24u, f1);
                wrf32d(0x817fdf34u, f0);
                wrf32d(0x817fdf18u, f0);
                wrf32d(0x817fdf28u, f0);
                wrf32d(0x817fdf38u, f1);
                wrf32d(0x817fdf1cu, f0);
                wrf32d(0x817fdf2cu, f0);
                wrf32d(0x817fdf3cu, f0);
                wrf32d(0x817fdf1cu, (f64)rdf32(r3));
                wrf32d(0x817fdf2cu, (f64)rdf32(r3 + 4u));
                wrf32d(0x817fdf3cu, (f64)rdf32(r3 + 8u));
                a.r[0] = 0x817fdf10u;
                a.r[1] = 0x817fdfa0u;
                a.r[2] = 0x817fdfa0u;
                (void)tc_call(0x802337a0u, &a);
                f0 = (f64)rdf32(0x80575a28u);
                f1 = (f64)rdf32(0x80575a38u);
                wrf32d(0x817fdf80u, f0);
                wrf32d(0x817fdf70u, f1);
                wrf32d(0x817fdf90u, f0);
                wrf32d(0x817fdf74u, f0);
                wrf32d(0x817fdf84u, f1);
                wrf32d(0x817fdf94u, f0);
                wrf32d(0x817fdf78u, f0);
                wrf32d(0x817fdf88u, f0);
                wrf32d(0x817fdf98u, f1);
                wrf32d(0x817fdf7cu, f0);
                wrf32d(0x817fdf8cu, f0);
                wrf32d(0x817fdf9cu, f0);
                a.r[0] = 0x817fdfa0u;
                a.r[1] = 0x817fdf70u;
                f1 = tc_callf(0x8023386cu, &a);
                r4 = tc_lastr4();
                r5 = 0u;
                f2 = 0.0;
                f3 = 0.0;
                f31 = (f64)rdf32(0x80575a28u);
                r27 = rd32(0x8046adecu);
                while (r27 != 0u) {
                    r3 = r27;
                    r27 = rd32(r27);
                    r26 = rd32(r3 + 8u);
                    if ((u32)((s32)rd32(r26 + 0x74u) >> 31) != 0u && rd32(r26 + 0xf8u) == 0x1bu) {
                        wrf32d(0x817fdef0u, f31);
                        wrf32d(0x817fdeecu, f31);
                        wrf32d(0x817fdee8u, f31);
                        a.r[0] = r26;
                        a.r[1] = r4;
                        a.r[2] = r5;
                        a.r[3] = 0u;
                        a.f[0] = f1;
                        a.f[1] = f2;
                        a.f[2] = f3;
                        a.f[3] = 0.0;
                        r3 = tc_call(rd32(rd32(r26) + 0x28u), &a);
                        a.r[0] = 0x817fdf70u;
                        a.r[1] = r3;
                        a.r[2] = 0x817fdee8u;
                        f1 = tc_callf(0x8023411cu, &a);
                        a.r[0] = r26;
                        a.r[1] = tc_lastr4();
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        f1 = tc_callf(rd32(rd32(r26) + 0xc4u), &a);
                        f3 = (f64)rdf32(0x817fdef0u);
                        f0 = (f64)(f32)((f64)rdf32(0x817fdf0cu) + f1);
                        c0lt = f3 < f0;
                        f2 = (f64)rdf32(0x817fdee8u);
                        r5 = (((c0lt << 0x1fu) | ((f3 > f0) << 0x1eu) | ((c0lt || (f3 == f0)) << 0x1du) | (((f3 != f3) || (f0 != f0)) << 0x1cu)) >> 0x1du) & 1u;
                        f0 = (f64)(f32)((f64)rdf32(0x817fdf04u) + f1);
                        c0lt = f2 < f0;
                        r4 = (((c0lt << 0x1fu) | ((f2 > f0) << 0x1eu) | ((c0lt || (f2 == f0)) << 0x1du) | (((f2 != f2) || (f0 != f0)) << 0x1cu)) >> 0x1du) & 1u;
                        f0 = (f64)(f32)((f64)rdf32(0x817fdef8u) - f1);
                        c0lt = f0 < f2;
                        r3 = (((c0lt << 0x1fu) | ((f0 > f2) << 0x1eu) | ((c0lt || (f0 == f2)) << 0x1du) | (((f0 != f0) || (f2 != f2)) << 0x1cu)) >> 0x1du) & 1u;
                        f0 = (f64)(f32)((f64)rdf32(0x817fdf00u) - f1);
                        c0lt = f0 < f3;
                        if ((r5 & (r4 & (r3 & ((((c0lt << 0x1fu) | ((f0 > f3) << 0x1eu) | ((c0lt || (f0 == f3)) << 0x1du) | (((f0 != f0) || (f3 != f3)) << 0x1cu)) >> 0x1du) & 1u)))) != 0u) {
                            a.r[0] = r26;
                            a.r[1] = r4;
                            a.r[2] = r5;
                            a.r[3] = 0u;
                            a.f[0] = f1;
                            a.f[1] = f2;
                            a.f[2] = f3;
                            a.f[3] = 0.0;
                            f1 = tc_callf(rd32(rd32(r26) + 0xc0u), &a);
                            a.r[0] = r26;
                            a.r[1] = tc_lastr4();
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            r3 = tc_call(rd32(rd32(r26) + 0x28u), &a);
                            a.f[0] = (f64)rdf32(0x80575a38u);
                            a.r[0] = 0x4bu;
                            a.r[1] = r3;
                            a.r[2] = 0x804b15c0u;
                            a.r[3] = 0x804890c8u;
                            f1 = tc_callf(0x800d783cu, &a);
                            r4 = tc_lastr4();
                            r5 = 0u;
                            f2 = 0.0;
                            f3 = 0.0;
                        }
                    }
                }
            }
        }
    }
    if (r28 != 0u) {
        r4 = rd32(param_r3 + 0x5c0u);
        if (((((0x2e8u - r4) | (r4 - 0x2e8u)) >> 0x1fu) & 1u) == 0u) {
            r4 = 0u;
        } else {
            r4 = (u32)rd8(param_r3 + 0x5c5u);
        }
        if (r4 == 1u) {
            a.r[0] = param_r3;
            a.r[1] = 0u;
            a.r[2] = 1u;
            (void)tc_call(0x800693a8u, &a);
        } else {
            r5 = rd32(param_r3 + 0x5c0u);
            if (((((0x2e8u - r5) | (r5 - 0x2e8u)) >> 0x1fu) & 1u) != 0u) {
                wr8(param_r3 + 0x5c5u, (u8)(r4 - 1u));
            }
            r5 = (u32)rd8(param_r3 + 0x5c4u);
            wr16(0x8049915eu, (u16)rd32(param_r3 + 0x5c0u));
            wr8(0x80499161u, (u8)r5);
            wr8(0x80499160u, (u8)(r4 - 1u));
        }
    }
    return;
}
