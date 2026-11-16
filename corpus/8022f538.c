#include "tc_rt.h"

void fn_8022f538(void)
{
    TcArgs a = {0};
    if (rd32(0x8057150cu) != 0u) {
        a.r[0] = 0u;
        (void)tc_call(0x8022f310u, &a);
        return;
    }
    return;
}
