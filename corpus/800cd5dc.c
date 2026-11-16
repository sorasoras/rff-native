#include "tc_rt.h"

s32 fn_800cd5dc(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800cd598u, &a);
    if (r3 == 0u) {
        r3 = (u32)param_2;
    } else {
        r31 = (u32)param_1 + 0x90u;
        a.r[0] = rd32(0x803d2a48u);
        a.r[1] = r31;
        a.r[2] = (u32)param_2;
        a.r[3] = 0x400u;
        (void)tc_call(0x800ce3e4u, &a);
        r3 = r31;
    }
    return (s32)r3;
}
