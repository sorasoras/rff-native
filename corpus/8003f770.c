#include "tc_rt.h"

void fn_8003f770(s32 param_1)
{
    TcArgs a = {0};
    if ((u32)(s8)rd8(0x803be690u) != (u32)param_1) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80044e28u, &a);
        wr8(0x803be690u, (u8)param_1);
    }
    return;
}
