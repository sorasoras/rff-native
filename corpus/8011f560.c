#include "tc_rt.h"

s32 fn_8011f560(s32 param_1, u32 param_2)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r21 = 0;
    u32 r22 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    r3 = (u32)param_1;
    wr32(0x817fdf80u, 0x817fe000u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r22 = ((ppc_cntlzw(param_2) >> 3u) & 0x1ffffffcu) - 0x7e802078u;
    r5 = (((0u - param_2) | param_2) >> 0x1fu) & 1u;
    r21 = 0u;
    r25 = rd32(0x8033969cu);
    r26 = rd32(0x803396a0u);
    r27 = rd32(0x803396a4u);
    r28 = rd32(0x803396a8u);
    r29 = rd32(0x803396acu);
    r30 = rd32(0x803396b0u);
    r31 = rd32(0x803396b4u);
    r12 = rd32(0x803396b8u);
    r11 = rd32(0x803396bcu);
    r10 = rd32(0x803396c0u);
    r9 = rd32(0x803396c4u);
    r8 = rd32(0x803396c8u);
    r7 = rd32(0x803396ccu);
    r6 = rd32(0x803396d0u);
    r4 = rd32(0x803396d4u);
    wr32(0x817fdf88u, rd32(0x80339698u));
    wr32(0x817fdf8cu, r25);
    wr32(0x817fdf90u, r26);
    wr32(0x817fdf94u, r27);
    wr32(0x817fdf98u, r28);
    wr32(0x817fdf9cu, r29);
    wr32(0x817fdfa0u, r30);
    wr32(0x817fdfa4u, r31);
    wr32(0x817fdfa8u, r12);
    wr32(0x817fdfacu, r11);
    wr32(0x817fdfb0u, r10);
    wr32(0x817fdfb4u, r9);
    wr32(0x817fdfb8u, r8);
    wr32(0x817fdfbcu, r7);
    wr32(0x817fdfc0u, r6);
    wr32(0x817fdfc4u, r4);
    ctr = 8u;
    while ((u32)param_1 != rd32(r22)) {
        r22 = r22 + 8u;
        r21 = r21 + 2u;
        ctr = ctr - 1u;
        if (ctr == 0u) {
            return (s32)r3;
        }
    }
    r3 = rd32((((r21 + r5) << 2u) & 0xfffffffcu) - 0x7e802078u);
    return (s32)r3;
}
