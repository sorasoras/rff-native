#include "tc_rt.h"

void fn_800a25e4(s32 param_1, s32 param_2)
{
    u32 r31 = 0;
    TcArgs a = {0};
    if (param_2 < (s32)rd32((u32)param_1 + 0xcu)) {
        r31 = rd32((u32)param_1 + 4u) + ((u32)param_2 * 0xe4u);
    } else {
        r31 = rd32((u32)param_1 + 4u);
    }
    if (rd32(r31 + 0x48u) != 0u) {
        wrf32d(r31 + 0x24u, (f64)rdf32(0x80572ad0u));
        a.r[0] = r31;
        (void)tc_call(0x8007020cu, &a);
        a.r[0] = r31;
        (void)tc_call(0x8006ff00u, &a);
    }
    return;
}
