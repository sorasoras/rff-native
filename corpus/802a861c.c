#include "tc_rt.h"

void fn_802a861c(void)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0x80540a28u;
    r30 = 0u;
    do {
        if ((u32)rd8(r31) != 0u && rd32(r31 + 4u) == 2u) {
            a.r[0] = r31;
            (void)tc_call(0x802ab454u, &a);
        }
        r30 = r30 + 1u;
        r31 = r31 + 0x5cu;
    } while ((s32)r30 < 4);
    return;
}
