#include "tc_rt.h"

void fn_8020de6c(void)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r20 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0;
    u32 r26 = 0, r27 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
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
    a.r[1] = 0x322u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    r3 = tc_call(0x80050dd4u, &a);
    r21 = r3;
    a.r[0] = 1u;
    (void)tc_call(0x80050b14u, &a);
    a.r[0] = r21;
    r3 = tc_call(0x80037914u, &a);
    r22 = r3;
    a.r[0] = r3;
    a.r[1] = 0u;
    r3 = tc_call(0x80037988u, &a);
    r23 = r3;
    r24 = rd32(r22 + 8u) - 1u;
    r25 = 0u;
    r26 = 0u;
    while ((s32)r26 < (s32)r24) {
        a.r[0] = r22;
        a.r[1] = r26 + 1u;
        r3 = tc_call(0x80037988u, &a);
        r4 = r25 - 0x7fc87df8u;
        while ((u32)rd8(r4) == 0u) {
            r4 = r4 + 1u;
            r25 = r25 + 1u;
        }
        a.r[0] = r3;
        a.r[1] = r23;
        a.r[2] = 0u;
        r3 = tc_call(0x8004bfdcu, &a);
        r26 = r26 + 1u;
        wr32(((r25 << 2u) & 0xfffffffcu) - 0x7fb20c28u, r3);
        r25 = r25 + 1u;
    }
    r3 = tc_call(0x800545e4u, &a);
    r6 = r3;
    if (rd32(r3 + 0x10u) == 0u) {
        if (rd32(r3 + 0x20u) == 0u) {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r21;
            a.r[2] = r5;
            a.r[3] = r6;
            (void)tc_call(0x80040e98u, &a);
        } else {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = r21;
            (void)tc_call(0x80094ec0u, &a);
        }
    } else {
        r5 = rd32(r3 + 0xcu);
        r3 = rd32(r3);
        r6 = r6 + 0x18u;
        a.r[0] = r3;
        a.r[1] = r21;
        a.r[2] = r5;
        a.r[3] = r6;
        (void)tc_call(0x80040e98u, &a);
    }
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
    a.r[1] = 0x321u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    r3 = tc_call(0x80050dd4u, &a);
    wr32(0x80571408u, r3);
    a.r[0] = 1u;
    (void)tc_call(0x80050b14u, &a);
    a.r[0] = rd32(0x80571408u);
    r3 = tc_call(0x80037914u, &a);
    a.r[0] = r3;
    a.r[1] = 0u;
    r3 = tc_call(0x80037988u, &a);
    a.r[0] = r3;
    r3 = tc_call(0x80037914u, &a);
    r27 = rd32(r3 + 8u);
    r25 = r3;
    r24 = 0u;
    r23 = 0u;
    while ((s32)r24 < (s32)r27) {
        r3 = r23 - 0x7fc87df8u;
        while ((u32)rd8(r3) == 0u) {
            r3 = r3 + 1u;
            r23 = r23 + 1u;
        }
        r21 = 0u;
        r20 = 0u;
        r22 = (r23 * 0x28u) - 0x7fb20b98u;
        r26 = r22;
        do {
            r4 = r24;
            r24 = r24 + 1u;
            a.r[0] = r25;
            a.r[1] = r4;
            r3 = tc_call(0x80037988u, &a);
            r4 = rd32(r3);
            c0lt = (s32)r4 < 1213745218;
            if (r4 == 0x48584842u) {
                r21 = r21 | 1u;
                a.r[0] = r3;
                r3 = tc_call(0x8003b444u, &a);
                wr32(r22 + 4u, r3);
            } else if (!c0lt) {
                if (r4 == 0x48584d42u) {
                    r21 = r21 | 4u;
                    a.r[0] = r3;
                    r3 = tc_call(0x8003e048u, &a);
                    wr32(r22 + 0xcu, r3);
                }
            } else {
                c0lt = (s32)r4 < 1213744962;
                if (r4 == 0x48584742u) {
                    r21 = r21 | 2u;
                    a.r[0] = r3;
                    r3 = tc_call(0x80038ce4u, &a);
                    wr32(r22 + 8u, r3);
                } else if (c0lt && r4 == 0x48584142u) {
                    r0 = r20 + 3u;
                    r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                    r21 = r21 | r0;
                    a.r[0] = r3;
                    r3 = tc_call(0x80031edcu, &a);
                    wr32(r26 + 0x20u, r3);
                    r26 = r26 + 4u;
                    r20 = r20 + 1u;
                }
            }
        } while ((r21 & 7u) != 7u);
        wr32(r22 + 0x10u, r23);
        r23 = r23 + 1u;
    }
    return;
}
