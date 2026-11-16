#include "tc_rt.h"

u32 fn_80266c88(s32 param_1, u32 param_2)
{
    u32 r5 = 0;
    r5 = 0u;
    if (param_2 > 0x880u) {
        r5 = 0x301u;
    } else {
        wr32((u32)param_1 + 0xcu, param_2);
        if (param_2 > rd32((u32)param_1 + 8u)) {
            wr32((u32)param_1 + 8u, param_2);
        }
    }
    return r5;
}
