#include "tc_rt.h"

void fn_8003f434(s32 param_1, s32 param_2, s32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r12 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r29 = rd32((u32)param_2 + 4u);
    wr32(0x817fdff0u, 0u);
    if (r29 != 0u && ((u32)param_3 + 0x10000u) != 0xffffu) {
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
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                r3 = tc_call(rd32(r29 + 0x18u), &a);
                r4 = r3;
            } else if (!c0lt) {
                r4 = 0u;
            } else if ((s32)r0 >= 0) {
                a.r[0] = r31;
                a.r[1] = 0u;
                a.r[2] = 4u;
                r3 = tc_call(0x800499e4u, &a);
                r4 = r3;
            } else {
                r4 = 0u;
            }
        } else {
            a.r[0] = r29;
            a.r[1] = r31;
            a.r[2] = 0u;
            a.r[3] = 4u;
            a.r[4] = rd32(0x80571004u);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            r3 = tc_call(r12, &a);
            r4 = r3;
        }
        a.r[0] = r30;
        a.r[1] = r4;
        a.r[2] = (u32)rd8((u32)param_1 + 0x1fu);
        (void)tc_call(0x80049fa0u, &a);
        r3 = tc_call(0x8004ca70u, &a);
        f1 = (f64)rdf32(0x80571fd0u);
        r31 = r3;
        a.f[0] = f1;
        a.f[1] = f1;
        a.f[2] = f1;
        a.r[0] = 0x817fdfb8u;
        (void)tc_call(0x80233d04u, &a);
        a.r[0] = r31;
        a.r[1] = 0x817fdfb8u;
        a.r[2] = 0x817fdfb8u;
        (void)tc_call(0x802337a0u, &a);
        a.r[0] = 0x817fdfb8u;
        a.r[1] = 0u;
        (void)tc_call(0x802544f0u, &a);
    }
    return;
}
