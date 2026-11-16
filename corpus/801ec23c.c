#include "tc_rt.h"

u32 fn_801ec23c(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (param_1 != 0u) {
        wr32(param_1 + 0x64u, 0x803760fcu);
        a.r[0] = 0u;
        r3 = tc_call(0x801b3a7cu, &a);
        a.r[0] = r3;
        a.r[1] = rd32(param_1 + 8u);
        (void)tc_call(0x801b3a38u, &a);
        a.r[0] = 0u;
        r3 = tc_call(0x801b3a7cu, &a);
        a.r[0] = r3;
        a.r[1] = rd32(param_1 + 0xcu);
        (void)tc_call(0x801b3a38u, &a);
        if ((s32)rd32(param_1 + 0x60u) > 0) {
            a.r[0] = 0u;
            r3 = tc_call(0x801b3a7cu, &a);
            a.r[0] = r3;
            a.r[1] = rd32(param_1);
            (void)tc_call(0x801b3a38u, &a);
        }
        if (param_2 > 0) {
            a.r[0] = param_1;
            (void)tc_call(0x801ed16cu, &a);
        }
    }
    return param_1;
}
