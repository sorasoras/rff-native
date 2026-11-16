#include "tc_rt.h"

u32 fn_800c1604(s32 param_1)
{
    u32 r0 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0xau;
    r0 = rd32((u32)param_1 + 0x110u);
    wr32((u32)param_1 + 0xa5cu, 0u);
    if (r0 != 0u) {
        r31 = 0u;
        a.f[0] = (f64)rdf32(0x80572ea8u);
        a.r[0] = (u32)param_1;
        a.r[1] = 1u;
        a.r[2] = 0u;
        (void)tc_call(0x800bf1d4u, &a);
        wr32((u32)param_1 + 0xa5cu, 1u);
    }
    return r31;
}
