#include "tc_rt.h"

u32 fn_8020a9d0(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[0] = rd32(param_1) + 0xc6u;
    a.r[1] = 2u;
    r3 = tc_call(0x800f89c4u, &a);
    r31 = r3;
    if ((s32)r3 >= 10) {
        a.r[0] = rd32(0x80571398u);
        a.r[1] = r31 - 0xau;
        r3 = tc_call(0x801c0e2cu, &a);
        r4 = rd32(0x80571398u);
        r31 = rd32(r4 + (((r31 + rd32(r4 + 0x194u) - 0xau) << 2u) & 0xfffffffcu) + 0x120u);
        if ((s32)r3 >= 0) {
            return 1u;
        }
        a.r[0] = 0x17u;
        a.r[1] = r31;
        a.r[2] = 0u;
        r3 = tc_call(0x801412f8u, &a);
        r30 = r3;
        a.r[0] = rd32(0x80571398u);
        a.r[1] = r31;
        r3 = tc_call(0x801c0da0u, &a);
        if (r3 != 0u) {
            r7 = (u32)rd8(0x80576769u);
            r6 = (u32)rd8(0x8057676au);
            r0 = (u32)rd8(0x8057676bu);
            wr8(0x817fdfe8u, rd8(0x80576768u));
            wr8(0x817fdfe9u, (u8)r7);
            wr8(0x817fdfeau, (u8)r6);
            wr8(0x817fdfebu, (u8)r0);
            a.r[0] = param_1;
            a.r[1] = r30;
            a.r[2] = 0x817fdfe8u;
            (void)tc_call(0x80100728u, &a);
            return 1u;
        }
        a.r[0] = param_1;
        a.r[1] = r30;
        a.r[2] = 0u;
        (void)tc_call(0x801006a4u, &a);
    } else {
        a.r[0] = rd32(0x80571398u);
        a.r[1] = r31;
        r3 = tc_call(0x801c0e2cu, &a);
        r4 = rd32(0x80571398u);
        r4 = rd32(r4 + (((rd32(r4 + 0x194u) + r31) << 2u) & 0xfffffffcu) + 0x120u);
        if ((s32)r3 >= 0) {
            a.r[0] = 0x17u;
            a.r[1] = r4;
            a.r[2] = 0u;
            r3 = tc_call(0x801412f8u, &a);
            a.r[0] = param_1;
            a.r[1] = r3;
            a.r[2] = 0u;
            (void)tc_call(0x801006a4u, &a);
        }
    }
    return 1u;
}
