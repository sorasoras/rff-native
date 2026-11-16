#include "tc_rt.h"

void fn_8007afcc(s32 param_1, u32 param_2)
{
    u32 r0 = 0;
    TcArgs a = {0};
    wr32(param_2, rd32((u32)param_1 + 0xcu));
    r0 = rd32((u32)param_1 + 8u);
    wr32((u32)param_1 + 0xcu, param_2);
    r0 = r0 - 1u;
    wr32((u32)param_1 + 8u, r0);
    if (r0 == 0u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x8007ae84u, &a);
        return;
    }
    return;
}
