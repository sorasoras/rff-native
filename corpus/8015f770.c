#include "tc_rt.h"

void fn_8015f770(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x94u), &a);
    if (r3 == 0u) {
        a.r[0] = param_1;
        (void)tc_call(0x800d9ffcu, &a);
        if ((u32)((s32)rd32(param_1 + 0x74u) >> 31) != 0u && rd32(param_1 + 0x120u) == 0u) {
            wr32(param_1 + 0x120u, 2u);
        }
    }
    return;
}
