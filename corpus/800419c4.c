#include "tc_rt.h"

void fn_800419c4(void)
{
    TcArgs a = {0};
    a.r[0] = 0x800419a0u;
    (void)tc_call(0x800456acu, &a);
    return;
}
