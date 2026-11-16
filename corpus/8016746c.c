#include "tc_rt.h"

void fn_8016746c(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0xcu) != 0u) {
        a.r[0] = 0x8046a200u;
        a.r[1] = rd32(rd32((u32)param_1 + 4u) + 0xfcu);
        a.r[2] = param_2;
        r3 = tc_call(0x800590b4u, &a);
        a.f[0] = (f64)rdf32(0x80574bfcu);
        a.r[0] = rd32((u32)param_1 + 0xcu);
        a.r[1] = r3;
        a.r[2] = 0u;
        (void)tc_call(0x80035740u, &a);
    }
    return;
}
