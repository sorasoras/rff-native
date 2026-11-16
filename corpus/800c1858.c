#include "tc_rt.h"

u32 fn_800c1858(s32 param_1)
{
    u32 r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 2u;
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8019be38u, &a);
    if (rd32((u32)param_1 + 0x110u) != 0u) {
        wr32((u32)param_1 + 0xa08u, 0x21u);
        f1 = (f64)rdf32(0x80572ea8u);
        r31 = 0u;
        wr32((u32)param_1 + 0xa0cu, 0x21u);
        wr32((u32)param_1 + 0xa10u, 0x21u);
        wr32((u32)param_1 + 0xa14u, 0u);
        a.f[0] = f1;
        a.r[0] = (u32)param_1;
        a.r[1] = 1u;
        a.r[2] = 0u;
        (void)tc_call(0x800bf1d4u, &a);
    }
    return r31;
}
