#include "tc_rt.h"

void fn_800c8898(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = param_3;
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    r3 = tc_call(0x800c8804u, &a);
    if (param_3 < r3) {
        wr32((u32)param_1 + ((u32)param_2 * 0x60u) + 0x3cu, r31);
        return;
    }
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    r3 = tc_call(0x800c8804u, &a);
    r31 = r3;
    wr32((u32)param_1 + ((u32)param_2 * 0x60u) + 0x3cu, r31);
    return;
}
