#include "tc_rt.h"

void fn_800a7894(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3 + 0x4cu);
    a.r[0] = r3;
    (void)tc_call(0x800ac03cu, &a);
    return;
}
