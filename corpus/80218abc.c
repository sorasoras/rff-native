#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80218abc(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    a.r[0] = rd32((u32)param_1 + 0x68u);
    r3 = tc_call(0x80074e90u, &a);
    if (r3 != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x68u);
        r3 = tc_call(0x800a4500u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r30 = r3;
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x30u), &a);
            f1 = tc_lastf();
            r31 = r3;
            a.r[0] = r30;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            r3 = tc_call(rd32(rd32(r30) + 0x28u), &a);
            r0 = rd32(r3 + 4u);
            wr32(0x817fdfd0u, rd32(r3));
            wr32(0x817fdfd4u, r0);
            wr32(0x817fdfd8u, rd32(r3 + 8u));
            a.r[0] = 0x817fdfd0u;
            a.r[1] = r31;
            a.r[2] = 0x817fdfd0u;
            (void)tc_call(0x802343a4u, &a);
            a.r[0] = 0x817fdfd0u;
            f1 = tc_callf(0x80234440u, &a);
            f0 = (f64)rdf32(0x805769d8u);
            f31 = f1;
            r31 = 0xe7u;
            if ((f1 < f0) || (f1 == f0)) {
                r31 = 0xd7u;
            }
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x8021866cu, &a);
            r3 = rd32(r3 + 0xcu);
            a.r[0] = r3;
            a.r[1] = rd32((u32)param_1 + 0x68u);
            a.r[2] = r31;
            r3 = tc_call(0x800ed39cu, &a);
            f1 = tc_lastf();
            r4 = (u32)(s8)r3;
            if (r4 != rd32(r30 + 0x100u)) {
                a.r[0] = r30;
                a.r[1] = r4;
                a.r[2] = 1u;
                a.r[3] = 0u;
                a.f[0] = (f64)rdf32(0x805769d0u);
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                f1 = tc_callf(rd32(rd32(r30) + 0x54u), &a);
                r4 = tc_lastr4();
            }
            if (f31 > (f64)rdf32(0x805769d8u)) {
                a.r[0] = r30;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                r3 = tc_call(rd32(rd32(r30) + 0x30u), &a);
                f1 = tc_lastf();
                r31 = r3;
                a.r[0] = r30;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                r3 = tc_call(rd32(rd32(r30) + 0x28u), &a);
                r0 = rd32(r3 + 4u);
                wr32(0x817fdfb8u, rd32(r3));
                wr32(0x817fdfbcu, r0);
                wr32(0x817fdfc0u, rd32(r3 + 8u));
                a.r[0] = 0x817fdfb8u;
                a.r[1] = r31;
                a.r[2] = 0x817fdfb8u;
                (void)tc_call(0x802343a4u, &a);
                f0 = (f64)rdf32(0x805769dcu);
                wrf32d(0x817fdfccu, f0);
                wrf32d(0x817fdfc8u, f0);
                wrf32d(0x817fdfc4u, f0);
                a.r[0] = 0x817fdfb8u;
                a.r[1] = 0x817fdfc4u;
                (void)tc_call(0x802343e4u, &a);
                a.f[0] = (f64)rdf32(0x817fdfc4u);
                a.f[1] = (f64)rdf32(0x817fdfccu);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                if ((f64)rdf32(0x805769e0u) < f1) {
                    a.f[0] = (f64)rdf32(0x817fdfc4u);
                    a.f[1] = (f64)rdf32(0x817fdfccu);
                    f1 = tc_callf(0x80262c68u, &a);
                    r4 = tc_lastr4();
                    f1 = (f64)(f32)f1;
                    f1 = (f64)(f32)(f1 - (f64)rdf32(0x805769e4u));
                } else {
                    a.f[0] = (f64)rdf32(0x817fdfc4u);
                    a.f[1] = (f64)rdf32(0x817fdfccu);
                    f1 = tc_callf(0x80262c68u, &a);
                    f1 = (f64)(f32)f1;
                    f0 = (f64)rdf32(0x805769e8u);
                    if ((f0 > f1) || (f0 == f1)) {
                        a.f[0] = (f64)rdf32(0x817fdfc4u);
                        a.f[1] = (f64)rdf32(0x817fdfccu);
                        f1 = tc_callf(0x80262c68u, &a);
                        r4 = tc_lastr4();
                        f1 = (f64)(f32)f1;
                        f1 = (f64)(f32)((f64)rdf32(0x805769e4u) + f1);
                    } else {
                        a.f[0] = (f64)rdf32(0x817fdfc4u);
                        a.f[1] = (f64)rdf32(0x817fdfccu);
                        f1 = tc_callf(0x80262c68u, &a);
                        r4 = tc_lastr4();
                        f1 = (f64)(f32)f1;
                    }
                }
                a.r[0] = r30;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                (void)tc_call(rd32(rd32(r30) + 0x24u), &a);
                r31 = rd32((u32)param_1 + 0x68u);
                a.r[0] = (u32)param_1;
                r3 = tc_call(0x80218684u, &a);
                r3 = rd32(r3 + 0x3dcu);
                r3 = r3 + ((r31 << 2u) & 0xfffffffcu);
                a.f[0] = (f64)(f32)px_fdiv(f31, (f64)rdf32(r3 + 4u));
                a.f[1] = (f64)rdf32(0x805769ecu);
                a.f[2] = (f64)rdf32(0x805769f0u);
                f1 = tc_callf(0x800acaf8u, &a);
                a.r[0] = r30;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                (void)tc_call(rd32(rd32(r30) + 0x50u), &a);
            }
        }
    }
    return;
}
