#include "tc_rt.h"

u32 fn_800ca97c(s32 param_1, f64 param_f1, u32 param_r4, u32 param_r5, u32 param_r6, u32 param_r7)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x6cu) != 0u) {
        a.f[0] = param_f1;
        a.r[0] = (u32)param_1;
        a.r[1] = param_r4;
        a.r[2] = param_r5;
        a.r[3] = param_r6;
        a.r[4] = param_r7;
        r3 = tc_call(0x800caf1cu, &a);
        return r3;
    }
    return 0u;
}
