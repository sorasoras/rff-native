#include "tc_rt.h"

void fn_80045008(void)
{
    TcArgs a = {0};
    wr32(0x803c1c90u, 0u);
    wr32(0x803c1c94u, 0u);
    wr8(0x803c1c9cu, 1u);
    wr8(0x803c1c9du, 0u);
    wr8(0x803c1c9eu, 0u);
    a.r[0] = 0x80u;
    (void)tc_call(0x80045128u, &a);
    return;
}
