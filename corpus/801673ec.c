#include "tc_rt.h"

u32 fn_801673ec(u32 param_1, s32 param_2)
{
    u32 c0eq = 0, r3 = 0;
    TcArgs a = {0};
    if (param_1 != 0u) {
        c0eq = rd32(param_1 + 0xcu) == 0u;
        wr32(param_1, 0x8036ae10u);
        if (!c0eq) {
            r3 = tc_call(0x800545e4u, &a);
            a.r[0] = 0x80469958u;
            a.r[1] = rd32(param_1 + 0xcu);
            a.r[2] = r3;
            (void)tc_call(0x80058638u, &a);
        }
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
