#include "tc_rt.h"

void fn_8003eebc(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r0 = (u32)rd8((u32)param_1 + 0x2bu);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    if (r0 != 0u) {
        r31 = rd32((u32)param_2 + 4u);
        if (r31 != 0u && ((u32)param_3 + 0x10000u) != 0xffffu) {
            r3 = tc_call(0x800497e4u, &a);
            r30 = r3;
            a.r[0] = (u32)param_3;
            a.r[1] = (u32)(s16)rd16(r31);
            r3 = tc_call(0x8004c670u, &a);
            r31 = r3;
            r3 = tc_call(0x8003ee38u, &a);
            r29 = r3;
            a.r[0] = r31;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.r[3] = 1u;
            r3 = tc_call(0x800498e8u, &a);
            r31 = r3;
            a.r[0] = r29;
            a.r[1] = 0u;
            a.r[2] = 1u;
            a.r[3] = 0x803be688u;
            r3 = tc_call(0x80049a50u, &a);
            r29 = r3;
            r6 = (u32)rd8((u32)param_1 + 0x29u);
            r5 = (u32)rd8((u32)param_1 + 0x2au);
            r0 = (u32)rd8((u32)param_1 + 0x2bu);
            wr8(0x817fdfe8u, rd8((u32)param_1 + 0x28u));
            wr8(0x817fdfe9u, (u8)r6);
            wr8(0x817fdfeau, (u8)r5);
            wr8(0x817fdfebu, (u8)r0);
            a.r[0] = 0u;
            a.r[1] = 0x817fdfe8u;
            (void)tc_call(0x802535e8u, &a);
            a.r[0] = r30;
            a.r[1] = 0x1cu;
            (void)tc_call(0x80253644u, &a);
            if (r30 == 0u) {
                a.r[0] = r30;
                a.r[1] = 0xau;
                a.r[2] = 8u;
                a.r[3] = 0xeu;
                a.r[4] = 0xfu;
                (void)tc_call(0x802533f4u, &a);
                a.r[0] = r30;
                a.r[1] = 7u;
                a.r[2] = 7u;
                a.r[3] = 7u;
                a.r[4] = 5u;
                (void)tc_call(0x80253434u, &a);
            } else {
                a.r[0] = r30;
                a.r[1] = 0u;
                a.r[2] = 8u;
                a.r[3] = 0xeu;
                a.r[4] = 0xfu;
                (void)tc_call(0x802533f4u, &a);
                a.r[0] = r30;
                a.r[1] = 7u;
                a.r[2] = 7u;
                a.r[3] = 7u;
                a.r[4] = 0u;
                (void)tc_call(0x80253434u, &a);
            }
            a.r[0] = r30;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 1u;
            a.r[5] = 0u;
            (void)tc_call(0x80253474u, &a);
            a.r[0] = r30;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 1u;
            a.r[5] = 0u;
            (void)tc_call(0x802534ccu, &a);
            a.r[0] = r30;
            a.r[1] = r29;
            a.r[2] = r31;
            a.r[3] = 4u;
            (void)tc_call(0x80253860u, &a);
        }
    }
    return;
}
