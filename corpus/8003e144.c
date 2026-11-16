#include "tc_rt.h"

void fn_8003e144(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r5 = 0, r6 = 0, r7 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    r7 = (u32)rd8(param_2);
    wr32(0x817fe004u, 0x817ff000u);
    r6 = (u32)rd8(param_2 + 1u);
    wr32(0x817fdffcu, 0u);
    r5 = (u32)rd8(param_2 + 2u);
    r0 = (u32)rd8(param_2 + 3u);
    wr8(0x817fdfe8u, (u8)r7);
    wr8(0x817fdfe9u, (u8)r6);
    wr8(0x817fdfeau, (u8)r5);
    wr8(0x817fdfebu, (u8)r0);
    a.r[0] = 0u;
    a.r[1] = 0x817fdfe8u;
    (void)tc_call(0x802535e8u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 0xcu;
    (void)tc_call(0x80253644u, &a);
    if ((u32)param_1 == 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = 0xfu;
        a.r[2] = 0xcu;
        a.r[3] = 0xeu;
        a.r[4] = 0xau;
        (void)tc_call(0x802533f4u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = 7u;
        a.r[2] = 7u;
        a.r[3] = 7u;
        a.r[4] = 5u;
        (void)tc_call(0x80253434u, &a);
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = 0xfu;
        a.r[2] = 0xcu;
        a.r[3] = 0xeu;
        a.r[4] = 0u;
        (void)tc_call(0x802533f4u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = 7u;
        a.r[2] = 7u;
        a.r[3] = 7u;
        a.r[4] = 0u;
        (void)tc_call(0x80253434u, &a);
    }
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 1u;
    a.r[5] = 0u;
    (void)tc_call(0x80253474u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 1u;
    a.r[5] = 0u;
    (void)tc_call(0x802534ccu, &a);
    return;
}
