#include "tc_rt.h"

void fn_8020d17c(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdf10u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfd4u, 0u);
    r30 = rd32((u32)param_2 + 0x60u);
    a.r[0] = rd32((u32)param_2 + 0x30u);
    a.r[1] = rd32((u32)param_2 + 0x4cu);
    a.r[2] = rd32((u32)param_2 + 0x50u);
    (void)tc_call(0x802337a0u, &a);
    r3 = rd32((u32)param_2 + 0x40u);
    r31 = rd32((u32)param_2 + 0x50u);
    if (r3 == 0u) {
        r6 = rd32((u32)param_2 + 0x54u);
    } else {
        r3 = rd32(r3 + 0x20u);
        r6 = r3 + 0x40u;
    }
    f3 = (f64)rdf32(0x805767c8u);
    f2 = (f64)rdf32(0x805767e0u);
    wrf32d(0x817fdfccu, f3);
    wrf32d(0x817fdfc8u, f3);
    wrf32d(0x817fdfc4u, f3);
    f1 = (f64)rdf32(r6);
    wrf32d(0x817fdfc4u, ppc_fmadds(f2, (f64)(f32)((f64)rdf32(r6 + 0xcu) - f1), f1));
    f1 = (f64)rdf32(r6 + 4u);
    wrf32d(0x817fdfc8u, ppc_fmadds(f2, (f64)(f32)((f64)rdf32(r6 + 0x10u) - f1), f1));
    f1 = (f64)rdf32(r6 + 8u);
    f0 = (f64)(f32)((f64)rdf32(r6 + 0x14u) - f1);
    wrf32d(0x817fdfc0u, f3);
    wrf32d(0x817fdfbcu, f3);
    f0 = ppc_fmadds(f2, f0, f1);
    wrf32d(0x817fdfb8u, f3);
    wrf32d(0x817fdfccu, f0);
    a.r[0] = 0x817fdfb8u;
    a.r[1] = r31;
    a.r[2] = 0x817fdfc4u;
    (void)tc_call(0x80042474u, &a);
    f0 = (f64)rdf32(0x805767c8u);
    wrf32d(0x817fdfb4u, f0);
    wrf32d(0x817fdfb0u, f0);
    wrf32d(0x817fdfacu, f0);
    wrf32d(0x817fdfa8u, f0);
    wrf32d(0x817fdfa4u, f0);
    wrf32d(0x817fdfa0u, f0);
    a.r[0] = r30;
    a.r[1] = 0x817fdfa0u;
    f1 = tc_callf(0x8020d070u, &a);
    a.r[0] = r30;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    r3 = tc_call(rd32(rd32(r30) + 0x28u), &a);
    r6 = rd32(0x817fdfa4u);
    r0 = rd32(0x817fdfa8u);
    wr32(0x817fdf94u, rd32(0x817fdfa0u));
    wr32(0x817fdf98u, r6);
    wr32(0x817fdf9cu, r0);
    a.r[0] = 0x817fdf94u;
    a.r[1] = r3;
    a.r[2] = 0x817fdf94u;
    (void)tc_call(0x802343a4u, &a);
    f1 = (f64)rdf32(0x805767c8u);
    r0 = 0u;
    f0 = (f64)rdf32(0x817fdf94u);
    wrf32d(0x817fdf98u, f1);
    if (f1 == f0 && f1 == f1 && f1 == (f64)rdf32(0x817fdf9cu)) {
        r0 = 1u;
    }
    if (r0 == 0u) {
        a.r[0] = 0x817fdf94u;
        a.r[1] = 0x817fdf94u;
        f1 = tc_callf(0x802343e4u, &a);
    }
    r5 = rd32(0x804890d4u);
    r4 = rd32(0x804890d8u);
    r0 = rd32(0x804890dcu);
    wr32(0x817fdf88u, r5);
    wr32(0x817fdf8cu, r4);
    wr32(0x817fdf90u, r0);
    a.r[0] = r30;
    a.r[1] = r4;
    a.r[2] = r5;
    a.r[3] = 0x804890d4u;
    a.r[4] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    f1 = tc_callf(rd32(rd32(r30) + 0x2cu), &a);
    f31 = f1;
    r3 = rd32(0x817fdf8cu);
    r0 = rd32(0x817fdf90u);
    wr32(0x817fdf58u, rd32(0x817fdf88u));
    wr32(0x817fdf5cu, r3);
    wr32(0x817fdf60u, r0);
    a.f[0] = f1;
    f1 = tc_callf(0x80262704u, &a);
    f30 = (f64)(f32)f1;
    a.f[0] = f31;
    f1 = tc_callf(0x80262b10u, &a);
    f2 = (f64)(f32)f1;
    f0 = (f64)rdf32(0x805767c8u);
    f1 = (f64)rdf32(0x817fdf60u);
    f4 = (f64)rdf32(0x817fdf58u);
    f3 = (f64)(f32)(f1 * f2);
    wrf32d(0x817fdf48u, f0);
    f2 = -f2;
    f1 = (f64)(f32)(f1 * f30);
    wrf32d(0x817fdf44u, f0);
    f3 = ppc_fmadds(f4, f30, f3);
    wrf32d(0x817fdf40u, f0);
    wrf32d(0x817fdf88u, f3);
    wrf32d(0x817fdf90u, ppc_fmadds(f4, f2, f1));
    a.r[0] = 0x817fdf88u;
    a.r[1] = 0x817fdf40u;
    (void)tc_call(0x802343e4u, &a);
    a.f[0] = (f64)rdf32(0x817fdf40u);
    a.f[1] = (f64)rdf32(0x817fdf48u);
    f1 = tc_callf(0x80262c68u, &a);
    f1 = (f64)(f32)f1;
    if (!((f64)rdf32(0x805767ccu) < f1)) {
        a.f[0] = (f64)rdf32(0x817fdf40u);
        a.f[1] = (f64)rdf32(0x817fdf48u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        f0 = (f64)rdf32(0x805767d4u);
        if (!((f0 > f1) || (f0 == f1))) {
            a.f[0] = (f64)rdf32(0x817fdf40u);
            a.f[1] = (f64)rdf32(0x817fdf48u);
            f1 = tc_callf(0x80262c68u, &a);
            f31 = (f64)(f32)f1;
        } else {
            a.f[0] = (f64)rdf32(0x817fdf40u);
            a.f[1] = (f64)rdf32(0x817fdf48u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f31 = (f64)(f32)((f64)rdf32(0x805767d0u) + f1);
        }
    } else {
        a.f[0] = (f64)rdf32(0x817fdf40u);
        a.f[1] = (f64)rdf32(0x817fdf48u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        f31 = (f64)(f32)(f1 - (f64)rdf32(0x805767d0u));
    }
    f0 = (f64)rdf32(0x805767c8u);
    wrf32d(0x817fdf54u, f0);
    wrf32d(0x817fdf50u, f0);
    wrf32d(0x817fdf4cu, f0);
    a.r[0] = 0x817fdf94u;
    a.r[1] = 0x817fdf4cu;
    (void)tc_call(0x802343e4u, &a);
    a.f[0] = (f64)rdf32(0x817fdf4cu);
    a.f[1] = (f64)rdf32(0x817fdf54u);
    f1 = tc_callf(0x80262c68u, &a);
    f1 = (f64)(f32)f1;
    if (!((f64)rdf32(0x805767ccu) < f1)) {
        a.f[0] = (f64)rdf32(0x817fdf4cu);
        a.f[1] = (f64)rdf32(0x817fdf54u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        f0 = (f64)rdf32(0x805767d4u);
        if (!((f0 > f1) || (f0 == f1))) {
            a.f[0] = (f64)rdf32(0x817fdf4cu);
            a.f[1] = (f64)rdf32(0x817fdf54u);
            f1 = tc_callf(0x80262c68u, &a);
            f3 = (f64)(f32)f1;
        } else {
            a.f[0] = (f64)rdf32(0x817fdf4cu);
            a.f[1] = (f64)rdf32(0x817fdf54u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f3 = (f64)(f32)((f64)rdf32(0x805767d0u) + f1);
        }
    } else {
        a.f[0] = (f64)rdf32(0x817fdf4cu);
        a.f[1] = (f64)rdf32(0x817fdf54u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        f3 = (f64)(f32)(f1 - (f64)rdf32(0x805767d0u));
    }
    if (!((f64)rdf32(0x805767ccu) < f31)) {
        f0 = (f64)rdf32(0x805767d4u);
        if (!((f0 > f31) || (f0 == f31))) {
            f0 = f31;
        } else {
            f0 = (f64)(f32)((f64)rdf32(0x805767d0u) + f31);
        }
    } else {
        f0 = (f64)(f32)(f31 - (f64)rdf32(0x805767d0u));
    }
    f1 = (f64)(f32)(f0 - f3);
    if (!(f1 > (f64)rdf32(0x805767ccu))) {
        if (f1 < (f64)rdf32(0x805767d4u)) {
            f1 = (f64)(f32)(f1 + (f64)rdf32(0x805767d0u));
        }
    } else {
        f1 = (f64)(f32)(f1 - (f64)rdf32(0x805767d0u));
    }
    f0 = (f64)rdf32(0x805767ccu);
    if (!(f0 < f1)) {
        if (!(f0 < f31)) {
            f0 = (f64)rdf32(0x805767d4u);
            if (!((f0 > f31) || (f0 == f31))) {
                f0 = f31;
            } else {
                f0 = (f64)(f32)((f64)rdf32(0x805767d0u) + f31);
            }
        } else {
            f0 = (f64)(f32)(f31 - (f64)rdf32(0x805767d0u));
        }
        f2 = (f64)(f32)(f0 - f3);
        if (!(f2 > (f64)rdf32(0x805767ccu))) {
            if (f2 < (f64)rdf32(0x805767d4u)) {
                f2 = (f64)(f32)(f2 + (f64)rdf32(0x805767d0u));
            }
        } else {
            f2 = (f64)(f32)(f2 - (f64)rdf32(0x805767d0u));
        }
        f1 = (f64)rdf32(0x805767d4u);
        if (!((f1 > f2) || (f1 == f2))) {
            if (!((f64)rdf32(0x805767ccu) < f31)) {
                if ((f1 > f31) || (f1 == f31)) {
                    f31 = (f64)(f32)((f64)rdf32(0x805767d0u) + f31);
                }
            } else {
                f31 = (f64)(f32)(f31 - (f64)rdf32(0x805767d0u));
            }
            (void)(!((f64)(f32)(f31 - f3) > (f64)rdf32(0x805767ccu)));
        } else {
            if (!((f64)rdf32(0x805767ccu) < f31)) {
                if ((f1 > f31) || (f1 == f31)) {
                    f31 = (f64)(f32)((f64)rdf32(0x805767d0u) + f31);
                }
            } else {
                f31 = (f64)(f32)(f31 - (f64)rdf32(0x805767d0u));
            }
            (void)(!((f64)(f32)(f31 - f3) > (f64)rdf32(0x805767ccu)));
        }
    } else {
        if (!(f0 < f31)) {
            f0 = (f64)rdf32(0x805767d4u);
            if ((f0 > f31) || (f0 == f31)) {
                f31 = (f64)(f32)((f64)rdf32(0x805767d0u) + f31);
            }
        } else {
            f31 = (f64)(f32)(f31 - (f64)rdf32(0x805767d0u));
        }
        (void)(!((f64)(f32)(f31 - f3) > (f64)rdf32(0x805767ccu)));
    }
    r6 = rd32(0x817fdfa4u);
    r0 = rd32(0x817fdfa8u);
    wr32(0x817fdf7cu, rd32(0x817fdfa0u));
    wr32(0x817fdf80u, r6);
    wr32(0x817fdf84u, r0);
    a.r[0] = 0x817fdf7cu;
    a.r[1] = 0x817fdfb8u;
    a.r[2] = 0x817fdf7cu;
    (void)tc_call(0x802343a4u, &a);
    f1 = -(f64)rdf32(0x804890d8u);
    f0 = -(f64)rdf32(0x804890dcu);
    wrf32d(0x817fdf70u, -(f64)rdf32(0x804890d4u));
    wrf32d(0x817fdf74u, f1);
    wrf32d(0x817fdf78u, f0);
    a.r[0] = 0x817fdf70u;
    a.r[1] = rd32((u32)param_2 + 0x30u);
    a.r[2] = 0x817fdf70u;
    (void)tc_call(0x800424c8u, &a);
    r0 = 0u;
    r4 = rd32(0x817fdf74u);
    wr32(0x817fdf64u, rd32(0x817fdf70u));
    r3 = rd32(0x817fdf78u);
    f1 = (f64)rdf32(0x805767c8u);
    f0 = (f64)rdf32(0x817fdf64u);
    wr32(0x817fdf68u, r4);
    wr32(0x817fdf6cu, r3);
    if (f1 == f0 && f1 == (f64)rdf32(0x817fdf68u) && f1 == (f64)rdf32(0x817fdf6cu)) {
        r0 = 1u;
    }
    if (r0 == 0u) {
        a.r[0] = 0x817fdf64u;
        a.r[1] = 0x817fdf64u;
        (void)tc_call(0x802343e4u, &a);
    }
    f0 = (f64)rdf32(0x805767c8u);
    wrf32d(0x817fdf30u, f0);
    wrf32d(0x817fdf2cu, f0);
    wrf32d(0x817fdf28u, f0);
    a.r[0] = 0x817fdf88u;
    a.r[1] = 0x817fdf28u;
    (void)tc_call(0x802343e4u, &a);
    a.f[0] = (f64)rdf32(0x817fdf28u);
    a.f[1] = (f64)rdf32(0x817fdf30u);
    f1 = tc_callf(0x80262c68u, &a);
    f1 = (f64)(f32)f1;
    if (!((f64)rdf32(0x805767ccu) < f1)) {
        a.f[0] = (f64)rdf32(0x817fdf28u);
        a.f[1] = (f64)rdf32(0x817fdf30u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        f0 = (f64)rdf32(0x805767d4u);
        if (!((f0 > f1) || (f0 == f1))) {
            a.f[0] = (f64)rdf32(0x817fdf28u);
            a.f[1] = (f64)rdf32(0x817fdf30u);
            f1 = tc_callf(0x80262c68u, &a);
            f31 = (f64)(f32)f1;
        } else {
            a.f[0] = (f64)rdf32(0x817fdf28u);
            a.f[1] = (f64)rdf32(0x817fdf30u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f31 = (f64)(f32)((f64)rdf32(0x805767d0u) + f1);
        }
    } else {
        a.f[0] = (f64)rdf32(0x817fdf28u);
        a.f[1] = (f64)rdf32(0x817fdf30u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        f31 = (f64)(f32)(f1 - (f64)rdf32(0x805767d0u));
    }
    f0 = (f64)rdf32(0x805767c8u);
    wrf32d(0x817fdf3cu, f0);
    wrf32d(0x817fdf38u, f0);
    wrf32d(0x817fdf34u, f0);
    a.r[0] = 0x817fdf64u;
    a.r[1] = 0x817fdf34u;
    (void)tc_call(0x802343e4u, &a);
    a.f[0] = (f64)rdf32(0x817fdf34u);
    a.f[1] = (f64)rdf32(0x817fdf3cu);
    f1 = tc_callf(0x80262c68u, &a);
    f1 = (f64)(f32)f1;
    if (!((f64)rdf32(0x805767ccu) < f1)) {
        a.f[0] = (f64)rdf32(0x817fdf34u);
        a.f[1] = (f64)rdf32(0x817fdf3cu);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        f0 = (f64)rdf32(0x805767d4u);
        if (!((f0 > f1) || (f0 == f1))) {
            a.f[0] = (f64)rdf32(0x817fdf34u);
            a.f[1] = (f64)rdf32(0x817fdf3cu);
            f1 = tc_callf(0x80262c68u, &a);
            f3 = (f64)(f32)f1;
        } else {
            a.f[0] = (f64)rdf32(0x817fdf34u);
            a.f[1] = (f64)rdf32(0x817fdf3cu);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f3 = (f64)(f32)((f64)rdf32(0x805767d0u) + f1);
        }
    } else {
        a.f[0] = (f64)rdf32(0x817fdf34u);
        a.f[1] = (f64)rdf32(0x817fdf3cu);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        f3 = (f64)(f32)(f1 - (f64)rdf32(0x805767d0u));
    }
    if (!((f64)rdf32(0x805767ccu) < f31)) {
        f0 = (f64)rdf32(0x805767d4u);
        if (!((f0 > f31) || (f0 == f31))) {
            f0 = f31;
        } else {
            f0 = (f64)(f32)((f64)rdf32(0x805767d0u) + f31);
        }
    } else {
        f0 = (f64)(f32)(f31 - (f64)rdf32(0x805767d0u));
    }
    f1 = (f64)(f32)(f0 - f3);
    if (!(f1 > (f64)rdf32(0x805767ccu))) {
        if (f1 < (f64)rdf32(0x805767d4u)) {
            f1 = (f64)(f32)(f1 + (f64)rdf32(0x805767d0u));
        }
    } else {
        f1 = (f64)(f32)(f1 - (f64)rdf32(0x805767d0u));
    }
    f0 = (f64)rdf32(0x805767ccu);
    if (!(f0 < f1)) {
        if (!(f0 < f31)) {
            f0 = (f64)rdf32(0x805767d4u);
            if (!((f0 > f31) || (f0 == f31))) {
                f0 = f31;
            } else {
                f0 = (f64)(f32)((f64)rdf32(0x805767d0u) + f31);
            }
        } else {
            f0 = (f64)(f32)(f31 - (f64)rdf32(0x805767d0u));
        }
        f2 = (f64)(f32)(f0 - f3);
        if (!(f2 > (f64)rdf32(0x805767ccu))) {
            if (f2 < (f64)rdf32(0x805767d4u)) {
                f2 = (f64)(f32)(f2 + (f64)rdf32(0x805767d0u));
            }
        } else {
            f2 = (f64)(f32)(f2 - (f64)rdf32(0x805767d0u));
        }
        f1 = (f64)rdf32(0x805767d4u);
        if (!((f1 > f2) || (f1 == f2))) {
            if (!((f64)rdf32(0x805767ccu) < f31)) {
                if ((f1 > f31) || (f1 == f31)) {
                    f31 = (f64)(f32)((f64)rdf32(0x805767d0u) + f31);
                }
            } else {
                f31 = (f64)(f32)(f31 - (f64)rdf32(0x805767d0u));
            }
            (void)(!((f64)(f32)(f31 - f3) > (f64)rdf32(0x805767ccu)));
        } else {
            if (!((f64)rdf32(0x805767ccu) < f31)) {
                if ((f1 > f31) || (f1 == f31)) {
                    f31 = (f64)(f32)((f64)rdf32(0x805767d0u) + f31);
                }
            } else {
                f31 = (f64)(f32)(f31 - (f64)rdf32(0x805767d0u));
            }
            (void)(!((f64)(f32)(f31 - f3) > (f64)rdf32(0x805767ccu)));
        }
    } else {
        if (!(f0 < f31)) {
            f0 = (f64)rdf32(0x805767d4u);
            if ((f0 > f31) || (f0 == f31)) {
                f31 = (f64)(f32)((f64)rdf32(0x805767d0u) + f31);
            }
        } else {
            f31 = (f64)(f32)(f31 - (f64)rdf32(0x805767d0u));
        }
        (void)(!((f64)(f32)(f31 - f3) > (f64)rdf32(0x805767ccu)));
    }
    a.r[0] = 0x817fdf7cu;
    a.r[1] = 0x817fdf24u;
    a.r[2] = 0x817fdf20u;
    (void)tc_call(0x8006606cu, &a);
    a.r[0] = 0x817fdf70u;
    a.r[1] = 0x817fdf1cu;
    a.r[2] = 0x817fdf18u;
    (void)tc_call(0x8006606cu, &a);
    f0 = (f64)(f32)((f64)rdf32(0x817fdf20u) - (f64)rdf32(0x817fdf18u));
    f1 = (f64)(f32)((f64)rdf32(0x817fdf24u) - (f64)rdf32(0x817fdf1cu));
    if ((f64)(f32)ppc_fabs(f0) > (f64)rdf32(0x805767ccu)) {
        if (!(f0 > (f64)rdf32(0x805767c8u))) {
            f0 = (f64)(f32)((f64)rdf32(0x805767d0u) + f0);
        } else {
            f0 = (f64)(f32)(f0 - (f64)rdf32(0x805767d0u));
        }
    }
    if ((f64)(f32)ppc_fabs(f1) > (f64)rdf32(0x805767ccu)) {
        if (!(f1 > (f64)rdf32(0x805767c8u))) {
            f1 = (f64)(f32)((f64)rdf32(0x805767d0u) + f1);
        } else {
            f1 = (f64)(f32)(f1 - (f64)rdf32(0x805767d0u));
        }
    }
    do {
        if ((!((f64)(f32)ppc_fabs(f0) < (f64)rdf32(0x805767e4u)) || !((f64)(f32)ppc_fabs(f1) < (f64)rdf32(0x805767e8u))) && (rd32(r30 + 0x90u) == 0u || !((f64)(f32)ppc_fabs(f0) < (f64)rdf32(0x805767fcu)) || !((f64)(f32)ppc_fabs(f1) < (f64)rdf32(0x80576800u)))) {
            f2 = (f64)rdf32(r30 + 0x8cu);
            f1 = ppc_fnmsubs((f64)rdf32(0x805767f8u), f2, f2);
            if (!((f64)rdf32(0x805767ccu) < f1)) {
                f0 = (f64)rdf32(0x805767d4u);
                if ((f0 > f1) || (f0 == f1)) {
                    f1 = (f64)(f32)((f64)rdf32(0x805767d0u) + f1);
                }
            } else {
                f1 = (f64)(f32)(f1 - (f64)rdf32(0x805767d0u));
            }
            wrf32d(r30 + 0x8cu, f1);
            f2 = (f64)rdf32(r30 + 0x88u);
            f1 = ppc_fnmsubs((f64)rdf32(0x805767f8u), f2, f2);
            if (!((f64)rdf32(0x805767ccu) < f1)) {
                f0 = (f64)rdf32(0x805767d4u);
                if ((f0 > f1) || (f0 == f1)) {
                    f1 = (f64)(f32)((f64)rdf32(0x805767d0u) + f1);
                }
            } else {
                f1 = (f64)(f32)(f1 - (f64)rdf32(0x805767d0u));
            }
            wrf32d(r30 + 0x88u, f1);
            wr32(r30 + 0x90u, 0u);
            break;
        }
        f3 = (f64)rdf32(0x805767e4u);
        if ((f64)(f32)ppc_fabs(f1) > f3) {
            if (!(f1 > (f64)rdf32(0x805767c8u))) {
                f3 = (f64)rdf32(0x805767ecu);
            }
            f1 = f3;
        }
        f3 = (f64)rdf32(0x805767f0u);
        if ((f64)(f32)ppc_fabs(f0) > f3) {
            if (!(f0 > (f64)rdf32(0x805767c8u))) {
                f3 = (f64)rdf32(0x805767f4u);
            }
            f0 = f3;
        }
        f4 = (f64)rdf32(r30 + 0x8cu);
        f2 = ppc_fmadds((f64)rdf32(0x805767f8u), (f64)(f32)(f1 - f4), f4);
        if (!((f64)rdf32(0x805767ccu) < f2)) {
            f1 = (f64)rdf32(0x805767d4u);
            if ((f1 > f2) || (f1 == f2)) {
                f2 = (f64)(f32)((f64)rdf32(0x805767d0u) + f2);
            }
        } else {
            f2 = (f64)(f32)(f2 - (f64)rdf32(0x805767d0u));
        }
        wrf32d(r30 + 0x8cu, f2);
        f3 = (f64)rdf32(r30 + 0x88u);
        f0 = (f64)(f32)(f0 - f3);
        f2 = ppc_fmadds((f64)rdf32(0x805767f8u), f0, f3);
        if (!((f64)rdf32(0x805767ccu) < f2)) {
            f0 = (f64)rdf32(0x805767d4u);
            if ((f0 > f2) || (f0 == f2)) {
                f2 = (f64)(f32)((f64)rdf32(0x805767d0u) + f2);
            }
        } else {
            f2 = (f64)(f32)(f2 - (f64)rdf32(0x805767d0u));
        }
        wrf32d(r30 + 0x88u, f2);
        wr32(r30 + 0x90u, 1u);
    } while (0);
    a.f[0] = (f64)(f32)((f64)rdf32(0x817fdf1cu) + (f64)rdf32(r30 + 0x8cu));
    a.f[1] = -(f64)rdf32(0x805767c8u);
    a.r[0] = 0x817fdfacu;
    (void)tc_call(0x80066110u, &a);
    a.f[0] = (f64)rdf32(0x80576804u);
    a.r[0] = 0x817fdfacu;
    a.r[1] = 0x817fdfacu;
    (void)tc_call(0x802343c8u, &a);
    a.r[0] = r31;
    a.r[1] = 0x817fdfacu;
    (void)tc_call(0x80065f10u, &a);
    return;
}
