#include "tc_rt.h"

void fn_8006aee4(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0lt = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r27 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    a.r[0] = param_1;
    r3 = tc_call(0x8006b8c4u, &a);
    if (r3 == 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x8006e5d4u, &a);
        f1 = tc_lastf();
        if (r3 != 0u) {
            r0 = rd32(param_1 + 0x290u);
            if (r0 == 0x18u || r0 == 0x1au) {
                r0 = 1u;
            } else {
                r0 = 0u;
            }
            if (r0 == 0u && rd32(param_1 + 0x290u) != 0x19u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x803d29f8u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                r3 = tc_call(0x80097c5cu, &a);
                if (r3 == 0u) {
                    f31 = (f64)rdf32(param_2 + 0xa4u);
                    f1 = tc_callf(0x80040a00u, &a);
                    f0 = (f64)(f32)((f64)rdf32(0x80572648u) * f1);
                    c0lt = f0 < f31;
                    if (((((c0lt << 0x1fu) | ((f0 > f31) << 0x1eu) | ((c0lt || (f0 == f31)) << 0x1du) | (((f0 != f0) || (f31 != f31)) << 0x1cu)) >> 0x1du) & 1u) == 0u) {
                        if (param_2 != 0u) {
                            a.r[0] = param_2;
                            a.r[1] = param_1;
                            a.r[2] = 0u;
                            a.r[3] = param_3;
                            a.r[4] = 0x817fdfa8u;
                            r3 = tc_call(0x8006edf0u, &a);
                            r31 = r3;
                            a.r[0] = param_1;
                            a.r[1] = param_2;
                            r3 = tc_call(0x801986c4u, &a);
                            if (r3 != 0xffffffffu) {
                                a.r[0] = 0x804b9da0u;
                                a.r[1] = r3;
                                a.r[2] = param_3;
                                (void)tc_call(0x8010a794u, &a);
                            }
                            r0 = (u32)rd16(0x8049908au) - (r31 & 0xffffu);
                            if ((s32)r0 < 0) {
                                r0 = 0u;
                            }
                            r4 = r0 & 0xffffu;
                            if (r4 >= 0xffffu) {
                                r4 = 0xffffu;
                            }
                            r0 = r0 & 0xffffu;
                            wr16(0x8049908au, (u16)r4);
                            if (r0 != 0u) {
                                a.f[0] = (f64)rdf32(param_2 + 0x24u);
                                r3 = tc_call(0x802558e4u, &a);
                                a.r[0] = param_1 + 0x93cu;
                                a.r[1] = r3;
                                r3 = tc_call(0x80094a40u, &a);
                                r27 = r3;
                                a.r[0] = param_1;
                                a.r[1] = param_2 + 8u;
                                (void)tc_call(0x8006b368u, &a);
                                do {
                                    if (r27 != 2u) {
                                        if ((rd32(param_2 + 0x30u) & 0x80u) != 0u) {
                                            a.r[0] = 0x8049e140u;
                                            a.r[1] = 0x200000u;
                                            r3 = tc_call(0x801a8f18u, &a);
                                            if (r3 == 0u && rd32(param_1 + 0x290u) != 0x16u) break;
                                        }
                                        if (r27 == 1u || (rd32(param_2 + 0x30u) & 0x40u) != 0u) {
                                            a.r[0] = 0x8049e140u;
                                            a.r[1] = 0x200000u;
                                            r3 = tc_call(0x801a8f18u, &a);
                                            if (r3 == 0u && rd32(param_1 + 0x290u) != 0x16u) {
                                                a.r[0] = param_1;
                                                (void)tc_call(0x8006db64u, &a);
                                                a.r[0] = param_1;
                                                (void)tc_call(0x800c3298u, &a);
                                                r3 = tc_call(0x80040b64u, &a);
                                                a.r[0] = 0x804b9da0u;
                                                a.r[1] = r3 - (((ppc_mulhwu(0xaaaaaaabu, r3) >> 1u) & 0x7fffffffu) * 3u) + 0x41eu;
                                                a.r[2] = param_3;
                                                (void)tc_call(0x8010a794u, &a);
                                                fl_ = 1u;
                                                break;
                                            }
                                        }
                                        if (r27 != 0u) {
                                            fl_ = 1u;
                                            break;
                                        }
                                        wrf32d(param_1 + 0x948u, (f64)(f32)((f64)rdf32(param_1 + 0x948u) + (f64)rdf32(0x805726b0u)));
                                        fl_ = 1u;
                                        break;
                                    }
                                } while (0);
                                if (fl_ == 1u) {
                                    fl_ = 0u;
                                } else {
                                    wr32(param_1 + 0x944u, 0u);
                                    a.r[0] = param_1;
                                    (void)tc_call(0x8006db64u, &a);
                                    a.r[0] = param_1;
                                    (void)tc_call(0x800c3134u, &a);
                                    r3 = tc_call(0x80040b64u, &a);
                                    a.r[0] = 0x804b9da0u;
                                    a.r[1] = r3 - (((ppc_mulhwu(0xaaaaaaabu, r3) >> 1u) & 0x7fffffffu) * 3u) + 0x421u;
                                    a.r[2] = param_3;
                                    (void)tc_call(0x8010a794u, &a);
                                }
                            } else {
                                a.r[0] = param_1;
                                (void)tc_call(0x8006db64u, &a);
                                a.r[0] = param_1;
                                (void)tc_call(0x800c30d4u, &a);
                                r3 = tc_call(0x80040b64u, &a);
                                a.r[0] = 0x804b9da0u;
                                a.r[1] = (r3 & 1u) + 0x424u;
                                a.r[2] = param_3;
                                (void)tc_call(0x8010a794u, &a);
                                wr32(0x8057118cu, rd32(0x8057118cu) & 0xffff6ffeu);
                            }
                            r6 = rd32(param_2 + 0x2cu);
                            if (r6 != 0u && (rd32(param_2 + 0x30u) & 0x10000u) != 0u) {
                                if (rd32(param_2 + 0x34u) != 4u) {
                                    r0 = (u32)((s32)ppc_mulhw(1717986919, (s32)(r31 & 0xffffu)) >> 2);
                                    a.r[0] = 1u;
                                    a.r[1] = r0 + ((r0 >> 0x1fu) & 1u);
                                    a.r[2] = param_3;
                                    a.r[3] = r6;
                                    (void)tc_call(0x8020b414u, &a);
                                } else {
                                    r0 = (u32)((s32)ppc_mulhw(1717986919, (s32)(r31 & 0xffffu)) >> 2);
                                    a.r[0] = 0u;
                                    a.r[1] = r0 + ((r0 >> 0x1fu) & 1u);
                                    a.r[2] = param_3;
                                    a.r[3] = r6;
                                    (void)tc_call(0x8020b414u, &a);
                                }
                            }
                            a.r[0] = param_1;
                            a.r[1] = param_2;
                            a.r[2] = 0u;
                            r3 = tc_call(0x801a043cu, &a);
                            a.r[0] = param_1;
                            a.r[1] = r3;
                            a.r[2] = param_3;
                            a.r[3] = 0x804890c8u;
                            (void)tc_call(0x8019fc4cu, &a);
                            a.r[0] = param_1;
                            a.r[1] = param_2;
                            (void)tc_call(0x8006d0dcu, &a);
                            f0 = (f64)rdf32(0x805725d8u);
                            wrf32d(0x817fdfc0u, f0);
                            wrf32d(0x817fdfbcu, f0);
                            wrf32d(0x817fdfb8u, f0);
                            a.r[0] = param_1;
                            a.r[1] = 0x817fdfb8u;
                            (void)tc_call(0x8019fbdcu, &a);
                            r5 = rd32(0x817fdfbcu);
                            r6 = rd32(0x817fdfc0u);
                            wr32(0x817fdfacu, rd32(0x817fdfb8u));
                            wr32(0x817fdfb0u, r5);
                            r0 = (u32)((s32)ppc_mulhw(1374389535, (s32)(r31 & 0xffffu)) >> 5);
                            wr32(0x817fdfb4u, r6);
                            a.r[0] = r0 + ((r0 >> 0x1fu) & 1u);
                            a.r[1] = 0x817fdfacu;
                            a.r[2] = 0u;
                            (void)tc_call(0x800d7d2cu, &a);
                        }
                    } else {
                        a.r[0] = 0x804b9da0u;
                        a.r[1] = 0x7dcu;
                        a.r[2] = param_3;
                        (void)tc_call(0x8010a794u, &a);
                        r3 = rd32(param_3);
                        wr32(0x817fdfccu, rd32(param_3 + 8u));
                        r0 = rd32(param_3 + 4u);
                        f1 = (f64)rdf32(0x817fdfccu);
                        f0 = (f64)rdf32(0x80572604u);
                        wr32(0x817fdfc4u, r3);
                        f0 = (f64)(f32)(f1 + f0);
                        f1 = (f64)rdf32(0x805725e0u);
                        wr32(0x817fdfc8u, r0);
                        wrf32d(0x817fdfccu, f0);
                        a.f[0] = f1;
                        a.r[0] = 0x8bu;
                        a.r[1] = 0x817fdfc4u;
                        a.r[2] = 0x804b15c0u;
                        a.r[3] = 0x804890c8u;
                        (void)tc_call(0x800d783cu, &a);
                    }
                }
            }
        }
    }
    return;
}
