#include "tc_rt.h"

void fn_802074f4(s32 param_1)
{
    u32 r0 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x16b8u);
    if (r0 != 0u) {
        a.r[0] = r0;
        (void)tc_call(0x80157f30u, &a);
        wr32((u32)param_1 + 0x16b8u, 0u);
    }
    return;
}
