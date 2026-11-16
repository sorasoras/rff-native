#include "tc_rt.h"

s32 fn_802c1468(s32 param_1, s32 param_2)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        wr32((u32)param_1 + 0x1f0u, 0x803989c0u);
        wr32(0x80547470u, 0u);
        wr8((u32)param_1 + 0x1ecu, 0u);
        a.r[0] = (u32)param_1 + 0x1a0u;
        (void)tc_call(0x80226a70u, &a);
        r31 = (u32)param_1;
        r30 = 0u;
        do {
            a.r[0] = r31;
            (void)tc_call(0x80226a70u, &a);
            r30 = r30 + 1u;
            r31 = r31 + 0x68u;
        } while ((s32)r30 < 4);
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
