#include "tc_rt.h"

void fn_8007eb04(u32 param_1)
{
    u32 c0eq = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    c0eq = rd32(param_1 + 0x110u) == 0u;
    wrf32d(param_1 + 0x228u, (f64)(f32)((f64)rdf32(param_1 + 0x228u) + (f64)rdf32(0x80572864u)));
    if (!c0eq) {
        f1 = (f64)rdf32(0x80572870u);
        wr32(param_1 + 0x148u, rd32(param_1 + 0x148u) & 0xbfffffffu);
        wrf32d(param_1 + 0x17cu, (f64)rdf32(0x804890c8u));
        wrf32d(param_1 + 0x180u, (f64)rdf32(0x804890ccu));
        wrf32d(param_1 + 0x184u, (f64)rdf32(0x804890d0u));
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = 1u;
        a.r[3] = 0u;
        a.r[4] = 0x804890c8u;
        a.r[5] = 0x80490000u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
        return;
    }
    return;
}
