#include "tc_rt.h"

u32 fn_800708a4(u32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if (param_1 != 0u) {
        wr32(param_1, 0x80350238u);
        a.r[0] = param_1;
        a.r[1] = (u32)param_2;
        a.f[0] = 0.0;
        (void)tc_call(rd32(0x80350250u), &a);
        a.r[0] = param_1;
        a.r[1] = 0u;
        (void)tc_call(0x80070b9cu, &a);
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
