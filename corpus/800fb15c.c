#include "tc_rt.h"

u32 fn_800fb15c(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    r4 = rd32((u32)param_1 + 0x28u);
    if (r4 != 0u && rd32((u32)param_1 + 0x24u) != 0u) {
        r31 = 0u;
        a.r[0] = r4;
        r3 = tc_call(0x80185350u, &a);
        if (r3 != 0u) {
            a.r[0] = rd32((u32)param_1 + 0x24u);
            r3 = tc_call(0x8018462cu, &a);
            if (r3 != 0u) {
                r31 = 1u;
            }
        }
    }
    return r31;
}
