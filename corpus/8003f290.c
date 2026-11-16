#include "tc_rt.h"

void fn_8003f290(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = rd32((u32)param_2 + 4u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    if (r31 != 0u && ((u32)param_3 + 0x10000u) != 0xffffu) {
        r5 = (u32)rd8((u32)param_1 + 0x29u);
        r4 = (u32)rd8((u32)param_1 + 0x2au);
        r0 = (u32)rd8((u32)param_1 + 0x2bu);
        wr8(0x817fdfecu, rd8((u32)param_1 + 0x28u));
        wr8(0x817fdfedu, (u8)r5);
        wr8(0x817fdfeeu, (u8)r4);
        wr8(0x817fdfefu, (u8)r0);
        r3 = tc_call(0x800497e4u, &a);
        r30 = r3;
        a.r[0] = (u32)param_3;
        a.r[1] = (u32)(s16)rd16(r31);
        r3 = tc_call(0x8004c670u, &a);
        r31 = r3;
        a.r[0] = 0x817fdfecu;
        r3 = tc_call(0x8003f06cu, &a);
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
        a.r[3] = 0x803be68cu;
        r3 = tc_call(0x80049a50u, &a);
        r29 = r3;
        wr32(0x817fdfe8u, rd32(0x817fdfecu));
        a.r[0] = 0u;
        a.r[1] = 0x817fdfe8u;
        (void)tc_call(0x802535e8u, &a);
        a.r[0] = r30;
        a.r[1] = 0x1cu;
        (void)tc_call(0x80253644u, &a);
        if (r30 == 0u) {
            a.r[0] = r30;
            a.r[1] = 0xfu;
            a.r[2] = 8u;
            a.r[3] = 0xeu;
            a.r[4] = 0xau;
            (void)tc_call(0x802533f4u, &a);
            a.r[0] = r30;
            a.r[1] = 7u;
            a.r[2] = 7u;
            a.r[3] = 7u;
            a.r[4] = 5u;
            (void)tc_call(0x80253434u, &a);
        } else {
            a.r[0] = r30;
            a.r[1] = 0xfu;
            a.r[2] = 8u;
            a.r[3] = 0xeu;
            a.r[4] = 0u;
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
    return;
}
