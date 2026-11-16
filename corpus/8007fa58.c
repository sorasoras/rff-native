#include "tc_rt.h"

void fn_8007fa58(u32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = (u32)param_3;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x70u), &a);
    if (r3 == 0u) {
        r3 = rd32(param_1 + 0x148u);
        if ((u32)((s32)((r3 << 3u) & 0xc0000000u) >> 31) != 0u) {
            return;
        }
        if ((u32)param_3 != 1u || (u32)((s32)((r3 << 1u) & 0xc0000000u) >> 31) == 0u) {
            r31 = rd32(param_1 + 0x2fcu) + ((u32)param_2 * 0x24u);
            if (rd32(r31 + 8u) != 0u) {
                r30 = 0u;
                do {
                    r4 = (u32)(s8)rd8(r31 + r30 + 0xcu);
                    if (r4 != 0xffffffffu) {
                        if ((u32)param_3 != 0u) {
                            a.f[0] = (f64)rdf32(r31 + 0x10u);
                            a.r[0] = param_1 + 0x27cu;
                            a.r[1] = r4;
                            (void)tc_call(0x800a2560u, &a);
                        } else {
                            a.r[0] = param_1 + 0x27cu;
                            a.r[1] = r4;
                            (void)tc_call(0x800a25e4u, &a);
                        }
                    }
                    r30 = r30 + 1u;
                } while ((s32)r30 < 3);
            }
        }
    }
    return;
}
