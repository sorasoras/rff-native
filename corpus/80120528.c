#include "tc_rt.h"

u32 fn_80120528(s32 param_1, u32 param_2, u32 param_3)
{
    u32 c0eq = 0, r3 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x14u) == 0u) {
        r3 = 1u;
    } else {
        a.r[0] = rd32((u32)param_1 + 4u) + 0xcu;
        a.r[1] = param_2;
        a.r[2] = param_3;
        a.r[3] = 0u;
        r3 = tc_call(0x803064dcu, &a);
        c0eq = r3 == 0u;
        r3 = 1u;
        if (!c0eq && rd32(param_2) != 0u) {
            r3 = 0u;
        }
    }
    return r3;
}
