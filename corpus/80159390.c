#include "tc_rt.h"

void fn_80159390(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)((s32)((rd32((u32)param_1 + 0x34u) << 1u) & 0xc0000000u) >> 31) == 0u) {
        a.r[0] = rd32((u32)param_1 + 0x10u);
        f1 = tc_callf(0x80159240u, &a);
        wrf32d((u32)param_1 + 0x1cu, f1);
        if ((u32)param_2 == 0u) {
            wrf32d((u32)param_1 + 0x1cu, (f64)rdf32((u32)param_1 + 0x18u));
        }
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801590e4u, &a);
        r3 = tc_call(0x8015934cu, &a);
        r3 = r3 - ((r3 << 1u) & 0xfffffffeu);
        r0 = rd32((u32)param_1 + 0x34u) | 0x40000000u;
        wr16((u32)param_1 + 0x2au, (u16)r3);
        wr32((u32)param_1 + 0x34u, r0);
    }
    return;
}
