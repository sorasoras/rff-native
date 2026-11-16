#include "tc_rt.h"

void fn_801a1604(s32 param_1)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    f0 = (f64)rdf32(0x80575868u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wrf32d(0x817fdff0u, f0);
    wrf32d(0x817fdfecu, f0);
    wrf32d(0x817fdfe8u, f0);
    a.r[0] = (u32)param_1;
    a.r[1] = rd32((u32)param_1 + 0x70u);
    a.r[2] = 0x1du;
    a.r[3] = 0x817fdfe8u;
    r3 = tc_call(0x801e87c8u, &a);
    if (r3 != 0u) {
        f2 = (f64)rdf32(0x817fdfe8u);
        wrf32d((u32)param_1 + 0x84u, f2);
        f1 = (f64)rdf32(0x817fdfecu);
        wrf32d((u32)param_1 + 0x88u, f1);
        f0 = (f64)rdf32(0x817fdff0u);
        wrf32d((u32)param_1 + 0x8cu, f0);
        wrf32d((u32)param_1 + 4u, f2);
        wrf32d((u32)param_1 + 8u, f1);
        wrf32d((u32)param_1 + 0xcu, f0);
    }
    a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
    (void)tc_call(0x80056b64u, &a);
    f1 = (f64)rdf32(0x80575888u);
    f0 = (f64)rdf32(0x8057588cu);
    r3 = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
    wrf32d(r3 + 0x1d8u, (f64)rdf32(0x80575884u));
    wrf32d(r3 + 0x1d0u, f1);
    wrf32d(r3 + 0x1d4u, f0);
    wr32((u32)param_1 + 0xf68u, 1u);
    return;
}
