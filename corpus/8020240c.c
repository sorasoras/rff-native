#include "tc_rt.h"

void fn_8020240c(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x94u;
    (void)tc_call(0x8007ae84u, &a);
    r3 = rd32((u32)param_1 + 0x34u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x800fec80u, &a);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801973e0u, &a);
    return;
}
