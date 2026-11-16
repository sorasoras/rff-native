#include "tc_rt.h"

u32 fn_8006fd50(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)((s32)rd32(param_2 + 0x9cu) >> 31) != 0u) {
        a.r[0] = param_2;
        a.r[1] = param_3;
        a.r[2] = param_1;
        a.r[3] = param_1;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(param_2) + 0x7cu), &a);
        if (r3 != 0u) {
            r3 = 1u;
            return r3;
        }
    }
    r3 = 0u;
    return r3;
}
