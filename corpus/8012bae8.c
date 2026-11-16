#include "tc_rt.h"

s32 fn_8012bae8(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        wr32((u32)param_1 + 0x10u, 0x80363718u);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x8012ef80u, &a);
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
