#include "tc_rt.h"

void fn_801fe650(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = 0xdu;
    a.r[1] = 0x55u;
    a.r[2] = 0u;
    r3 = tc_call(0x801412f8u, &a);
    r31 = r3;
    r3 = tc_call(0x80052e18u, &a);
    r30 = r3;
    wr32(rd32((u32)param_1 + 0x1cu) + 0x9dcu, r3);
    a.r[0] = r3;
    a.r[1] = r31;
    a.r[2] = 0xffffffffu;
    (void)tc_call(0x801f8638u, &a);
    a.r[0] = r30;
    (void)tc_call(0x801f891cu, &a);
    return;
}
