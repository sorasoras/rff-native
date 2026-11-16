#include "tc_rt.h"

u32 fn_80220fac(s32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r5, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r5 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = 0x804b9d30u;
    a.r[2] = param_r5;
    a.r[3] = param_r6;
    a.r[4] = param_r7;
    a.r[5] = param_r8;
    a.r[6] = param_r9;
    a.r[7] = param_r10;
    (void)tc_call(0x80100188u, &a);
    a.r[0] = 0x24u;
    r3 = tc_call(0x800f80f8u, &a);
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r30 + 0x1cu, (u32)param_1);
        wr32(r30, 0x80378a24u);
    }
    a.r[0] = 0x78u;
    r3 = tc_call(0x800f80f8u, &a);
    r29 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r29 + 0x1cu, (u32)param_1);
        wr32(r29, 0x80378a00u);
        a.r[0] = r29 + 0x24u;
        (void)tc_call(0x801f0da4u, &a);
    }
    a.r[0] = (u32)param_1 + 0x44u;
    a.r[1] = r30;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = (u32)param_1 + 0x44u;
    a.r[1] = r29;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = 0x602u;
    r3 = tc_call(0x800f92e8u, &a);
    wr32((u32)param_1 + 0x80u, r3);
    wr32((u32)param_1 + 0x84u, 0u);
    r3 = tc_call(0x8011aff4u, &a);
    if (r3 != 0u) {
        r5 = 0u;
        r4 = rd32(0x8049dfa4u);
        ctr = 3u;
        do {
            if ((r4 & (((r5 & 0x20u) != 0u) ? 0u : (1u << (r5 & 0x1fu)))) != 0u) {
                wr32((u32)param_1 + 0x84u, 1u);
                break;
            }
            r5 = r5 + 1u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    wr32(r30 + 0x20u, rd32((u32)param_1 + 0x84u));
    wr32(r29 + 0x20u, rd32((u32)param_1 + 0x84u));
    a.r[0] = (u32)param_1 + 0x44u;
    a.r[1] = 1u;
    (void)tc_call(0x800f8544u, &a);
    return 1u;
}
