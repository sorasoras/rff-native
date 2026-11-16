#include "tc_rt.h"

void fn_8007eb70(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    r5 = param_3;
    wr32(0x817fdfc0u, 0x817fe000u);
    f0 = (f64)rdf32(0x80572884u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r7 = 0x804890c8u;
    r6 = rd32(0x804890c8u);
    r4 = rd32(0x804890ccu);
    r0 = rd32(0x804890d0u);
    wr32(0x817fdfe0u, r6);
    wr32(0x817fdfe4u, r4);
    wr32(0x817fdfe8u, r0);
    f2 = (f64)(f32)((f64)rdf32(param_1 + 0x188u) + (f64)rdf32(param_1 + 0x18cu));
    wrf32d(param_1 + 0x188u, f2);
    f1 = (f64)(f32)ppc_fabs(f2);
    c0lt = f0 < f1;
    if (((((c0lt << 0x1fu) | ((f0 > f1) << 0x1eu) | ((c0lt || (f0 == f1)) << 0x1du) | (((f0 != f0) || (f1 != f1)) << 0x1cu)) >> 0x1du) & 1u) != 0u) {
        a.f[0] = (f64)rdf32(param_3);
        a.f[1] = (f64)rdf32(param_1 + 0x19cu);
        a.f[2] = (f64)(f32)(f2 * (f64)rdf32(param_1 + 0x1a0u));
        a.r[0] = param_1;
        f1 = tc_callf(0x8007ee08u, &a);
        wrf32d(param_3, f1);
        a.r[0] = param_1;
        r3 = tc_call(0x8007ef78u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r5 = 0u;
        r6 = 0u;
        r7 = 0u;
        f2 = 0.0;
        if (r3 != 0u) {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            (void)tc_call(rd32(rd32(param_1) + 0x14cu), &a);
            r4 = tc_lastr4();
            r5 = 0u;
            r6 = 0u;
            r7 = 0u;
            f2 = 0.0;
        }
    }
    a.r[0] = param_1;
    a.r[1] = r4;
    a.r[2] = r5;
    a.r[3] = r6;
    a.r[4] = r7;
    a.f[0] = (f64)rdf32(param_3);
    a.f[1] = f2;
    a.f[2] = 0.0;
    (void)tc_call(rd32(rd32(param_1) + 0x24u), &a);
    if ((u32)((s32)((rd32(param_1 + 0x148u) << 1u) & 0xc0000000u) >> 31) == 0u) {
        r3 = param_1 + 0x17cu;
        a.r[0] = r3;
        a.r[1] = param_1 + 0x170u;
        a.r[2] = r3;
        (void)tc_call(0x80234380u, &a);
        f1 = (f64)rdf32(param_1 + 0x1a0u);
        r0 = rd32(param_1 + 0x180u);
        wr32(0x817fdfc8u, rd32(param_1 + 0x17cu));
        wr32(0x817fdfccu, r0);
        wr32(0x817fdfd0u, rd32(param_1 + 0x184u));
        a.f[0] = f1;
        a.r[0] = 0x817fdfc8u;
        a.r[1] = 0x817fdfc8u;
        (void)tc_call(0x802343c8u, &a);
        f1 = (f64)rdf32(0x817fdfccu);
        f0 = (f64)rdf32(0x817fdfd0u);
        wrf32d(0x817fdfe0u, (f64)rdf32(0x817fdfc8u));
        wrf32d(0x817fdfe4u, f1);
        wrf32d(0x817fdfe8u, f0);
    } else {
        r0 = rd32(param_1 + 0x180u);
        wr32(0x817fdfd4u, rd32(param_1 + 0x17cu));
        wr32(0x817fdfd8u, r0);
        wr32(0x817fdfdcu, rd32(param_1 + 0x184u));
        a.r[0] = 0x817fdfd4u;
        a.r[1] = param_1 + 0x20cu;
        a.r[2] = 0x817fdfd4u;
        (void)tc_call(0x80234380u, &a);
        f1 = (f64)rdf32(0x817fdfd8u);
        f0 = (f64)rdf32(0x817fdfdcu);
        wrf32d(0x817fdfe0u, (f64)rdf32(0x817fdfd4u));
        wrf32d(0x817fdfe4u, f1);
        wrf32d(0x817fdfe8u, f0);
        if (rd32(param_1 + 0x22cu) != 0u) {
            a.f[0] = (f64)rdf32(param_1 + 0x84u);
            a.f[1] = (f64)rdf32(param_1 + 0x8cu);
            a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
            a.r[1] = 0u;
            a.r[2] = 0u;
            f1 = tc_callf(0x80089fc8u, &a);
            f2 = (f64)rdf32(0x80572888u);
            f1 = (f64)(f32)((f64)rdf32(param_1 + 0x88u) - f1);
            if (!(f1 > f2)) {
                wrf32d(0x817fdfe4u, (f64)(f32)((f64)rdf32(0x817fdfe4u) - f1));
                wr32(param_1 + 0x22cu, 0u);
            } else {
                wrf32d(0x817fdfe4u, (f64)(f32)((f64)rdf32(0x817fdfe4u) - f2));
            }
        }
    }
    a.r[0] = 0x817fdfe0u;
    f1 = tc_callf(0x80234440u, &a);
    f1 = ppc_fabs(f1);
    f0 = (f64)rdf32(0x80572884u);
    f1 = (f64)(f32)f1;
    c0lt = f0 < f1;
    if (((((c0lt << 0x1fu) | ((f0 > f1) << 0x1eu) | ((c0lt || (f0 == f1)) << 0x1du) | (((f0 != f0) || (f1 != f1)) << 0x1cu)) >> 0x1du) & 1u) != 0u) {
        a.r[0] = param_2;
        a.r[1] = 0x817fdfe0u;
        a.r[2] = param_2;
        f1 = tc_callf(0x80234380u, &a);
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        (void)tc_call(rd32(rd32(param_1) + 0x1cu), &a);
        a.r[0] = param_1;
        r3 = tc_call(0x8007eefcu, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 != 0u) {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            (void)tc_call(rd32(rd32(param_1) + 0x150u), &a);
        }
    }
    return;
}
