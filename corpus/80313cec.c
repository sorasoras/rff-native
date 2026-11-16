#include "tc_rt.h"

void fn_80313cec(u32 param_r3)
{
    u32 r3 = 0, r4 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    wr8(param_r3 + 0x120u, 1u);
    r4 = 0u;
    for (;;) {
        a.r[0] = param_r3 + 0xc0u;
        a.r[1] = r4;
        r3 = tc_call(0x802de9f0u, &a);
        r4 = r3;
        if (r3 == 0u) break;
        wr8(r3 + 0x8au, 1u);
        if (rd32(0x80571e08u) == (rd32(r3 + 8u) & 0xffffu)) {
            wr32(0x80571e08u, 0xffffffffu);
        }
    }
    if (rd32(param_r3 + 0xbcu) != 0u) {
        r29 = 0u;
        for (;;) {
            a.r[0] = rd32(param_r3 + 0xbcu) + 0x24u;
            a.r[1] = r29;
            r3 = tc_call(0x802de9f0u, &a);
            r29 = r3;
            if (r3 == 0u) break;
            if ((u32)rd8(r3 + 0x120u) == 0u) {
                r28 = rd32(r3 + 0xf4u);
                while (r28 != 0u) {
                    if (r28 == param_r3) {
                        wr8(r29 + 0x120u, 1u);
                        r4 = 0u;
                        for (;;) {
                            a.r[0] = r29 + 0xc0u;
                            a.r[1] = r4;
                            r3 = tc_call(0x802de9f0u, &a);
                            r4 = r3;
                            if (r3 == 0u) break;
                            wr8(r3 + 0x8au, 1u);
                            if (rd32(0x80571e08u) == (rd32(r3 + 8u) & 0xffffu)) {
                                wr32(0x80571e08u, 0xffffffffu);
                            }
                        }
                    }
                    r28 = rd32(r28 + 0xf4u);
                }
            }
        }
    }
    return;
}
