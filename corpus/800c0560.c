#include "tc_rt.h"

u32 fn_800c0560(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x110u) != 0u) {
        r3 = 1u;
    } else {
        r31 = rd32((u32)param_1 + 0xa08u);
        a.f[0] = (f64)rdf32(rd32((u32)param_1 + 0x70u) + 0x54u);
        r3 = tc_call(0x802558e4u, &a);
        r4 = (u32)rd8((r31 * 0x58u) - 0x7fb971f4u);
        r0 = r3 - r4;
        r3 = r3 | ~r4;
        r0 = (r0 >> 1u) & 0x7fffffffu;
        r0 = r3 - r0;
        r3 = (r0 >> 0x1fu) & 1u;
    }
    return r3;
}
