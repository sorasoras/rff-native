#include "tc_rt.h"

u32 fn_8017ac40(u32 param_1, u32 param_2, s32 param_3, u32 param_4)
{
    u32 r3 = 0, r27 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r27 = (u32)param_3;
    a.r[0] = param_1;
    a.r[1] = param_2;
    r3 = tc_call(0x8017a924u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = param_1;
        r3 = tc_call(0x8017aa2cu, &a);
        if ((s32)r3 > 0) {
            r3 = 1u;
        } else {
            a.r[0] = param_1;
            r3 = tc_call(0x8017ad14u, &a);
            r30 = r3;
            a.r[0] = param_2;
            r3 = tc_call(0x8017afecu, &a);
            r31 = r3;
            r29 = 0u;
            while ((s32)r29 < (s32)r30) {
                a.r[0] = param_1;
                a.r[1] = r29;
                r3 = tc_call(0x8017aef8u, &a);
                if ((u32)rd16(r3) == param_2 && (u32)rd8(r3 + 3u) == param_4) {
                    r27 = r27 - (r31 - (u32)rd8(r3 + 2u));
                    if ((s32)r27 <= 0) {
                        r3 = 1u;
                        return r3;
                    }
                }
                r29 = r29 + 1u;
            }
            r3 = 0u;
        }
    }
    return r3;
}
