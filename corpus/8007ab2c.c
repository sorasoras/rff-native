#include "tc_rt.h"

void fn_8007ab2c(void)
{
    TcArgs a = {0};
    a.r[0] = 0x80489180u;
    a.r[1] = 0u;
    a.r[2] = 0x9630u;
    (void)tc_call(0x8000443cu, &a);
    return;
}
