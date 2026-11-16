#include "tc_rt.h"

u32 fn_802e463c(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    while ((u32)param_2 != 0x10u) {
        r12 = rd32(param_1);
        r12 = rd32(r12 + 0x34u);
        if (r12 != 0x802e463cu) {
            if (r12 == 0x817ff000u) {
                return param_1;
            }
            a.r[0] = param_1;
            a.r[1] = (u32)param_2;
            a.f[0] = 0.0;
            r3 = tc_call(r12, &a);
            f1 = tc_lastf();
            return r3;
        }
    }
    return (u32)rd8(param_1 + 0xb8u);
}
