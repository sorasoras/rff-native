#include "tc_rt.h"

void fn_801b0568(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0xf0u;
    (void)tc_call(0x80157f30u, &a);
    if (rd32((u32)param_1 + 0x54u) != 0u) {
        a.r[0] = (u32)param_1 + 0xcu;
        (void)tc_call(0x80070068u, &a);
    }
    return;
}
