#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

f64 fn_800b4be0(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r4 = param_2;
    r5 = (u32)param_3;
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    if ((u32)param_3 == 0u) {
        if ((rd32(param_1 + 0xe88u) & 0x800u) == 0u) {
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = (u32)param_3;
            a.f[0] = 0.0;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
            f31 = f1;
            f1 = (f64)rdf32(param_2 + 4u);
            f0 = (f64)rdf32(param_2 + 8u);
            wrf32d(param_1 + 0xd64u, (f64)rdf32(param_2));
            wrf32d(param_1 + 0xd68u, f1);
            wrf32d(param_1 + 0xd6cu, f0);
            a.r[0] = param_1 + 0xd64u;
            f1 = tc_callf(0x80234440u, &a);
            if (f1 > (f64)rdf32(0x80572bfcu)) {
                f1 = (f64)rdf32(0x80572bf8u);
                r0 = 0u;
                if (f1 == (f64)rdf32(param_1 + 0xd64u) && f1 == (f64)rdf32(param_1 + 0xd68u) && f1 == (f64)rdf32(param_1 + 0xd6cu)) {
                    r0 = 1u;
                }
                if (r0 == 0u) {
                    r3 = param_1 + 0xd64u;
                    a.r[0] = r3;
                    a.r[1] = r3;
                    (void)tc_call(0x802343e4u, &a);
                }
            }
            f3 = (f64)rdf32(param_1 + 0xd64u);
            f1 = -(f64)rdf32(param_1 + 0xd6cu);
            f2 = (f64)rdf32(param_1 + 0xd68u);
            wrf32d(0x817fdfd8u, f3);
            wrf32d(0x817fdfd0u, f1);
            wrf32d(0x817fdfd4u, f2);
            wrf32d(param_1 + 0xd70u, (f64)(f32)f1);
            wrf32d(param_1 + 0xd74u, f2);
            wrf32d(param_1 + 0xd78u, f3);
            a.r[0] = param_1 + 0xd64u;
            f1 = tc_callf(0x80234440u, &a);
            if (!(f1 > (f64)rdf32(0x80572bfcu))) {
                f0 = (f64)rdf32(0x80572bf8u);
            } else {
                f0 = (f64)rdf32(0x80572bf8u);
                wrf32d(0x817fdfc0u, f0);
                wrf32d(0x817fdfbcu, f0);
                wrf32d(0x817fdfb8u, f0);
                a.r[0] = param_1 + 0xd64u;
                a.r[1] = 0x817fdfb8u;
                (void)tc_call(0x802343e4u, &a);
                a.f[0] = (f64)rdf32(0x817fdfb8u);
                a.f[1] = (f64)rdf32(0x817fdfc0u);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                if (!((f64)rdf32(0x80572c30u) < f1)) {
                    a.f[0] = (f64)rdf32(0x817fdfb8u);
                    a.f[1] = (f64)rdf32(0x817fdfc0u);
                    f1 = tc_callf(0x80262c68u, &a);
                    f1 = (f64)(f32)f1;
                    f0 = (f64)rdf32(0x80572c34u);
                    if (!((f0 > f1) || (f0 == f1))) {
                        a.f[0] = (f64)rdf32(0x817fdfb8u);
                        a.f[1] = (f64)rdf32(0x817fdfc0u);
                        f1 = tc_callf(0x80262c68u, &a);
                        f0 = (f64)(f32)f1;
                    } else {
                        a.f[0] = (f64)rdf32(0x817fdfb8u);
                        a.f[1] = (f64)rdf32(0x817fdfc0u);
                        f1 = tc_callf(0x80262c68u, &a);
                        f1 = (f64)(f32)f1;
                        f0 = (f64)(f32)((f64)rdf32(0x80572c1cu) + f1);
                    }
                } else {
                    a.f[0] = (f64)rdf32(0x817fdfb8u);
                    a.f[1] = (f64)rdf32(0x817fdfc0u);
                    f1 = tc_callf(0x80262c68u, &a);
                    f1 = (f64)(f32)f1;
                    f0 = (f64)(f32)(f1 - (f64)rdf32(0x80572c1cu));
                }
            }
            a.f[0] = (f64)(f32)(f0 - f31);
            a.f[1] = rdf64(0x80572c80u);
            f1 = tc_callf(0x80262c6cu, &a);
            r4 = tc_lastr4();
            f4 = (f64)(f32)f1;
            if (!(f4 < (f64)rdf32(0x80572c34u))) {
                f0 = (f64)rdf32(0x80572c30u);
                if ((f4 > f0) || (f4 == f0)) {
                    f4 = (f64)(f32)(f4 - (f64)rdf32(0x80572c1cu));
                }
            } else {
                f4 = (f64)(f32)((f64)rdf32(0x80572c1cu) + f4);
            }
            f5 = (f64)rdf32(param_1 + 0xd5cu);
            f1 = (f64)rdf32(param_1 + 0xd4cu);
            f3 = (f64)(f32)(f5 * (f64)(f32)ppc_fabs(f4));
            f1 = ppc_fmadds(f1, f1, (f64)(f32)((f64)rdf32(0x80572c04u) * f3));
            f1 = (f64)(f32)px_fdiv(f1, f5);
            f1 = (f64)(f32)(f1 * (f64)rdf32(0x80572c88u));
            if (f4 < (f64)rdf32(0x80572bf8u)) {
                f1 = (f64)(f32)(f1 * (f64)rdf32(0x80572c20u));
            }
            f2 = (f64)(f32)(f4 - f1);
            if (!(f2 > (f64)rdf32(0x80572bf8u))) {
                f5 = -f5;
                f1 = (f64)rdf32(0x80572c00u);
                if (f2 > (f64)(f32)px_fdiv(f5, f1)) {
                    f5 = (f64)(f32)(f1 * f2);
                }
            } else {
                f1 = (f64)rdf32(0x80572c00u);
                if (f2 < (f64)(f32)px_fdiv(f5, f1)) {
                    f5 = (f64)(f32)(f1 * f2);
                }
            }
            f31 = (f64)(f32)(f31 + f5);
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.f[0] = f31;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            (void)tc_call(rd32(rd32(param_1) + 0x24u), &a);
            f1 = f31;
            return f1;
        }
    } else {
        f1 = (f64)rdf32(param_2 + 4u);
        f0 = (f64)rdf32(param_2 + 8u);
        wrf32d(param_1 + 0xd64u, (f64)rdf32(param_2));
        wrf32d(param_1 + 0xd68u, f1);
        wrf32d(param_1 + 0xd6cu, f0);
        a.r[0] = param_1 + 0xd64u;
        f1 = tc_callf(0x80234440u, &a);
        if (f1 > (f64)rdf32(0x80572bfcu)) {
            f1 = (f64)rdf32(0x80572bf8u);
            r0 = 0u;
            if (f1 == (f64)rdf32(param_1 + 0xd64u) && f1 == (f64)rdf32(param_1 + 0xd68u) && f1 == (f64)rdf32(param_1 + 0xd6cu)) {
                r0 = 1u;
            }
            if (r0 == 0u) {
                r3 = param_1 + 0xd64u;
                a.r[0] = r3;
                a.r[1] = r3;
                (void)tc_call(0x802343e4u, &a);
            }
        }
        f3 = (f64)rdf32(param_1 + 0xd64u);
        f1 = -(f64)rdf32(param_1 + 0xd6cu);
        f2 = (f64)rdf32(param_1 + 0xd68u);
        wrf32d(0x817fdfe4u, f3);
        wrf32d(0x817fdfdcu, f1);
        wrf32d(0x817fdfe0u, f2);
        wrf32d(param_1 + 0xd70u, (f64)(f32)f1);
        wrf32d(param_1 + 0xd74u, f2);
        wrf32d(param_1 + 0xd78u, f3);
        a.r[0] = param_1 + 0xd64u;
        f1 = tc_callf(0x80234440u, &a);
        r4 = tc_lastr4();
        if (!(f1 > (f64)rdf32(0x80572bfcu))) {
            f1 = (f64)rdf32(0x80572bf8u);
        } else {
            f0 = (f64)rdf32(0x80572bf8u);
            wrf32d(0x817fdfccu, f0);
            wrf32d(0x817fdfc8u, f0);
            wrf32d(0x817fdfc4u, f0);
            a.r[0] = param_1 + 0xd64u;
            a.r[1] = 0x817fdfc4u;
            (void)tc_call(0x802343e4u, &a);
            a.f[0] = (f64)rdf32(0x817fdfc4u);
            a.f[1] = (f64)rdf32(0x817fdfccu);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            if (!((f64)rdf32(0x80572c30u) < f1)) {
                a.f[0] = (f64)rdf32(0x817fdfc4u);
                a.f[1] = (f64)rdf32(0x817fdfccu);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f0 = (f64)rdf32(0x80572c34u);
                if (!((f0 > f1) || (f0 == f1))) {
                    a.f[0] = (f64)rdf32(0x817fdfc4u);
                    a.f[1] = (f64)rdf32(0x817fdfccu);
                    f1 = tc_callf(0x80262c68u, &a);
                    r4 = tc_lastr4();
                    f1 = (f64)(f32)f1;
                } else {
                    a.f[0] = (f64)rdf32(0x817fdfc4u);
                    a.f[1] = (f64)rdf32(0x817fdfccu);
                    f1 = tc_callf(0x80262c68u, &a);
                    r4 = tc_lastr4();
                    f1 = (f64)(f32)f1;
                    f1 = (f64)(f32)((f64)rdf32(0x80572c1cu) + f1);
                }
            } else {
                a.f[0] = (f64)rdf32(0x817fdfc4u);
                a.f[1] = (f64)rdf32(0x817fdfccu);
                f1 = tc_callf(0x80262c68u, &a);
                r4 = tc_lastr4();
                f1 = (f64)(f32)f1;
                f1 = (f64)(f32)(f1 - (f64)rdf32(0x80572c1cu));
            }
        }
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        f1 = tc_callf(rd32(rd32(param_1) + 0x24u), &a);
        r4 = tc_lastr4();
        r5 = 0u;
    }
    a.r[0] = param_1;
    a.r[1] = r4;
    a.r[2] = r5;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
    return f1;
}
