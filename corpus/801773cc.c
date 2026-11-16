#include "tc_rt.h"

void fn_801773cc(void)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0x804c0f98u;
    r30 = 0u;
    do {
        if (rd32(r31 + 0x48u) != 0u) {
            a.r[0] = r31;
            (void)tc_call(0x80177c88u, &a);
        }
        r30 = r30 + 1u;
        r31 = r31 + 0x1ecu;
    } while ((s32)r30 < 200);
    return;
}
