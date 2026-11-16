#include "tc_rt.h"

u32 fn_801e7900(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x32cu);
    if (r0 == 2u) {
        r3 = 0u;
    } else {
        r0 = r0 * 0x144u;
        a.r[0] = (u32)param_1 + r0 + 0xa54u;
        r3 = tc_call(0x8020c130u, &a);
        wrf32d((u32)param_1 + 0x330u, (f64)rdf32((u32)param_1 + (rd32((u32)param_1 + 0x32cu) * 0x144u) + 0xa58u));
    }
    return r3;
}
