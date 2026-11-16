#include "tc_rt.h"

u32 fn_80239adc(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r5 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r5 = (((u32)param_1 << 3u) & 0xfffffff8u) - 0x7fb1a310u;
    wr32(rd32(r5 + 4u), param_2);
    wr32(param_2 + 4u, rd32(r5 + 4u));
    wr32(param_2, r5);
    wr32(r5 + 4u, param_2);
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return 1u;
}
