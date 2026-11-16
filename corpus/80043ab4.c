#include "tc_rt.h"

void fn_80043ab4(void)
{
    u32 r29 = 0, r30 = 0;
    TcArgs a = {0};
    if (rd32(0x803c1c7cu) == 0u) {
        r30 = 0x803bf6e8u;
        r29 = 0u;
        do {
            if ((s32)rd32(r30 + 0x934u) > 0) {
                a.r[0] = 0u;
                a.r[1] = 0u;
                (void)tc_call(0x8027a740u, &a);
            }
            r29 = r29 + 1u;
            r30 = r30 + 0x954u;
        } while (r29 < 4u);
        wr32(0x803c1c7cu, 1u);
    }
    return;
}
