#include "tc_rt.h"

void fn_8006db64(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8006c5ecu, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8014660cu, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8006c388u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    (void)tc_call(0x8019bf38u, &a);
    wr32((u32)param_1 + 0xa08u, 0x21u);
    wr32((u32)param_1 + 0xa0cu, 0x21u);
    wr32((u32)param_1 + 0xa10u, 0x21u);
    wr32((u32)param_1 + 0xa14u, 0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80186c4cu, &a);
    return;
}
