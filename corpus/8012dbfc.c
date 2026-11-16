#include "tc_rt.h"

void fn_8012dbfc(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x2cu);
    if (r0 != 0u) {
        a.r[0] = r0;
        (void)tc_call(0x800fec80u, &a);
    }
    r3 = rd32((u32)param_1 + 0x104u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x800fec80u, &a);
    }
    return;
}
