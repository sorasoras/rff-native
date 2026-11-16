#include "tc_rt.h"

void fn_800376e8(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r27 = 0, r28 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        if (rd32(0x803a4bacu) == (u32)param_1) {
            wr32(0x803a4bb4u, 0u);
        }
        if (rd32(0x803a4bacu) == (u32)param_1) {
            r28 = 0u;
            wr32(0x803a4bb8u, 0u);
            r30 = 0u;
            while ((s32)r28 < (s32)rd32((u32)param_1 + 8u)) {
                r27 = rd32((u32)param_1 + 4u) + r30;
                if (rd32(r27 + 4u) != 0u) {
                    r3 = tc_call(0x800369d0u, &a);
                    f1 = tc_lastf();
                    wr32(r27 + 0x30u, r3);
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = rd32(r27 + 4u);
                    a.r[1] = r3;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    r3 = tc_call(0x802348dcu, &a);
                    if (r3 != 0u) {
                        a.r[0] = r27;
                        r3 = tc_call(0x800371f4u, &a);
                        wr32(0x803a4bb8u, rd32(0x803a4bb8u) + r3);
                        a.r[0] = rd32(r27 + 0x30u);
                        (void)tc_call(0x80234b88u, &a);
                    }
                    a.r[0] = r27;
                    (void)tc_call(0x80036a0cu, &a);
                } else {
                    a.r[0] = r27;
                    r3 = tc_call(0x800371f4u, &a);
                    wr32(0x803a4bb8u, rd32(0x803a4bb8u) + r3);
                }
                r30 = r30 + 0x34u;
                r28 = r28 + 1u;
            }
            wr16((u32)param_1 + 0x24u, (u16)param_2);
            a.r[0] = (u32)param_1;
            (void)tc_call(0x800373f0u, &a);
            wr16((u32)param_1 + 0x22u, (u16)((u32)rd16((u32)param_1 + 0x22u) & 0xffff7fffu));
        } else {
            r0 = (u32)rd16((u32)param_1 + 0x22u);
            wr16((u32)param_1 + 0x24u, (u16)param_2);
            r0 = r0 | 0x8000u;
            wr16((u32)param_1 + 0x22u, (u16)r0);
        }
    }
    return;
}
