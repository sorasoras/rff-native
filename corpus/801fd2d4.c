#include "tc_rt.h"

u32 fn_801fd2d4(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    wr32(rd32((u32)param_1 + 0x1cu) + 0x114u, 0u);
    wr32(rd32((u32)param_1 + 0x1cu) + 0x118u, 0u);
    r4 = rd32((u32)param_1 + 0x1cu);
    wr32(r4 + 0x11cu, 0u);
    r3 = rd32((u32)param_1 + 0x1cu);
    a.r[0] = r3;
    a.r[1] = r4;
    a.f[0] = 0.0;
    (void)tc_call(rd32(rd32(r3 + 0xc8u) + 0x34u), &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xd8u;
    a.r[1] = 0u;
    (void)tc_call(0x800f8544u, &a);
    return 1u;
}
