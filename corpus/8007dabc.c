#include "tc_rt.h"

void fn_8007dabc(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = (u32)param_1 + 0xacu;
    if (rd32((u32)param_1 + 0xf4u) != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x8006ff00u, &a);
        return;
    }
    return;
}
