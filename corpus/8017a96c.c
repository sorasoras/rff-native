#include "tc_rt.h"

s32 fn_8017a96c(u32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x8017ad14u, &a);
    r31 = r3;
    r30 = 0u;
    while ((s32)r30 < (s32)r31) {
        a.r[0] = param_1;
        a.r[1] = r30;
        r3 = tc_call(0x8017aef8u, &a);
        if ((u32)rd16(r3) == 0x2e8u) {
            r3 = r30;
            return (s32)r3;
        }
        r30 = r30 + 1u;
    }
    r3 = 0xffffffffu;
    return (s32)r3;
}
