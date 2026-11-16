#include "tc_rt.h"

void fn_802a859c(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x802a99acu, &a);
    if (r3 != 0u) {
        wr8(r3 + 0x30u, (u8)param_2);
    }
    r30 = 0u;
    r31 = 0x80540a28u;
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
