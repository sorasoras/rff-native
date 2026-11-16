#include "tc_rt.h"

void fn_80077bf0(void)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0x80488d80u;
    r30 = 0u;
    do {
        a.r[0] = r31;
        (void)tc_call(0x801a6424u, &a);
        r30 = r30 + 1u;
        r31 = r31 + 0x1cu;
    } while (r30 < 0x1eu);
    return;
}
