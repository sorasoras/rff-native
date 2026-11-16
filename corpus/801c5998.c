#include "tc_rt.h"

u32 fn_801c5998(s32 param_1, u32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r28 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe0u, 0u);
    r0 = rd32((u32)param_1 + 0x1d4u);
    c0lt = (s32)r0 < 2;
    if (r0 == 2u) {
        f0 = (f64)rdf32(0x80575d74u);
        f1 = (f64)rdf32(rd32(param_2 + 0x70u) + 0x54u);
        if (!((f1 > f0) || (f1 == f0))) {
            f0 = (f64)rdf32(0x80575d78u);
            if ((f1 > f0) || (f1 == f0)) {
                r0 = rd32(param_2 + 0x180u);
                f1 = (f64)rdf32(0x80575d7cu);
                wr32(0x817fdfb0u, rd32(param_2 + 0x17cu));
                wr32(0x817fdfb4u, r0);
                wr32(0x817fdfb8u, rd32(param_2 + 0x184u));
                a.f[0] = f1;
                a.r[0] = 0x817fdfb0u;
                a.r[1] = 0x817fdfb0u;
                (void)tc_call(0x802343c8u, &a);
                wrf32d(param_2 + 0x17cu, (f64)rdf32(0x817fdfb0u));
                wrf32d(param_2 + 0x180u, (f64)rdf32(0x817fdfb4u));
                wrf32d(param_2 + 0x184u, (f64)rdf32(0x817fdfb8u));
            }
        } else {
            wrf32d(param_2 + 0x17cu, (f64)rdf32(0x804890c8u));
            wrf32d(param_2 + 0x180u, (f64)rdf32(0x804890ccu));
            wrf32d(param_2 + 0x184u, (f64)rdf32(0x804890d0u));
        }
        if (rd32(param_2 + 0x110u) != 0u) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x801c56a0u, &a);
            r3 = 0u;
            return r3;
        }
    } else if (!c0lt) {
        c0lt = (s32)r0 < 4;
        if (r0 == 4u) {
            a.r[0] = (u32)param_1;
            a.r[1] = param_2;
            f1 = tc_callf(0x801c5708u, &a);
            r4 = tc_lastr4();
            if (rd32(param_2 + 0x110u) != 0u) {
                a.r[0] = param_2;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                r3 = tc_call(rd32(rd32(param_2) + 0x1f4u), &a);
                a.r[0] = param_2;
                a.r[1] = r3;
                a.r[2] = 1u;
                a.r[3] = 1u;
                a.f[0] = (f64)rdf32(0x80575d40u);
                a.f[1] = 0.0;
                (void)tc_call(rd32(rd32(param_2) + 0x54u), &a);
            }
            r0 = rd32(param_2 + 0x180u);
            f1 = (f64)rdf32(0x80575d80u);
            wr32(0x817fdf98u, rd32(param_2 + 0x17cu));
            wr32(0x817fdf9cu, r0);
            wr32(0x817fdfa0u, rd32(param_2 + 0x184u));
            a.f[0] = f1;
            a.r[0] = 0x817fdf98u;
            a.r[1] = 0x817fdf98u;
            (void)tc_call(0x802343c8u, &a);
            wrf32d(param_2 + 0x17cu, (f64)rdf32(0x817fdf98u));
            wrf32d(param_2 + 0x180u, (f64)rdf32(0x817fdf9cu));
            wrf32d(param_2 + 0x184u, (f64)rdf32(0x817fdfa0u));
            r0 = rd32((u32)param_1 + 0x1d8u) - 1u;
            wr32((u32)param_1 + 0x1d8u, r0);
            if ((s32)r0 <= 0) {
                r3 = 0u;
                return r3;
            }
        } else if (c0lt) {
            r0 = rd32(param_2 + 0x180u);
            f1 = (f64)rdf32(0x80575d7cu);
            wr32(0x817fdfa4u, rd32(param_2 + 0x17cu));
            wr32(0x817fdfa8u, r0);
            wr32(0x817fdfacu, rd32(param_2 + 0x184u));
            a.f[0] = f1;
            a.r[0] = 0x817fdfa4u;
            a.r[1] = 0x817fdfa4u;
            (void)tc_call(0x802343c8u, &a);
            r0 = rd32(param_2 + 0x110u);
            wrf32d(param_2 + 0x17cu, (f64)rdf32(0x817fdfa4u));
            wrf32d(param_2 + 0x180u, (f64)rdf32(0x817fdfa8u));
            wrf32d(param_2 + 0x184u, (f64)rdf32(0x817fdfacu));
            if (r0 != 0u) {
                r3 = 0u;
                return r3;
            }
        }
    } else {
        c0lt = (s32)r0 < 0;
        if (r0 == 0u) {
            if (rd32(param_2 + 0x110u) == 0u) {
                a.r[0] = param_2;
                a.r[1] = param_2;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = 0.0;
                a.f[1] = 0.0;
                f1 = tc_callf(rd32(rd32(param_2) + 0x2cu), &a);
                f31 = f1;
                r3 = rd32(0x804863d8u);
                a.r[0] = r3;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
                a.r[0] = param_2;
                a.r[1] = r3;
                a.r[2] = 0x804dc8b0u;
                f1 = tc_callf(0x801c3248u, &a);
                r4 = tc_lastr4();
                f2 = (f64)(f32)ppc_fabs(f1);
                if (!(f2 > (f64)rdf32(0x80575d68u))) {
                    f1 = (f64)(f32)(f31 + f1);
                } else {
                    if (!(f1 > (f64)rdf32(0x80575cfcu))) {
                        f1 = (f64)rdf32(0x80575d44u);
                    } else {
                        f1 = (f64)rdf32(0x80575cd8u);
                    }
                    f1 = ppc_fmadds((f64)rdf32(0x80575d68u), f1, f31);
                }
                a.r[0] = param_2;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = f2;
                (void)tc_call(rd32(rd32(param_2) + 0x24u), &a);
            } else {
                r3 = rd32(0x804863d8u);
                a.r[0] = r3;
                a.r[1] = param_2;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = 0.0;
                a.f[1] = 0.0;
                r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
                a.f[0] = (f64)rdf32(0x80575d60u);
                a.r[0] = param_2;
                a.r[1] = r3;
                r3 = tc_call(0x801c3410u, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                if (r3 == 0u) {
                    r3 = 0u;
                    return r3;
                }
                wr32(param_2 + 0xd34u, 0u);
                a.r[0] = param_2;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
                f1 = tc_lastf();
                r28 = r3;
                r3 = rd32(0x804863d8u);
                a.r[0] = r3;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
                r0 = rd32(r3 + 4u);
                wr32(0x817fdfd4u, rd32(r3));
                wr32(0x817fdfd8u, r0);
                wr32(0x817fdfdcu, rd32(r3 + 8u));
                a.r[0] = 0x817fdfd4u;
                a.r[1] = r28;
                a.r[2] = 0x817fdfd4u;
                (void)tc_call(0x802343a4u, &a);
                a.r[0] = param_2;
                a.r[1] = (u32)param_1 + 0x1dcu;
                (void)tc_call(0x801c3208u, &a);
                a.r[0] = 0x817fdfd4u;
                f1 = tc_callf(0x80234440u, &a);
                r3 = (u32)param_1 + 0x1dcu;
                a.f[0] = f1;
                a.r[0] = r3;
                a.r[1] = r3;
                f1 = tc_callf(0x802343c8u, &a);
                a.r[0] = param_2;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
                r4 = r3;
                r3 = (u32)param_1 + 0x1dcu;
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = r3;
                (void)tc_call(0x80234380u, &a);
                a.r[0] = param_2;
                a.r[1] = 0x817fdfd4u;
                (void)tc_call(0x801c3208u, &a);
                a.f[0] = (f64)(f32)((f64)(f32)((f64)(f32)((f64)rdf32(0x80575d64u) * (f64)rdf32(0x80570950u)) * (f64)rdf32(param_2 + 0xd38u)) * (f64)rdf32(param_2 + 0x1cu));
                a.r[0] = 0x817fdfd4u;
                a.r[1] = 0x817fdfd4u;
                f1 = tc_callf(0x802343c8u, &a);
                wrf32d(param_2 + 0x17cu, (f64)rdf32(0x817fdfd4u));
                wrf32d(param_2 + 0x180u, (f64)rdf32(0x817fdfd8u));
                wrf32d(param_2 + 0x184u, (f64)rdf32(0x817fdfdcu));
                a.r[0] = param_2;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                r3 = tc_call(rd32(rd32(param_2) + 0x1f0u), &a);
                a.r[0] = param_2;
                a.r[1] = r3;
                a.r[2] = 1u;
                a.r[3] = 1u;
                a.f[0] = (f64)rdf32(0x80575d40u);
                a.f[1] = 0.0;
                (void)tc_call(rd32(rd32(param_2) + 0x54u), &a);
                a.r[0] = param_2;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = (f64)rdf32(0x80575d64u);
                a.f[1] = 0.0;
                (void)tc_call(rd32(rd32(param_2) + 0x50u), &a);
                a.r[0] = (u32)param_1;
                a.r[1] = param_2;
                (void)tc_call(0x801c5584u, &a);
                wr32((u32)param_1 + 0x1d4u, rd32((u32)param_1 + 0x1d4u) + 1u);
            }
        } else if (!c0lt) {
            a.r[0] = param_2;
            a.r[1] = param_2;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = 0.0;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
            r0 = rd32((u32)param_1 + 0x1e0u);
            wr32(0x817fdfc8u, rd32((u32)param_1 + 0x1dcu));
            wr32(0x817fdfccu, r0);
            wr32(0x817fdfd0u, rd32((u32)param_1 + 0x1e4u));
            a.r[0] = 0x817fdfc8u;
            a.r[1] = r3;
            a.r[2] = 0x817fdfc8u;
            (void)tc_call(0x802343a4u, &a);
            a.r[0] = 0x817fdfc8u;
            f1 = tc_callf(0x80234440u, &a);
            r4 = tc_lastr4();
            if (f1 < (f64)rdf32(0x80575d6cu)) {
                r3 = rd32(0x804863d8u);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
                a.f[0] = (f64)rdf32(0x80575cfcu);
                a.r[0] = param_2;
                a.r[1] = r3;
                r3 = tc_call(0x801c3410u, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                if (r3 != 0u) {
                    r0 = rd32(param_2 + 0x180u);
                    f1 = (f64)rdf32(0x80575d70u);
                    wr32(0x817fdfbcu, rd32(param_2 + 0x17cu));
                    wr32(0x817fdfc0u, r0);
                    wr32(0x817fdfc4u, rd32(param_2 + 0x184u));
                    a.f[0] = f1;
                    a.r[0] = 0x817fdfbcu;
                    a.r[1] = 0x817fdfbcu;
                    f1 = tc_callf(0x802343c8u, &a);
                    wrf32d(param_2 + 0x17cu, (f64)rdf32(0x817fdfbcu));
                    wrf32d(param_2 + 0x180u, (f64)rdf32(0x817fdfc0u));
                    wrf32d(param_2 + 0x184u, (f64)rdf32(0x817fdfc4u));
                    a.r[0] = param_2;
                    a.r[1] = tc_lastr4();
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    r3 = tc_call(rd32(rd32(param_2) + 0x1ccu), &a);
                    a.r[0] = param_2;
                    a.r[1] = r3;
                    a.r[2] = 0u;
                    a.r[3] = 1u;
                    a.f[0] = (f64)rdf32(0x80575d40u);
                    a.f[1] = 0.0;
                    (void)tc_call(rd32(rd32(param_2) + 0x54u), &a);
                    a.r[0] = param_2;
                    a.r[1] = tc_lastr4();
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = (f64)rdf32(0x80575d64u);
                    a.f[1] = 0.0;
                    (void)tc_call(rd32(rd32(param_2) + 0x50u), &a);
                    wr32((u32)param_1 + 0x1d4u, rd32((u32)param_1 + 0x1d4u) + 1u);
                } else {
                    a.r[0] = param_2;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    r3 = tc_call(rd32(rd32(param_2) + 0x1c8u), &a);
                    a.r[0] = param_2;
                    a.r[1] = r3;
                    a.r[2] = 0u;
                    a.r[3] = 1u;
                    a.f[0] = (f64)rdf32(0x80575d40u);
                    a.f[1] = 0.0;
                    (void)tc_call(rd32(rd32(param_2) + 0x54u), &a);
                    wr32((u32)param_1 + 0x1d4u, 3u);
                }
            }
        }
    }
    r3 = 1u;
    return r3;
}
