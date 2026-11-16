#include "tc_rt.h"

void fn_80269518(void)
{
    u32 c0lt = 0, r0 = 0, r4 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    if (rd32(0x805027b0u) == 0u) {
        r0 = rd32(0x80502ab0u) & 0xffffu;
        c0lt = (s32)r0 < 3328;
        do {
            if (r0 != 0xd00u) {
                if (!c0lt) {
                    r4 = 4u;
                    break;
                }
                if (r0 != 0x700u) {
                    r4 = 4u;
                    break;
                }
            }
            a.r[0] = 0x817fdfe8u;
            a.r[1] = rd32(0x80502838u);
            (void)tc_call(0x8026a16cu, &a);
            if ((rd32(0x817fdfe8u) - 0xfe00000u) != 0u) {
                r4 = 3u;
            } else {
                r4 = 5u;
            }
        } while (0);
        a.r[0] = 0x817fdfecu;
        a.r[1] = r4;
        (void)tc_call(0x802662d4u, &a);
        a.r[0] = 0x817fdfecu;
        (void)tc_call(0x802662ecu, &a);
    } else {
        wr32(0x805027b0u, 0u);
    }
    return;
}
