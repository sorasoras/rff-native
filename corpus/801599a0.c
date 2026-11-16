#include "tc_rt.h"

s32 fn_801599a0(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        if (((u32)param_1 + 0x14u) != 0u) {
            r3 = rd32((u32)param_1 + 0x14u);
            if ((r3 + 0x10000u) != 0xffffu) {
                a.r[0] = r3;
                (void)tc_call(0x8004bc54u, &a);
                wr32((u32)param_1 + 0x14u, 0xffffffffu);
            }
        }
        a.r[0] = (u32)param_1;
        a.r[1] = 0xffffffffu;
        (void)tc_call(0x800a5f8cu, &a);
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
