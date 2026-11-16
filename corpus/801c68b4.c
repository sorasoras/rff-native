#include "tc_rt.h"

u32 fn_801c68b4(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r12 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    f0 = (f64)rdf32(0x80575d50u);
    wr32(0x817fdfecu, 0u);
    f1 = (f64)rdf32(rd32(param_2 + 0x70u) + 0x54u);
    if (f1 > f0) {
        r3 = 0u;
    } else {
        r3 = rd32(0x804863d8u);
        a.r[0] = r3;
        a.r[1] = param_2;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        f1 = tc_lastf();
        r5 = rd32(r3);
        r4 = rd32(r3 + 4u);
        r0 = rd32(r3 + 8u);
        r12 = rd32(rd32(param_2) + 0x28u);
        wr32(0x817fdfd4u, r5);
        wr32(0x817fdfd8u, r4);
        wr32(0x817fdfdcu, r0);
        a.r[0] = param_2;
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(r12, &a);
        r6 = rd32(0x817fdfd8u);
        r0 = rd32(0x817fdfdcu);
        wr32(0x817fdfc8u, rd32(0x817fdfd4u));
        wr32(0x817fdfccu, r6);
        wr32(0x817fdfd0u, r0);
        a.r[0] = 0x817fdfc8u;
        a.r[1] = r3;
        a.r[2] = 0x817fdfc8u;
        (void)tc_call(0x802343a4u, &a);
        a.f[0] = (f64)rdf32(0x817fdfc8u);
        a.f[1] = (f64)rdf32(0x817fdfd0u);
        f1 = tc_callf(0x80262c68u, &a);
        f31 = (f64)(f32)f1;
        a.r[0] = param_2;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        f1 = tc_callf(rd32(rd32(param_2) + 0x2cu), &a);
        f2 = (f64)(f32)(f31 - f1);
        f1 = ppc_fmadds((f64)rdf32(0x80575d4cu), f2, f1);
        a.r[0] = param_2;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = f2;
        (void)tc_call(rd32(rd32(param_2) + 0x24u), &a);
        r3 = (ppc_cntlzw(rd32(param_2 + 0x110u)) >> 5u) & 0x7ffffffu;
    }
    return r3;
}
