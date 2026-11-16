#include "tc_rt.h"

void fn_802935e8(void)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0x8053d98cu;
    r30 = 0u;
    do {
        if ((u32)rd8(r31 + 0x119u) != 0u) {
            a.r[0] = (u32)rd16(r31);
            a.r[1] = 3u;
            (void)tc_call(0x802a7a5cu, &a);
        }
        r30 = r30 + 1u;
        r31 = r31 + 0x11cu;
    } while (r30 < 4u);
    return;
}
