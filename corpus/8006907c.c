#include "tc_rt.h"

void fn_8006907c(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x298u);
    c0lt = (s32)r0 < 1;
    if (r0 != 1u) {
        if (!c0lt) {
            return;
        }
        if ((s32)r0 < 0) {
            return;
        }
        r3 = tc_call(0x800c7154u, &a);
        if (r3 == 0u) {
            return;
        }
        wr32((u32)param_1 + 0x298u, 1u);
    } else {
        r3 = tc_call(0x800c7154u, &a);
        if (r3 == 0u) {
            wr32((u32)param_1 + 0x298u, 0u);
        }
    }
    return;
}
