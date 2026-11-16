#include "tc_rt.h"

void fn_80257788(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r7 = 0u;
    r6 = 0x8033cb38u;
    while (param_3 > rd32(r6)) {
        r6 = r6 + 4u;
        r7 = r7 + 1u;
    }
    r6 = param_2 - 4u;
    r4 = rd32(param_2 - 4u);
    r3 = param_1 + ((r7 << 3u) & 0xfffffff8u);
    if (rd32(r4 + 0xcu) == 0u) {
        r5 = rd32(r3 + 8u);
        if (r5 != r4) {
            if (rd32(r3 + 4u) == r4) {
                wr32(r3 + 8u, rd32(r5));
                wr32(r3 + 4u, rd32(rd32(r3 + 4u)));
            } else {
                wr32(rd32(r4) + 4u, rd32(r4 + 4u));
                wr32(rd32(r4 + 4u), rd32(r4));
                r5 = rd32(r3 + 8u);
                wr32(r4 + 4u, r5);
                r5 = rd32(r5);
                wr32(r4, r5);
                wr32(r5 + 4u, r4);
                wr32(rd32(r4 + 4u), r4);
                wr32(r3 + 8u, r4);
            }
        }
    }
    wr32(r6 + 4u, rd32(r4 + 0xcu));
    wr32(r4 + 0xcu, r6);
    r0 = rd32(r4 + 0x10u) - 1u;
    wr32(r4 + 0x10u, r0);
    if (r0 == 0u) {
        if (rd32(r3 + 8u) == r4) {
            wr32(r3 + 8u, rd32(r4 + 4u));
        }
        if (rd32(r3 + 4u) == r4) {
            wr32(r3 + 4u, rd32(r4));
        }
        wr32(rd32(r4) + 4u, rd32(r4 + 4u));
        wr32(rd32(r4 + 4u), rd32(r4));
        if (rd32(r3 + 8u) == r4) {
            wr32(r3 + 8u, 0u);
        }
        if (rd32(r3 + 4u) == r4) {
            wr32(r3 + 4u, 0u);
        }
        r4 = r4 - 8u;
        r30 = rd32(r4 + 4u) & 0xfffffffeu;
        a.r[0] = r30;
        a.r[1] = r4;
        f1 = tc_callf(0x80257590u, &a);
        r3 = rd32(r30 + 0x10u);
        r5 = 0u;
        if ((r3 & 2u) == 0u && (r3 & 0xfffffff8u) == ((rd32(r30 + 0xcu) & 0xfffffff8u) - 0x18u)) {
            r5 = 1u;
        }
        if (r5 != 0u) {
            r4 = rd32(r30 + 4u);
            if (r4 == r30) {
                r4 = 0u;
            }
            if (rd32(param_1) == r30) {
                wr32(param_1, r4);
            }
            if (r4 != 0u) {
                r3 = rd32(r30);
                wr32(r4, r3);
                wr32(r3 + 4u, r4);
            }
            wr32(r30 + 4u, 0u);
            wr32(r30, 0u);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r30;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x802574d8u, &a);
        }
    }
    return;
}
