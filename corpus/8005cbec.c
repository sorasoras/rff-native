#include "tc_rt.h"

s32 fn_8005cbec(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 1u;
    r3 = tc_call(0x80059e38u, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x8005cc54u, &a);
        r31 = r3;
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8005d27cu, &a);
    if (r31 == 0u) {
        wr32((u32)param_1 + 0xcu, 0x12u);
    }
    return (s32)r31;
}
