#include "tc_rt.h"

void fn_8007f7e4(u32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    f0 = (f64)rdf32(0x80572860u);
    r4 = rd32(param_1 + 0x148u);
    wrf32d(param_1 + 0x17cu, (f64)rdf32(0x804890c8u));
    r4 = r4 | 0x20000000u;
    wrf32d(param_1 + 0x180u, (f64)rdf32(0x804890ccu));
    wrf32d(param_1 + 0x184u, (f64)rdf32(0x804890d0u));
    wrf32d(param_1 + 0x170u, (f64)rdf32(0x804890c8u));
    wrf32d(param_1 + 0x174u, (f64)rdf32(0x804890ccu));
    wrf32d(param_1 + 0x178u, (f64)rdf32(0x804890d0u));
    wrf32d(param_1 + 0x188u, f0);
    wrf32d(param_1 + 0x18cu, f0);
    wr32(param_1 + 0x148u, r4);
    if ((u32)((s32)r4 >> 31) != 0u) {
        wr32(param_1 + 0x270u, 0u);
    }
    a.r[0] = param_1 + 0x27cu;
    f1 = tc_callf(0x800a264cu, &a);
    r4 = tc_lastr4();
    if ((u32)((s32)((rd32(param_1 + 0x148u) << 4u) & 0xc0000000u) >> 31) == 0u) {
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        a.f[0] = (f64)rdf32(0x80572864u);
        a.r[0] = 0x75u;
        a.r[1] = r3;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        (void)tc_call(0x800d783cu, &a);
    }
    a.r[0] = param_1;
    (void)tc_call(0x8007f7d4u, &a);
    return;
}
