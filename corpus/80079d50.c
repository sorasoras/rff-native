#include "tc_rt.h"

void fn_80079d50(s32 param_1)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 8u, 0xffffffffu);
    a.r[0] = 0x109u;
    (void)tc_call(0x8004cd5cu, &a);
    a.r[0] = 0u;
    a.r[1] = 0u;
    a.r[2] = 8u;
    (void)tc_call(0x8003d05cu, &a);
    return;
}
