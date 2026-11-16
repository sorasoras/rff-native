#include "tc_rt.h"

void fn_8015876c(u32 param_r3)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r25 = 0, r26 = 0, r27 = 0, r28 = 0, r30 = 0, r31 = 0, t6 = 0, t10 = 0, t14 = 0, t18 = 0, t22 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f31 = 0.0, t4 = 0.0, t8 = 0.0;
    f64 t12 = 0.0, t16 = 0.0, t20 = 0.0, t24 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdea0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    a.r[0] = param_r3;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    r3 = tc_call(rd32(rd32(param_r3) + 0x94u), &a);
    if (r3 == 0u) {
        a.r[0] = param_r3;
        (void)tc_call(0x800d9ffcu, &a);
        if ((u32)((s32)rd32(param_r3 + 0x74u) >> 31) != 0u) {
            r0 = rd32(param_r3 + 0x120u);
            if (r0 == 1u) {
                a.r[0] = param_r3;
                (void)tc_call(0x800da354u, &a);
            } else {
                if (r0 == 4u) {
                    r0 = rd32(param_r3 + 0x1f4u);
                    wr32(0x817fdefcu, rd32(param_r3 + 0x1f0u));
                    wr32(0x817fdf00u, r0);
                    f0 = (f64)rdf32(0x817fdefcu);
                    wr32(0x817fdf04u, rd32(param_r3 + 0x1f8u));
                    wrf32d(param_r3 + 0x210u, f0);
                    r3 = rd32(param_r3 + 0x78u);
                    wrf32d(param_r3 + 0x214u, (f64)rdf32(0x817fdf00u));
                    wrf32d(param_r3 + 0x218u, (f64)rdf32(0x817fdf04u));
                    a.r[0] = r3;
                    a.r[1] = param_r3 + 0x124u;
                    r3 = tc_call(0x8014834cu, &a);
                    if (r3 == 0u) {
                        a.r[0] = rd32(param_r3 + 0x78u);
                        a.r[1] = param_r3 + 0x2fcu;
                        a.r[2] = param_r3 + 0x8f0u;
                        (void)tc_call(0x80147414u, &a);
                        f1 = (f64)rdf32(0x8057491cu);
                        wr32(param_r3 + 0x120u, 6u);
                        a.f[0] = f1;
                        a.r[0] = param_r3;
                        (void)tc_call(0x800da490u, &a);
                        a.f[0] = (f64)rdf32(param_r3 + 0x914u);
                        a.r[0] = param_r3;
                        (void)tc_call(0x800da4b8u, &a);
                        if (rd32(param_r3 + 0x250u) != 0u) {
                            a.r[0] = param_r3 + 0x208u;
                            (void)tc_call(0x80070068u, &a);
                        }
                        r4 = rd32(param_r3 + 0x91cu);
                        if (r4 != 0xffffffffu) {
                            a.r[0] = 0x804b9e80u;
                            a.r[1] = r4;
                            (void)tc_call(0x801206f4u, &a);
                            wr32(param_r3 + 0x91cu, 0xffffffffu);
                        }
                        a.r[0] = 0x804b9da0u;
                        a.r[1] = 0x108eu;
                        (void)tc_call(0x8010a74cu, &a);
                        return;
                    }
                    r4 = rd32(param_r3 + 0x91cu);
                    if (r4 == 0xffffffffu) {
                        return;
                    }
                    a.r[0] = 0x804b9e80u;
                    a.r[1] = r4;
                    a.r[2] = 0x817fdefcu;
                    (void)tc_call(0x80120914u, &a);
                } else {
                    if (r0 == 6u) {
                        a.r[0] = param_r3 + 0x2fcu;
                        r3 = tc_call(0x801471c8u, &a);
                        if (r3 != 0u) {
                            return;
                        }
                        wr32(param_r3 + 0x120u, 3u);
                    } else {
                        if (r0 != 3u && r0 == 2u) {
                            r30 = rd32(param_r3 + 0x78u);
                            wr32(param_r3 + 0x120u, 4u);
                            f0 = (f64)rdf32(0x80574918u);
                            wrf32d(0x817fdef8u, f0);
                            wrf32d(0x817fdef4u, f0);
                            wrf32d(0x817fdef0u, f0);
                            f7 = (f64)rdf32(r30 + 0xcu);
                            wrf32d(0x817fdef0u, f7);
                            wrf32d(0x817fdef4u, (f64)rdf32(r30 + 0x1cu));
                            wrf32d(0x817fdef8u, (f64)rdf32(r30 + 0x2cu));
                            wrf32d(param_r3 + 0x1f0u, f7);
                            f8 = (f64)rdf32(param_r3 + 0x1fcu);
                            f7 = (f64)rdf32(param_r3 + 0x200u);
                            wrf32d(param_r3 + 0x1f4u, (f64)rdf32(0x817fdef4u));
                            f0 = (f64)rdf32(param_r3 + 0x204u);
                            wrf32d(param_r3 + 0x1f8u, (f64)rdf32(0x817fdef8u));
                            wrf32d(param_r3 + 0x1e0u, f8);
                            wrf32d(param_r3 + 0x1e4u, f7);
                            wrf32d(param_r3 + 0x1e8u, f0);
                            a.r[0] = r30;
                            a.r[1] = 0x817fdf20u;
                            (void)tc_call(0x80031998u, &a);
                            f11 = (f64)rdf32(0x817fdf20u);
                            f9 = (f64)rdf32(0x817fdf24u);
                            f10 = (f64)rdf32(0x80574920u);
                            f1 = ppc_fmadds(f10, (f64)(f32)((f64)rdf32(0x817fdf2cu) - f11), f11);
                            f7 = (f64)rdf32(0x817fdf28u);
                            f0 = (f64)(f32)((f64)rdf32(0x817fdf34u) - f7);
                            f2 = ppc_fmadds(f10, (f64)(f32)((f64)rdf32(0x817fdf30u) - f9), f9);
                            wrf32d(0x817fdee4u, f1);
                            f3 = ppc_fmadds(f10, f0, f7);
                            wrf32d(0x817fdee8u, f2);
                            wrf32d(0x817fdeecu, f3);
                            a.f[0] = f1;
                            a.f[1] = f2;
                            a.f[2] = f3;
                            a.r[0] = 0x817fdf98u;
                            (void)tc_call(0x80233c84u, &a);
                            a.r[0] = r30;
                            a.r[1] = 0x817fdf68u;
                            (void)tc_call(0x8023386cu, &a);
                            a.r[0] = 0x817fdf68u;
                            a.r[1] = 0x817fdf98u;
                            a.r[2] = 0x817fdf98u;
                            (void)tc_call(0x802337a0u, &a);
                            f11 = (f64)rdf32(0x817fdfa4u);
                            f10 = (f64)rdf32(0x817fdfb4u);
                            r31 = 0u;
                            f9 = (f64)rdf32(0x817fdfc4u);
                            f7 = (f64)rdf32(0x80574918u);
                            wr32(param_r3 + 0x98u, 0u);
                            f0 = (f64)rdf32(0x8057491cu);
                            f8 = (f64)rdf32(0x804890c8u);
                            wrf32d(0x817fdee4u, f11);
                            wrf32d(param_r3 + 0x124u, f8);
                            f8 = (f64)rdf32(0x804890ccu);
                            wrf32d(0x817fdee8u, f10);
                            wrf32d(param_r3 + 0x128u, f8);
                            f8 = (f64)rdf32(0x804890d0u);
                            wrf32d(0x817fdeecu, f9);
                            wrf32d(param_r3 + 0x12cu, f8);
                            wrf32d(param_r3 + 0x13cu, (f64)rdf32(0x804890c8u));
                            wrf32d(param_r3 + 0x140u, (f64)rdf32(0x804890ccu));
                            wrf32d(param_r3 + 0x144u, (f64)rdf32(0x804890d0u));
                            wrf32d(param_r3 + 0x148u, (f64)rdf32(0x804890c8u));
                            wrf32d(param_r3 + 0x14cu, (f64)rdf32(0x804890ccu));
                            wrf32d(param_r3 + 0x150u, (f64)rdf32(0x804890d0u));
                            wrf32d(param_r3 + 0x130u, (f64)rdf32(0x804890e0u));
                            wrf32d(param_r3 + 0x134u, (f64)rdf32(0x804890e4u));
                            wrf32d(param_r3 + 0x138u, (f64)rdf32(0x804890e8u));
                            wrf32d(param_r3 + 0x154u, f7);
                            wrf32d(param_r3 + 0x158u, f0);
                            wrf32d(param_r3 + 0x168u, f7);
                            wrf32d(param_r3 + 0x178u, f7);
                            wrf32d(param_r3 + 0x15cu, f7);
                            wrf32d(param_r3 + 0x16cu, f0);
                            wrf32d(param_r3 + 0x17cu, f7);
                            wrf32d(param_r3 + 0x160u, f7);
                            wrf32d(param_r3 + 0x170u, f7);
                            wrf32d(param_r3 + 0x180u, f0);
                            wrf32d(param_r3 + 0x164u, f7);
                            wrf32d(param_r3 + 0x174u, f7);
                            wrf32d(param_r3 + 0x184u, f7);
                            t4 = (f64)rdf32(r30 + 4u);
                            wrf32d(0x817fdf38u, (f64)rdf32(r30));
                            wrf32d(0x817fdf3cu, t4);
                            t6 = r30 + 8u;
                            t8 = (f64)rdf32(t6 + 4u);
                            wrf32d(0x817fdf40u, (f64)rdf32(t6));
                            wrf32d(0x817fdf44u, t8);
                            t10 = r30 + 0x10u;
                            t12 = (f64)rdf32(t10 + 4u);
                            wrf32d(0x817fdf48u, (f64)rdf32(t10));
                            wrf32d(0x817fdf4cu, t12);
                            t14 = r30 + 0x18u;
                            t16 = (f64)rdf32(t14 + 4u);
                            wrf32d(0x817fdf50u, (f64)rdf32(t14));
                            wrf32d(0x817fdf54u, t16);
                            t18 = r30 + 0x20u;
                            t20 = (f64)rdf32(t18 + 4u);
                            wrf32d(0x817fdf58u, (f64)rdf32(t18));
                            wrf32d(0x817fdf5cu, t20);
                            t22 = r30 + 0x28u;
                            t24 = (f64)rdf32(t22 + 4u);
                            wrf32d(0x817fdf60u, (f64)rdf32(t22));
                            wrf32d(0x817fdf64u, t24);
                            r0 = rd32(0x817fdf3cu);
                            r25 = rd32(0x817fdf40u);
                            r26 = rd32(0x817fdf44u);
                            r27 = rd32(0x817fdf48u);
                            r28 = rd32(0x817fdf4cu);
                            r12 = rd32(0x817fdf50u);
                            r11 = rd32(0x817fdf54u);
                            r10 = rd32(0x817fdf58u);
                            r9 = rd32(0x817fdf5cu);
                            r8 = rd32(0x817fdf60u);
                            r7 = rd32(0x817fdf64u);
                            wr32(param_r3 + 0x158u, rd32(0x817fdf38u));
                            r6 = rd32(param_r3 + 0x1fcu);
                            wr32(param_r3 + 0x15cu, r0);
                            r0 = rd32(param_r3 + 0x200u);
                            wr32(param_r3 + 0x160u, r25);
                            wr32(param_r3 + 0x164u, r26);
                            wr32(param_r3 + 0x168u, r27);
                            wr32(param_r3 + 0x16cu, r28);
                            wr32(param_r3 + 0x170u, r12);
                            wr32(param_r3 + 0x174u, r11);
                            wr32(param_r3 + 0x178u, r10);
                            wr32(param_r3 + 0x17cu, r9);
                            wr32(param_r3 + 0x180u, r8);
                            wr32(param_r3 + 0x184u, r7);
                            wrf32d(param_r3 + 0x124u, f11);
                            wrf32d(param_r3 + 0x128u, f10);
                            wrf32d(param_r3 + 0x12cu, f9);
                            wr32(0x817fded8u, r6);
                            wr32(0x817fdedcu, r0);
                            wr32(0x817fdee0u, rd32(param_r3 + 0x204u));
                            a.r[0] = 0x817fded8u;
                            a.r[1] = 0x817fdef0u;
                            a.r[2] = 0x817fded8u;
                            (void)tc_call(0x802343a4u, &a);
                            f7 = (f64)rdf32(0x80574918u);
                            if ((f7 == (f64)rdf32(0x817fded8u) && f7 == (f64)rdf32(0x817fdedcu)) && f7 == (f64)rdf32(0x817fdee0u)) {
                                r31 = 1u;
                            }
                            if (r31 == 0u) {
                                a.r[0] = 0x817fded8u;
                                a.r[1] = 0x817fded8u;
                                (void)tc_call(0x802343e4u, &a);
                            }
                            f1 = rdf64(0x80574928u);
                            wrf32d(param_r3 + 0x1b8u, (f64)rdf32(0x817fded8u));
                            wrf32d(param_r3 + 0x1bcu, (f64)rdf32(0x817fdedcu));
                            wrf32d(param_r3 + 0x1c0u, (f64)rdf32(0x817fdee0u));
                            r4 = rd32(0x817fded8u);
                            r3 = rd32(0x817fdedcu);
                            r0 = rd32(0x817fdee0u);
                            wr32(0x817fdeccu, r4);
                            wr32(0x817fded0u, r3);
                            wr32(0x817fded4u, r0);
                            wr32(0x817fdea8u, r4);
                            wr32(0x817fdeacu, r3);
                            wr32(0x817fdeb0u, r0);
                            a.f[0] = f1;
                            f1 = tc_callf(0x80262704u, &a);
                            f31 = (f64)(f32)f1;
                            a.f[0] = rdf64(0x80574928u);
                            f1 = tc_callf(0x80262b10u, &a);
                            f11 = (f64)(f32)f1;
                            f8 = (f64)rdf32(0x817fdeb0u);
                            f10 = (f64)rdf32(0x817fdea8u);
                            r0 = 0u;
                            f7 = (f64)rdf32(0x80574918u);
                            f9 = ppc_fmadds(f10, f31, (f64)(f32)(f8 * f11));
                            f8 = ppc_fmadds(f10, -f11, (f64)(f32)(f8 * f31));
                            wrf32d(0x817fdeccu, f9);
                            wrf32d(0x817fded4u, f8);
                            if ((f7 == f9 && f7 == (f64)rdf32(0x817fded0u)) && f7 == f8) {
                                r0 = 1u;
                            }
                            if (r0 == 0u) {
                                a.r[0] = 0x817fdeccu;
                                a.r[1] = 0x817fdeccu;
                                (void)tc_call(0x802343e4u, &a);
                            }
                            wrf32d(param_r3 + 0x13cu, (f64)rdf32(0x817fdeccu));
                            wrf32d(param_r3 + 0x140u, (f64)rdf32(0x817fded0u));
                            wrf32d(param_r3 + 0x144u, (f64)rdf32(0x817fded4u));
                            a.r[0] = r30;
                            a.r[1] = 0x817fdf08u;
                            (void)tc_call(0x80031998u, &a);
                            f0 = (f64)rdf32(0x80574918u);
                            wrf32d(0x817fdec8u, f0);
                            wrf32d(0x817fdec4u, f0);
                            wrf32d(0x817fdec0u, f0);
                            a.r[0] = 0x817fdf14u;
                            a.r[1] = 0x817fdf08u;
                            a.r[2] = 0x817fdec0u;
                            (void)tc_call(0x802343a4u, &a);
                            a.r[0] = 0x817fdec0u;
                            f1 = tc_callf(0x80234440u, &a);
                            r4 = tc_lastr4();
                            f31 = (f64)(f32)(f1 * (f64)rdf32(0x80574920u));
                            f0 = (f64)rdf32(0x80574930u);
                            c0eq = rd32(param_r3 + 0x920u) == 0u;
                            wrf32d(param_r3 + 0x1dcu, f31);
                            f31 = (f64)(f32)(f31 * f0);
                            if (c0eq) {
                                wr32(param_r3 + 0x920u, 0xfau);
                            }
                            a.r[0] = param_r3;
                            a.r[1] = r4;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            a.r[7] = 0u;
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            a.f[4] = 0.0;
                            a.f[5] = 0.0;
                            a.f[6] = 0.0;
                            a.f[7] = 0.0;
                            r3 = tc_call(rd32(rd32(param_r3) + 0x28u), &a);
                            r5 = rd32(param_r3 + 0x920u);
                            wr32(0x817fdfc8u, 0x43300000u);
                            f7 = rdf64(0x80574938u);
                            wr32(0x817fdfccu, r5);
                            a.f[0] = (f64)rdf32(0x80574934u);
                            a.f[1] = f31;
                            a.f[2] = f31;
                            a.f[3] = (f64)(f32)(rdf64(0x817fdfc8u) - f7);
                            a.r[0] = param_r3 + 0x208u;
                            a.r[1] = r3;
                            a.r[2] = 0x8fu;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            f1 = tc_callf(0x800cdc78u, &a);
                            r4 = tc_lastr4();
                            if (rd32(param_r3 + 0x91cu) == 0xffffffffu && rd32(param_r3 + 0x918u) != 0xffffffffu) {
                                a.r[0] = param_r3;
                                a.r[1] = r4;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.r[6] = 0u;
                                a.r[7] = 0u;
                                a.f[0] = f1;
                                a.f[1] = 0.0;
                                a.f[2] = 0.0;
                                a.f[3] = 0.0;
                                a.f[4] = 0.0;
                                a.f[5] = 0.0;
                                a.f[6] = 0.0;
                                a.f[7] = 0.0;
                                r3 = tc_call(rd32(rd32(param_r3) + 0x28u), &a);
                                r0 = rd32(r3 + 4u);
                                wr32(0x817fdeb4u, rd32(r3));
                                wr32(0x817fdeb8u, r0);
                                wr32(0x817fdebcu, rd32(r3 + 8u));
                                a.r[0] = 0x804b9da0u;
                                a.r[1] = rd32(param_r3 + 0x918u);
                                a.r[2] = 0x817fdeb4u;
                                r3 = tc_call(0x8010a85cu, &a);
                                wr32(param_r3 + 0x91cu, r3);
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}
