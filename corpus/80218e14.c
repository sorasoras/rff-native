#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80218e14(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf80u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wrf64(0x817fdfd0u, 0.0);
    wrf32d(0x817fdfd8u, 0.0);
    wrf32d(0x817fdfdcu, 0.0);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfc8u, 0u);
    a.r[0] = rd32((u32)param_1 + 0x68u);
    r3 = tc_call(0x800a4500u, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x68u);
        r3 = tc_call(0x80074e90u, &a);
        if (r3 != 0u) {
            r3 = tc_call(0x80218648u, &a);
            r0 = rd32((u32)param_1 + 0x204u);
            r3 = r3 ^ 0x80000000u;
            wr32(0x817fdfb0u, 0x43300000u);
            r0 = r0 ^ 0x80000000u;
            f1 = rdf64(0x80576a00u);
            wr32(0x817fdfb4u, r3);
            f30 = (f64)rdf32((u32)param_1 + 0x1fcu);
            f0 = rdf64(0x817fdfb0u);
            wr32(0x817fdfbcu, r0);
            f29 = (f64)rdf32((u32)param_1 + 0x200u);
            wr32(0x817fdfb8u, 0x43300000u);
            f2 = (f64)rdf32(0x805769dcu);
            f0 = (f64)(f32)(f30 * (f64)(f32)((f64)(f32)(f0 - f1) - (f64)(f32)(rdf64(0x817fdfb8u) - f1)));
            if (f29 > f2) {
                a.f[0] = (f64)(f32)px_fdiv(f0, f29);
                a.f[1] = f2;
                a.f[2] = (f64)rdf32(0x805769f4u);
                f1 = tc_callf(0x800acaf8u, &a);
                f0 = (f64)rdf32(0x805769dcu);
                f31 = f1;
                f2 = (f64)rdf32(0x805769ecu);
                wrf32d(0x817fdfa8u, f0);
                wrf32d(0x817fdfa4u, f0);
                wrf32d(0x817fdfa0u, f0);
                a.f[0] = f1;
                a.f[1] = f2;
                a.r[0] = 0x817fdfa0u;
                a.r[1] = (u32)param_1 + 0x94u;
                a.r[2] = 0xcu;
                a.r[3] = rd32((u32)param_1 + 0x90u);
                f1 = tc_callf(0x80045964u, &a);
                a.r[0] = r31;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                r3 = tc_call(rd32(rd32(r31) + 0x28u), &a);
                f1 = tc_lastf();
                wrf32d(0x817fdfa4u, (f64)rdf32(r3 + 4u));
                a.r[0] = r31;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                r3 = tc_call(rd32(rd32(r31) + 0x28u), &a);
                r6 = rd32(0x817fdfa4u);
                r0 = rd32(0x817fdfa8u);
                wr32(0x817fdf88u, rd32(0x817fdfa0u));
                wr32(0x817fdf8cu, r6);
                wr32(0x817fdf90u, r0);
                a.r[0] = 0x817fdf88u;
                a.r[1] = r3;
                a.r[2] = 0x817fdf88u;
                (void)tc_call(0x802343a4u, &a);
                a.r[0] = 0x817fdf88u;
                f1 = tc_callf(0x80234440u, &a);
                r4 = tc_lastr4();
                if (f30 > rdf64(0x80576a08u)) {
                    a.r[0] = r31;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    r3 = tc_call(rd32(rd32(r31) + 0x28u), &a);
                    r6 = rd32(0x817fdfa4u);
                    r0 = rd32(0x817fdfa8u);
                    wr32(0x817fdf94u, rd32(0x817fdfa0u));
                    wr32(0x817fdf98u, r6);
                    wr32(0x817fdf9cu, r0);
                    a.r[0] = 0x817fdf94u;
                    a.r[1] = r3;
                    a.r[2] = 0x817fdf94u;
                    f1 = tc_callf(0x802343a4u, &a);
                    a.r[0] = r31;
                    a.r[1] = 0x817fdfa0u;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    (void)tc_call(rd32(rd32(r31) + 0x1cu), &a);
                    wr32((u32)param_1 + 0x88u, 0u);
                } else {
                    wr32((u32)param_1 + 0x88u, rd32((u32)param_1 + 0x88u) + 1u);
                }
                f0 = (f64)rdf32(0x805769f4u);
                if ((!(f29 < f0) && f29 != f0) && (!(f31 > f0) && f31 != f0)) {
                    if ((s32)rd32((u32)param_1 + 0x88u) < 30) {
                        a.r[0] = (u32)param_1;
                        (void)tc_call(0x80218abcu, &a);
                        return;
                    }
                    f0 = (f64)rdf32(0x805769ecu);
                    if (!((f31 > f0) || (f31 == f0))) {
                        a.r[0] = (u32)param_1;
                        (void)tc_call(0x80218abcu, &a);
                        return;
                    }
                }
                a.r[0] = (u32)param_1;
                a.r[1] = 3u;
                (void)tc_call(0x8021854cu, &a);
                return;
            }
            a.r[0] = (u32)param_1;
            a.r[1] = 3u;
            (void)tc_call(0x8021854cu, &a);
        }
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80218abcu, &a);
    return;
}
