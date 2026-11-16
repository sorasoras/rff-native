#include "tc_rt.h"

void fn_8013e23c(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    f0 = (f64)rdf32(0x80574418u);
    r4 = rd32((u32)param_1 + 0xb24u);
    wr32((u32)param_1 + 0xb20u, 0u);
    wr32((u32)param_1 + 0xb2cu, 0u);
    wrf32d((u32)param_1 + 0xb30u, f0);
    if (r4 != 0xffffffffu) {
        a.r[0] = 0x804b9e80u;
        a.r[1] = r4;
        (void)tc_call(0x801206f4u, &a);
        wr32((u32)param_1 + 0xb24u, 0xffffffffu);
    }
    r3 = rd32((u32)param_1 + 0xb28u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x80157e6cu, &a);
        wr32((u32)param_1 + 0xb28u, 0u);
    }
    return;
}
