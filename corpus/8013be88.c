#include "tc_rt.h"

u32 fn_8013be88(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    r4 = rd32((u32)param_1 + 0x1cu);
    a.r[0] = rd32(r4 + ((rd32(r4 + 0x5f0u) << 2u) & 0xfffffffcu) + 0x44u);
    r3 = tc_call(0x8013ba98u, &a);
    if (r3 != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x5b0u;
        a.r[1] = 1u;
        (void)tc_call(0x800f8544u, &a);
    }
    return 1u;
}
