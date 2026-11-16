#include "tc_rt.h"

void fn_80265e14(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r8 = 0, r10 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    u64 t0 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r6 = (param_r3 << 2u) & 0xfffffffcu;
    r28 = rd32(r6 - 0x7fc70d08u);
    r30 = r6 - 0x7fc70d08u;
    r29 = r3;
    r31 = ((param_r3 << 3u) & 0xfffffff8u) - 0x7faff470u;
    r3 = tc_call(0x802302bcu, &a);
    r4 = tc_lastr4();
    r6 = rd32(r31 + 4u);
    r8 = r4 - r6;
    t0 = (u64)~rd32(r31) + (u64)r3 + (u64)(r6 <= r4);
    if ((rd32(0x8038f2e4u) & (((param_r3 & 0x20u) != 0u) ? 0u : (u32)(128 >> (s32)(param_r3 & 0x1fu)))) != 0u) {
        if (r28 != 8u) {
            r3 = tc_call(0x802302bcu, &a);
            wr32(r31 + 4u, tc_lastr4());
            wr32(r31, r3);
            a.r[0] = r29;
            (void)tc_call(0x8022c2d8u, &a);
            return;
        }
        wr32(r30, 0x80u);
    } else {
        r5 = (ppc_mulhwu(0x10624dd3u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 6u) & 0x3ffffffu;
        if ((0u - (u32)((u64)(u32)(((u64)~((u32)t0 ^ 0x80000000u) + 0x80000000ull + (u64)(r8 <= (r5 * 0x32u))) >> 0x20ull) + 0xffffffffull)) == 0u && r28 != 8u) {
            a.r[0] = r29;
            (void)tc_call(0x8022c2d8u, &a);
            return;
        }
        if ((0u - (u32)((u64)(u32)(((u64)~((u32)t0 ^ 0x80000000u) + 0x80000000ull + (u64)(r8 <= (r5 * 0x4bu))) >> 0x20ull) + 0xffffffffull)) == 0u) {
            wr32(r30, 0x80u);
        } else {
            wr32(r30, 0x80u);
        }
    }
    r3 = tc_call(0x802302bcu, &a);
    wr32(r31 + 4u, tc_lastr4());
    wr32(r31, r3);
    r0 = ppc_mulhwu(0x431bde83u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu);
    r10 = (r0 >> 0xfu) & 0x1ffffu;
    r0 = (r0 >> 9u) & 0x7fffc0u;
    r0 = r0 + r10;
    a.r[0] = param_r3;
    a.r[1] = 0x80571a08u;
    a.r[2] = 1u;
    a.r[3] = r30;
    a.r[4] = 3u;
    a.r[5] = 0x80265b64u;
    a.r[6] = 0u;
    a.r[7] = (r0 >> 3u) & 0x1fffffffu;
    (void)tc_call(0x802659f8u, &a);
    a.r[0] = r29;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
