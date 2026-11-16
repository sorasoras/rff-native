#include "tc_rt.h"

void fn_802eb39c(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r5 = 0, r6 = 0;
    r6 = (u32)(s16)rd16(param_2 + 2u);
    r5 = (u32)(s16)rd16(param_2 + 4u);
    r0 = (u32)(s16)rd16(param_2 + 6u);
    wr16(param_1, rd16(param_2));
    wr16(param_1 + 2u, (u16)r6);
    wr16(param_1 + 4u, (u16)r5);
    wr16(param_1 + 6u, (u16)r0);
    return;
}
