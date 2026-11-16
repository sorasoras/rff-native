#include "tc_rt.h"

void fn_8015a7cc(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800a62ccu, &a);
    r3 = rd32((u32)param_1 + 0x14u);
    if ((r3 + 0x10000u) != 0xffffu) {
        a.r[0] = r3;
        (void)tc_call(0x8004bc54u, &a);
        wr32((u32)param_1 + 0x14u, 0xffffffffu);
    }
    wr32((u32)param_1 + 0x18u, 0xffffffffu);
    return;
}
