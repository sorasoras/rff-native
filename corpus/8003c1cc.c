#include "tc_rt.h"

void fn_8003c1cc(void)
{
    TcArgs a = {0};
    a.r[0] = 0x803be264u;
    (void)tc_call(0x8003bf0cu, &a);
    wr32(0x803be2acu, 0u);
    wr32(0x803be2b0u, 0u);
    return;
}
