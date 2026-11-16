#include "tc_rt.h"

void fn_80051aec(void)
{
    TcArgs a = {0};
    a.r[0] = 0x803cb90cu;
    (void)tc_call(0x8007ae84u, &a);
    a.r[0] = 0x803cb934u;
    (void)tc_call(0x8007ae84u, &a);
    return;
}
