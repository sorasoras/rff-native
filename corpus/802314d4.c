#include "tc_rt.h"

void fn_802314d4(void)
{
    u32 c0lt = 0, ca = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0, r26 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r0 = rd32(0x80570a98u);
    wr32(0x80571550u, 1u);
    r26 = r3;
    if (r0 == 7u || r0 == 0u || r0 == 9u || r0 == 8u) {
        r3 = r3;
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    } else if (r0 != 4u) {
        if (rd32(0x80571558u) == 0u) {
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
            r3 = tc_call(0x8023029cu, &a);
            r30 = tc_lastr4();
            r31 = r3;
            while (rd32(0x80571554u) == 0u) {
                r3 = tc_call(0x8023029cu, &a);
                r4 = tc_lastr4();
                ca = r30 <= r4;
                r4 = r4 - r30;
                r3 = (u32)((u64)~r31 + (u64)r3 + (u64)ca) ^ 0x80000000u;
                r3 = 0u - (u32)((u64)(u32)(((u64)~r3 + 0x80000000ull + (u64)(r4 <= (((ppc_mulhwu(0x10624dd3u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 6u) & 0x3ffffffu) * 0x1f4u))) >> 0x20ull) + 0xffffffffull);
                if (r3 != 0u) {
                    wr32(0x80570a98u, 8u);
                    return;
                }
            }
        } else {
            a.r[0] = 0x804e0da0u;
            (void)tc_call(0x80226a70u, &a);
            a.r[0] = r26;
            (void)tc_call(0x8022c2d8u, &a);
        }
        r0 = rd32(0x80570a98u);
        c0lt = (s32)r0 < 4;
        if (r0 != 4u) {
            if (!c0lt) {
                c0lt = (s32)r0 < 6;
                if (r0 == 6u) {
                    if (rd32(0x80571558u) == 0u) {
                        wr32(0x80570a98u, 9u);
                        return;
                    }
                    a.r[0] = 0x804e0dd0u;
                    (void)tc_call(0x80271ce4u, &a);
                    wr32(0x80570a98u, 9u);
                    return;
                }
                if (!c0lt) {
                    wr32(0x80570a98u, 9u);
                    return;
                }
            } else {
                c0lt = (s32)r0 < 1;
                if (r0 == 1u) {
                    if (rd32(0x8057155cu) != 0u || rd32(0x80571558u) != 0u) {
                        wr32(0x80570a98u, 9u);
                        return;
                    }
                    a.r[0] = 0x804e0dd0u;
                    (void)tc_call(0x80271ce4u, &a);
                    wr32(0x80570a98u, 9u);
                    return;
                }
                if (c0lt) {
                    wr32(0x80570a98u, 9u);
                    return;
                }
            }
            a.r[0] = 0x804e0dd0u;
            (void)tc_call(0x80271ce4u, &a);
        }
    } else {
        a.r[0] = 0x804e0da0u;
        (void)tc_call(0x80226a70u, &a);
        a.r[0] = r26;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = tc_call(0x8023029cu, &a);
        wr32(0x804e0d84u, tc_lastr4());
        r6 = 0x804e0d24u;
        r4 = 0u;
        wr32(0x804e0d80u, r3);
        ctr = 0x1fu;
        do {
            r0 = rd32(r6);
            r6 = r6 + 4u;
            r4 = r4 + r0;
            ctr = ctr - 1u;
        } while (ctr != 0u);
        wr32(0x804e0d20u, r4);
        a.r[0] = 0x804e0dd0u;
        a.r[1] = 0x804e0d20u;
        a.r[2] = 0x80u;
        (void)tc_call(0x80271228u, &a);
        a.r[0] = 0x804e0dd0u;
        (void)tc_call(0x80271ce4u, &a);
    }
    wr32(0x80570a98u, 9u);
    return;
}
