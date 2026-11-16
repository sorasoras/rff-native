#include "tc_rt.h"

void fn_80090424(u32 param_1)
{
    u32 c0lt = 0, r3 = 0, r4 = tc_argr(1u), r5 = tc_argr(2u), r6 = tc_argr(3u), r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r3 = tc_call(0x8009000cu, &a);
    f1 = tc_lastf();
    a.r[0] = r3;
    a.r[1] = 0x350u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    r3 = tc_call(0x80050edcu, &a);
    f1 = tc_lastf();
    wr32(param_1, r3);
    a.r[0] = 1u;
    r3 = tc_call(0x80050b14u, &a);
    f1 = tc_lastf();
    a.r[0] = rd32(param_1);
    r3 = tc_call(0x80037914u, &a);
    f1 = tc_lastf();
    r27 = r3;
    r28 = param_1;
    r26 = 0u;
    r25 = 0u;
    do {
        r24 = 0u;
        do {
            r4 = r26;
            r26 = r26 + 1u;
            a.r[0] = r27;
            a.r[1] = r4;
            r3 = tc_call(0x80037988u, &a);
            f1 = tc_lastf();
            r4 = rd32(r3);
            c0lt = (s32)r4 < 1213745218;
            if (r4 == 0x48584842u) {
                a.r[0] = r3;
                r3 = tc_call(0x8003b444u, &a);
                f1 = tc_lastf();
                wr32(r28 + 8u, r3);
            } else if (!c0lt) {
                if (r4 == 0x48584d42u) {
                    a.r[0] = r3;
                    r3 = tc_call(0x8003e048u, &a);
                    f1 = tc_lastf();
                    wr32(r28 + 4u, r3);
                }
            } else if (r4 == 0x48584742u) {
                a.r[0] = r3;
                r3 = tc_call(0x80038ce4u, &a);
                f1 = tc_lastf();
                wr32(r28 + 0xcu, r3);
            }
            r24 = r24 + 1u;
        } while ((s32)r24 < 3);
        r25 = r25 + 1u;
        r28 = r28 + 0x10u;
    } while ((s32)r25 < 191);
    r3 = tc_call(0x800545e4u, &a);
    f1 = tc_lastf();
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[1] = 0x351u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    r3 = tc_call(0x80050dd4u, &a);
    f1 = tc_lastf();
    r24 = r3;
    a.r[0] = 1u;
    r3 = tc_call(0x80050b14u, &a);
    f1 = tc_lastf();
    a.r[0] = r24;
    r3 = tc_call(0x80037914u, &a);
    f1 = tc_lastf();
    r28 = r3;
    r29 = param_1;
    r25 = 0u;
    do {
        a.r[0] = r28;
        a.r[1] = r25;
        r3 = tc_call(0x80037988u, &a);
        f1 = tc_lastf();
        a.r[0] = r3;
        a.r[1] = 0u;
        r3 = tc_call(0x8004bf2cu, &a);
        f1 = tc_lastf();
        r25 = r25 + 1u;
        wr32(r29 + 0x10u, r3);
        r29 = r29 + 0x10u;
    } while ((s32)r25 < 191);
    r3 = tc_call(0x800545e4u, &a);
    f1 = tc_lastf();
    r6 = r3;
    if (rd32(r3 + 0x10u) == 0u) {
        if (rd32(r3 + 0x20u) == 0u) {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r24;
            a.r[2] = r5;
            a.r[3] = r6;
            r3 = tc_call(0x80040e98u, &a);
            f1 = tc_lastf();
        } else {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = r24;
            r3 = tc_call(0x80094ec0u, &a);
            f1 = tc_lastf();
        }
    } else {
        r5 = rd32(r3 + 0xcu);
        r3 = rd32(r3);
        r6 = r6 + 0x18u;
        a.r[0] = r3;
        a.r[1] = r24;
        a.r[2] = r5;
        a.r[3] = r6;
        r3 = tc_call(0x80040e98u, &a);
        f1 = tc_lastf();
    }
    wr32(param_1 + 0xbf8u, 0u);
    wr32(param_1 + 0xbfcu, 0u);
    wr32(param_1 + 0xc00u, 0u);
    wr32(param_1 + 0xc04u, 0u);
    wr32(param_1 + 0xc08u, 0u);
    wr32(param_1 + 0xc0cu, 0u);
    wr32(param_1 + 0xc10u, 0u);
    wr32(param_1 + 0xc14u, 0u);
    wr32(param_1 + 0xc18u, 0u);
    wr32(param_1 + 0xc1cu, 0u);
    wr32(param_1 + 0xc20u, 0u);
    wr32(param_1 + 0xc24u, 0u);
    wr32(param_1 + 0xc28u, 0u);
    wr32(param_1 + 0xc2cu, 0u);
    wr32(param_1 + 0xc30u, 0u);
    wr32(param_1 + 0xc34u, 0u);
    wr32(param_1 + 0xc38u, 0u);
    wr32(param_1 + 0xc3cu, 0u);
    wr32(param_1 + 0xc40u, 0u);
    wr32(param_1 + 0xc44u, 0u);
    wr32(param_1 + 0xbf4u, 0x19u);
    a.r[0] = param_1;
    r3 = tc_call(0x80090ac4u, &a);
    f1 = tc_lastf();
    a.r[0] = param_1;
    r3 = tc_call(0x80090640u, &a);
    f1 = tc_lastf();
    a.r[0] = param_1;
    r3 = tc_call(0x800908c8u, &a);
    f1 = tc_lastf();
    wr32(param_1 + 0x1064u, 0u);
    return;
}
