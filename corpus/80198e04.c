#include "tc_rt.h"

void fn_80198e04(f64 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    r4 = rd32((u32)param_2 + 0x80u);
    if ((u32)((s32)((r4 << 2u) & 0xc0000000u) >> 31) != 0u && (u32)((s32)((r4 << 4u) & 0xc0000000u) >> 31) != 0u) {
        for (;;) {
            r3 = rd32((u32)param_2 + 0x70u);
            if (!((f64)rdf32(r3 + 0x54u) < param_1)) break;
            a.r[0] = r3;
            a.r[1] = 0u;
            (void)tc_call(0x800355acu, &a);
        }
    }
    return;
}
