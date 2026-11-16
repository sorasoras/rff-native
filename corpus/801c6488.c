#include "tc_rt.h"

void fn_801c6488(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x50u) != 0u) {
        a.r[0] = (u32)param_1 + 8u;
        (void)tc_call(0x80070068u, &a);
    }
    wr32((u32)param_2 + 0xd34u, 1u);
    return;
}
