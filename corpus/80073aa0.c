#include "tc_rt.h"

void fn_80073aa0(void)
{
    TcArgs a = {0};
    a.r[0] = 1u;
    (void)tc_call(0x80073808u, &a);
    return;
}
