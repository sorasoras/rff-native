#include "tc_rt.h"

void fn_800a790c(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3 + 0x44u);
    a.r[0] = r3;
    (void)tc_call(0x800c96e8u, &a);
    return;
}
