#include "tc_rt.h"

void fn_8004d934(void)
{
    TcArgs a = {0};
    a.r[0] = 0x803c6408u;
    (void)tc_call(0x8004cdecu, &a);
    a.r[0] = 0x803c6408u;
    a.r[1] = 0u;
    (void)tc_call(0x8004d368u, &a);
    return;
}
