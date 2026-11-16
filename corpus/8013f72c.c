#include "tc_rt.h"

s32 fn_8013f72c(void)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r30 = 0u;
    r29 = 0u;
    while ((s32)r29 < (s32)rd32(0x805712b4u)) {
        a.r[0] = r29;
        r3 = tc_call(0x8013f718u, &a);
        r31 = r3;
        a.r[0] = r29;
        r3 = tc_call(0x8013f438u, &a);
        f1 = tc_lastf();
        a.r[0] = r3;
        a.r[1] = r31;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(r3 + 0xcu) + 0x38u), &a);
        if (r3 == 1u) {
            r30 = (r30 + 1u) & 0xffu;
        }
        r29 = r29 + 1u;
    }
    return (s32)r30;
}
