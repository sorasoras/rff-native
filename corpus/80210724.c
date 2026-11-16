#include "tc_rt.h"

void fn_80210724(s32 param_1)
{
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x404u) != 0xb7u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80065254u, &a);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x800f2d8cu, &a);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80210df0u, &a);
    }
    return;
}
