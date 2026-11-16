#include "tc_rt.h"

u32 fn_800c0298(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32((u32)param_1 + 0xa08u);
    if ((s32)r31 < 33) {
        a.f[0] = (f64)rdf32(rd32((u32)param_1 + 0x70u) + 0x54u);
        r3 = tc_call(0x802558e4u, &a);
        if (r3 >= (u32)rd8((r31 * 0x58u) - 0x7fb971fbu)) {
            r3 = 1u;
            return r3;
        }
    }
    r3 = 0u;
    return r3;
}
