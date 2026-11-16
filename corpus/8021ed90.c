#include "tc_rt.h"

void fn_8021ed90(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32(rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x14d0u);
    (void)tc_call(0x800fe9bcu, &a);
    a.r[0] = rd32(rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x1580u);
    (void)tc_call(0x800fe9bcu, &a);
    a.r[0] = rd32(rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x1528u);
    (void)tc_call(0x800fe9bcu, &a);
    return;
}
