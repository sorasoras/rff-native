#include "tc_rt.h"

void fn_8022d710(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    for (;;) {
        r3 = rd32((u32)param_1 + 0x2f4u);
        if (r3 == 0u) break;
        r4 = rd32(r3 + 0x10u);
        if (r4 == 0u) {
            wr32((u32)param_1 + 0x2f8u, 0u);
        } else {
            wr32(r4 + 0x14u, 0u);
        }
        wr32((u32)param_1 + 0x2f4u, r4);
        wr32(r3 + 0xcu, 0u);
        wr32(r3 + 8u, 0u);
        a.r[0] = r3;
        (void)tc_call(0x802300d0u, &a);
    }
    return;
}
