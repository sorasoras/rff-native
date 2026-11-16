#include "tc_rt.h"

void fn_802dc1e8(void)
{
    u32 r31 = 0;
    TcArgs a = {0};
    if (rd32(0x805480e0u) != 0u) {
        r31 = 0u;
        do {
            a.r[0] = r31;
            (void)tc_call(0x802dd604u, &a);
            r31 = r31 + 1u;
        } while ((s32)r31 < 16);
        r31 = rd32(0x80547c18u);
        while (r31 != 0u) {
            a.r[0] = r31;
            (void)tc_call(0x802dc910u, &a);
            r31 = rd32(r31);
        }
    }
    return;
}
