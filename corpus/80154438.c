#include "tc_rt.h"

void fn_80154438(u32 param_r3)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r7 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r28 = param_r3 + 0x80u;
    r27 = 2u;
    for (;;) {
        r31 = 0u;
        if ((u32)rd8(r28) != 0u) {
            r30 = 1u;
            c0eq = rd32(r28 + 4u) == 0u;
            if (!c0eq) {
                r29 = 0u;
                if (!c0eq) {
                    a.r[0] = r28;
                    r3 = tc_call(0x80153c3cu, &a);
                    if (r3 == 0u) {
                        r29 = 1u;
                    }
                }
                if (r29 == 0u) {
                    r30 = 0u;
                }
            }
            if (r30 != 0u) {
                r31 = 1u;
            }
        }
        if (r31 != 0u) break;
        r27 = r27 - 1u;
        r28 = r28 - 0x3cu;
        if ((s32)r27 < 0) {
            return;
        }
    }
    a.r[0] = r28;
    r3 = tc_call(0x80153cd4u, &a);
    r7 = rd32(param_r3 + 4u);
    r0 = rd32(r7 + 0xcf8u);
    wr32(0x817fdfd8u, rd32(r7 + 0xcf4u));
    wr32(0x817fdfdcu, r0);
    wr32(0x817fdfe0u, rd32(r7 + 0xcfcu));
    a.r[0] = 0x817fdfd8u;
    a.r[1] = r3;
    a.r[2] = 0x817fdfd8u;
    (void)tc_call(0x802343a4u, &a);
    a.r[0] = 0x817fdfd8u;
    (void)tc_call(0x80234440u, &a);
    return;
}
