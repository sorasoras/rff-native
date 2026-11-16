#include "tc_rt.h"

void fn_80207608(s32 param_1, u32 param_2)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    r5 = rd32(param_2);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r3 = rd32(param_2 + 4u);
    c0eq = rd32((u32)param_1 + 0x16b8u) == 0u;
    r0 = rd32(param_2 + 8u);
    wr32(0x817fdfe4u, r5);
    wr32(0x817fdfe8u, r3);
    wr32(0x817fdfecu, r0);
    if (!c0eq) {
        a.f[0] = (f64)rdf32(0x817fdfe4u);
        a.f[1] = (f64)rdf32(0x817fdfecu);
        a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
        a.r[1] = 0u;
        a.r[2] = 0u;
        f1 = tc_callf(0x80089fc8u, &a);
        f2 = (f64)rdf32((u32)param_1 + 0x16ccu);
        f0 = f2 + rdf64(0x805766f8u);
        f2 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x16c8u) + f2);
        f0 = (f64)(f32)f0;
        wrf32d((u32)param_1 + 0x16c8u, f2);
        wrf32d((u32)param_1 + 0x16ccu, f0);
        if (f2 < f1) {
            f0 = ppc_fabs(f0);
            wrf32d((u32)param_1 + 0x16c8u, f1);
            f0 = (f64)(f32)f0;
            wrf32d((u32)param_1 + 0x16ccu, f0);
            a.r[0] = (u32)param_1;
            a.r[1] = 0x2008u;
            (void)tc_call(0x800aef78u, &a);
        }
        r5 = rd32(0x817fdfe4u);
        wrf32d(0x817fdfe8u, (f64)rdf32((u32)param_1 + 0x16c8u));
        r0 = rd32(0x817fdfecu);
        r3 = rd32(0x817fdfe8u);
        wr32(0x817fdfd8u, r5);
        wr32(0x817fdfdcu, r3);
        wr32(0x817fdfe0u, r0);
        a.r[0] = rd32((u32)param_1 + 0x16b8u);
        a.r[1] = 0x817fdfd8u;
        (void)tc_call(0x8015811cu, &a);
    }
    return;
}
