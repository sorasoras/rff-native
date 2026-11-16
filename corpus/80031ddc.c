#include "tc_rt.h"

void fn_80031ddc(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if (param_1 != 0u) {
        a.r[0] = (u32)(s8)rd8(param_1);
        a.r[1] = rd32(param_1 + 4u);
        a.r[2] = (u32)param_2;
        r3 = tc_call(0x80031d44u, &a);
        wr32(param_1 + 4u, r3);
        a.r[0] = (u32)(s8)rd8(param_1 + 1u);
        a.r[1] = rd32(param_1 + 8u);
        a.r[2] = (u32)param_2;
        r3 = tc_call(0x80031d44u, &a);
        wr32(param_1 + 8u, r3);
        a.r[0] = (u32)(s8)rd8(param_1 + 2u);
        a.r[1] = rd32(param_1 + 0xcu);
        a.r[2] = (u32)param_2;
        r3 = tc_call(0x80031d44u, &a);
        r0 = rd32(param_1 + 0x10u);
        wr32(param_1 + 0xcu, r3);
        if (r0 == 0u) {
            r0 = 0u;
        } else {
            r0 = (u32)param_2 + r0;
        }
        wr32(param_1 + 0x10u, r0);
        r30 = 0u;
        r31 = 0u;
        while ((s32)r30 < (s32)rd8(param_1 + 3u)) {
            r4 = rd32(param_1 + 0x10u) + r31;
            if (r4 != 0u) {
                r0 = rd32(r4 + 0x14u);
                if (r0 == 0u) {
                    r3 = 0u;
                } else {
                    r3 = (u32)param_2 + r0;
                }
                wr32(r4 + 0x14u, r3);
                a.r[0] = r3;
                a.r[1] = (u32)param_2;
                (void)tc_call(0x80031fe0u, &a);
            }
            r31 = r31 + 0x18u;
            r30 = r30 + 1u;
        }
    }
    return;
}
