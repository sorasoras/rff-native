#include "tc_rt.h"

void fn_802659f8(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, s32 param_7, u32 param_8)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r8 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r29 = ((param_1 << 5u) & 0xffffffe0u) - 0x7faff510u;
    r3 = tc_call(0x8022c2b0u, &a);
    r30 = r3;
    if (rd32(r29) != 0xffffffffu || rd32(0x8038f2e0u) == param_1) {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    } else {
        r3 = tc_call(0x802302bcu, &a);
        r4 = tc_lastr4();
        r8 = r3;
        if ((param_8 | (u32)param_7) == 0u) {
            r28 = r4;
            r27 = r3;
        } else {
            r6 = ((param_1 << 3u) & 0xfffffff8u) - 0x7faff490u;
            r5 = rd32(r6 + 4u);
            r28 = param_8 + r5;
            r27 = (u32)((u64)(u32)param_7 + (u64)rd32(r6) + (u64)((param_8 + r5) < param_8));
        }
        r0 = r3 ^ 0x80000000u;
        if ((0u - (u32)((u64)~r0 + (u64)r0 + (u64)(u32)(((u64)~(r27 ^ 0x80000000u) + (u64)r0 + (u64)(r28 <= r4)) >> 0x20ull))) != 0u) {
            a.r[0] = (param_1 * 0x30u) - 0x7faff450u;
            a.r[1] = r4;
            a.r[2] = (u32)((u64)~r8 + (u64)r27 + (u64)(r4 <= r28));
            a.r[3] = r28 - r4;
            a.r[4] = 0x8026596cu;
            (void)tc_call(0x8022697cu, &a);
        } else {
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = param_3;
            a.r[3] = param_4;
            a.r[4] = param_5;
            a.r[5] = param_6;
            r3 = tc_call(0x80265534u, &a);
            if (r3 != 0u) {
                a.r[0] = r30;
                (void)tc_call(0x8022c2d8u, &a);
                return;
            }
        }
        wr32(r29, param_1);
        wr32(r29 + 4u, param_2);
        wr32(r29 + 8u, param_3);
        wr32(r29 + 0xcu, param_4);
        wr32(r29 + 0x10u, param_5);
        wr32(r29 + 0x14u, param_6);
        wr32(r29 + 0x1cu, r28);
        wr32(r29 + 0x18u, r27);
        a.r[0] = r30;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
