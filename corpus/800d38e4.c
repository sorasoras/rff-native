#include "tc_rt.h"

void fn_800d38e4(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wrf32d((u32)param_1 + 0x4e8u, (f64)rdf32(0x80573124u));
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800d5148u, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = rd32((u32)param_1 + 0x518u);
        (void)tc_call(0x800d3830u, &a);
    } else {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x800d5158u, &a);
        if (r3 != 0u) {
            wr32((u32)param_1 + 0x524u, rd32((((rd32((u32)param_1 + 0x518u) + 5u) << 2u) & 0xfffffffcu) - 0x7fb4ea68u));
        }
    }
    return;
}
