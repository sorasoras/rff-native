#include "tc_rt.h"

void fn_801c6748(s32 param_1, u32 param_2)
{
    u32 c0gt = 0, r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    f0 = (f64)rdf32(0x80575cfcu);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wrf32d(0x817fdfecu, f0);
    wrf32d(0x817fdfe8u, f0);
    wrf32d(0x817fdfe4u, f0);
    a.r[0] = param_2;
    a.r[1] = 0x817fdfe4u;
    f1 = tc_callf(0x801c3228u, &a);
    r3 = rd32(0x804863d8u);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
    r0 = rd32(r3 + 4u);
    wr32(0x817fdfd8u, rd32(r3));
    wr32(0x817fdfdcu, r0);
    wr32(0x817fdfe0u, rd32(r3 + 8u));
    a.r[0] = param_2;
    a.r[1] = 0x817fdfd8u;
    a.r[2] = 0x804dc8b0u;
    f1 = tc_callf(0x801c3248u, &a);
    r4 = tc_lastr4();
    f2 = (f64)(f32)f1;
    f1 = (f64)(f32)(f2 * (f64)rdf32(0x80575d4cu));
    c0gt = f1 > (f64)rdf32(0x80575cfcu);
    wrf32d((u32)param_1 + 0xcu, f1);
    if (c0gt) {
        a.r[0] = param_2;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = f2;
        r3 = tc_call(rd32(rd32(param_2) + 0x21cu), &a);
        a.r[0] = param_2;
        a.r[1] = r3;
        a.r[2] = 0u;
        a.r[3] = 1u;
        a.f[0] = (f64)rdf32(0x80575d40u);
        a.f[1] = 0.0;
        (void)tc_call(rd32(rd32(param_2) + 0x54u), &a);
        a.f[0] = (f64)(f32)((f64)rdf32(0x80575d44u) * (f64)rdf32(param_2 + 0xd38u));
        a.r[0] = 0x817fdfe4u;
        a.r[1] = 0x817fdfe4u;
        (void)tc_call(0x802343c8u, &a);
    } else {
        a.r[0] = param_2;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = f2;
        r3 = tc_call(rd32(rd32(param_2) + 0x218u), &a);
        a.r[0] = param_2;
        a.r[1] = r3;
        a.r[2] = 0u;
        a.r[3] = 1u;
        a.f[0] = (f64)rdf32(0x80575d40u);
        a.f[1] = 0.0;
        (void)tc_call(rd32(rd32(param_2) + 0x54u), &a);
        a.f[0] = (f64)rdf32(param_2 + 0xd38u);
        a.r[0] = 0x817fdfe4u;
        a.r[1] = 0x817fdfe4u;
        (void)tc_call(0x802343c8u, &a);
    }
    wrf32d(param_2 + 0x17cu, (f64)rdf32(0x817fdfe4u));
    wrf32d(param_2 + 0x180u, (f64)rdf32(0x817fdfe8u));
    wrf32d(param_2 + 0x184u, (f64)rdf32(0x817fdfecu));
    wr32((u32)param_1 + 8u, 0u);
    return;
}
