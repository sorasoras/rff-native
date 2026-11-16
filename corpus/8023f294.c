#include "tc_rt.h"

void fn_8023f294(u32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    wr32(0x804e6260u, param_1);
    wr32(0x805716f0u, 1u);
    a.r[0] = 0x804e6230u;
    a.r[1] = 0x804e6264u;
    a.r[2] = 0x804e6268u;
    a.r[3] = 0x804e627cu;
    a.r[4] = 0x804e6280u;
    (void)tc_call(0x8023e21cu, &a);
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
