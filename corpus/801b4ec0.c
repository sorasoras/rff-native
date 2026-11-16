#include "tc_rt.h"

void fn_801b4ec0(s32 param_1)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r5 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = 0u;
    r30 = 0u;
    r29 = 0u;
    ctr = 3u;
    do {
        r5 = (u32)param_1 + r4;
        r4 = r4 + 4u;
        wr32(r5 + 0x3cu, 0x21u);
        r5 = (u32)param_1 + r4;
        r4 = r4 + 4u;
        wr32(r5 + 0x3cu, 0x21u);
        r5 = (u32)param_1 + r4;
        r4 = r4 + 4u;
        wr32(r5 + 0x3cu, 0x21u);
        r5 = (u32)param_1 + r4;
        r4 = r4 + 4u;
        wr32(r5 + 0x3cu, 0x21u);
        r5 = (u32)param_1 + r4;
        r4 = r4 + 4u;
        wr32(r5 + 0x3cu, 0x21u);
        r5 = (u32)param_1 + r4;
        r4 = r4 + 4u;
        wr32(r5 + 0x3cu, 0x21u);
        r5 = (u32)param_1 + r4;
        r4 = r4 + 4u;
        wr32(r5 + 0x3cu, 0x21u);
        r5 = (u32)param_1 + r4;
        r4 = r4 + 4u;
        wr32(r5 + 0x3cu, 0x21u);
        r5 = (u32)param_1 + r4;
        r4 = r4 + 4u;
        wr32(r5 + 0x3cu, 0x21u);
        r5 = (u32)param_1 + r4;
        r4 = r4 + 4u;
        wr32(r5 + 0x3cu, 0x21u);
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r28 = 1u;
    do {
        if (r28 != 0x18u && r28 != 0x1du) {
            a.r[0] = r28;
            a.r[1] = 0xfu;
            r3 = tc_call(0x8014da9cu, &a);
            if (r3 != 0u) {
                r3 = (u32)param_1 + r30;
                r30 = r30 + 4u;
                wr32(r3 + 0x3cu, r28);
                r29 = r29 + 1u;
            }
        }
        r28 = r28 + 1u;
    } while ((s32)r28 < 30);
    if ((u32)rd8(0x8049912eu) != 0x21u) {
        a.r[0] = 0x1eu;
        a.r[1] = 0xfu;
        r3 = tc_call(0x8014da9cu, &a);
        if (r3 != 0u) {
            wr32((u32)param_1 + ((r29 << 2u) & 0xfffffffcu) + 0x3cu, 0x1eu);
        }
        a.r[0] = 0x1fu;
        a.r[1] = 0xfu;
        r3 = tc_call(0x8014da9cu, &a);
        if (r3 != 0u) {
            wr32((u32)param_1 + ((r29 << 2u) & 0xfffffffcu) + 0x3cu, 0x1fu);
        }
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801b58fcu, &a);
    a.r[0] = 0x18u;
    r3 = tc_call(0x801bfb7cu, &a);
    a.r[0] = r3;
    a.r[1] = 0u;
    a.r[2] = 0u;
    r3 = tc_call(0x800f9458u, &a);
    f1 = tc_lastf();
    wr32((u32)param_1 + 0x198u, r3);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[1] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x800fef2cu, &a);
    a.r[0] = (u32)param_1 + 0x19cu;
    a.r[1] = rd32((u32)param_1 + 0x198u);
    (void)tc_call(0x801f0e3cu, &a);
    a.r[0] = (u32)param_1 + 0x19cu;
    a.r[1] = 0x8033b70au;
    (void)tc_call(0x801f100cu, &a);
    a.r[0] = (u32)param_1 + 0x19cu;
    (void)tc_call(0x801f10d8u, &a);
    a.r[0] = 0x5eeu;
    r3 = tc_call(0x800510acu, &a);
    r28 = r3;
    a.r[0] = 0u;
    r3 = tc_call(0x801b3a7cu, &a);
    a.r[0] = r3;
    a.r[1] = r28;
    r3 = tc_call(0x801b39d8u, &a);
    wr32((u32)param_1 + 0x18cu, r3);
    a.r[0] = r3;
    a.r[1] = 0x5eeu;
    a.r[2] = 0x801b5268u;
    a.r[3] = (u32)param_1;
    (void)tc_call(0x801e5b50u, &a);
    a.r[0] = 0x5edu;
    a.r[1] = 0x801b50d8u;
    a.r[2] = (u32)param_1;
    r3 = tc_call(0x800f939cu, &a);
    wr32((u32)param_1 + 0x38u, r3);
    wr32((u32)param_1 + 0x34u, 0u);
    return;
}
