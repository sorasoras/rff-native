#include "tc_rt.h"

void fn_8026b004(void)
{
    TcArgs a = {0};
    a.r[0] = 0x8038f4b8u;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(0x8038f4c4u), &a);
    return;
}
