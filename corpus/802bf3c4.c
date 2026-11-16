#include "tc_rt.h"

u32 fn_802bf3c4(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (param_1 != 0u) {
        wr32(param_1, 0x80398898u);
        a.r[0] = param_1 + 8u;
        a.r[1] = 0u;
        r3 = tc_call(0x802d7bacu, &a);
        while (r3 != 0u) {
            a.r[0] = param_1 + 8u;
            a.r[1] = r3;
            (void)tc_call(0x802d7b40u, &a);
            r3 = rd32(param_1 + 0x14u);
            if (r3 != 0u) {
                a.r[0] = r3;
                (void)tc_call(0x8026d4a0u, &a);
            } else {
                (void)tc_call(0x80040cd4u, &a);
            }
            a.r[0] = param_1 + 8u;
            a.r[1] = 0u;
            r3 = tc_call(0x802d7bacu, &a);
        }
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
