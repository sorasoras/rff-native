#include "tc_rt.h"

void fn_80050850(void)
{
    TcArgs a = {0};
    a.r[0] = 0x803c81f0u;
    (void)tc_call(0x801dbde4u, &a);
    wr32(0x805710a4u, 0u);
    a.r[0] = 0x803c865cu;
    (void)tc_call(0x8007ae84u, &a);
    return;
}
