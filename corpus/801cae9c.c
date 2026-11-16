#include "tc_rt.h"

u32 fn_801cae9c(u32 param_1, s32 param_2)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r10 = 0, r11 = 0, r12 = 0, r28 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = param_1;
    a.r[1] = (u32)param_2;
    r3 = tc_call(0x801cb2c4u, &a);
    r8 = rd32(0x8033bcf0u);
    r31 = r3;
    r28 = rd32(0x8033bcdcu);
    r12 = rd32(0x8033bce0u);
    r11 = rd32(0x8033bce4u);
    r10 = rd32(0x8033bce8u);
    r7 = rd32(0x8033bcf4u);
    r4 = ((u32)rd8(0x80492823u) + ((u32)rd8(0x80492822u) * 6u) + 1u) & 0xffu;
    r6 = rd32(0x8033bcf8u);
    r0 = rd32(0x8033bcfcu);
    wr32(0x817fdfc8u, rd32(0x8033bcd8u));
    r3 = (u32)rd8(0x80492821u);
    wr32(0x817fdfccu, r28);
    wr32(0x817fdfd0u, r12);
    wr32(0x817fdfd4u, r11);
    wr32(0x817fdfd8u, r10);
    wr32(0x817fdfb8u, r8);
    wr32(0x817fdfbcu, r7);
    wr32(0x817fdfc0u, r6);
    wr32(0x817fdfc4u, r0);
    a.r[0] = r3;
    a.r[1] = r4;
    r3 = tc_call(0x800a74e4u, &a);
    r0 = 0u;
    if (r3 != 0xffffffffu) {
        r0 = 1u;
    }
    c0eq = r0 == 0u;
    r0 = 0u;
    if (!c0eq && r3 != 1u) {
        r0 = 1u;
    }
    c0eq = r0 == 0u;
    r0 = 0u;
    if (!c0eq && r3 != 5u) {
        r0 = 1u;
    }
    c0eq = r0 == 0u;
    r0 = 0u;
    if (!c0eq && r3 != 9u) {
        r0 = 1u;
    }
    c0eq = r0 == 0u;
    r0 = 0u;
    if (!c0eq && r3 != 0xeu) {
        r0 = 1u;
    }
    if (r0 != 0u) {
        a.r[0] = r3;
        a.r[1] = 4u;
        r3 = tc_call(0x8014db4cu, &a);
        if (r3 != 0u) {
            a.r[0] = param_1;
            a.r[1] = (u32)rd8(0x80492824u);
            r3 = tc_call(0x801cb34cu, &a);
            if (r3 != 0u) {
                r3 = 0xeu;
                return r3;
            }
        }
    }
    if ((u32)param_2 != 2u && (u32)param_2 != 4u) {
        r31 = rd32((((u32)rd8(0x80492b98u) << 2u) & 0xfffffffcu) - 0x7e802038u);
    } else {
        r0 = (u32)rd8(0x80492b98u);
        if (r0 != 0u) {
            r0 = (r0 << 2u) & 0xfffffffcu;
            r31 = rd32(r0 - 0x7e802038u);
        }
    }
    if ((u32)rd8(0x80492b98u) == 0u) {
        r0 = (u32)rd8(0x80492821u);
        if ((r0 != 0u && (u32)param_2 != 2u) && (u32)param_2 != 4u) {
            r0 = (r0 << 2u) & 0xfffffffcu;
            r31 = rd32(r0 - 0x7e802048u);
        }
        a.r[0] = param_1;
        a.r[1] = (u32)rd8(0x80492824u);
        r3 = tc_call(0x801cb34cu, &a);
        if (r3 == 0u) {
            r31 = 0xbu;
        }
    }
    r3 = r31;
    return r3;
}
