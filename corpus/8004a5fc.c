#include "tc_rt.h"

void fn_8004a5fc(void)
{
    u32 r0 = 0, r5 = 0, r6 = 0, r7 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if ((u32)rd8(0x803c625du) != 0u) {
        r31 = (u32)rd8(0x803c6244u);
        r7 = (u32)rd8(0x803c625eu);
        r6 = (u32)rd8(0x803c625fu);
        r5 = (u32)rd8(0x803c6260u);
        r0 = (u32)rd8(0x803c6261u);
        wr8(0x803c6244u, (u8)(r31 + 1u));
        wr8(0x817fdfe8u, (u8)r7);
        wr8(0x817fdfe9u, (u8)r6);
        wr8(0x817fdfeau, (u8)r5);
        wr8(0x817fdfebu, (u8)r0);
        a.r[0] = 2u;
        a.r[1] = 0x817fdfe8u;
        (void)tc_call(0x802535e8u, &a);
        a.r[0] = r31;
        a.r[1] = 0xeu;
        (void)tc_call(0x80253644u, &a);
        a.r[0] = r31;
        a.r[1] = 0x1eu;
        (void)tc_call(0x80253694u, &a);
        if (r31 == 0u) {
            a.r[0] = r31;
            a.r[1] = 0xfu;
            a.r[2] = 0xau;
            a.r[3] = 0xeu;
            a.r[4] = 0xfu;
            (void)tc_call(0x802533f4u, &a);
            a.r[0] = r31;
            a.r[1] = 7u;
            a.r[2] = 5u;
            a.r[3] = 6u;
            a.r[4] = 7u;
            (void)tc_call(0x80253434u, &a);
        } else {
            a.r[0] = r31;
            a.r[1] = 0xfu;
            a.r[2] = 0u;
            a.r[3] = 0xeu;
            a.r[4] = 0xfu;
            (void)tc_call(0x802533f4u, &a);
            a.r[0] = r31;
            a.r[1] = 7u;
            a.r[2] = 0u;
            a.r[3] = 6u;
            a.r[4] = 7u;
            (void)tc_call(0x80253434u, &a);
        }
        a.r[0] = r31;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.r[3] = 2u;
        a.r[4] = 1u;
        a.r[5] = 0u;
        (void)tc_call(0x80253474u, &a);
        a.r[0] = r31;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.r[3] = 2u;
        a.r[4] = 1u;
        a.r[5] = 0u;
        (void)tc_call(0x802534ccu, &a);
        a.r[0] = r31;
        a.r[1] = 0xffu;
        a.r[2] = 0xffu;
        a.r[3] = 4u;
        (void)tc_call(0x80253860u, &a);
    }
    return;
}
