#include "tc_rt.h"

void fn_8025021c(void)
{
    u32 c0eq = 0, ca = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if ((u32)rd8(rd32(0x80576c88u) + 0x5fau) != 0u) {
        r3 = tc_call(0x8024f014u, &a);
        if ((r3 & 0xffu) != 0u) {
            r5 = rd32(0x8057195cu);
            r0 = (u32)rd16(r5 + 0x4eu);
            do {
                r3 = r0;
                r4 = (u32)rd16(r5 + 0x50u);
                r0 = (u32)rd16(r5 + 0x4eu);
            } while (r0 != r3);
            r27 = ((r0 << 0x10u) & 0xffff0000u) | r4;
            do {
                r3 = tc_call(0x8023029cu, &a);
                r31 = tc_lastr4();
                r30 = r3;
                do {
                    r3 = tc_call(0x8023029cu, &a);
                    r4 = tc_lastr4();
                    ca = r31 <= r4;
                    r4 = r4 - r31;
                    r3 = (u32)((u64)~r30 + (u64)r3 + (u64)ca) ^ 0x80000000u;
                    r3 = 0u - (u32)((u64)(u32)(((u64)~r3 + 0x80000000ull + (u64)(r4 <= 8u)) >> 0x20ull) + 0xffffffffull);
                } while (r3 == 0u);
                r5 = rd32(0x8057195cu);
                r0 = (u32)rd16(r5 + 0x4eu);
                do {
                    r3 = r0;
                    r4 = (u32)rd16(r5 + 0x50u);
                    r0 = (u32)rd16(r5 + 0x4eu);
                } while (r0 != r3);
                r0 = (r0 << 0x10u) & 0xffff0000u;
                r0 = r0 | r4;
                c0eq = r0 == r27;
                r27 = r0;
            } while (!c0eq);
        }
    }
    wr32(0xcc003018u, 1u);
    r3 = tc_call(0x8023029cu, &a);
    r31 = tc_lastr4();
    r30 = r3;
    do {
        r3 = tc_call(0x8023029cu, &a);
        r4 = tc_lastr4();
        ca = r31 <= r4;
        r4 = r4 - r31;
        r3 = (u32)((u64)~r30 + (u64)r3 + (u64)ca) ^ 0x80000000u;
        r3 = 0u - (u32)((u64)(u32)(((u64)~r3 + 0x80000000ull + (u64)(r4 <= 0x32u)) >> 0x20ull) + 0xffffffffull);
    } while (r3 == 0u);
    wr32(0xcc003018u, 0u);
    r3 = tc_call(0x8023029cu, &a);
    r28 = tc_lastr4();
    r29 = r3;
    do {
        r3 = tc_call(0x8023029cu, &a);
        r4 = tc_lastr4();
        ca = r28 <= r4;
        r4 = r4 - r28;
        r3 = (u32)((u64)~r29 + (u64)r3 + (u64)ca) ^ 0x80000000u;
        r3 = 0u - (u32)((u64)(u32)(((u64)~r3 + 0x80000000ull + (u64)(r4 <= 5u)) >> 0x20ull) + 0xffffffffull);
    } while (r3 == 0u);
    return;
}
