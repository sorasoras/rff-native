#include "tc_rt.h"

s32 fn_8020ec68(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0xcu;
    r3 = tc_call(0x8020cbccu, &a);
    r31 = r3;
    if (r3 == 0u) {
        a.r[0] = (u32)param_1 + 0xcu;
        (void)tc_call(0x8020cc64u, &a);
        a.r[0] = (u32)param_1 + 0xcu;
        (void)tc_call(0x8020cb08u, &a);
    }
    return (s32)r31;
}
