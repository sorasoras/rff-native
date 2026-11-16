#include "tc_rt.h"

void fn_802f1f88(u32 param_1, u32 param_2, s32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r27 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r27 = param_2;
    r3 = tc_call(0x8022c2b0u, &a);
    r30 = r3;
    if (rd32(param_1) != 0u) {
        r0 = rd32(param_1 + 0x14u);
        if (param_2 != 0u) {
            r27 = param_2 - 0x80000000u;
        }
        c0lt = (s32)r0 < 2;
        r29 = 0u;
        if (r0 == 2u) {
            r29 = r27 + (u32)param_3 - 1u;
        } else if (!c0lt) {
            if ((s32)r0 < 4) {
                r6 = (u32)param_3 - 1u;
                r4 = ppc_mulhwu(0x24924925u, r6);
                r4 = (((r6 - r4) >> 1u) & 0x7fffffffu) + r4;
                r3 = (r4 << 1u) & 0xfffffff0u;
                r4 = r6 - (((r4 >> 3u) & 0x1fffffffu) * 0xeu);
                r29 = r4 + ((r27 << 1u) & 0xfffffffeu) + r3 + 2u;
            }
        } else if ((s32)r0 >= 1) {
            r29 = (u32)param_3 + ((r27 >> 1u) & 0x7fffffffu) - 1u;
        }
        r3 = tc_call(0x8022c2b0u, &a);
        r4 = rd32(param_1);
        if (r4 != 0u) {
            wr16(r4 + 0x9eu, (u16)((r29 >> 0x10u) & 0xffffu));
            wr16(rd32(param_1) + 0xa0u, (u16)r29);
            r5 = rd32(param_1);
            r4 = rd32(r5 + 0x1cu);
            if ((r4 & 0x400u) == 0u) {
                wr32(r5 + 0x1cu, r4 | 0x2000u);
            }
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
        } else {
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
        }
        a.r[0] = r30;
        (void)tc_call(0x8022c2d8u, &a);
    } else {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
