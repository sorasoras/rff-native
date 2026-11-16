#include "tc_rt.h"

void fn_80194c88(void)
{
    TcArgs a = {0};
    a.r[0] = 0x804d910cu;
    (void)tc_call(0x80195f30u, &a);
    return;
}
