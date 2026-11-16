#include "tc_rt.h"

void fn_802100e0(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x124u;
    r3 = tc_call(0x80320fe4u, &a);
    if (r3 == 0u) {
        a.r[0] = (u32)param_1 + 0x124u;
        (void)tc_call(0x80157e6cu, &a);
    }
    r4 = rd32((u32)param_1 + 0x184u);
    if (r4 != 0xffffffffu) {
        a.r[0] = 0x804b9e80u;
        a.r[1] = r4;
        (void)tc_call(0x801206f4u, &a);
        wr32((u32)param_1 + 0x184u, 0xffffffffu);
    }
    return;
}
