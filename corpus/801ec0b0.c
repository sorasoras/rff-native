#include "tc_rt.h"

u32 fn_801ec0b0(u32 param_1, s32 param_2)
{
    u32 r0 = 0;
    TcArgs a = {0};
    if (param_1 != 0u) {
        r0 = rd32(param_1);
        wr32(param_1 + 0xcu, 0x803760f0u);
        if (r0 != 0u) {
            a.r[0] = r0;
            a.r[1] = 1u;
            a.f[0] = 0.0;
            (void)tc_call(rd32(rd32(r0 + 0x64u) + 8u), &a);
        }
        if (param_2 > 0) {
            a.r[0] = param_1;
            (void)tc_call(0x801ed1dcu, &a);
        }
    }
    return param_1;
}
