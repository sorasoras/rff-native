#include "tc_rt.h"

void fn_80073b6c(void)
{
    u32 r3 = 0, r26 = 0, r27 = 0, r28 = 0;
    TcArgs a = {0};
    r27 = 0u;
    r28 = 0x8048645cu;
    do {
        if (((u32)rd8(r28) & 1u) != 0u) {
            a.r[0] = r27;
            r3 = tc_call(0x800eb41cu, &a);
            r26 = r3;
            if (r3 == 0xffffffffu) {
                r26 = r27;
            }
            a.r[0] = 0x80469958u;
            a.r[1] = r26;
            a.r[2] = 1u;
            (void)tc_call(0x800587ccu, &a);
            a.r[0] = r26;
            r3 = tc_call(0x8007dad4u, &a);
            a.r[0] = 0x8046a200u;
            a.r[1] = rd32(r3 + 0xcu);
            a.r[2] = 1u;
            (void)tc_call(0x80058f78u, &a);
            wr8(r28, 0u);
        }
        r27 = r27 + 1u;
        r28 = r28 + 1u;
    } while (r27 < 0xabu);
    return;
}
