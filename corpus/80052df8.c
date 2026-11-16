#include "tc_rt.h"

void fn_80052df8(void)
{
    TcArgs a = {0};
    if (rd32(0x803d115cu) != 0u) {
        a.r[0] = 0x803d1160u;
        (void)tc_call(0x801f86d8u, &a);
        return;
    }
    return;
}
