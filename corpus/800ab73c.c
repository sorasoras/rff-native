#include "tc_rt.h"

void fn_800ab73c(void)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32(0x8046b7e4u);
    while (r31 != 0u) {
        r3 = r31;
        r31 = rd32(r31);
        r3 = rd32(r3 + 8u);
        a.r[0] = r3;
        (void)tc_call(0x800936c8u, &a);
    }
    return;
}
