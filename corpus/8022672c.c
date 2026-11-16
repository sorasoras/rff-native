#include "tc_rt.h"

void fn_8022672c(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 ca = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0;
    u64 t5 = 0;
    TcArgs a = {0};
    (void)param_2;
    r5 = param_3;
    r6 = param_4;
    if ((0u - (u32)((u64)(u32)(((u64)~(rd32(param_1 + 0x18u) ^ 0x80000000u) + 0x80000000ull + (u64)(rd32(param_1 + 0x1cu) <= 0u)) >> 0x20ull) + 0xffffffffull)) != 0u) {
        r3 = tc_call(0x802302bcu, &a);
        r4 = tc_lastr4();
        r28 = rd32(param_1 + 0x20u);
        r27 = rd32(param_1 + 0x24u);
        r0 = r28 ^ 0x80000000u;
        r5 = r28;
        r6 = r27;
        if ((0u - (u32)((u64)~r0 + (u64)r0 + (u64)(u32)(((u64)~(r3 ^ 0x80000000u) + (u64)r0 + (u64)(r4 <= r27)) >> 0x20ull))) != 0u) {
            r26 = rd32(param_1 + 0x18u);
            ca = r27 <= r4;
            r4 = r4 - r27;
            r25 = rd32(param_1 + 0x1cu);
            a.r[0] = (u32)((u64)~r28 + (u64)r3 + (u64)ca);
            a.r[1] = r4;
            a.r[2] = r26;
            a.r[3] = r25;
            r3 = tc_call(0x80255b5cu, &a);
            r4 = tc_lastr4();
            ca = (r4 + 1u) < r4;
            r4 = r4 + 1u;
            r0 = ppc_mulhwu(r25, r4);
            t5 = (u64)r3 + (u64)ca;
            r3 = r26 * r4;
            r4 = r25 * r4;
            r3 = r0 + r3;
            r6 = r27 + r4;
            r5 = (u32)((u64)r28 + (u64)(r3 + (r25 * (u32)t5)) + (u64)((r27 + r4) < r27));
        }
    }
    wr32(param_1, param_5);
    r0 = r5 ^ 0x80000000u;
    wr32(param_1 + 0xcu, r6);
    wr32(param_1 + 8u, r5);
    r7 = rd32(0x80571490u);
    while (r7 != 0u) {
        if ((0u - (u32)((u64)~r0 + (u64)r0 + (u64)(u32)(((u64)~(rd32(r7 + 8u) ^ 0x80000000u) + (u64)r0 + (u64)(rd32(r7 + 0xcu) <= r6)) >> 0x20ull))) != 0u) {
            wr32(param_1 + 0x10u, rd32(r7 + 0x10u));
            wr32(r7 + 0x10u, param_1);
            r3 = rd32(param_1 + 0x10u);
            wr32(param_1 + 0x14u, r7);
            if (r3 != 0u) {
                wr32(r3 + 0x14u, param_1);
                return;
            }
            wr32(0x80571490u, param_1);
            r3 = tc_call(0x802302bcu, &a);
            r4 = tc_lastr4();
            r5 = rd32(param_1 + 0xcu);
            r8 = r5 - r4;
            r5 = (u32)((u64)~r3 + (u64)rd32(param_1 + 8u) + (u64)(r4 <= r5)) ^ 0x80000000u;
            if ((0u - (u32)((u64)~r5 + (u64)r5 + (u64)(u32)(((u64)r5 + 0x7fffffffull + (u64)(r8 >= 0u)) >> 0x20ull))) != 0u) {
                a.r[0] = 0u;
                (void)tc_call(0x80225098u, &a);
                return;
            }
            if ((0u - (u32)((u64)~r5 + (u64)r5 + (u64)(u32)(((u64)r5 + 0x7fffffffull + (u64)(r8 >= 0x80000000u)) >> 0x20ull))) != 0u) {
                a.r[0] = r8;
                (void)tc_call(0x80225098u, &a);
                return;
            }
            a.r[0] = 0x7fffffffu;
            (void)tc_call(0x80225098u, &a);
            return;
        }
        r7 = rd32(r7 + 0x14u);
    }
    wr32(param_1 + 0x14u, 0u);
    r4 = rd32(0x80571494u);
    wr32(0x80571494u, param_1);
    wr32(param_1 + 0x10u, r4);
    if (r4 != 0u) {
        wr32(r4 + 0x14u, param_1);
    } else {
        wr32(0x80571494u, param_1);
        wr32(0x80571490u, param_1);
        r3 = tc_call(0x802302bcu, &a);
        r4 = tc_lastr4();
        r5 = rd32(param_1 + 0xcu);
        r7 = r5 - r4;
        r5 = (u32)((u64)~r3 + (u64)rd32(param_1 + 8u) + (u64)(r4 <= r5)) ^ 0x80000000u;
        if ((0u - (u32)((u64)~r5 + (u64)r5 + (u64)(u32)(((u64)r5 + 0x7fffffffull + (u64)(r7 >= 0u)) >> 0x20ull))) != 0u) {
            a.r[0] = 0u;
            (void)tc_call(0x80225098u, &a);
        } else {
            if ((0u - (u32)((u64)~r5 + (u64)r5 + (u64)(u32)(((u64)r5 + 0x7fffffffull + (u64)(r7 >= 0x80000000u)) >> 0x20ull))) != 0u) {
                a.r[0] = r7;
                (void)tc_call(0x80225098u, &a);
            } else {
                a.r[0] = 0x7fffffffu;
                (void)tc_call(0x80225098u, &a);
            }
        }
    }
    return;
}
