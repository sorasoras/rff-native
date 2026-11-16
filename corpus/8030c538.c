#include "tc_rt.h"

void fn_8030c538(f64 param_1, s32 param_2)
{
    u32 r0 = 0;
    if (param_1 != (f64)rdf32((u32)param_2 + 0xa8u)) {
        r0 = (u32)rd8((u32)param_2 + 0xa2u);
        wrf32d((u32)param_2 + 0xa8u, param_1);
        r0 = r0 | 0x10u;
        wr8((u32)param_2 + 0xa2u, (u8)r0);
        return;
    }
    return;
}
