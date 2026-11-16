#include "tc_rt.h"

u32 fn_8014bbb0(u32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if (param_1 != 0u) {
        wr32(param_1, 0x803655f8u);
        a.r[0] = rd32(param_1 + 8u);
        a.r[1] = 0x8014bcacu;
        a.r[2] = 0x8014bc28u;
        a.r[3] = 0u;
        (void)tc_call(0x80255794u, &a);
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
