#include "tc_rt.h"

void fn_80130b08(s32 param_1, s32 param_2)
{
    u32 c0lt = 0;
    c0lt = param_2 < 1;
    wr32((u32)param_1 + 0x38u, (u32)param_2);
    if ((u32)param_2 != 1u) {
        if (c0lt) {
            if (param_2 >= 0) {
                wr32((u32)param_1 + 0x54u, 6u);
                return;
            }
            return;
        }
        if (param_2 >= 3) {
            return;
        }
        wr32((u32)param_1 + 0x54u, 9u);
        return;
    }
    wr32((u32)param_1 + 0x54u, 0xau);
    return;
}
