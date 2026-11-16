#include "tc_rt.h"

void fn_8016c57c(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    r0 = rd32(param_2 + 0xea8u);
    if ((s32)r0 <= 0) {
        r0 = 0u;
    } else {
        r0 = r0 - 1u;
        wr32(param_2 + 0xea8u, r0);
        if (r0 != 0u) {
            r0 = 0u;
        } else {
            r0 = 1u;
        }
    }
    if (r0 != 0u) {
        a.r[0] = param_2;
        a.r[1] = param_2;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = 0.0;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
        r7 = rd32(r3);
        f2 = (f64)rdf32(0x80574ca0u);
        wr32(0x817fdfd8u, rd32(r3 + 4u));
        f1 = (f64)rdf32(0x80574c70u);
        wr32(0x817fdfd4u, r7);
        f0 = (f64)rdf32(0x817fdfd8u);
        wr32(0x817fdfdcu, rd32(r3 + 8u));
        f0 = ppc_fmadds(f2, (f64)rdf32(param_2 + 0xb4u), f0);
        wrf32d(0x817fdfd8u, f0);
        a.f[0] = f1;
        a.r[0] = 0x6eu;
        a.r[1] = 0x817fdfd4u;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        (void)tc_call(0x800d783cu, &a);
    }
    if (rd32(param_2 + 0x150u) != 0x60u) {
        a.r[0] = param_2;
        r3 = tc_call(0x800b2fe8u, &a);
        if (r3 == 0u) {
            return;
        }
    }
    f31 = (f64)(f32)((f64)rdf32(param_2 + 0x20u) * (f64)rdf32(0x80574cbcu));
    a.f[0] = f31;
    a.r[0] = param_2;
    (void)tc_call(0x800b2470u, &a);
    if (f31 < (f64)rdf32(0x80574cc0u)) {
        a.r[0] = param_2;
        f1 = tc_callf(0x80074de4u, &a);
        r4 = tc_lastr4();
        r3 = rd32(param_2 + 0x158u);
        if (r3 != 0u) {
            a.r[0] = r3;
            f1 = tc_callf(0x8009608cu, &a);
            r4 = tc_lastr4();
        }
        a.r[0] = param_2;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
        r7 = rd32(r3);
        f2 = (f64)rdf32(0x80574ca0u);
        wr32(0x817fdfccu, rd32(r3 + 4u));
        f1 = (f64)rdf32(0x80574c70u);
        wr32(0x817fdfc8u, r7);
        f0 = (f64)rdf32(0x817fdfccu);
        wr32(0x817fdfd0u, rd32(r3 + 8u));
        f0 = ppc_fmadds(f2, (f64)rdf32(param_2 + 0xb4u), f0);
        wrf32d(0x817fdfccu, f0);
        a.f[0] = f1;
        a.r[0] = 0x6fu;
        a.r[1] = 0x817fdfc8u;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        (void)tc_call(0x800d783cu, &a);
        a.r[0] = param_2;
        a.r[1] = rd32(param_2 + 0xed0u);
        (void)tc_call(0x800b31a0u, &a);
    }
    return;
}
