#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_801a5c5c(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    if ((u32)param_2 == 0u) {
        a.r[0] = param_1;
        a.r[1] = (u32)param_2;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = 0.0;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        r0 = rd32(param_1 + 0xf48u);
        wr32(0x817fdfd4u, rd32(param_1 + 0xf44u));
        wr32(0x817fdfd8u, r0);
        wr32(0x817fdfdcu, rd32(param_1 + 0xf4cu));
        a.r[0] = 0x817fdfd4u;
        a.r[1] = r3;
        a.r[2] = 0x817fdfd4u;
        f1 = tc_callf(0x802343a4u, &a);
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        a.r[0] = param_1;
        a.r[1] = r3;
        a.r[2] = 0x817fdfd4u;
        f1 = tc_callf(0x8007eeacu, &a);
        f31 = f1;
        r5 = rd32(0x817fdfd4u);
        r0 = rd32(0x817fdfdcu);
        wr32(0x817fdfccu, rd32(0x817fdfd8u));
        f0 = (f64)rdf32(0x80575868u);
        wr32(0x817fdfc8u, r5);
        wr32(0x817fdfd0u, r0);
        wrf32d(0x817fdfccu, f0);
        a.r[0] = 0x817fdfc8u;
        f1 = tc_callf(0x80234428u, &a);
        a.f[0] = f1;
        a.r[0] = param_1;
        r3 = tc_call(0x801a3c94u, &a);
        if (r3 != 0u) {
            a.r[0] = param_1;
            a.r[1] = 6u;
            (void)tc_call(0x801a1e2cu, &a);
            return;
        }
        r0 = rd32(param_1 + 0xdc0u);
        wr32(param_1 + 0xf04u, 0x12u);
        r4 = 0xeu;
        if (r0 != 0u) {
            r4 = 0xcu;
            wr32(param_1 + 0xf04u, 0x1eu);
        }
        a.f[0] = (f64)rdf32(0x80575934u);
        a.f[1] = f31;
        a.f[2] = (f64)rdf32(param_1 + 0xd20u);
        a.f[3] = (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x805758b8u) * (f64)rdf32(param_1 + 0xd24u)), (f64)rdf32(0x805758bcu));
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = param_1 + 0xf44u;
        a.r[3] = 0xbu;
        (void)tc_call(0x800a9298u, &a);
        a.r[0] = param_1;
        a.r[1] = rd32(param_1 + 0xf04u);
        (void)tc_call(0x801a39d0u, &a);
        a.r[0] = param_1;
        a.r[1] = 1u;
        (void)tc_call(0x801a2ab8u, &a);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0xf98u;
        (void)tc_call(0x8010a74cu, &a);
    } else {
        if ((u32)param_2 == 1u) {
            a.r[0] = param_1;
            (void)tc_call(0x801a39dcu, &a);
            a.r[0] = param_1;
            r3 = tc_call(0x801a3b38u, &a);
            if (r3 != 0u) {
                wr32(param_1 + 0x2b0u, 1u);
                wr32(param_1 + 0x260u, 0xcu);
            } else {
                a.r[0] = param_1;
                r3 = tc_call(0x801a3c1cu, &a);
                if (r3 != 0u || (s32)rd32(param_1 + 0xd00u) > 1) {
                    wr32(param_1 + 0x2b0u, 1u);
                    a.r[0] = param_1;
                    a.r[1] = 0u;
                    (void)tc_call(0x801a2ab8u, &a);
                    if (rd32(param_1 + 0xdc0u) == 0u) {
                        wr32(param_1 + 0x260u, 0x11u);
                    } else {
                        wr32(param_1 + 0x260u, 6u);
                    }
                }
            }
        }
    }
    return;
}
