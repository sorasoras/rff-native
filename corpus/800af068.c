#include "tc_rt.h"

void fn_800af068(void)
{
    TcArgs a = {0};
    a.r[0] = 0u;
    (void)tc_call(0x8014a9ccu, &a);
    return;
}
