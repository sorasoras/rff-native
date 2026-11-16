#include "tc_rt.h"

void fn_800bb3f8(s32 param_1)
{
    u32 r31 = 0;
    TcArgs a = {0};
    r31 = rd32(0x80499094u);
    if ((r31 & 1u) != 0u) {
        a.r[0] = (u32)param_1 + 0xc20u;
        (void)tc_call(0x8005250cu, &a);
        wr32((u32)param_1 + 0xc48u, 1u);
    }
    if ((r31 & 2u) != 0u) {
        a.r[0] = (u32)param_1 + 0xcb0u;
        (void)tc_call(0x8005250cu, &a);
        wr32((u32)param_1 + 0xcd8u, 1u);
    }
    if ((r31 & 0x10u) != 0u) {
        a.r[0] = (u32)param_1 + 0xd40u;
        (void)tc_call(0x8005250cu, &a);
        wr32((u32)param_1 + 0xd68u, 1u);
    }
    if ((r31 & 8u) != 0u) {
        a.r[0] = (u32)param_1 + 0xdd0u;
        (void)tc_call(0x8005250cu, &a);
        wr32((u32)param_1 + 0xdf8u, 1u);
    }
    if ((r31 & 4u) != 0u) {
        a.r[0] = (u32)param_1 + 0xe60u;
        (void)tc_call(0x8005250cu, &a);
        wr32((u32)param_1 + 0xe88u, 1u);
    }
    if ((r31 & 0x40u) != 0u) {
        a.r[0] = (u32)param_1 + 0xef0u;
        (void)tc_call(0x8005250cu, &a);
        wr32((u32)param_1 + 0xf18u, 1u);
    }
    return;
}
