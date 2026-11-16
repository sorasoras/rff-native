#include "tc_rt.h"

void fn_8006c8c4(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    if (param_2 <= 5u) {
        r31 = (u32)param_1 + ((param_2 << 2u) & 0xfffffffcu);
        r3 = rd32(r31 + 0x15ccu);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x80157e6cu, &a);
            wr32(r31 + 0x15ccu, 0u);
        }
    }
    return;
}
