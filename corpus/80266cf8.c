#include "tc_rt.h"

void fn_80266cf8(s32 param_1)
{
    TcArgs a = {0};
    if (((u32)param_1 != 0xffffffffu && param_1 >= 0) && param_1 < 3) {
        (void)tc_call(0x802689dcu, &a);
        wr32(((u32)param_1 * 0x890u) - 0x7faff2bcu, 0u);
        (void)tc_call(0x802689d4u, &a);
    }
    return;
}
