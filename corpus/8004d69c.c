#include "tc_rt.h"

void fn_8004d69c(void)
{
    TcArgs a = {0};
    a.r[0] = 0x803c6408u;
    (void)tc_call(0x8004d208u, &a);
    return;
}
