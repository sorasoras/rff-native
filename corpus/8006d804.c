#include "tc_rt.h"

void fn_8006d804(s32 param_1)
{
    u32 r0 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x290u);
    wrf32d((u32)param_1 + 0x948u, (f64)rdf32(0x805725d8u));
    if ((s32)r0 < 27) {
        if ((s32)r0 < 24) {
            return;
        }
        wr32((u32)param_1 + 0x88cu, 1u);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80065210u, &a);
        return;
    }
    return;
}
