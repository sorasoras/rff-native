#include "tc_rt.h"

u32 fn_802dea2c(u32 param_1, s32 param_2)
{
    u32 r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    TcArgs a = {0};
    if (param_1 != 0u) {
        r7 = rd32(param_1 + 4u);
        r6 = param_1 + 4u;
        while (r7 != r6) {
            r8 = rd32(r7);
            r5 = rd32(r7 + 4u);
            wr32(r8 + 4u, r5);
            wr32(r5, r8);
            wr32(param_1, rd32(param_1) - 1u);
            wr32(r7, 0u);
            wr32(r7 + 4u, 0u);
            r7 = r8;
        }
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
