#include "tc_rt.h"

void fn_80036a2c(void)
{
    TcArgs a = {0};
    a.r[0] = 0x803a3ea8u;
    a.r[1] = 0u;
    a.r[2] = 0x800u;
    (void)tc_call(0x8000443cu, &a);
    return;
}
