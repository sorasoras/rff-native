#include "tc_rt.h"

void fn_8007787c(void)
{
    TcArgs a = {0};
    a.r[0] = rd32(0x804865dcu);
    a.r[1] = 0u;
    (void)tc_call(0x800355acu, &a);
    return;
}
