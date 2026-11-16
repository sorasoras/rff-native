#include "tc_rt.h"

void fn_800510b0(void)
{
    TcArgs a = {0};
    a.r[0] = 0x803c81f0u;
    (void)tc_call(0x801dc180u, &a);
    return;
}
