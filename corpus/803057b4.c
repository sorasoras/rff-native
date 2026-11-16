#include "tc_rt.h"

u32 fn_803057b4(u32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if (param_1 != 0u) {
        wr32(param_1, 0x8039d5c0u);
        a.r[0] = param_1 + 0x1cu;
        (void)tc_call(0x802f9794u, &a);
        a.r[0] = param_1 + 0x1cu;
        a.r[1] = 0xffffffffu;
        (void)tc_call(0x802f94e4u, &a);
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
