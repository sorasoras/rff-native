#include "tc_rt.h"

u32 fn_8014d390(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    (void)tc_call(0x8014d3e4u, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    (void)tc_call(0x8014d528u, &a);
    r3 = rd32((u32)param_1 + 0x1cu);
    if (rd32(r3 + 0x48u) == 0u) {
        a.r[0] = r3;
        a.r[1] = 2u;
        (void)tc_call(0x8014d2d8u, &a);
    }
    return 1u;
}
