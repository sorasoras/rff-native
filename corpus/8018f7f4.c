#include "tc_rt.h"

u32 fn_8018f7f4(s32 param_1, s32 param_2)
{
    u32 ca = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r31 = 0;
    u64 t0 = 0;
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r0 = (u32)param_2 - (rd32((u32)param_1 + 0x500u) + 0xecu);
    r31 = rd32(0x8033abe8u);
    ca = ((s32)r0 < 0) && ((r0 & 3u) != 0u);
    r0 = (u32)((s32)r0 >> 2);
    r12 = rd32(0x8033abecu);
    t0 = (u64)r0 + (u64)ca;
    r11 = rd32(0x8033abf0u);
    r10 = rd32(0x8033abf4u);
    r9 = rd32(0x8033abf8u);
    r8 = rd32(0x8033abfcu);
    r7 = rd32(0x8033ac00u);
    r6 = rd32(0x8033ac04u);
    r5 = rd32(0x8033ac08u);
    r4 = rd32(0x8033ac0cu);
    r3 = rd32(0x8033ac10u);
    r0 = rd32(0x8033ac14u);
    wr32(0x817fdfb8u, rd32(0x8033abe4u));
    wr32(0x817fdfbcu, r31);
    wr32(0x817fdfc0u, r12);
    wr32(0x817fdfc4u, r11);
    wr32(0x817fdfc8u, r10);
    wr32(0x817fdfccu, r9);
    wr32(0x817fdfd0u, r8);
    wr32(0x817fdfd4u, r7);
    wr32(0x817fdfd8u, r6);
    wr32(0x817fdfdcu, r5);
    wr32(0x817fdfe0u, r4);
    wr32(0x817fdfe4u, r3);
    wr32(0x817fdfe8u, r0);
    if ((s32)t0 < 0 && (u32)t0 >= 0xdu) {
        r3 = 0u;
    } else {
        r3 = rd32((((u32)t0 << 2u) & 0xfffffffcu) - 0x7e802048u);
    }
    return r3;
}
