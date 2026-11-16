#include "tc_rt.h"

void fn_80166f1c(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    if (rd32((u32)param_2 + 0x1468u) == 0xbu) {
        a.r[0] = (u32)param_2;
        r3 = tc_call(0x800b2fe8u, &a);
        if (r3 != 0u) {
            r31 = 1u;
        }
    }
    if (r31 != 0u) {
        a.f[0] = (f64)rdf32(0x80574bd4u);
        a.r[0] = (u32)param_2;
        a.r[1] = 0xcu;
        a.r[2] = 0u;
        a.r[3] = 1u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        (void)tc_call(0x800b5248u, &a);
    }
    r0 = rd32((u32)param_1 + 8u) + 1u;
    wr32((u32)param_1 + 8u, r0);
    if ((s32)r0 >= 60) {
        wr32((u32)param_2 + 0xed4u, 0u);
        a.r[0] = (u32)param_2;
        a.r[1] = 0x26u;
        (void)tc_call(0x800b31a0u, &a);
    }
    return;
}
