#include "tc_rt.h"

void fn_80168fb0(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0xcu);
    if (r0 != 0xffffffffu) {
        a.r[0] = param_2;
        a.r[1] = r0;
        (void)tc_call(0x800af028u, &a);
        wr32((u32)param_1 + 0xcu, 0xffffffffu);
    }
    r3 = rd32((u32)param_1 + 0x10u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x80157f30u, &a);
        wr32((u32)param_1 + 0x10u, 0u);
    }
    return;
}
