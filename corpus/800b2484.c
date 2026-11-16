#include "tc_rt.h"

void fn_800b2484(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0xe90u) != (u32)param_2) {
        wr32((u32)param_1 + 0xe90u, (u32)param_2);
        if ((u32)param_2 != 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 6u;
            (void)tc_call(0x800b31dcu, &a);
            return;
        }
        a.r[0] = (u32)param_1;
        a.r[1] = 0x15u;
        (void)tc_call(0x800b31dcu, &a);
        return;
    }
    return;
}
