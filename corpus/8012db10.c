#include "tc_rt.h"

void fn_8012db10(void)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = 0x5d8u;
    r3 = tc_call(0x800510acu, &a);
    r31 = r3;
    a.r[0] = 0u;
    r3 = tc_call(0x801b3a7cu, &a);
    a.r[0] = r3;
    a.r[1] = r31;
    r3 = tc_call(0x801b39d8u, &a);
    wr32(0x805712a8u, r3);
    a.r[0] = r3;
    a.r[1] = 0x5d8u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    (void)tc_call(0x801e5b50u, &a);
    return;
}
