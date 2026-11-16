#include "tc_rt.h"

void fn_80043bb4(void)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0x803bf6e8u;
    if (rd32(0x803c1c7cu) == 0u) {
        r30 = 0u;
        do {
            if ((s32)rd32(r31 + 0x934u) > 0) {
                a.r[0] = 0u;
                a.r[1] = 0u;
                (void)tc_call(0x8027a740u, &a);
            }
            r30 = r30 + 1u;
            r31 = r31 + 0x954u;
        } while (r30 < 4u);
    }
    return;
}
