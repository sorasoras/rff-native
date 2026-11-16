#include "tc_rt.h"

u32 fn_801245b8(s32 param_1)
{
    u32 r4 = 0, r5 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x24u) != rd32(rd32((u32)param_1 + 0x1cu) + 0x74u)) {
        wr32((u32)param_1 + 0x20u, 0u);
    }
    r5 = rd32((u32)param_1 + 0x1cu);
    r4 = rd32(r5 + 0x74u);
    wr32((u32)param_1 + 0x24u, r4);
    a.r[0] = r5;
    a.r[1] = r4;
    (void)tc_call(0x8012442cu, &a);
    r4 = rd32((u32)param_1 + 0x20u) + 1u;
    wr32((u32)param_1 + 0x20u, r4);
    if (rd32(0x804b9e64u) == 0u && (s32)r4 >= 45) {
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x1cu;
        a.r[1] = 2u;
        (void)tc_call(0x800f8544u, &a);
    }
    return 1u;
}
