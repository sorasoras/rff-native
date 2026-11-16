#include "tc_rt.h"

u32 fn_800d2a0c(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r6 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    r7 = rd32(param_2);
    wr32(0x817fe004u, 0x817ff000u);
    r6 = rd32(param_2 + 4u);
    wr32(0x817fdffcu, 0u);
    r0 = rd32(param_2 + 8u);
    wr32(0x817fdfe8u, r7);
    wr32(0x817fdfecu, r6);
    wr32(0x817fdff0u, r0);
    a.r[0] = 0x817fdfe8u;
    a.r[1] = (u32)param_1 + 8u;
    a.r[2] = 0x817fdfe8u;
    (void)tc_call(0x802343a4u, &a);
    wrf32d(0x817fdfecu, (f64)rdf32(0x805730f0u));
    a.r[0] = 0x817fdfe8u;
    f1 = tc_callf(0x80234428u, &a);
    f0 = (f64)rdf32((u32)param_1 + 0x14u);
    f0 = (f64)(f32)(f0 * f0);
    return (ppc_cntlzw(((((f0 < f1) << 0x1fu) | ((f0 > f1) << 0x1eu) | ((f0 == f1) << 0x1du) | (((f0 != f0) || (f1 != f1)) << 0x1cu)) >> 0x1fu) & 1u) >> 5u) & 0x7ffffffu;
}
