#include "tc_rt.h"

void fn_801e7884(s32 param_1, s32 param_2)
{
    u32 r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_2 * 0x144u;
    if ((rd32((u32)param_1 + r31 + 0xa5cu) + 0x10000u) != 0xffffu) {
        a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
        (void)tc_call(0x80056b64u, &a);
        wr32((u32)param_1 + 0x32cu, (u32)param_2);
        a.r[0] = (u32)param_1 + r31 + 0xa54u;
        (void)tc_call(0x8020c0f8u, &a);
    }
    return;
}
