#include "tc_rt.h"

void fn_80226a70(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r8 = 0, r29 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    if (rd32(param_1) == 0u) {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    } else {
        r29 = rd32(param_1 + 0x14u);
        if (r29 == 0u) {
            wr32(0x80571494u, rd32(param_1 + 0x10u));
        } else {
            wr32(r29 + 0x10u, rd32(param_1 + 0x10u));
        }
        r3 = rd32(param_1 + 0x10u);
        if (r3 != 0u) {
            wr32(r3 + 0x14u, r29);
        } else {
            wr32(0x80571490u, r29);
            if (r29 != 0u) {
                r3 = tc_call(0x802302bcu, &a);
                r4 = tc_lastr4();
                r5 = rd32(r29 + 0xcu);
                r8 = r5 - r4;
                r5 = (u32)((u64)~r3 + (u64)rd32(r29 + 8u) + (u64)(r4 <= r5)) ^ 0x80000000u;
                if ((0u - (u32)((u64)~r5 + (u64)r5 + (u64)(u32)(((u64)r5 + 0x7fffffffull + (u64)(r8 >= 0u)) >> 0x20ull))) != 0u) {
                    a.r[0] = 0u;
                    (void)tc_call(0x80225098u, &a);
                } else {
                    if ((0u - (u32)((u64)~r5 + (u64)r5 + (u64)(u32)(((u64)r5 + 0x7fffffffull + (u64)(r8 >= 0x80000000u)) >> 0x20ull))) != 0u) {
                        a.r[0] = r8;
                        (void)tc_call(0x80225098u, &a);
                    } else {
                        a.r[0] = 0x7fffffffu;
                        (void)tc_call(0x80225098u, &a);
                    }
                }
            }
        }
        wr32(param_1, 0u);
        a.r[0] = r31;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
