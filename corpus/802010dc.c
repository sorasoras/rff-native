#include "tc_rt.h"

s32 fn_802010dc(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        wr32((u32)param_1 + 0x28u, 0x803773f0u);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x8020134cu, &a);
        a.r[0] = (u32)param_1 + 0x40u;
        a.r[1] = 0xffffffffu;
        (void)tc_call(0x801f0de8u, &a);
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
