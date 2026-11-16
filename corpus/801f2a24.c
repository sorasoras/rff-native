#include "tc_rt.h"

u32 fn_801f2a24(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r30 = rd32(rd32(0x80571398u) + 0x1a0u);
    if ((s32)r30 < 0 || (s32)r30 >= 70) {
    } else {
        a.r[0] = 0x8049c500u;
        a.r[1] = r30;
        r3 = tc_call(0x800c8794u, &a);
        if ((s32)r3 < 0 || (s32)r3 >= 171) {
        } else {
            a.r[0] = 0xdu;
            a.r[1] = 0x26u;
            a.r[2] = 0u;
            r3 = tc_call(0x801412f8u, &a);
            r29 = r3;
            a.r[0] = 0x8049c500u;
            a.r[1] = r30;
            r3 = tc_call(0x800c8ca4u, &a);
            r0 = r3 & 0xffu;
            if ((r3 & 4u) != 0u) {
                a.r[0] = 0xdu;
                a.r[1] = 0x28u;
                a.r[2] = 0u;
                r3 = tc_call(0x801412f8u, &a);
                r29 = r3;
            } else {
                r0 = r0 & 1u;
                if (r0 != 0u) {
                    a.r[0] = 0xdu;
                    a.r[1] = 0x27u;
                    a.r[2] = 0u;
                    r3 = tc_call(0x801412f8u, &a);
                    r29 = r3;
                }
            }
            a.r[0] = param_1;
            a.r[1] = r29;
            a.r[2] = 0u;
            (void)tc_call(0x801006a4u, &a);
        }
    }
    return 1u;
}
