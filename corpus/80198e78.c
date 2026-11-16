#include "tc_rt.h"

void fn_80198e78(void)
{
    TcArgs a = {0};
    a.r[0] = 0x804dac68u;
    (void)tc_call(0x80199204u, &a);
    return;
}
