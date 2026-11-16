#include "tc_rt.h"

void fn_801a68d8(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0xdcu);
    if (r0 != 0u) {
        a.r[0] = r0;
        r3 = tc_call(0x80320fe4u, &a);
        if (r3 != 0u) {
            a.r[0] = rd32((u32)param_1 + 0xdcu);
            (void)tc_call(0x80157f30u, &a);
            wr32((u32)param_1 + 0xdcu, 0u);
        }
    }
    return;
}
