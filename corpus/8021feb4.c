#include "tc_rt.h"

void fn_8021feb4(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x1040u;
    (void)tc_call(0x80220c48u, &a);
    a.r[0] = rd32(0x803d2a60u);
    (void)tc_call(0x801f95b4u, &a);
    return;
}
