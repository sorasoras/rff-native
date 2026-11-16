#include "tc_rt.h"

s32 fn_80084c54(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        a.r[0] = (u32)param_1 + 0xcu;
        a.r[1] = 0x80084c14u;
        a.r[2] = 0x24u;
        a.r[3] = 3u;
        (void)tc_call(0x8025571cu, &a);
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
