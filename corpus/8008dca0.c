#include "tc_rt.h"

void fn_8008dca0(s32 param_1)
{
    u32 r4 = 0;
    TcArgs a = {0};
    r4 = rd32((u32)param_1 + 4u);
    if (r4 != 0u) {
        a.r[0] = 0x80471ed0u;
        a.r[1] = r4;
        (void)tc_call(0x800917b8u, &a);
        wr32((u32)param_1 + 4u, 0u);
    }
    r4 = rd32((u32)param_1 + 0x48u);
    if (r4 != 0u) {
        a.r[0] = 0x80471ed0u;
        a.r[1] = r4;
        (void)tc_call(0x800917b8u, &a);
        wr32((u32)param_1 + 0x48u, 0u);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8008fbf4u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8008f9dcu, &a);
    return;
}
