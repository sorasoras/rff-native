#include "tc_rt.h"

u32 fn_8017ab38(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = (u32)rd16(param_2);
    r3 = tc_call(0x8017a924u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = param_1;
        r3 = tc_call(0x8017ad14u, &a);
        r30 = r3;
        a.r[0] = (u32)rd16(param_2);
        r3 = tc_call(0x8017afecu, &a);
        r31 = r3;
        r29 = 0u;
        while ((s32)r29 < (s32)r30) {
            a.r[0] = param_1;
            a.r[1] = r29;
            r3 = tc_call(0x8017aef8u, &a);
            if (((u32)rd16(r3) == (u32)rd16(param_2) && (u32)rd8(r3 + 3u) == (u32)rd8(param_4)) && (u32)rd8(r3 + 2u) != r31) {
                a.r[0] = r3;
                a.r[1] = param_2;
                a.r[2] = param_3;
                a.r[3] = param_4;
                (void)tc_call(0x8017add8u, &a);
                if ((u32)rd8(param_3) == 0u) {
                    r3 = 1u;
                    return r3;
                }
            }
            r29 = r29 + 1u;
        }
        a.r[0] = param_1;
        r3 = tc_call(0x8017a9e4u, &a);
        if (r3 == 0u) {
            r3 = 0u;
        } else {
            wr16(r3, rd16(param_2));
            wr8(r3 + 2u, rd8(param_3));
            wr8(r3 + 3u, rd8(param_4));
            r3 = 1u;
        }
    }
    return r3;
}
