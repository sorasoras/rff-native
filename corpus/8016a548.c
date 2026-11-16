#include "tc_rt.h"

void fn_8016a548(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    r4 = param_2;
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    if ((u32)((s32)((rd32(param_2 + 0x148u) << 4u) & 0xc0000000u) >> 31) == 0u) {
        a.r[0] = param_2;
        a.r[1] = param_2;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = 0.0;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        r3 = tc_call(rd32(rd32(param_2) + 0x19cu), &a);
        wr32(0x817fdfd8u, r3);
        a.r[0] = 0x817fdfd8u;
        r3 = tc_call(0x801497d8u, &a);
        if (r3 != 0xffffffffu && (u32)rd8(param_2 + 0xec9u) == 0u) {
            f31 = (f64)rdf32(rd32(param_2 + 0x70u) + 0x54u);
            a.r[0] = 0x817fdfd8u;
            r3 = tc_call(0x801497f0u, &a);
            r3 = r3 ^ 0x80000000u;
            wr32(0x817fdfe4u, r3);
            f1 = rdf64(0x80574c90u);
            wr32(0x817fdfe0u, 0x43300000u);
            f0 = (f64)(f32)(rdf64(0x817fdfe0u) - f1);
            if ((f31 > f0) || (f31 == f0)) {
                wr8(param_2 + 0xec9u, 1u);
                a.r[0] = 0x817fdfd8u;
                r3 = tc_call(0x801497d8u, &a);
                a.r[0] = param_2;
                a.r[1] = r3;
                (void)tc_call(0x800aef78u, &a);
            }
        }
        a.r[0] = 0x817fdfd8u;
        r3 = tc_call(0x80149808u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 != 0xffffffffu && (u32)rd8(param_2 + 0xec8u) == 0u) {
            f31 = (f64)rdf32(rd32(param_2 + 0x70u) + 0x54u);
            a.r[0] = 0x817fdfd8u;
            r3 = tc_call(0x80149820u, &a);
            r4 = tc_lastr4();
            r3 = r3 ^ 0x80000000u;
            wr32(0x817fdfe4u, r3);
            f1 = rdf64(0x80574c90u);
            wr32(0x817fdfe0u, 0x43300000u);
            f0 = (f64)(f32)(rdf64(0x817fdfe0u) - f1);
            if ((f31 > f0) || (f31 == f0)) {
                wr8(param_2 + 0xec8u, 1u);
                a.r[0] = 0x817fdfd8u;
                r3 = tc_call(0x80149808u, &a);
                a.r[0] = param_2;
                a.r[1] = r3;
                f1 = tc_callf(0x800aef78u, &a);
                r4 = tc_lastr4();
            }
        }
    }
    if (rd32(param_2 + 0xeacu) == 0u) {
        a.r[0] = param_2;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        r3 = tc_call(rd32(rd32(param_2) + 0x1a8u), &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 != 0u) {
            f0 = (f64)rdf32(0x80574c80u);
            wr32(param_2 + 0xeacu, 1u);
            wrf32d(param_2 + 0xeb0u, f0);
            a.r[0] = param_2;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            r3 = tc_call(rd32(rd32(param_2) + 0x70u), &a);
            if (r3 != 0u && (u32)((s32)((rd32(param_2 + 0x148u) << 4u) & 0xc0000000u) >> 31) == 0u) {
                a.r[0] = param_2;
                (void)tc_call(0x800b2850u, &a);
            }
        }
    } else {
        f7 = (f64)rdf32(param_2 + 0xeb0u);
        f6 = (f64)(f32)(f7 * f7);
        f5 = (f64)(f32)(f7 * f6);
        f0 = (f64)rdf32(0x80574c80u);
        f4 = (f64)(f32)((f64)rdf32(0x80574c78u) * f5);
        f3 = ppc_fmsubs((f64)rdf32(0x80574c74u), f6, f4);
        f2 = ppc_fmadds(f3, (f64)rdf32(0x80574c7cu), (f64)rdf32(0x80574c70u));
        if (!(f2 > f0)) {
            f2 = f0;
        }
        f0 = (f64)rdf32(0x80574c70u);
        f1 = f7 + rdf64(0x80574c88u);
        wrf32d(param_2 + 0xd0u, f2);
        wr32(param_2 + 0xccu, 1u);
        f1 = (f64)(f32)f1;
        wrf32d(param_2 + 0xeb0u, f1);
        if ((f1 > f0) || (f1 == f0)) {
            a.r[0] = param_2;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = f6;
            a.f[6] = f7;
            f1 = tc_callf(rd32(rd32(param_2) + 0x1acu), &a);
            r4 = rd32(param_2 + 0xe88u);
            wr32(param_2 + 0xe88u, r4 | (r4 ^ 0x80000000u));
            a.r[0] = param_2;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
            a.f[0] = (f64)rdf32(0x80574c70u);
            a.r[0] = 0x75u;
            a.r[1] = r3;
            a.r[2] = 0x804b15c0u;
            a.r[3] = 0x804890c8u;
            (void)tc_call(0x800d783cu, &a);
        }
    }
    return;
}
