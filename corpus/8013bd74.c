#include "tc_rt.h"

u32 fn_8013bd74(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    if (rd32((u32)param_1 + 0xcu) == 4u) {
        a.r[0] = rd32((u32)param_1 + 4u);
        r3 = tc_call(0x801f1144u, &a);
        if (r3 != 0u) {
            r31 = 1u;
        }
    }
    return r31;
}
