#include "tc_rt.h"

void fn_800eb408(void)
{
    TcArgs a = {0};
    a.r[0] = 0x804b86f8u;
    a.r[1] = 0u;
    a.r[2] = 0x268u;
    (void)tc_call(0x8000443cu, &a);
    return;
}
