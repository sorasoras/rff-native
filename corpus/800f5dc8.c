#include "tc_rt.h"

void fn_800f5dc8(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x8007d150u, &a);
    r31 = rd32(r3 + 0xcu);
    a.r[0] = param_2;
    r3 = tc_call(0x8007d150u, &a);
    r0 = rd32(r3 + 0xcu);
    if (r31 == 0u || r31 != r0) {
        (void)tc_call(0x800f4884u, &a);
    }
    return;
}
