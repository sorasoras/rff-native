#include "tc_rt.h"

void fn_8009364c(s32 param_1)
{
    u32 r4 = 0;
    r4 = (u32)param_1 + (rd32((u32)param_1 + 0xa7cu) * 0x24u);
    wr32(r4 + 0xa80u, rd32((u32)param_1 + 0xf8u));
    wr32(r4 + 0xa84u, rd32((u32)param_1 + 0xfcu));
    wr32(r4 + 0xa88u, rd32((u32)param_1 + 0x100u));
    wr32(r4 + 0xa8cu, rd32((u32)param_1 + 0x104u));
    wrf32d(r4 + 0xa90u, (f64)rdf32((u32)param_1 + 0x108u));
    wrf32d(r4 + 0xa94u, (f64)rdf32((u32)param_1 + 0x10cu));
    wr32(r4 + 0xa98u, rd32((u32)param_1 + 0x110u));
    wr32(r4 + 0xa9cu, rd32((u32)param_1 + 0x114u));
    wr32(r4 + 0xaa0u, rd32((u32)param_1 + 0x118u));
    wrf32d((u32)param_1 + ((rd32((u32)param_1 + 0xa7cu) << 2u) & 0xfffffffcu) + 0xb10u, (f64)rdf32(rd32((u32)param_1 + 0x70u) + 0x54u));
    wr32((u32)param_1 + 0xa7cu, rd32((u32)param_1 + 0xa7cu) + 1u);
    return;
}
