#include "tc_rt.h"

u32 fn_800a2f2c(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_2;
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = param_1;
    r3 = tc_call(0x800a36d0u, &a);
    if (r3 != 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x800a2d40u, &a);
        a.r[0] = r3;
        a.r[1] = param_3 + 0x40u;
        r3 = tc_call(0x8009f044u, &a);
        if ((u32)(s8)r3 != 0u) {
            r30 = param_3;
            r31 = param_3;
            r29 = 0u;
            for (;;) {
                if (r29 >= rd32(param_3 + 0x40u)) {
                    r3 = 1u;
                    return r3;
                }
                a.r[0] = param_1;
                r3 = tc_call(0x800a2d40u, &a);
                a.r[0] = r3;
                a.r[1] = 0x817fdfd8u;
                a.r[2] = r29;
                r3 = tc_call(0x8009f094u, &a);
                if ((u32)(s8)r3 == 0u) break;
                a.r[0] = param_1;
                r3 = tc_call(0x800a2d40u, &a);
                a.r[0] = r3;
                a.r[1] = r30;
                a.r[2] = r29;
                r3 = tc_call(0x8009f100u, &a);
                if ((u32)(s8)r3 == 0u) break;
                r0 = rd32(0x817fdfd8u);
                if (r0 > 3u) {
                    wr32(r31, r0);
                }
                r30 = r30 + 4u;
                r31 = r31 + 4u;
                r29 = r29 + 1u;
            }
            r3 = 0u;
        } else {
            r3 = 0u;
        }
    } else {
        r3 = 0u;
    }
    return r3;
}
