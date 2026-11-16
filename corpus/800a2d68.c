#include "tc_rt.h"

u32 fn_800a2d68(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    (void)param_1;
    a.r[0] = param_2;
    r3 = tc_call(0x8009ef58u, &a);
    if ((s32)r3 > (s32)rd32(param_3)) {
        wr32(param_3, r3);
    }
    return 0u;
}
