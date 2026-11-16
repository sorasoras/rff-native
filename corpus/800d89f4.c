#include "tc_rt.h"

void fn_800d89f4(void)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = 0x804b1df8u;
    wr32(0x817fdff8u, 0u);
    r30 = 0u;
    do {
        a.r[0] = 0x817fdfe8u;
        a.r[1] = r31;
        (void)tc_call(0x80320f94u, &a);
        a.r[0] = 0x817fdfe8u;
        r3 = tc_call(0x80321010u, &a);
        if (r3 == 0u) {
            r3 = 0u;
        } else {
            r3 = rd32(r3 + 0xcu);
        }
        r0 = 0u;
        if (r3 == 1u || r3 == 2u) {
            r0 = 1u;
        }
        if (r0 == 0u) {
            a.r[0] = r31;
            (void)tc_call(0x80157e6cu, &a);
        }
        r30 = r30 + 1u;
        r31 = r31 + 0x54u;
    } while ((s32)r30 < 320);
    return;
}
