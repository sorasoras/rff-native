#include "tc_rt.h"

void fn_8003ec54(s32 param_1, s32 param_2, s32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r12 = 0, r27 = 0, r28 = 0, r29 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    r6 = (u32)rd8((u32)param_1 + 0x2au);
    wr32(0x817fe004u, 0x817ff000u);
    r0 = (u32)rd8((u32)param_1 + 0x28u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r0 = r6 + r0;
    r0 = (u32)rd8((u32)param_1 + 0x29u) + r0;
    if (r0 != 0u) {
        r3 = tc_call(0x800497e4u, &a);
        r27 = rd32((u32)param_2 + 4u);
        r31 = r3;
        if (r27 == 0u || ((u32)param_3 + 0x10000u) == 0xffffu) {
            r3 = r3;
            r6 = (u32)rd8((u32)param_1 + 0x29u);
            r5 = (u32)rd8((u32)param_1 + 0x2au);
            r0 = (u32)rd8((u32)param_1 + 0x2bu);
            wr8(0x817fdfd8u, rd8((u32)param_1 + 0x28u));
            wr8(0x817fdfd9u, (u8)r6);
            wr8(0x817fdfdau, (u8)r5);
            wr8(0x817fdfdbu, (u8)r0);
            a.r[0] = r3;
            a.r[1] = 0x817fdfd8u;
            (void)tc_call(0x8003e144u, &a);
            a.r[0] = r31;
            a.r[1] = 0xffu;
            a.r[2] = 0xffu;
            a.r[3] = 4u;
            (void)tc_call(0x80253860u, &a);
        } else {
            a.r[0] = (u32)param_3;
            a.r[1] = (u32)(s16)rd16(r27);
            r3 = tc_call(0x8004c670u, &a);
            r28 = r3;
            if (rd32(r27 + 8u) == 0u) {
                r29 = 0u;
            } else {
                a.r[0] = 0x803be6a0u;
                a.r[1] = rd32(r27 + 8u);
                r3 = tc_call(0x8003e34cu, &a);
                r29 = r3;
            }
            a.r[0] = r28;
            a.r[1] = (u32)(s8)rd8(r27 + 2u);
            a.r[2] = (u32)(s8)rd8(r27 + 3u);
            a.r[3] = ((rd32(r27 + 0xcu) | rd32(0x80571008u)) & 1u) ^ 1u;
            r3 = tc_call(0x800498e8u, &a);
            f1 = tc_lastf();
            r12 = rd32(0x80571000u);
            r28 = r3;
            if (r12 == 0u) {
                r0 = rd32(r27 + 4u);
                c0lt = (s32)r0 < 1;
                if (r0 == 1u) {
                    a.r[0] = r27;
                    a.r[1] = r29;
                    a.r[2] = 1u;
                    a.r[3] = 4u;
                    a.r[4] = rd32(r27 + 0x1cu);
                    a.f[0] = f1;
                    r3 = tc_call(rd32(r27 + 0x18u), &a);
                    r29 = r3;
                } else if (!c0lt) {
                    r29 = 0u;
                } else if ((s32)r0 >= 0) {
                    a.r[0] = r29;
                    a.r[1] = 1u;
                    a.r[2] = 4u;
                    r3 = tc_call(0x800499e4u, &a);
                    r29 = r3;
                } else {
                    r29 = 0u;
                }
            } else {
                a.r[0] = r27;
                a.r[1] = r29;
                a.r[2] = 1u;
                a.r[3] = 4u;
                a.r[4] = rd32(0x80571004u);
                a.f[0] = f1;
                r3 = tc_call(r12, &a);
                r29 = r3;
            }
            r6 = (u32)rd8((u32)param_1 + 0x29u);
            r5 = (u32)rd8((u32)param_1 + 0x2au);
            r0 = (u32)rd8((u32)param_1 + 0x2bu);
            wr8(0x817fdfdcu, rd8((u32)param_1 + 0x28u));
            wr8(0x817fdfddu, (u8)r6);
            wr8(0x817fdfdeu, (u8)r5);
            wr8(0x817fdfdfu, (u8)r0);
            a.r[0] = r31;
            a.r[1] = 0x817fdfdcu;
            (void)tc_call(0x8003e248u, &a);
            a.r[0] = r31;
            a.r[1] = r29;
            a.r[2] = r28;
            a.r[3] = 5u;
            (void)tc_call(0x80253860u, &a);
        }
    }
    return;
}
