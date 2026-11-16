#include "tc_rt.h"

void fn_80265b64(u32 param_r3, u32 param_r4)
{
    u32 c0eq = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r12 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r29 = (param_r3 << 2u) & 0xfffffffcu;
    wr32(r29 - 0x7fc70d08u, (rd32(r29 - 0x7fc70d08u) & 0xffffff7fu) | param_r4);
    r3 = tc_call(0x802302bcu, &a);
    r6 = ((param_r3 << 3u) & 0xfffffff8u) - 0x7faff470u;
    r28 = rd32(r29 - 0x7fc70d08u);
    wr32(r6 + 4u, tc_lastr4());
    r4 = rd32(0x80571a0cu);
    r5 = ((param_r3 & 0x20u) != 0u) ? 0u : (0x80000000u >> (param_r3 & 0x1fu));
    wr32(r6, r3);
    wr32(0x80571a0cu, r4 & ~r5);
    r27 = r4 & r5;
    if ((param_r4 & 0xfu) != 0u || ((r28 & 0x18000000u) - 0x8000000u) != 0u || (r28 & 0x80000000u) == 0u || (r28 & 0x4000000u) != 0u) {
        a.r[0] = param_r3;
        a.r[1] = 0u;
        f1 = tc_callf(0x8022ea04u, &a);
        r28 = rd32(r29 - 0x7fc70d08u);
        r29 = 0u;
        r30 = ((param_r3 << 4u) & 0xfffffff0u) - 0x7faff330u;
        do {
            r12 = rd32(r30);
            if (r12 != 0u) {
                wr32(r30, 0u);
                a.r[0] = param_r3;
                a.r[1] = r28;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(r12, &a);
            }
            r29 = r29 + 1u;
            r30 = r30 + 4u;
        } while ((s32)r29 < 4);
    } else {
        a.r[0] = param_r3;
        r3 = tc_call(0x8022e98cu, &a);
        f1 = tc_lastf();
        c0eq = r27 == 0u;
        r27 = (r3 << 8u) & 0xffff00u;
        if (c0eq || (r27 & 0x100000u) == 0u) {
            if ((r28 & 0x100000u) == 0u) {
                if ((r28 & 0x40000000u) != 0u) {
                    r27 = (r28 & 0xcfff00u) | 0x100000u;
                    a.r[0] = param_r3;
                    a.r[1] = (r27 >> 8u) & 0xffffu;
                    (void)tc_call(0x8022ea04u, &a);
                    r4 = r29 - 0x7faff340u;
                    r6 = r29 - 0x7fc70d08u;
                    wr32(r4, r27 | 0x4e000000u);
                    wr32(r6, 0x80u);
                    a.r[0] = param_r3;
                    a.r[1] = r4;
                    a.r[2] = 3u;
                    a.r[3] = r6;
                    a.r[4] = 3u;
                    a.r[5] = 0x80265b64u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x802659f8u, &a);
                    return;
                }
                a.r[0] = param_r3;
                a.r[1] = 0u;
                f1 = tc_callf(0x8022ea04u, &a);
            } else {
                r3 = r28 & 0xcfff00u;
                if ((r27 & 0xcfff00u) != r3) {
                    if ((r27 & 0x100000u) == 0u) {
                        r27 = r3 | 0x100000u;
                        a.r[0] = param_r3;
                        a.r[1] = (r27 >> 8u) & 0xffffu;
                        (void)tc_call(0x8022ea04u, &a);
                    }
                    r4 = r29 - 0x7faff340u;
                    r6 = r29 - 0x7fc70d08u;
                    wr32(r4, r27 | 0x4e000000u);
                    wr32(r6, 0x80u);
                    a.r[0] = param_r3;
                    a.r[1] = r4;
                    a.r[2] = 3u;
                    a.r[3] = r6;
                    a.r[4] = 3u;
                    a.r[5] = 0x80265b64u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x802659f8u, &a);
                    return;
                }
            }
            r28 = rd32(r29 - 0x7fc70d08u);
            r29 = 0u;
            r30 = ((param_r3 << 4u) & 0xfffffff0u) - 0x7faff330u;
            do {
                r12 = rd32(r30);
                if (r12 != 0u) {
                    wr32(r30, 0u);
                    a.r[0] = param_r3;
                    a.r[1] = r28;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    a.f[0] = f1;
                    f1 = tc_callf(r12, &a);
                }
                r29 = r29 + 1u;
                r30 = r30 + 4u;
            } while ((s32)r29 < 4);
        } else {
            wr32(r29 - 0x7faff340u, (r27 & 0xcfff00u) | 0x4e100000u);
            wr32(r29 - 0x7fc70d08u, 0x80u);
            a.r[0] = param_r3;
            a.r[1] = r29 - 0x7faff340u;
            a.r[2] = 3u;
            a.r[3] = r29 - 0x7fc70d08u;
            a.r[4] = 3u;
            a.r[5] = 0x80265b64u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x802659f8u, &a);
        }
    }
    return;
}
