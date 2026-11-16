#include "tc_rt.h"

void fn_8012c614(s32 param_1)
{
    u32 r3 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x38u;
    (void)tc_call(0x80163f60u, &a);
    r30 = (u32)param_1;
    r29 = 0u;
    while ((s32)r29 < (s32)(rd32((u32)param_1 + 0xcu) * 0xau)) {
        a.r[0] = 0x8049c500u;
        a.r[1] = r29;
        r3 = tc_call(0x800c8794u, &a);
        if (r3 < 0xabu) {
            a.r[0] = rd32(r30 + 0xb8u);
            a.r[1] = rd32(r30 + 0x1d0u);
            (void)tc_call(0x801ec6bcu, &a);
        }
        r30 = r30 + 4u;
        r29 = r29 + 1u;
    }
    r3 = rd32((u32)param_1 + 0x44u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x800fe9bcu, &a);
    }
    return;
}
