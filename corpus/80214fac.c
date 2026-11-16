#include "tc_rt.h"

void fn_80214fac(s32 param_1)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x9bcu, 9u);
    a.r[0] = 9u;
    a.r[1] = 1u;
    (void)tc_call(0x800a796cu, &a);
    a.r[0] = 2u;
    a.r[1] = 0x21u;
    a.r[2] = rd32((u32)param_1 + 4u) + 0x64u;
    (void)tc_call(0x800a6dccu, &a);
    a.r[0] = 0u;
    a.r[1] = 0x21u;
    a.r[2] = rd32((u32)param_1 + 4u) + 0x64u;
    (void)tc_call(0x800a6dccu, &a);
    wr32((u32)param_1 + 0x9bcu, 0xffffffffu);
    return;
}
