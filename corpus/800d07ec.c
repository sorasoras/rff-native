#include "tc_rt.h"

u32 fn_800d07ec(s32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r28 = 0, r29 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfdcu, 0u);
    r31 = 1u;
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd0u, 0u);
    r0 = rd32((u32)param_1 + 0x48u);
    c0lt = (s32)r0 < 2;
    if (r0 == 2u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0x803d29f8u;
        a.r[3] = param_r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        r3 = tc_call(0x80097c5cu, &a);
        if (r3 == 0u) {
            f0 = (f64)rdf32((u32)param_1 + 0x4cu);
            wr32((u32)param_1 + 0x48u, 3u);
            f0 = -f0;
            f1 = (f64)rdf32(0x80573088u);
            wrf32d((u32)param_1 + 0x54u, f0);
            wr32(rd32(0x804863d8u) + 0x1f4u, 0u);
            if (f1 != (f64)rdf32((u32)param_1 + 0x54u)) {
                wr32((u32)param_1 + 0x70u, 7u);
            } else {
                wr32((u32)param_1 + 0x70u, 0xfu);
            }
        }
    } else if (!c0lt) {
        c0lt = (s32)r0 < 4;
        if (r0 == 4u) {
            a.f[0] = (f64)rdf32((u32)param_1 + 0x68u);
            a.f[1] = (f64)rdf32(0x805730acu);
            r3 = tc_call(0x800d12a0u, &a);
            if (r3 != 0u) {
                r31 = 0u;
                wr32((u32)param_1 + 0x48u, 0u);
            }
        } else if (c0lt) {
            a.r[0] = (u32)param_1;
            a.r[1] = (u32)param_1 + 0x54u;
            a.r[2] = 0x817fdf98u;
            r3 = tc_call(0x800d1218u, &a);
            r29 = r3;
            r5 = rd32(0x804890d8u);
            r0 = rd32(0x804890dcu);
            wr32(0x817fdfb8u, rd32(0x804890d4u));
            f1 = (f64)rdf32(0x805730b0u);
            wr32(0x817fdfbcu, r5);
            wr32(0x817fdfc0u, r0);
            a.f[0] = f1;
            a.r[0] = 0x817fdfb8u;
            a.r[1] = 0x817fdfb8u;
            f1 = tc_callf(0x802343c8u, &a);
            r3 = rd32((u32)param_1 + 0x20u);
            a.r[0] = r3;
            a.r[1] = tc_lastr4();
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
            f1 = tc_callf(rd32(rd32(r3) + 0x2cu), &a);
            f31 = f1;
            r3 = rd32(0x817fdfbcu);
            r0 = rd32(0x817fdfc0u);
            wr32(0x817fdfa0u, rd32(0x817fdfb8u));
            wr32(0x817fdfa4u, r3);
            wr32(0x817fdfa8u, r0);
            a.f[0] = f1;
            f1 = tc_callf(0x80262704u, &a);
            f30 = (f64)(f32)f1;
            a.f[0] = f31;
            f1 = tc_callf(0x80262b10u, &a);
            f4 = (f64)(f32)f1;
            f1 = (f64)rdf32(0x817fdfa8u);
            f3 = (f64)rdf32(0x817fdfa0u);
            f0 = (f64)(f32)(f1 * f30);
            f2 = (f64)(f32)(f1 * f4);
            f1 = -f4;
            f2 = ppc_fmadds(f3, f30, f2);
            f0 = ppc_fmadds(f3, f1, f0);
            wrf32d(0x817fdfb8u, f2);
            wrf32d(0x817fdfc0u, f0);
            r3 = rd32((u32)param_1 + 0x20u);
            a.r[0] = r3;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
            a.r[0] = 0x817fdfb8u;
            a.r[1] = r3;
            a.r[2] = 0x817fdfb8u;
            f1 = tc_callf(0x80234380u, &a);
            r4 = tc_lastr4();
            r3 = rd32((u32)param_1 + 0x20u);
            wr32(r3 + 0x1f4u, 1u);
            wrf32d(r3 + 0x1f8u, (f64)rdf32(0x817fdfb8u));
            wrf32d(r3 + 0x1fcu, (f64)rdf32(0x817fdfbcu));
            wrf32d(r3 + 0x200u, (f64)rdf32(0x817fdfc0u));
            if (r29 != 0u) {
                r0 = rd32((u32)param_1 + 0x70u) - 1u;
                wr32((u32)param_1 + 0x70u, r0);
                if ((s32)r0 < 0) {
                    wr32(rd32((u32)param_1 + 0x20u) + 0x254u, rd32((u32)param_1 + 0x50u));
                    r3 = rd32((u32)param_1 + 0x20u);
                    a.r[0] = r3;
                    a.r[1] = 1u;
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
                    f1 = tc_callf(rd32(rd32(r3) + 0xa8u), &a);
                    r3 = rd32((u32)param_1 + 0x20u);
                    a.r[0] = r3;
                    a.r[1] = tc_lastr4();
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
                    f1 = tc_callf(rd32(rd32(r3) + 0x98u), &a);
                    if (rd32((u32)param_1 + 0x6cu) != 0u) {
                        a.r[0] = rd32((u32)param_1 + 0x20u);
                        f1 = tc_callf(0x800936c8u, &a);
                    }
                    r3 = rd32((u32)param_1 + 0x20u);
                    a.r[0] = r3;
                    a.r[1] = 0u;
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
                    (void)tc_call(rd32(rd32(r3) + 0xa8u), &a);
                    r3 = rd32((u32)param_1 + 0x20u);
                    wr32((u32)param_1 + 0x48u, 4u);
                    wr32(r3 + 0x1f4u, 0u);
                }
            } else {
                r3 = rd32((u32)param_1 + 0x20u);
                a.r[0] = r3;
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
                f1 = tc_callf(rd32(rd32(r3) + 0x2cu), &a);
                r3 = rd32((u32)param_1 + 0x20u);
                f1 = (f64)(f32)((f64)rdf32(0x817fdf98u) + f1);
                a.r[0] = r3;
                a.r[1] = tc_lastr4();
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
                f1 = tc_callf(rd32(rd32(r3) + 0x24u), &a);
                r3 = rd32((u32)param_1 + 0x20u);
                a.r[0] = r3;
                a.r[1] = tc_lastr4();
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
                f1 = tc_callf(rd32(rd32(r3) + 0x2cu), &a);
                if (!((f64)rdf32(0x8057309cu) < f1)) {
                    f0 = (f64)rdf32(0x805730a4u);
                    if ((f0 > f1) || (f0 == f1)) {
                        f1 = (f64)(f32)((f64)rdf32(0x805730a0u) + f1);
                    }
                } else {
                    f1 = (f64)(f32)(f1 - (f64)rdf32(0x805730a0u));
                }
                f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x40u) + f1);
                if (!((f64)rdf32(0x8057309cu) < f1)) {
                    f0 = (f64)rdf32(0x805730a4u);
                    if ((f0 > f1) || (f0 == f1)) {
                        f1 = (f64)(f32)((f64)rdf32(0x805730a0u) + f1);
                    }
                } else {
                    f1 = (f64)(f32)(f1 - (f64)rdf32(0x805730a0u));
                }
                wrf32d((u32)param_1 + 0x40u, f1);
            }
        }
    } else {
        c0lt = (s32)r0 < 0;
        if (r0 == 0u) {
            wr32((u32)param_1 + 0x6cu, 0u);
            r4 = rd32((u32)param_1 + 0x20u);
            wr32((u32)param_1 + 0x48u, 1u);
            a.r[0] = rd32(r4 + 0xacu);
            r3 = tc_call(0x8007dad4u, &a);
            r3 = rd32(r3 + 0xcu);
            a.r[0] = r3;
            r3 = tc_call(0x800f2a0cu, &a);
            f1 = tc_lastf();
            r28 = r3;
            r3 = rd32(0x804863d8u);
            a.r[0] = r3;
            a.r[1] = 0x80480000u;
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
            r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
            f1 = tc_lastf();
            r4 = rd32((u32)param_1 + 0x20u);
            wr32(r4 + 0x1f4u, 1u);
            wrf32d(r4 + 0x1f8u, (f64)rdf32(r3));
            wrf32d(r4 + 0x1fcu, (f64)rdf32(r3 + 4u));
            wrf32d(r4 + 0x200u, (f64)rdf32(r3 + 8u));
            r3 = rd32((u32)param_1 + 0x20u);
            r0 = (u32)rd8(rd32(r28) + 2u + (rd32(r3 + 0x100u) * 0x24u));
            if (r0 != 0u) {
                if (r0 != 1u) {
                    if (r0 != 2u) {
                        wrf32d((u32)param_1 + 0x4cu, (f64)rdf32(0x80573088u));
                    } else {
                        a.r[0] = r3;
                        (void)tc_call(0x8009364cu, &a);
                        r3 = rd32((u32)param_1 + 0x20u);
                        a.r[0] = r3;
                        a.r[1] = 0u;
                        a.r[2] = 1u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        a.f[0] = (f64)rdf32(0x80573098u);
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        (void)tc_call(rd32(rd32(r3) + 0x54u), &a);
                        a.r[0] = rd32((u32)param_1 + 0x20u);
                        f1 = tc_callf(0x80093d84u, &a);
                        wrf32d((u32)param_1 + 0x4cu, f1);
                        wr32((u32)param_1 + 0x6cu, 1u);
                    }
                } else {
                    wrf32d((u32)param_1 + 0x4cu, (f64)rdf32(0x80573088u));
                }
            } else {
                a.r[0] = r3;
                f1 = tc_callf(0x80093d84u, &a);
                wrf32d((u32)param_1 + 0x4cu, f1);
            }
            r5 = rd32((u32)param_1 + 0x20u);
            wrf32d((u32)param_1 + 0x54u, (f64)rdf32((u32)param_1 + 0x4cu));
            wr32((u32)param_1 + 0x50u, rd32(r5 + 0x254u));
            wr32(r5 + 0x254u, 1u);
            r3 = rd32((u32)param_1 + 0x20u);
            a.r[0] = r3;
            a.r[1] = 1u;
            a.r[2] = r5;
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
            f1 = tc_callf(rd32(rd32(r3) + 0xa8u), &a);
            r3 = rd32((u32)param_1 + 0x20u);
            a.r[0] = r3;
            a.r[1] = 1u;
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
            f1 = tc_callf(rd32(rd32(r3) + 0xa0u), &a);
            r3 = rd32((u32)param_1 + 0x20u);
            a.r[0] = r3;
            a.r[1] = tc_lastr4();
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
            r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
            f1 = tc_lastf();
            r28 = r3;
            r29 = rd32(0x804863d8u);
            a.r[0] = r29;
            a.r[1] = 0x80480000u;
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
            r3 = tc_call(rd32(rd32(r29) + 0x28u), &a);
            r0 = rd32(r28 + 4u);
            wr32(0x817fdfacu, rd32(r28));
            wr32(0x817fdfb0u, r0);
            wr32(0x817fdfb4u, rd32(r28 + 8u));
            a.r[0] = 0x817fdfacu;
            a.r[1] = r3;
            a.r[2] = 0x817fdfacu;
            (void)tc_call(0x802343a4u, &a);
            a.f[0] = (f64)rdf32(0x817fdfacu);
            a.f[1] = (f64)rdf32(0x817fdfb4u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            if (!((f64)rdf32(0x8057309cu) < f1)) {
                a.f[0] = (f64)rdf32(0x817fdfacu);
                a.f[1] = (f64)rdf32(0x817fdfb4u);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f0 = (f64)rdf32(0x805730a4u);
                if (!((f0 > f1) || (f0 == f1))) {
                    a.f[0] = (f64)rdf32(0x817fdfacu);
                    a.f[1] = (f64)rdf32(0x817fdfb4u);
                    f1 = tc_callf(0x80262c68u, &a);
                    f31 = (f64)(f32)f1;
                } else {
                    a.f[0] = (f64)rdf32(0x817fdfacu);
                    a.f[1] = (f64)rdf32(0x817fdfb4u);
                    f1 = tc_callf(0x80262c68u, &a);
                    f1 = (f64)(f32)f1;
                    f31 = (f64)(f32)((f64)rdf32(0x805730a0u) + f1);
                }
            } else {
                a.f[0] = (f64)rdf32(0x817fdfacu);
                a.f[1] = (f64)rdf32(0x817fdfb4u);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f31 = (f64)(f32)(f1 - (f64)rdf32(0x805730a0u));
            }
            a.f[0] = (f64)rdf32(r29 + 0x78u);
            a.f[1] = (f64)rdf32(r29 + 0x80u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            if (!((f64)rdf32(0x8057309cu) < f1)) {
                a.f[0] = (f64)rdf32(r29 + 0x78u);
                a.f[1] = (f64)rdf32(r29 + 0x80u);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f0 = (f64)rdf32(0x805730a4u);
                if (!((f0 > f1) || (f0 == f1))) {
                    a.f[0] = (f64)rdf32(r29 + 0x78u);
                    a.f[1] = (f64)rdf32(r29 + 0x80u);
                    f1 = tc_callf(0x80262c68u, &a);
                    f2 = 0.0;
                    f3 = (f64)(f32)f1;
                } else {
                    a.f[0] = (f64)rdf32(r29 + 0x78u);
                    a.f[1] = (f64)rdf32(r29 + 0x80u);
                    f1 = tc_callf(0x80262c68u, &a);
                    f2 = 0.0;
                    f1 = (f64)(f32)f1;
                    f3 = (f64)(f32)((f64)rdf32(0x805730a0u) + f1);
                }
            } else {
                a.f[0] = (f64)rdf32(r29 + 0x78u);
                a.f[1] = (f64)rdf32(r29 + 0x80u);
                f1 = tc_callf(0x80262c68u, &a);
                f2 = 0.0;
                f1 = (f64)(f32)f1;
                f3 = (f64)(f32)(f1 - (f64)rdf32(0x805730a0u));
            }
            if (!((f64)rdf32(0x8057309cu) < f31)) {
                f0 = (f64)rdf32(0x805730a4u);
                if (!((f0 > f31) || (f0 == f31))) {
                    f0 = f31;
                } else {
                    f0 = (f64)(f32)((f64)rdf32(0x805730a0u) + f31);
                }
            } else {
                f0 = (f64)(f32)(f31 - (f64)rdf32(0x805730a0u));
            }
            f1 = (f64)(f32)(f0 - f3);
            if (!(f1 > (f64)rdf32(0x8057309cu))) {
                if (f1 < (f64)rdf32(0x805730a4u)) {
                    f1 = (f64)(f32)(f1 + (f64)rdf32(0x805730a0u));
                }
            } else {
                f1 = (f64)(f32)(f1 - (f64)rdf32(0x805730a0u));
            }
            f0 = (f64)rdf32(0x8057309cu);
            if (!(f0 < f1)) {
                if (!(f0 < f31)) {
                    f0 = (f64)rdf32(0x805730a4u);
                    if (!((f0 > f31) || (f0 == f31))) {
                        f0 = f31;
                    } else {
                        f0 = (f64)(f32)((f64)rdf32(0x805730a0u) + f31);
                    }
                } else {
                    f0 = (f64)(f32)(f31 - (f64)rdf32(0x805730a0u));
                }
                f2 = (f64)(f32)(f0 - f3);
                if (!(f2 > (f64)rdf32(0x8057309cu))) {
                    if (f2 < (f64)rdf32(0x805730a4u)) {
                        f2 = (f64)(f32)(f2 + (f64)rdf32(0x805730a0u));
                    }
                } else {
                    f2 = (f64)(f32)(f2 - (f64)rdf32(0x805730a0u));
                }
                f1 = (f64)rdf32(0x805730a4u);
                if (!((f1 > f2) || (f1 == f2))) {
                    if (!((f64)rdf32(0x8057309cu) < f31)) {
                        if ((f1 > f31) || (f1 == f31)) {
                            f31 = (f64)(f32)((f64)rdf32(0x805730a0u) + f31);
                        }
                    } else {
                        f31 = (f64)(f32)(f31 - (f64)rdf32(0x805730a0u));
                    }
                    f1 = (f64)(f32)(f31 - f3);
                    if (!(f1 > (f64)rdf32(0x8057309cu))) {
                        if (f1 < (f64)rdf32(0x805730a4u)) {
                            f1 = (f64)(f32)(f1 + (f64)rdf32(0x805730a0u));
                        }
                    } else {
                        f1 = (f64)(f32)(f1 - (f64)rdf32(0x805730a0u));
                    }
                } else {
                    if (!((f64)rdf32(0x8057309cu) < f31)) {
                        if ((f1 > f31) || (f1 == f31)) {
                            f31 = (f64)(f32)((f64)rdf32(0x805730a0u) + f31);
                        }
                    } else {
                        f31 = (f64)(f32)(f31 - (f64)rdf32(0x805730a0u));
                    }
                    f1 = (f64)(f32)(f31 - f3);
                    if (!(f1 > (f64)rdf32(0x8057309cu))) {
                        if (f1 < (f64)rdf32(0x805730a4u)) {
                            f1 = (f64)(f32)(f1 + (f64)rdf32(0x805730a0u));
                        }
                    } else {
                        f1 = (f64)(f32)(f1 - (f64)rdf32(0x805730a0u));
                    }
                    f1 = (f64)(f32)((f64)rdf32(0x805730a0u) + f1);
                }
            } else {
                if (!(f0 < f31)) {
                    f0 = (f64)rdf32(0x805730a4u);
                    if ((f0 > f31) || (f0 == f31)) {
                        f31 = (f64)(f32)((f64)rdf32(0x805730a0u) + f31);
                    }
                } else {
                    f31 = (f64)(f32)(f31 - (f64)rdf32(0x805730a0u));
                }
                f1 = (f64)(f32)(f31 - f3);
                if (!(f1 > (f64)rdf32(0x8057309cu))) {
                    if (f1 < (f64)rdf32(0x805730a4u)) {
                        f1 = (f64)(f32)(f1 + (f64)rdf32(0x805730a0u));
                    }
                } else {
                    f1 = (f64)(f32)(f1 - (f64)rdf32(0x805730a0u));
                }
                f1 = (f64)(f32)(f1 - (f64)rdf32(0x805730a0u));
            }
            wrf32d((u32)param_1 + 0x5cu, f1);
            r3 = rd32((u32)param_1 + 0x20u);
            wrf32d((u32)param_1 + 0x60u, f1);
            r4 = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
            wrf32d((u32)param_1 + 0x68u, (f64)rdf32(r4 + 0x1d8u));
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
            r4 = rd32(0x804863d8u);
            wr32(r4 + 0x1f4u, 1u);
            wrf32d(r4 + 0x1f8u, (f64)rdf32(r3));
            wrf32d(r4 + 0x1fcu, (f64)rdf32(r3 + 4u));
            wrf32d(r4 + 0x200u, (f64)rdf32(r3 + 8u));
        } else if (!c0lt) {
            a.r[0] = (u32)param_1;
            a.r[1] = (u32)param_1 + 0x60u;
            a.r[2] = 0x817fdf9cu;
            r3 = tc_call(0x800d1218u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            r28 = r3;
            if (r3 == 0u) {
                r3 = rd32(0x804863d8u);
                r29 = r3;
                a.r[0] = r3;
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
                f1 = tc_callf(rd32(rd32(r3) + 0x2cu), &a);
                f1 = (f64)(f32)((f64)rdf32(0x817fdf9cu) + f1);
                a.r[0] = r29;
                a.r[1] = tc_lastr4();
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
                (void)tc_call(rd32(rd32(r29) + 0x24u), &a);
            }
            a.r[0] = (u32)param_1;
            a.r[1] = (u32)param_1 + 0x54u;
            a.r[2] = 0x817fdf9cu;
            r3 = tc_call(0x800d1218u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            r29 = r3;
            if (r3 == 0u) {
                r3 = rd32((u32)param_1 + 0x20u);
                a.r[0] = r3;
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
                f1 = tc_callf(rd32(rd32(r3) + 0x2cu), &a);
                r3 = rd32((u32)param_1 + 0x20u);
                f1 = (f64)(f32)((f64)rdf32(0x817fdf9cu) + f1);
                a.r[0] = r3;
                a.r[1] = tc_lastr4();
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
                f1 = tc_callf(rd32(rd32(r3) + 0x24u), &a);
                r3 = rd32((u32)param_1 + 0x20u);
                a.r[0] = r3;
                a.r[1] = tc_lastr4();
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
                f1 = tc_callf(rd32(rd32(r3) + 0x2cu), &a);
                if (!((f64)rdf32(0x8057309cu) < f1)) {
                    f0 = (f64)rdf32(0x805730a4u);
                    if ((f0 > f1) || (f0 == f1)) {
                        f1 = (f64)(f32)((f64)rdf32(0x805730a0u) + f1);
                    }
                } else {
                    f1 = (f64)(f32)(f1 - (f64)rdf32(0x805730a0u));
                }
                f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x40u) + f1);
                if (!((f64)rdf32(0x8057309cu) < f1)) {
                    f0 = (f64)rdf32(0x805730a4u);
                    if ((f0 > f1) || (f0 == f1)) {
                        f1 = (f64)(f32)((f64)rdf32(0x805730a0u) + f1);
                    }
                } else {
                    f1 = (f64)(f32)(f1 - (f64)rdf32(0x805730a0u));
                }
                wrf32d((u32)param_1 + 0x40u, f1);
            }
            a.f[0] = (f64)rdf32(0x805730a8u);
            a.f[1] = (f64)rdf32(0x805730acu);
            r3 = tc_call(0x800d12a0u, &a);
            f1 = tc_lastf();
            if (r28 != 0u && r29 != 0u && r3 != 0u) {
                r3 = rd32((u32)param_1 + 0x20u);
                a.r[0] = r3;
                a.r[1] = 0u;
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
                (void)tc_call(rd32(rd32(r3) + 0xa0u), &a);
                wr32((u32)param_1 + 0x48u, 2u);
                r5 = rd32(0x804863d8u);
                r4 = rd32(rd32((u32)param_1 + 0x20u) + 0x25cu);
                r3 = rd32(r5 + 0xa48u);
                if (r3 == 0u) {
                    r0 = 0x2e8u;
                } else {
                    r0 = rd32(r3 + 0x74u);
                }
                if (r0 == 0x2e8u) {
                    a.r[0] = 0x803d29f8u;
                    a.r[1] = r4;
                    (void)tc_call(0x800970a8u, &a);
                } else {
                    r5 = rd32(r5 + 0xa48u);
                    if (r5 == 0u) {
                        r5 = 0x2e8u;
                    } else {
                        r5 = rd32(r5 + 0x74u);
                    }
                    a.r[0] = 0x803d29f8u;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    (void)tc_call(0x80097104u, &a);
                }
            }
        }
    }
    return r31;
}
