#include "tc_rt.h"

void fn_800532c0(void)
{
    u32 r30 = 0;
    TcArgs a = {0};
    r30 = 0u;
    do {
        a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
        a.r[1] = 0u;
        (void)tc_call(0x8005530cu, &a);
        r30 = r30 + 1u;
    } while (r30 < 2u);
    return;
}
