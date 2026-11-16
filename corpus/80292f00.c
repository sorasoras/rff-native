#include "tc_rt.h"

void fn_80292f00(s32 param_1)
{
    u32 r5 = 0, r31 = 0;
    TcArgs a = {0};
    r5 = (u32)rd8((u32)param_1 + 0x16u);
    if (r5 != 0xffu) {
        wr8(r5 - 0x7fac26c4u, 0x10u);
    }
    r31 = (u32)rd8((u32)param_1 + 0x12u);
    a.r[0] = (u32)param_1 + 4u;
    (void)tc_call(0x8028d9f0u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    a.r[2] = 0x20u;
    (void)tc_call(0x8000443cu, &a);
    wr8((u32)param_1 + 0x12u, (u8)r31);
    wr8((u32)param_1 + 0x1cu, 1u);
    wr8((u32)param_1 + 0x16u, 0xffu);
    return;
}
