#include "tc_rt.h"

void fn_80124214(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(param_1 + 0x74u, (u32)param_2);
    a.r[0] = param_1;
    a.r[1] = (u32)param_2;
    r3 = tc_call(0x80123ff8u, &a);
    r29 = r3;
    r27 = param_1;
    r28 = param_1 + 0x80u;
    r26 = 0u;
    do {
        if ((r29 & (((r26 & 0x20u) != 0u) ? 0u : (1u << (r26 & 0x1fu)))) != 0u) {
            a.r[0] = r28;
            a.r[1] = 0x80339ce1u;
            (void)tc_call(0x801f100cu, &a);
            a.r[0] = r28;
            a.r[1] = 0u;
            f1 = tc_callf(0x801f10b8u, &a);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = rd32(r27 + 0x78u);
            a.r[1] = 1u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x800fef2cu, &a);
        } else {
            a.r[0] = r28;
            f1 = tc_callf(0x801f10e4u, &a);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = rd32(r27 + 0x78u);
            a.r[1] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x800fef2cu, &a);
        }
        r26 = r26 + 1u;
        r27 = r27 + 0x58u;
        r28 = r28 + 0x58u;
    } while ((s32)r26 < 10);
    a.r[0] = param_1;
    r3 = tc_call(0x80124424u, &a);
    if (r3 != 1u) {
        a.r[0] = rd32(param_1 + 0x10u);
        a.r[1] = 0x80339ce6u;
        (void)tc_call(0x801f100cu, &a);
        a.r[0] = rd32(param_1 + 0x10u);
        a.r[1] = 0u;
        (void)tc_call(0x801f10b8u, &a);
        a.r[0] = param_1 + 0x1cu;
        a.r[1] = 0u;
        (void)tc_call(0x800f8544u, &a);
    } else {
        a.r[0] = param_1 + 0x1cu;
        a.r[1] = 1u;
        (void)tc_call(0x800f8544u, &a);
    }
    if (rd32(0x804b9e64u) == 0u) {
        r4 = rd32((((u32)param_2 << 2u) & 0xfffffffcu) + ((rd32(param_1) * 0x38u) - 0x7fcc6870u));
        if ((s32)r4 < 0) {
            return;
        }
        a.r[0] = 0x804b9da0u;
        a.r[1] = r4;
        (void)tc_call(0x8010a924u, &a);
    } else {
        if (((u32)param_2 - 5u) <= 1u) {
            r4 = rd32((((u32)param_2 << 2u) & 0xfffffffcu) + ((rd32(param_1) * 0x38u) - 0x7fcc6870u));
            if ((s32)r4 >= 0) {
                a.r[0] = 0x804b9da0u;
                a.r[1] = r4;
                (void)tc_call(0x8010a924u, &a);
            }
        }
    }
    return;
}
