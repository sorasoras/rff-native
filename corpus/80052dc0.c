#include "tc_rt.h"

void fn_80052dc0(void)
{
    TcArgs a = {0};
    wr32(0x803d115cu, 0u);
    a.r[0] = 0x803d1160u;
    (void)tc_call(0x801f85e8u, &a);
    return;
}
