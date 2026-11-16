#include "tc_rt.h"

s32 fn_800b0d78(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r27 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r31 = ((u32)param_2 << 2u) & 0xfffffffcu;
    r27 = (u32)param_1 + r31;
    r8 = rd32(0x80337c04u);
    r30 = rd32(r27 + 0x1630u) + 1u;
    r7 = rd32(0x80337c08u);
    r6 = rd32(0x80337c0cu);
    r5 = rd32(0x80337c10u);
    r4 = rd32(0x80337c14u);
    r3 = rd32(0x80337c18u);
    wr32(0x817fdfc0u, rd32(0x80337c00u));
    wr32(r27 + 0x1630u, r30);
    r0 = rd32(r27 + 0x164cu);
    wr32(0x817fdfc4u, r8);
    wr32(0x817fdfc8u, r7);
    wr32(0x817fdfccu, r6);
    wr32(0x817fdfd0u, r5);
    wr32(0x817fdfd4u, r4);
    wr32(0x817fdfd8u, r3);
    if (r0 != 0u) {
        a.r[0] = 0x817fdfa8u;
        a.r[1] = (u32)param_1;
        (void)tc_call(0x800b0d04u, &a);
        r3 = rd32(0x817fdfacu);
        r0 = rd32(0x817fdfb0u);
        wr32(0x817fdfb4u, rd32(0x817fdfa8u));
        wr32(0x817fdfb8u, r3);
        wr32(0x817fdfbcu, r0);
        a.r[0] = rd32(r27 + 0x164cu);
        a.r[1] = 0x817fdfb4u;
        (void)tc_call(0x8015811cu, &a);
    }
    r0 = rd32(r31 - 0x7e802040u);
    if (r0 != 0xffffffffu && (s32)r30 >= (s32)r0) {
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_2;
        (void)tc_call(0x800b0fecu, &a);
    }
    return (s32)r30;
}
