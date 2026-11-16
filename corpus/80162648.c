#include "tc_rt.h"

void fn_80162648(u32 param_1)
{
    u32 r3 = 0, r4 = tc_argr(1u), r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r3 = tc_call(0x8004f594u, &a);
    f1 = tc_lastf();
    wr32(param_1 + 0x74u, 0u);
    wr32(param_1 + 0x54u, 0u);
    wr32(param_1 + 0x58u, 0u);
    wr32(param_1 + 0x5cu, 0u);
    wr32(param_1 + 0x60u, 0u);
    r27 = rd32(0x8033a6f8u);
    r3 = rd32(param_1);
    r28 = rd32(0x8033a6fcu);
    r29 = rd32(0x8033a700u);
    r30 = rd32(0x8033a704u);
    r3 = rd32(r3 + 4u);
    a.r[0] = r3;
    a.r[1] = 0u;
    r3 = tc_call(0x803053a8u, &a);
    f1 = tc_lastf();
    a.r[0] = 0u;
    a.r[1] = r27;
    r3 = tc_call(0x8004f63cu, &a);
    f1 = tc_lastf();
    a.r[0] = 2u;
    a.r[1] = r29;
    r3 = tc_call(0x8004f63cu, &a);
    f1 = tc_lastf();
    a.r[0] = 1u;
    a.r[1] = r28;
    r3 = tc_call(0x8004f63cu, &a);
    f1 = tc_lastf();
    a.r[0] = 3u;
    a.r[1] = r30;
    r3 = tc_call(0x8004f63cu, &a);
    f1 = tc_lastf();
    r28 = param_1;
    r29 = 0u;
    do {
        r3 = tc_call(0x800545e4u, &a);
        f1 = tc_lastf();
        r4 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x50u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040db8u, &a);
            f1 = tc_lastf();
            r27 = r3;
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = 0x50u;
                r3 = tc_call(0x80094e80u, &a);
                f1 = tc_lastf();
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x50u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040cd8u, &a);
                f1 = tc_lastf();
            }
            r27 = r3;
        }
        if (r3 != 0u) {
            r3 = r3 + 8u;
            wr32(r27, rd32(param_1));
            wr32(r27 + 4u, param_1);
            a.r[0] = r3;
            r3 = tc_call(0x8011e378u, &a);
            f1 = tc_lastf();
        }
        wr32(r28 + 4u, r27);
        a.r[0] = r27;
        r3 = tc_call(0x801639c4u, &a);
        f1 = tc_lastf();
        r29 = r29 + 1u;
        r28 = r28 + 4u;
    } while ((s32)r29 < 16);
    wr32(param_1 + 0x44u, 0u);
    wr32(param_1 + 0x48u, 0u);
    wr32(param_1 + 0x70u, 0xffffffffu);
    wr32(param_1 + 0x68u, 3u);
    wr32(param_1 + 0x4cu, 0xffffffffu);
    wr32(param_1 + 0x50u, 0xffffffffu);
    return;
}
