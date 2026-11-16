#include "tc_rt.h"

void fn_8003e97c(u32 param_1, s32 param_2, s32 param_3, s32 param_4)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r12 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    if (param_4 >= 2) {
        r3 = tc_call(0x800497e4u, &a);
        r28 = rd32((u32)param_2 + 4u);
        r29 = r3;
        if (r28 == 0u || ((u32)param_3 + 0x10000u) == 0xffffu) {
            if (r3 != 0u) {
                r3 = r3;
                a.r[0] = r3;
                a.r[1] = 0xfu;
                a.r[2] = 0xcu;
                a.r[3] = 0xau;
                a.r[4] = 0u;
                (void)tc_call(0x802533f4u, &a);
                a.r[0] = r29;
                a.r[1] = 7u;
                a.r[2] = 7u;
                a.r[3] = 7u;
                a.r[4] = 0u;
                (void)tc_call(0x80253434u, &a);
            } else {
                r3 = r3;
                a.r[0] = r3;
                a.r[1] = 0xfu;
                a.r[2] = 0xfu;
                a.r[3] = 0xfu;
                a.r[4] = 0xau;
                (void)tc_call(0x802533f4u, &a);
                a.r[0] = r29;
                a.r[1] = 7u;
                a.r[2] = 7u;
                a.r[3] = 7u;
                a.r[4] = 5u;
                (void)tc_call(0x80253434u, &a);
            }
            a.r[0] = r29;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 1u;
            a.r[5] = 0u;
            (void)tc_call(0x80253474u, &a);
            a.r[0] = r29;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 1u;
            a.r[5] = 0u;
            (void)tc_call(0x802534ccu, &a);
            a.r[0] = r29;
            a.r[1] = 0xffu;
            a.r[2] = 0xffu;
            a.r[3] = 5u;
            (void)tc_call(0x80253860u, &a);
        } else {
            a.r[0] = (u32)param_3;
            a.r[1] = (u32)(s16)rd16(r28);
            r3 = tc_call(0x8004c670u, &a);
            r30 = r3;
            if (rd32(r28 + 8u) == 0u) {
                r31 = 0u;
            } else {
                a.r[0] = 0x803be6a0u;
                a.r[1] = rd32(r28 + 8u);
                r3 = tc_call(0x8003e34cu, &a);
                r31 = r3;
            }
            a.r[0] = r30;
            a.r[1] = (u32)(s8)rd8(r28 + 2u);
            a.r[2] = (u32)(s8)rd8(r28 + 3u);
            a.r[3] = ((rd32(r28 + 0xcu) | rd32(0x80571008u)) & 1u) ^ 1u;
            r3 = tc_call(0x800498e8u, &a);
            f1 = tc_lastf();
            r12 = rd32(0x80571000u);
            r30 = r3;
            if (r12 == 0u) {
                r0 = rd32(r28 + 4u);
                c0lt = (s32)r0 < 1;
                if (r0 == 1u) {
                    a.r[0] = r28;
                    a.r[1] = r31;
                    a.r[2] = 1u;
                    a.r[3] = 4u;
                    a.r[4] = rd32(r28 + 0x1cu);
                    a.r[5] = 0u;
                    a.f[0] = f1;
                    r3 = tc_call(rd32(r28 + 0x18u), &a);
                    r31 = r3;
                } else if (!c0lt) {
                    r31 = 0u;
                } else if ((s32)r0 >= 0) {
                    a.r[0] = r31;
                    a.r[1] = 1u;
                    a.r[2] = 4u;
                    r3 = tc_call(0x800499e4u, &a);
                    r31 = r3;
                } else {
                    r31 = 0u;
                }
            } else {
                a.r[0] = r28;
                a.r[1] = r31;
                a.r[2] = 1u;
                a.r[3] = 4u;
                a.r[4] = rd32(0x80571004u);
                a.r[5] = 0u;
                a.f[0] = f1;
                r3 = tc_call(r12, &a);
                r31 = r3;
            }
            if (r29 != 0u) {
                a.r[0] = r29;
                a.r[1] = 0xfu;
                a.r[2] = 8u;
                a.r[3] = 0xau;
                a.r[4] = 0u;
                (void)tc_call(0x802533f4u, &a);
                a.r[0] = r29;
                a.r[1] = 7u;
                a.r[2] = 7u;
                a.r[3] = 7u;
                a.r[4] = 0u;
                (void)tc_call(0x80253434u, &a);
            } else {
                a.r[0] = r29;
                a.r[1] = 0xfu;
                a.r[2] = 8u;
                a.r[3] = 0xau;
                a.r[4] = 0xfu;
                (void)tc_call(0x802533f4u, &a);
                a.r[0] = r29;
                a.r[1] = 7u;
                a.r[2] = 7u;
                a.r[3] = 7u;
                a.r[4] = 5u;
                (void)tc_call(0x80253434u, &a);
            }
            a.r[0] = r29;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 1u;
            a.r[5] = 0u;
            (void)tc_call(0x80253474u, &a);
            a.r[0] = r29;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 1u;
            a.r[5] = 0u;
            (void)tc_call(0x802534ccu, &a);
            a.r[0] = r29;
            a.r[1] = r31;
            a.r[2] = r30;
            a.r[3] = 5u;
            (void)tc_call(0x80253860u, &a);
        }
    }
    return;
}
