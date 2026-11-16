#include "tc_rt.h"

void fn_800691a4(s32 param_1, u32 param_2, s32 param_3, u32 param_4, u32 param_5)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r8 = 0, r9 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r4 = (u32)param_1 + ((u32)param_3 * 0xacu);
    r0 = (u32)rd8(r4 + 0x314u);
    r8 = (u32)rd8(r4 + 0x315u);
    r9 = rd32(r4 + 0x310u);
    r4 = r4 + 0x29cu;
    wr16(0x817fdfecu, (u16)r9);
    wr8(0x817fdfeeu, (u8)r8);
    wr8(0x817fdfefu, (u8)r0);
    a.r[0] = (u32)param_1;
    a.r[1] = r4;
    a.r[2] = param_2;
    a.r[3] = param_4;
    a.r[4] = param_5;
    r3 = tc_call(0x800f31d8u, &a);
    if (r3 != 0u) {
        r4 = (((u32)param_3 << 2u) & 0xfffffffcu) - 0x7fb66fa0u;
        wr16(0x817fdfe8u, (u16)param_2);
        wr16(r4 + 0x106u, (u16)param_2);
        wr8(r4 + 0x109u, (u8)param_4);
        wr8(r4 + 0x108u, 1u);
        wr8(0x817fdfeau, (u8)param_5);
        wr8(0x817fdfebu, (u8)param_4);
        a.r[0] = 0x817fdfecu;
        (void)tc_call(0x800817c0u, &a);
        a.r[0] = 0x817fdfe8u;
        (void)tc_call(0x8008178cu, &a);
    }
    return;
}
