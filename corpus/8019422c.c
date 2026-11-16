#include "tc_rt.h"

u32 fn_8019422c(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    a.r[1] = 0x8033ad49u;
    r3 = tc_call(0x80193ab0u, &a);
    if (r3 != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x1cu);
        a.r[1] = 0x8033ad49u;
        a.r[2] = 0u;
        (void)tc_call(0x80193a00u, &a);
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x30u;
        a.r[1] = 1u;
        (void)tc_call(0x800f8544u, &a);
    }
    return 1u;
}
