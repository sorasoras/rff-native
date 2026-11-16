#include "tc_rt.h"

void fn_80036cb0(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 ctr = 0, r3 = 0, r5 = 0, r6 = 0, r27 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[4] = param_r7;
    a.r[5] = param_r8;
    a.r[6] = param_r9;
    a.r[7] = param_r10;
    r3 = tc_call(0x80036be4u, &a);
    wr32(0x803a3ea0u, r3);
    if (r3 != 0u) {
        r29 = rd32(r3 + 0x10u);
        if (r29 != 0u) {
            a.r[0] = 0u;
            a.r[1] = r29 * 0x3cu;
            a.r[2] = 0x4e4f5320u;
            a.r[3] = 0x8034f62cu;
            r3 = tc_call(0x80040cd8u, &a);
            f1 = tc_lastf();
            wr32(0x803a3ea4u, r3);
            r27 = 0u;
            r31 = 0u;
            r30 = 0u;
            while (r27 < r29) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = rd32(rd32(0x803a3ea0u) + 8u) + r30;
                a.r[1] = rd32(0x803a3ea4u) + r31;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                f1 = tc_callf(0x802348dcu, &a);
                r31 = r31 + 0x3cu;
                r30 = r30 + 0x24u;
                r27 = r27 + 1u;
            }
            r5 = 0x803a46a8u;
            r6 = 0u;
            ctr = 8u;
            do {
                if ((s32)r6 < 31) {
                    wr32(r5, r5 + 0x28u);
                } else {
                    wr32(r5, 0u);
                }
                r6 = r6 + 1u;
                wr16(r5 + 0x24u, 0xffffu);
                if ((s32)r6 < 31) {
                    wr32(r5 + 0x28u, r5 + 0x50u);
                } else {
                    wr32(r5 + 0x28u, 0u);
                }
                r6 = r6 + 1u;
                wr16(r5 + 0x4cu, 0xffffu);
                if ((s32)r6 < 31) {
                    wr32(r5 + 0x50u, r5 + 0x78u);
                } else {
                    wr32(r5 + 0x50u, 0u);
                }
                r6 = r6 + 1u;
                wr16(r5 + 0x74u, 0xffffu);
                if ((s32)r6 < 31) {
                    wr32(r5 + 0x78u, r5 + 0xa0u);
                } else {
                    wr32(r5 + 0x78u, 0u);
                }
                wr16(r5 + 0x9cu, 0xffffu);
                r5 = r5 + 0xa0u;
                r6 = r6 + 1u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
            wr32(0x803a4ba8u, 0x803a46a8u);
            wr32(0x803a4bacu, 0u);
            wr32(0x803a4bb0u, 0u);
            wr32(0x803a4bb4u, 0u);
            wr32(0x803a4bb8u, 0u);
            (void)tc_call(0x80036a2cu, &a);
        }
    }
    return;
}
