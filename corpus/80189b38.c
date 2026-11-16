#include "tc_rt.h"

void fn_80189b38(s32 param_1, s32 param_2, u32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = tc_argr(3u), r18 = 0, r20 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0;
    u32 r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r3 = tc_call(0x80083e38u, &a);
    f1 = tc_lastf();
    r27 = ((u32)param_2 << 3u) & 0xfffffff8u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[1] = rd32(((((ppc_cntlzw(param_3) >> 5u) & 0x7ffffffu) << 2u) & 0xfffffffcu) + (r27 - 0x7fc909b8u));
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    r3 = tc_call(0x80050dd4u, &a);
    f1 = tc_lastf();
    wr32((u32)param_1 + 0x458u, r3);
    a.r[0] = 1u;
    r3 = tc_call(0x80050b14u, &a);
    f1 = tc_lastf();
    a.r[0] = rd32((u32)param_1 + 0x458u);
    r3 = tc_call(0x80037914u, &a);
    f1 = tc_lastf();
    a.r[0] = r3;
    a.r[1] = 0u;
    r3 = tc_call(0x80037988u, &a);
    f1 = tc_lastf();
    a.r[0] = r3;
    r3 = tc_call(0x80037914u, &a);
    f1 = tc_lastf();
    r25 = rd32(r3 + 8u);
    r26 = r3;
    r29 = (u32)param_1 + 8u;
    r24 = 0u;
    r23 = 0u;
    while ((s32)r24 < (s32)r25) {
        r28 = r29;
        r22 = 0u;
        r21 = 0u;
        do {
            r4 = r24;
            r24 = r24 + 1u;
            a.r[0] = r26;
            a.r[1] = r4;
            r3 = tc_call(0x80037988u, &a);
            f1 = tc_lastf();
            r4 = rd32(r3);
            c0lt = (s32)r4 < 1213745218;
            if (r4 == 0x48584842u) {
                r22 = r22 | 1u;
                a.r[0] = r3;
                r3 = tc_call(0x8003b444u, &a);
                f1 = tc_lastf();
                wr32(r29 + 4u, r3);
            } else if (!c0lt) {
                if (r4 == 0x48584d42u) {
                    r22 = r22 | 4u;
                    a.r[0] = r3;
                    r3 = tc_call(0x8003e048u, &a);
                    f1 = tc_lastf();
                    wr32(r29 + 0xcu, r3);
                }
            } else {
                c0lt = (s32)r4 < 1213744962;
                if (r4 == 0x48584742u) {
                    r22 = r22 | 2u;
                    a.r[0] = r3;
                    r3 = tc_call(0x80038ce4u, &a);
                    f1 = tc_lastf();
                    wr32(r29 + 8u, r3);
                } else if (c0lt && r4 == 0x48584142u) {
                    r0 = r21 + 3u;
                    r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                    r22 = r22 | r0;
                    a.r[0] = r3;
                    r3 = tc_call(0x80031edcu, &a);
                    f1 = tc_lastf();
                    wr32(r28 + 0x20u, r3);
                    r28 = r28 + 4u;
                    r21 = r21 + 1u;
                }
            }
        } while ((r22 & 7u) != 7u);
        wr32(r29 + 0x10u, r23);
        r29 = r29 + 0x28u;
        r23 = r23 + 1u;
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
    a.r[1] = rd32(((((ppc_cntlzw(param_3) >> 5u) & 0x7ffffffu) << 2u) & 0xfffffffcu) + (r27 - 0x7fc90998u));
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    r3 = tc_call(0x80050dd4u, &a);
    f1 = tc_lastf();
    r21 = r3;
    a.r[0] = 1u;
    r3 = tc_call(0x80050b14u, &a);
    f1 = tc_lastf();
    a.r[0] = r21;
    r3 = tc_call(0x80037914u, &a);
    f1 = tc_lastf();
    r20 = r3;
    a.r[0] = r3;
    a.r[1] = 0u;
    r3 = tc_call(0x80037988u, &a);
    f1 = tc_lastf();
    r22 = r3;
    r18 = (u32)param_1;
    r24 = 0u;
    r23 = rd32(r20 + 8u) - 1u;
    while ((s32)r24 < (s32)r23) {
        a.r[0] = r20;
        a.r[1] = r24 + 1u;
        r3 = tc_call(0x80037988u, &a);
        f1 = tc_lastf();
        a.r[0] = r3;
        a.r[1] = r22;
        a.r[2] = 0u;
        r3 = tc_call(0x8004bfdcu, &a);
        f1 = tc_lastf();
        wr32(r18 + 0x3a0u, r3);
        r18 = r18 + 4u;
        r24 = r24 + 1u;
    }
    r3 = tc_call(0x800545e4u, &a);
    f1 = tc_lastf();
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
            r3 = tc_call(0x80040e98u, &a);
            f1 = tc_lastf();
        } else {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = r21;
            r3 = tc_call(0x80094ec0u, &a);
            f1 = tc_lastf();
        }
    } else {
        r5 = rd32(r3 + 0xcu);
        r3 = rd32(r3);
        r6 = r6 + 0x18u;
        a.r[0] = r3;
        a.r[1] = r21;
        a.r[2] = r5;
        a.r[3] = r6;
        r3 = tc_call(0x80040e98u, &a);
        f1 = tc_lastf();
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
    a.r[1] = 0x34eu;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    r3 = tc_call(0x80050dd4u, &a);
    f1 = tc_lastf();
    r18 = r3;
    a.r[0] = 1u;
    r3 = tc_call(0x80050b14u, &a);
    f1 = tc_lastf();
    a.r[0] = r18;
    a.r[1] = 0u;
    r3 = tc_call(0x8004bf2cu, &a);
    f1 = tc_lastf();
    wr32((u32)param_1 + 0x464u, r3);
    r3 = tc_call(0x800545e4u, &a);
    f1 = tc_lastf();
    r6 = r3;
    if (rd32(r3 + 0x10u) == 0u) {
        if (rd32(r3 + 0x20u) == 0u) {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r18;
            a.r[2] = r5;
            a.r[3] = r6;
            r3 = tc_call(0x80040e98u, &a);
            f1 = tc_lastf();
        } else {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = r18;
            r3 = tc_call(0x80094ec0u, &a);
            f1 = tc_lastf();
        }
    } else {
        r5 = rd32(r3 + 0xcu);
        r3 = rd32(r3);
        r6 = r6 + 0x18u;
        a.r[0] = r3;
        a.r[1] = r18;
        a.r[2] = r5;
        a.r[3] = r6;
        r3 = tc_call(0x80040e98u, &a);
        f1 = tc_lastf();
    }
    r3 = tc_call(0x80083e38u, &a);
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
    a.r[1] = 0x34fu;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    r3 = tc_call(0x80050dd4u, &a);
    f1 = tc_lastf();
    r18 = r3;
    a.r[0] = 1u;
    r3 = tc_call(0x80050b14u, &a);
    f1 = tc_lastf();
    a.r[0] = r18;
    r3 = tc_call(0x801534d4u, &a);
    f1 = tc_lastf();
    wr32((u32)param_1 + 0x460u, r3);
    return;
}
