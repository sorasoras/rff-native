#include "tc_rt.h"

s32 fn_80137c44(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        if (((u32)param_1 + 0x44u) != 0u) {
            a.r[0] = (u32)param_1 + 0x54u;
            a.r[1] = 0x801366d0u;
            a.r[2] = 0x58u;
            a.r[3] = 2u;
            (void)tc_call(0x8025571cu, &a);
        }
        a.r[0] = (u32)param_1 + 0x38u;
        a.r[1] = 0xffffffffu;
        (void)tc_call(0x80163f08u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        (void)tc_call(0x80189440u, &a);
        if (param_2 > 0) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x80189294u, &a);
        }
    }
    return param_1;
}
