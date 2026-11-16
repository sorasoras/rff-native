#include "tc_rt.h"

void fn_801bfe00(void)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0x804dc4f8u;
    r30 = 0u;
    do {
        a.r[0] = 2u;
        r3 = tc_call(0x801b3a7cu, &a);
        a.r[0] = r3;
        a.r[1] = rd32(r31);
        (void)tc_call(0x801b3a38u, &a);
        r30 = r30 + 1u;
        r31 = r31 + 8u;
    } while ((s32)r30 < 34);
    return;
}
