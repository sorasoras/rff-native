#include "tc_rt.h"

void fn_800d83c0(s32 param_1, u32 param_2, s32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[0] = 0x817fdfd8u;
    a.r[1] = param_2;
    (void)tc_call(0x80320f94u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 0x817fdfd8u;
    (void)tc_call(0x80320fd0u, &a);
    wr32((u32)param_1 + 8u, (u32)param_3);
    r6 = ((u32)param_3 << 3u) & 0xfffffff8u;
    wr32((u32)param_1 + 0x1cu, 1u);
    r31 = rd32(r6 - 0x7fb4ea2cu);
    a.r[1] = rd32(r6 - 0x7fb4ea30u);
    r3 = tc_call(0x8010b43cu, &a);
    r4 = rd32(param_4 + 4u);
    r0 = rd32(param_4 + 8u);
    wr32(0x817fdfe0u, rd32(param_4));
    wr32(0x817fdfe4u, r4);
    f2 = (f64)rdf32(0x817fdfe0u);
    wr32(0x817fdfe8u, r0);
    f1 = (f64)rdf32(0x817fdfe4u);
    f0 = (f64)rdf32(0x817fdfe8u);
    wr32((u32)param_1 + 0x20u, r3);
    wr32((u32)param_1 + 0x24u, r31);
    wrf32d((u32)param_1 + 0x28u, f2);
    wrf32d((u32)param_1 + 0x2cu, f1);
    wrf32d((u32)param_1 + 0x30u, f0);
    return;
}
