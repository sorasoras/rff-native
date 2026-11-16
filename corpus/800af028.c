#include "tc_rt.h"

void fn_800af028(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    (void)param_1;
    if ((u32)param_2 != 0xffffffffu) {
        r3 = tc_call(0x800aef6cu, &a);
        r3 = r3 + 0xe0u;
        a.r[0] = r3;
        a.r[1] = (u32)param_2;
        (void)tc_call(0x801206f4u, &a);
    }
    return;
}
