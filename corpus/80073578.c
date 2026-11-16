#include "tc_rt.h"

void fn_80073578(void)
{
    TcArgs a = {0};
    a.r[0] = 0x80472f48u;
    (void)tc_call(0x800beb1cu, &a);
    return;
}
