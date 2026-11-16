#include "tc_rt.h"

void fn_800a62cc(u32 param_1)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r30 = 0;
    TcArgs a = {0};
    if (rd32(param_1 + 8u) != 0u) {
        if (rd32(param_1 + 0xcu) != 0u) {
            while (rd32(param_1 + 0xcu) != 0u) {
                a.r[0] = 0u;
                a.r[1] = (ppc_mulhwu(0x10624dd3u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 6u) & 0x3ffffffu;
                (void)tc_call(0x802301e8u, &a);
            }
        }
        r30 = rd32(param_1 + 8u);
        a.r[0] = param_1;
        r3 = tc_call(0x800a63ccu, &a);
        r6 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r30;
            a.r[2] = r5;
            a.r[3] = r6;
            (void)tc_call(0x80040e98u, &a);
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = r30;
                (void)tc_call(0x80094ec0u, &a);
            } else {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r30;
                a.r[2] = r5;
                a.r[3] = r6;
                (void)tc_call(0x80040e98u, &a);
            }
        }
    }
    wr32(param_1 + 8u, 0u);
    wr32(param_1, 0u);
    wr32(param_1 + 4u, 0u);
    wr32(param_1 + 0xcu, 0u);
    wr32(param_1 + 0x10u, 0u);
    return;
}
