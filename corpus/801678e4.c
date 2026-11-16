#include "tc_rt.h"

void fn_801678e4(s32 param_1)
{
    u32 r5 = 0;
    TcArgs a = {0};
    r5 = rd32((u32)param_1 + 0xcu);
    if (r5 != 0u) {
        wrf32d(r5 + 0x58u, (f64)rdf32(0x80574bfcu));
        a.r[0] = rd32((u32)param_1 + 0xcu);
        a.r[1] = 0u;
        (void)tc_call(0x800355acu, &a);
        return;
    }
    return;
}
