#include "tc_rt.h"

void fn_8008c0c0(void)
{
    TcArgs a = {0};
    a.r[0] = 0x80488cdcu;
    (void)tc_call(0x801cab4cu, &a);
    return;
}
