#include "tc_rt.h"

u32 fn_801c7490(s32 param_1)
{
    TcArgs a = {0};
    a.f[0] = (f64)rdf32(0x80575da0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800da490u, &a);
    wr32((u32)param_1 + 0x74u, rd32((u32)param_1 + 0x74u) & 0xf7ffffffu);
    return 0u;
}
