#include "tc_rt.h"

void fn_8021ede8(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    r4 = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu);
    r3 = rd32(r4 + 0x1584u);
    r31 = r4 + 0x1528u;
    r4 = rd32(r4 + 0x1580u);
    a.r[0] = r3;
    a.r[1] = r4;
    a.r[2] = 1u;
    (void)tc_call(0x800f8f10u, &a);
    a.r[0] = rd32(r31 + 4u);
    a.r[1] = rd32(r31);
    a.r[2] = 1u;
    (void)tc_call(0x800f8f10u, &a);
    return;
}
