#include "tc_rt.h"

void fn_80069f38(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80059e38u, &a);
    if (r3 != 0u) {
        r3 = 0u;
        if (rd32(0x80571170u) != 0u && (rd32(0x8057118cu) & 0x8000u) != 0u) {
            r3 = 1u;
        }
        if (r3 != 0u) {
            a.r[0] = rd32(0x80472b1cu);
            a.r[1] = 0u;
            (void)tc_call(0x800355acu, &a);
        }
    }
    return;
}
