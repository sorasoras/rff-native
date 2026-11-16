#include "tc_rt.h"

u32 fn_800d58e4(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (param_2 >= 0) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x800d56bcu, &a);
        if (param_2 < (s32)r3) {
            r3 = rd32((u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu) + 0x480u);
            return r3;
        }
    }
    r3 = 0u;
    return r3;
}
