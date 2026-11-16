#include "tc_rt.h"

u32 fn_801942e0(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    a.r[1] = 0x8033ad4du;
    r3 = tc_call(0x80193ab0u, &a);
    if (r3 != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x1cu);
        a.r[1] = 0x8033ad4du;
        a.r[2] = 0u;
        (void)tc_call(0x80193a00u, &a);
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x30u;
        a.r[1] = 3u;
        (void)tc_call(0x800f8544u, &a);
        a.r[0] = rd32((u32)param_1 + 0x1cu);
        a.r[1] = 0x8033ad4du;
        a.r[2] = 0u;
        (void)tc_call(0x80193a4cu, &a);
        a.r[0] = rd32((u32)param_1 + 0x20u);
        (void)tc_call(0x80194164u, &a);
        wr32(rd32((u32)param_1 + 0x1cu) + 0x10u, 0u);
    }
    return 1u;
}
