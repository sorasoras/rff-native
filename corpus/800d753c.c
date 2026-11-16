#include "tc_rt.h"

u32 fn_800d753c(s32 param_1, s32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    TcArgs a = {0};
    r7 = ((u32)param_2 + 0x1fu) & 0xffffffe0u;
    r4 = rd32((u32)param_1 + 0x30u);
    while (r4 != 0u) {
        r5 = rd32(r4 + 0x10u);
        if (r5 >= r7) {
            if (r5 < (r7 + 0x40u)) {
                r5 = rd32(r4);
                if (r5 != 0u) {
                    wr32(r5 + 4u, rd32(r4 + 4u));
                } else {
                    wr32((u32)param_1 + 0x30u, rd32(r4 + 4u));
                }
                r5 = rd32(r4 + 4u);
                if (r5 != 0u) {
                    wr32(r5, rd32(r4));
                }
                r5 = rd32((u32)param_1 + 0x2cu);
                if (r5 != 0u) {
                    wr32(r5, r4);
                }
                wr32(r4 + 4u, rd32((u32)param_1 + 0x2cu));
                wr32(r4, 0u);
                wr8(r4 + 0x14u, 1u);
                wr32((u32)param_1 + 0x2cu, r4);
            } else {
                r6 = r4 + r7;
                wr32(r6 + 0x20u, rd32(r4));
                r6 = r6 + 0x20u;
                wr32(r6 + 4u, rd32(r4 + 4u));
                wr32(r6 + 0x10u, rd32(r4 + 0x10u) - r7 - 0x20u);
                wr8(r6 + 0x14u, 0u);
                wr32(r6 + 0xcu, rd32(r4 + 0xcu));
                r5 = rd32(r4 + 0xcu);
                if (r5 != 0u) {
                    wr32(r5 + 8u, r6);
                }
                wr32(r6 + 8u, r4);
                wr32(r4 + 0xcu, r6);
                r5 = rd32(r4);
                if (r5 != 0u) {
                    wr32(r5 + 4u, r6);
                } else {
                    wr32((u32)param_1 + 0x30u, r6);
                }
                if (rd32(r4 + 4u) != 0u) {
                    wr32(rd32(r6 + 4u), r6);
                }
                r5 = rd32((u32)param_1 + 0x2cu);
                if (r5 != 0u) {
                    wr32(r5, r4);
                }
                wr32(r4 + 4u, rd32((u32)param_1 + 0x2cu));
                wr32(r4, 0u);
                wr32(r4 + 0x10u, r7);
                wr8(r4 + 0x14u, 1u);
                wr32((u32)param_1 + 0x2cu, r4);
            }
            r3 = r4 + 0x20u;
            return r3;
        }
        r4 = rd32(r4 + 4u);
    }
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = 0x803568b4u;
    a.r[1] = 0x244u;
    a.r[2] = 0x80356898u;
    a.r[3] = param_r6;
    a.r[4] = r7;
    a.r[5] = param_r8;
    a.r[6] = param_r9;
    a.r[7] = param_r10;
    (void)tc_call(0x802e41c0u, &a);
    r3 = 0u;
    return r3;
}
