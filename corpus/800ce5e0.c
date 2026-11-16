#include "tc_rt.h"

void fn_800ce5e0(s32 param_1)
{
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x10u) != 0u) {
        a.r[0] = 0x804b1524u;
        a.r[1] = (u32)param_1;
        (void)tc_call(0x8007b03cu, &a);
    }
    wr32((u32)param_1 + 0xcu, 0u);
    return;
}
