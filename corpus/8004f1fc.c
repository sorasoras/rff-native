#include "tc_rt.h"

void fn_8004f1fc(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x802f08ccu, &a);
    a.r[0] = r3;
    (void)tc_call(0x802f1a2cu, &a);
    (void)tc_call(0x803067a4u, &a);
    return;
}
