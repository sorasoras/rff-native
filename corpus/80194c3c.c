#include "tc_rt.h"

void fn_80194c3c(void)
{
    TcArgs a = {0};
    a.r[0] = 0x804d910cu;
    (void)tc_call(0x80195b2cu, &a);
    return;
}
