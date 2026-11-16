#include "tc_rt.h"

void fn_800d369c(void)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = 0x817fdfe8u;
    wr32(0x817fdff8u, 0u);
    r30 = 0u;
    r3 = rd32(0x803388a4u);
    r0 = rd32(0x803388a8u);
    wr32(0x817fdfe8u, rd32(0x803388a0u));
    wr32(0x817fdfecu, r3);
    wr32(0x817fdff0u, r0);
    do {
        a.r[0] = rd32(r31);
        (void)tc_call(0x8011e068u, &a);
        r30 = r30 + 1u;
        r31 = r31 + 4u;
    } while (r30 < 3u);
    return;
}
