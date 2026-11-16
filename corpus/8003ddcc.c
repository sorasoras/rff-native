#include "tc_rt.h"

void fn_8003ddcc(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x14u);
        a.r[1] = param_2;
        r3 = tc_call(0x80032054u, &a);
        wr32((u32)param_1 + 0x14u, r3);
        a.r[0] = rd32((u32)param_1 + 0x18u);
        a.r[1] = param_2;
        r3 = tc_call(0x80032054u, &a);
        wr32((u32)param_1 + 0x18u, r3);
        a.r[0] = rd32((u32)param_1 + 0x1cu);
        a.r[1] = param_2;
        r3 = tc_call(0x80032054u, &a);
        wr32((u32)param_1 + 0x1cu, r3);
        a.r[0] = rd32((u32)param_1 + 0x20u);
        a.r[1] = param_2;
        r3 = tc_call(0x80032054u, &a);
        wr32((u32)param_1 + 0x20u, r3);
        a.r[0] = rd32((u32)param_1 + 0x24u);
        a.r[1] = param_2;
        r3 = tc_call(0x80032054u, &a);
        wr32((u32)param_1 + 0x24u, r3);
    }
    return;
}
