#include "tc_rt.h"

void fn_8003f5c8(u32 param_1, s32 param_2, s32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r12 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    r29 = rd32((u32)param_2 + 4u);
    if (r29 != 0u && ((u32)param_3 + 0x10000u) != 0xffffu) {
        r28 = (u32)(s16)rd16(0x803be684u);
        if (r28 != 0xffffffffu) {
            a.r[0] = (u32)param_3;
            a.r[1] = (u32)(s16)rd16(r29);
            r3 = tc_call(0x8004c670u, &a);
            r30 = r3;
            if (rd32(r29 + 8u) == 0u) {
                r31 = 0u;
            } else {
                a.r[0] = 0x803be6a0u;
                a.r[1] = rd32(r29 + 8u);
                r3 = tc_call(0x8003e34cu, &a);
                r31 = r3;
            }
            a.r[0] = r30;
            a.r[1] = (u32)(s8)rd8(r29 + 2u);
            a.r[2] = (u32)(s8)rd8(r29 + 3u);
            a.r[3] = ((rd32(r29 + 0xcu) | rd32(0x80571008u)) & 1u) ^ 1u;
            r3 = tc_call(0x800498e8u, &a);
            f1 = tc_lastf();
            r12 = rd32(0x80571000u);
            r30 = r3;
            if (r12 == 0u) {
                r0 = rd32(r29 + 4u);
                c0lt = (s32)r0 < 1;
                if (r0 == 1u) {
                    a.r[0] = r29;
                    a.r[1] = r31;
                    a.r[2] = 0u;
                    a.r[3] = 4u;
                    a.r[4] = rd32(r29 + 0x1cu);
                    a.f[0] = f1;
                    r3 = tc_call(rd32(r29 + 0x18u), &a);
                    r31 = r3;
                } else if (!c0lt) {
                    r31 = 0u;
                } else if ((s32)r0 >= 0) {
                    a.r[0] = r31;
                    a.r[1] = 0u;
                    a.r[2] = 4u;
                    r3 = tc_call(0x800499e4u, &a);
                    r31 = r3;
                } else {
                    r31 = 0u;
                }
            } else {
                a.r[0] = r29;
                a.r[1] = r31;
                a.r[2] = 0u;
                a.r[3] = 4u;
                a.r[4] = rd32(0x80571004u);
                a.f[0] = f1;
                r3 = tc_call(r12, &a);
                r31 = r3;
            }
            r3 = tc_call(0x800497fcu, &a);
            r29 = r3;
            a.r[0] = 1u;
            a.r[1] = 0x80335b70u;
            a.r[2] = 1u;
            (void)tc_call(0x80252f28u, &a);
            a.r[0] = r28;
            a.r[1] = r29;
            a.r[2] = 1u;
            a.r[3] = 0u;
            a.r[4] = 1u;
            (void)tc_call(0x802532b4u, &a);
            a.r[0] = r29;
            a.r[1] = r28;
            a.r[2] = r31;
            a.r[3] = r30;
            (void)tc_call(0x8004afe4u, &a);
        }
    }
    return;
}
