#include "tc_rt.h"

s32 fn_8012b5e8(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        a.r[0] = (u32)param_1 + 0x1ccu;
        a.r[1] = 0x8020ef0cu;
        a.r[2] = 0x38u;
        a.r[3] = 6u;
        (void)tc_call(0x8025571cu, &a);
        a.r[0] = (u32)param_1 + 0xe4u;
        a.r[1] = 0x801e6158u;
        a.r[2] = 0x74u;
        a.r[3] = 2u;
        (void)tc_call(0x8025571cu, &a);
        a.r[0] = (u32)param_1 + 0x94u;
        a.r[1] = 0xffffffffu;
        (void)tc_call(0x801f0de8u, &a);
        a.r[0] = (u32)param_1 + 0x88u;
        a.r[1] = 0xffffffffu;
        (void)tc_call(0x80163f08u, &a);
        if (param_2 > 0) {
            a.r[0] = 0u;
            r3 = tc_call(0x801b3a7cu, &a);
            a.r[0] = r3;
            a.r[1] = (u32)param_1;
            (void)tc_call(0x801b3a38u, &a);
        }
    }
    return param_1;
}
