#include "tc_rt.h"

void fn_800d5c0c(void)
{
    TcArgs a = {0};
    a.r[0] = 0x804b9da0u;
    a.r[1] = 0x1eu;
    (void)tc_call(0x8010a75cu, &a);
    return;
}
