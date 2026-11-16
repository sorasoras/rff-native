#include "tc_rt.h"

u32 fn_801eb888(u32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    r5 = 0u;
    r4 = rd32(0x80571398u);
    r0 = rd32(r4 + 0x1b8u);
    r4 = rd32(r4 + 0x1bcu);
    c0lt = (s32)r0 < 1;
    if (r0 == 1u) {
        a.r[0] = 0x19u;
        a.r[1] = r4;
        a.r[2] = 0u;
        r3 = tc_call(0x801412f8u, &a);
        r5 = r3;
    } else if (!c0lt) {
        if ((s32)r0 < 3) {
            a.r[0] = 0x18u;
            a.r[1] = r4;
            a.r[2] = 0u;
            r3 = tc_call(0x801412f8u, &a);
            r5 = r3;
        }
    } else if ((s32)r0 >= 0) {
        a.r[0] = 0xdu;
        a.r[1] = 0x5fu;
        a.r[2] = 0u;
        r3 = tc_call(0x801412f8u, &a);
        r5 = r3;
    }
    if (r5 != 0u) {
        a.r[0] = param_1;
        a.r[1] = r5;
        a.r[2] = 0u;
        (void)tc_call(0x801006a4u, &a);
    }
    return 1u;
}
