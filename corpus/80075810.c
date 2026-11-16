#include "tc_rt.h"

void fn_80075810(void)
{
    u32 r3 = 0, r5 = 0, r27 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    if ((((u32)rd8(0x80492823u) + ((u32)rd8(0x80492822u) * 6u) + 1u) & 0xffu) == 1u) {
        wr8(0x80492bc4u, 0u);
        wr8(0x80492bccu, 0u);
        wr8(0x80492bd4u, 0u);
        wr8(0x80492bdcu, 0u);
        wr8(0x80492be4u, 0u);
        wr8(0x80492becu, 0u);
        wr8(0x80492bf4u, 0u);
        wr8(0x80492bfcu, 0u);
    } else {
        r30 = 0u;
        r29 = 0u;
        do {
            r27 = (u32)rd8(r29 - 0x7fb6d43cu);
            if (r27 < 9u) {
                r3 = tc_call(0x80040b64u, &a);
                r5 = ppc_mulhwu(0x86186187u, r3);
                r3 = r3 - (((((((r3 - r5) >> 1u) & 0x7fffffffu) + r5) >> 4u) & 0xfffffffu) * 0x15u);
                if (r3 < (0xau - r27)) {
                    if ((rd32(0x80492c58u) & 2u) != 0u) {
                        wr8(r29 - 0x7fb6d43cu, (u8)(r27 + 2u));
                    } else {
                        wr8(r29 - 0x7fb6d43cu, (u8)(r27 + 1u));
                    }
                }
            }
            r30 = r30 + 1u;
            r29 = r29 + 8u;
        } while (r30 < 8u);
    }
    return;
}
