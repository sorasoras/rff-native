#include "tc_rt.h"

void fn_800842e0(s32 param_1, s32 param_2)
{
    u32 r31 = 0;
    TcArgs a = {0};
    r31 = ((u32)param_2 << 2u) & 0xfffffffcu;
    if (rd32(rd32((u32)param_1 + 0x78u) + r31 + 0x20u) != 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_2;
        a.r[2] = 0u;
        (void)tc_call(0x800841d4u, &a);
        wrf32d(rd32((u32)param_1 + 0x70u) + 0x54u, (f64)(f32)((f64)rdf32(rd32(rd32((u32)param_1 + 0x78u) + r31 + 0x20u) + 0x18u) - (f64)rdf32(0x805728f0u)));
    }
    return;
}
