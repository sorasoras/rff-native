#include "tc_rt.h"

u32 fn_800aefd0(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)rd8((u32)param_1 + 0x162du) != 0u) {
        r3 = 0xffffffffu;
    } else {
        r3 = tc_call(0x800aef6cu, &a);
        a.r[0] = r3;
        a.r[1] = param_2;
        a.r[2] = (u32)param_1 + 0xcf4u;
        r3 = tc_call(0x8010a754u, &a);
    }
    return r3;
}
