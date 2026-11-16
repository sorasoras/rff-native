#include "tc_rt.h"

u32 fn_80165a20(u32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    (void)param_1;
    wr32(0x817fdf80u, 0x817fe000u);
    wr32(0x817fdffcu, 0u);
    if ((u32)param_2 == 0u) {
        r9 = rd32(0x8033a76cu);
        r8 = rd32(0x8033a770u);
        r7 = rd32(0x8033a774u);
        r6 = rd32(0x8033a778u);
        r5 = rd32(0x8033a77cu);
        r4 = rd32(0x8033a780u);
        wr32(0x817fdfa8u, rd32(0x8033a768u));
        wr32(0x817fdfacu, r9);
        wr32(0x817fdfb0u, r8);
        wr32(0x817fdfb4u, r7);
        wr32(0x817fdfb8u, r6);
        wr32(0x817fdfbcu, r5);
        wr32(0x817fdfc0u, r4);
        r3 = rd32((((u32)param_3 << 2u) & 0xfffffffcu) - 0x7e802058u);
    } else {
        if ((u32)param_2 == 1u) {
            r12 = rd32(0x8033a78cu);
            r11 = rd32(0x8033a790u);
            r10 = rd32(0x8033a794u);
            r9 = rd32(0x8033a798u);
            r8 = rd32(0x8033a79cu);
            r7 = rd32(0x8033a7a0u);
            r6 = rd32(0x8033a7a4u);
            r5 = rd32(0x8033a7a8u);
            r4 = rd32(0x8033a7acu);
            wr32(0x817fdfc8u, rd32(0x8033a788u));
            wr32(0x817fdfccu, r12);
            wr32(0x817fdfd0u, r11);
            wr32(0x817fdfd4u, r10);
            wr32(0x817fdfd8u, r9);
            wr32(0x817fdfdcu, r8);
            wr32(0x817fdfe0u, r7);
            wr32(0x817fdfe4u, r6);
            wr32(0x817fdfe8u, r5);
            wr32(0x817fdfecu, r4);
            r3 = rd32((((u32)param_3 << 2u) & 0xfffffffcu) - 0x7e802038u);
        } else {
            if ((u32)param_2 == 3u) {
                r4 = rd32(0x80574b7cu);
                wr32(0x817fdf88u, rd32(0x80574b78u));
                wr32(0x817fdf8cu, r4);
                r3 = rd32((((u32)param_3 << 2u) & 0xfffffffcu) - 0x7e802078u);
            } else {
                if ((u32)param_2 == 2u) {
                    r8 = rd32(0x8033a7b4u);
                    r7 = rd32(0x8033a7b8u);
                    r6 = rd32(0x8033a7bcu);
                    r5 = rd32(0x8033a7c0u);
                    r4 = rd32(0x8033a7c4u);
                    wr32(0x817fdf90u, rd32(0x8033a7b0u));
                    wr32(0x817fdf94u, r8);
                    wr32(0x817fdf98u, r7);
                    wr32(0x817fdf9cu, r6);
                    wr32(0x817fdfa0u, r5);
                    wr32(0x817fdfa4u, r4);
                    r3 = rd32((((u32)param_3 << 2u) & 0xfffffffcu) - 0x7e802070u);
                } else {
                    r3 = 0u;
                }
            }
        }
    }
    return r3;
}
