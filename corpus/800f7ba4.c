#include "tc_rt.h"

s32 fn_800f7ba4(s32 param_1, s32 param_2)
{
    u32 c0eq = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        wr32((u32)param_1 + 0x164u, 0x80360450u);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x8007ae84u, &a);
        c0eq = (u32)param_1 == 0u;
        if (!c0eq && !c0eq) {
            a.r[0] = (u32)param_1;
            a.r[1] = 0u;
            (void)tc_call(0x8007ae30u, &a);
        }
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
