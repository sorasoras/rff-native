#include "tc_rt.h"

void fn_80171dac(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r26 = 0, r27 = 0, r28 = 0;
    TcArgs a = {0};
    r28 = 0u;
    r27 = 0u;
    wr32((u32)param_1 + 0x1804u, 0u);
    wr32((u32)param_1 + 0x1808u, 0u);
    wr32((u32)param_1 + 0x180cu, 0u);
    do {
        if ((s32)r27 < 60) {
            r26 = (u32)rd16(r28 - 0x7fb66dc0u);
            a.r[0] = r26;
            r3 = tc_call(0x800cd6e4u, &a);
            if (r26 != 0x2e8u) {
                r0 = r3 & 0xffu;
                r3 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                if ((r3 & 0x1fe0u) != 0u) {
                    wr32((u32)param_1 + 0x1804u, rd32((u32)param_1 + 0x1804u) + 1u);
                } else {
                    if ((r3 & 0x1e000u) != 0u) {
                        wr32((u32)param_1 + 0x1808u, rd32((u32)param_1 + 0x1808u) + 1u);
                    } else {
                        if ((r3 & 0x60000u) != 0u) {
                            wr32((u32)param_1 + 0x180cu, rd32((u32)param_1 + 0x180cu) + 1u);
                        }
                    }
                }
            }
        }
        r27 = r27 + 1u;
        r28 = r28 + 4u;
    } while ((s32)r27 < 64);
    return;
}
