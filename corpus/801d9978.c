#include "tc_rt.h"

void fn_801d9978(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = (u32)param_2;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x70u), &a);
    if (r3 == 0u) {
        r3 = rd32(param_1 + 0x148u);
        if ((u32)((s32)((r3 << 3u) & 0xc0000000u) >> 31) != 0u) {
            return;
        }
        if ((u32)param_2 != 1u || (u32)((s32)((r3 << 1u) & 0xc0000000u) >> 31) == 0u) {
            r31 = 9u;
            do {
                if ((u32)param_2 != 0u) {
                    a.f[0] = (f64)rdf32(0x805760dcu);
                    a.r[0] = param_1 + 0x27cu;
                    a.r[1] = r31;
                    (void)tc_call(0x800a2560u, &a);
                } else {
                    a.r[0] = param_1 + 0x27cu;
                    a.r[1] = r31;
                    (void)tc_call(0x800a25e4u, &a);
                }
                r31 = r31 + 1u;
            } while ((s32)r31 < 35);
        }
    }
    return;
}
