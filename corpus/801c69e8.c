#include "tc_rt.h"

void fn_801c69e8(s32 param_1, u32 param_2)
{
    u32 c0gt = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32((u32)param_1 + 0xcu, 0x96u);
    if (rd32(param_2 + 0x1bcu) != 0x47u) {
        wrf32d((u32)param_1 + 0x2cu, (f64)rdf32(0x80575cd8u));
    } else {
        wrf32d((u32)param_1 + 0x2cu, (f64)rdf32(0x80575d70u));
    }
    wr32(param_2 + 0xd34u, 0u);
    a.r[0] = param_2;
    a.r[1] = 1u;
    f1 = tc_callf(0x801c353cu, &a);
    wr32(param_2 + 0x9cu, rd32(param_2 + 0x9cu) | 0x4000000u);
    a.r[0] = param_2;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    r3 = tc_call(rd32(rd32(param_2) + 0x1f0u), &a);
    a.r[0] = param_2;
    a.r[1] = r3;
    a.r[2] = 1u;
    a.r[3] = 1u;
    a.f[0] = (f64)rdf32(0x80575d40u);
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    (void)tc_call(rd32(rd32(param_2) + 0x54u), &a);
    a.r[0] = param_2;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = (f64)rdf32((u32)param_1 + 0x2cu);
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    f1 = tc_callf(rd32(rd32(param_2) + 0x50u), &a);
    r3 = rd32(0x804863d8u);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
    f1 = tc_lastf();
    wrf32d((u32)param_1 + 0x14u, (f64)rdf32(r3));
    wrf32d((u32)param_1 + 0x18u, (f64)rdf32(r3 + 4u));
    wrf32d((u32)param_1 + 0x1cu, (f64)rdf32(r3 + 8u));
    r3 = rd32(0x804863d8u);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
    wrf32d((u32)param_1 + 0x20u, (f64)rdf32(r3));
    wrf32d((u32)param_1 + 0x24u, (f64)rdf32(r3 + 4u));
    wrf32d((u32)param_1 + 0x28u, (f64)rdf32(r3 + 8u));
    f1 = tc_callf(0x80040a00u, &a);
    f31 = ppc_fmsubs((f64)rdf32(0x80575d08u), f1, (f64)rdf32(0x80575cd8u));
    a.f[0] = (f64)(f32)((f64)rdf32(0x80575d0cu) * f31);
    f1 = tc_callf(0x80262b10u, &a);
    f0 = (f64)rdf32(0x80575d0cu);
    f3 = (f64)(f32)((f64)rdf32(0x80575d94u) * (f64)(f32)f1);
    wrf32d((u32)param_1 + 0x18u, (f64)rdf32(0x80575cfcu));
    wrf32d((u32)param_1 + 0x14u, f3);
    a.f[0] = (f64)(f32)(f0 * f31);
    f1 = tc_callf(0x80262704u, &a);
    r4 = tc_lastr4();
    f3 = (f64)(f32)f1;
    f1 = (f64)rdf32((u32)param_1 + 0x14u);
    f2 = (f64)(f32)((f64)rdf32(0x80575d94u) * f3);
    c0gt = f1 > (f64)rdf32(0x80575cfcu);
    wrf32d((u32)param_1 + 0x1cu, f2);
    do {
        if (c0gt) {
            a.r[0] = param_2;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
            r4 = tc_lastr4();
            f2 = 0.0;
            f3 = 0.0;
            if ((f64)rdf32(r3) > (f64)rdf32(0x80575cfcu)) break;
        }
        f1 = (f64)rdf32((u32)param_1 + 0x14u);
        f0 = (f64)rdf32(0x80575cfcu);
        if (!((f1 < f0) || (f1 == f0))) {
            wr32((u32)param_1 + 8u, 0u);
            return;
        }
        a.r[0] = param_2;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
        r4 = tc_lastr4();
        f1 = (f64)rdf32(r3);
        f0 = (f64)rdf32(0x80575cfcu);
        if (!((f1 < f0) || (f1 == f0))) {
            wr32((u32)param_1 + 8u, 0u);
            return;
        }
    } while (0);
    f1 = (f64)rdf32((u32)param_1 + 0x1cu);
    do {
        if (f1 > (f64)rdf32(0x80575cfcu)) {
            a.r[0] = param_2;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
            r4 = tc_lastr4();
            if ((f64)rdf32(r3 + 8u) > (f64)rdf32(0x80575cfcu)) break;
        }
        f1 = (f64)rdf32((u32)param_1 + 0x1cu);
        f0 = (f64)rdf32(0x80575cfcu);
        if (!((f1 < f0) || (f1 == f0))) {
            wr32((u32)param_1 + 8u, 0u);
            return;
        }
        a.r[0] = param_2;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
        f1 = (f64)rdf32(r3 + 8u);
        f0 = (f64)rdf32(0x80575cfcu);
        if (!((f1 < f0) || (f1 == f0))) {
            wr32((u32)param_1 + 8u, 0u);
            return;
        }
    } while (0);
    r3 = tc_call(0x80040b64u, &a);
    if ((r3 & 1u) == 0u) {
        wrf32d((u32)param_1 + 0x1cu, (f64)(f32)((f64)rdf32((u32)param_1 + 0x1cu) * (f64)rdf32(0x80575d44u)));
    } else {
        wrf32d((u32)param_1 + 0x14u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x14u) * (f64)rdf32(0x80575d44u)));
    }
    wr32((u32)param_1 + 8u, 0u);
    return;
}
