#include "tc_rt.h"

void fn_80233140(u32 param_1, u32 param_2, s32 param_3, s32 param_4, s32 param_5)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf40u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdf60u, 0u);
    r3 = tc_call(0x802de0e8u, &a);
    if (r3 != 0u) {
        (void)tc_call(0x8022e0f8u, &a);
    }
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = 0u;
    a.r[3] = 0x817fdf60u;
    r3 = tc_call(0x802de4c4u, &a);
    if (r3 != 0u) {
        (void)tc_call(0x8022e0f8u, &a);
    }
    a.r[0] = (rd32(0x817fdf60u) + 0x1fu) & 0xffffffe0u;
    a.r[1] = 0x40u;
    r3 = tc_call(0x80227210u, &a);
    r29 = r3;
    if (r3 == 0u) {
        (void)tc_call(0x8022e0f8u, &a);
    }
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = r29;
    a.r[3] = 0x817fdf60u;
    r3 = tc_call(0x802de4c4u, &a);
    if (r3 != 0u) {
        (void)tc_call(0x8022e0f8u, &a);
    }
    a.r[0] = r29;
    r3 = tc_call(0x80232b60u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 == 0u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x80386ce8u;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x80228554u, &a);
        f1 = tc_callf(0x8022e0f8u, &a);
    }
    if ((u32)param_5 != 0u) {
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = 0u;
        r3 = tc_call(0x80232a4cu, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80386d14u;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x80228554u, &a);
            f1 = tc_callf(0x8022e0f8u, &a);
            r4 = tc_lastr4();
        }
        r28 = rd32(r29 + 0x1au);
        if (r28 != 3u) {
            r3 = tc_call(0x80275618u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r28 != (u32)(s8)r3) {
                r0 = 0u;
            } else {
                r0 = 1u;
            }
        } else {
            r0 = 1u;
        }
        if (r0 == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80386d44u;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x80228554u, &a);
            f1 = tc_callf(0x8022e0f8u, &a);
        }
    }
    if (((u32)rd8(r29 + 0x32u) & 1u) == 0u) {
        r0 = 0u;
    } else {
        r0 = 1u;
    }
    if (r0 == 0u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[7] = 0u;
        r3 = tc_call(0x80239710u, &a);
        if (r3 == 2u) {
            (void)tc_call(0x802397d8u, &a);
        }
    }
    if ((u32)param_4 != 0u || (u32)param_3 != 0u) {
        a.r[0] = 0x2000u;
        a.r[1] = 0x40u;
        r3 = tc_call(0x80227210u, &a);
        f1 = tc_lastf();
        r29 = r3;
        r30 = r3 + 0xfe0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x817fdfa0u;
        a.r[1] = 0x80570ab0u;
        a.r[2] = param_1;
        a.r[3] = param_2;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x8025b994u, &a);
        r28 = 0u;
        r3 = 0u;
        if ((u32)param_4 != 0u) {
            while (rd32((u32)param_4 + r3) != 0u) {
                r28 = r28 + 1u;
                r3 = r3 + 4u;
            }
        }
        r3 = ((r28 + 2u) << 2u) & 0xfffffffcu;
        r28 = r28 + 1u;
        a.r[0] = r3;
        a.r[1] = 1u;
        r3 = tc_call(0x80227210u, &a);
        wr32(r3, 0x817fdfa0u);
        r4 = r28 - 1u;
        r9 = 1u;
        r6 = 4u;
        do {
            if ((s32)r28 > 1) {
                r0 = (r4 >> 3u) & 0x1fffffffu;
                ctr = r0;
                if (r0 != 0u) {
                    do {
                        wr32(r3 + r6, rd32((u32)param_4 + (((r9 - 1u) << 2u) & 0xfffffffcu)));
                        r6 = r6 + 4u;
                        wr32(r3 + r6, rd32((u32)param_4 + ((r9 << 2u) & 0xfffffffcu)));
                        r6 = r6 + 4u;
                        wr32(r3 + r6, rd32((u32)param_4 + (((r9 + 1u) << 2u) & 0xfffffffcu)));
                        r6 = r6 + 4u;
                        wr32(r3 + r6, rd32((u32)param_4 + (((r9 + 2u) << 2u) & 0xfffffffcu)));
                        r6 = r6 + 4u;
                        wr32(r3 + r6, rd32((u32)param_4 + (((r9 + 3u) << 2u) & 0xfffffffcu)));
                        r6 = r6 + 4u;
                        r0 = rd32((u32)param_4 + (((r9 + 4u) << 2u) & 0xfffffffcu));
                        r7 = ((r9 + 5u) << 2u) & 0xfffffffcu;
                        r8 = r9 + 6u;
                        r9 = r9 + 8u;
                        wr32(r3 + r6, r0);
                        r6 = r6 + 4u;
                        wr32(r3 + r6, rd32((u32)param_4 + r7));
                        r6 = r6 + 4u;
                        wr32(r3 + r6, rd32((u32)param_4 + ((r8 << 2u) & 0xfffffffcu)));
                        r6 = r6 + 4u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                    r4 = r4 & 7u;
                    if (r4 == 0u) break;
                }
                ctr = r4;
                do {
                    r8 = r9 - 1u;
                    r9 = r9 + 1u;
                    wr32(r3 + r6, rd32((u32)param_4 + ((r8 << 2u) & 0xfffffffcu)));
                    r6 = r6 + 4u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        } while (0);
        a.r[0] = r29;
        a.r[1] = r28;
        a.r[2] = r3;
        (void)tc_call(0x802328ccu, &a);
        if (rd32(0x80571448u) != 0u || rd32(0x80571590u) != 0u) {
            wr32(0x817fdf84u, 2u);
            wr32(0x817fdf80u, 1u);
        } else {
            r3 = tc_call(0x802de0e8u, &a);
            f1 = tc_lastf();
            if (r3 != 0u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x80386d74u;
                a.r[1] = r3;
                a.r[2] = 0x30fu;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                f1 = tc_callf(0x80228554u, &a);
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x8022e19cu, &a);
            }
            a.r[0] = 0x817fdf80u;
            r3 = tc_call(0x802de670u, &a);
            f1 = tc_lastf();
            if (r3 != 0u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x80386d74u;
                a.r[1] = r3;
                a.r[2] = 0x317u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                f1 = tc_callf(0x80228554u, &a);
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x8022e19cu, &a);
            }
        }
        r0 = rd32(0x817fdf80u);
        wr32(r30 + 0x1cu, rd32(0x817fdf84u));
        wr32(r30 + 0x18u, r0);
        wr32(r30 + 4u, rd32(r29 + 8u));
        r3 = tc_call(0x802266a4u, &a);
        wr8(r30 + 0xau, (u8)r3);
        if (((param_2 ^ 2u) | (param_1 ^ 1u)) != 0u) {
            wr8(r30 + 0xbu, 2u);
        } else {
            wr8(r30 + 0xbu, 4u);
        }
        wr32(r30 + 0xcu, (u32)param_3);
        (void)tc_call(0x80231e2cu, &a);
        a.r[0] = r30;
        (void)tc_call(0x80231edcu, &a);
        a.r[0] = 0x817fdfb8u;
        f1 = tc_callf(0x802317a0u, &a);
        wr8(0x817fdfbdu, 3u);
        if (((param_2 ^ 2u) | (param_1 ^ 1u)) == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = (u32)rd8(0x817fdfbeu);
            a.r[7] = 0u;
            r3 = tc_call(0x8022db80u, &a);
            wr8(0x817fdfbeu, (u8)r3);
            wr8(0x817fdfbfu, 2u);
        }
        a.r[0] = 0x817fdfb8u;
        (void)tc_call(0x802316bcu, &a);
    }
    (void)tc_call(0x8022eff0u, &a);
    a.r[0] = 6u;
    (void)tc_call(0x8022d9f0u, &a);
    (void)tc_call(0x8022f02cu, &a);
    a.r[0] = param_1;
    a.r[1] = param_2;
    (void)tc_call(0x80233024u, &a);
    (void)tc_call(0x8022980cu, &a);
    return;
}
