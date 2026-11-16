#include "tc_rt.h"

void fn_802204b0(s32 param_1)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 0u;
    r31 = (u32)param_1;
    while ((s32)r30 < (s32)rd32((u32)param_1 + 0xcu)) {
        a.r[0] = rd32(r31 + 0x2cu);
        (void)tc_call(0x800fec80u, &a);
        r31 = r31 + 0x5cu;
        r30 = r30 + 1u;
    }
    return;
}
