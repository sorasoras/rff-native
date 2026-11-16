#include "tc_rt.h"

s32 fn_80161490(s32 param_1)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x164u, 0x80360450u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8007ae0cu, &a);
    return param_1;
}
