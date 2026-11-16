#include "tc_rt.h"

u32 fn_80124544(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801244dcu, &a);
    if (r3 != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x1cu;
        a.r[1] = 3u;
        (void)tc_call(0x800f8544u, &a);
        a.r[0] = rd32((u32)param_1 + 0x1cu);
        a.r[1] = 0xffffffffu;
        (void)tc_call(0x8012442cu, &a);
    }
    return 1u;
}
