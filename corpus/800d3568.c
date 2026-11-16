#include "tc_rt.h"

void fn_800d3568(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = 0u;
    wr32(0x817fdff8u, 0u);
    r30 = 0x817fdfc0u;
    wr32(0x817fdff4u, 0u);
    r9 = rd32(0x8033871cu);
    r8 = rd32(0x80338720u);
    r7 = rd32(0x80338724u);
    r6 = rd32(0x80338728u);
    r5 = rd32(0x8033872cu);
    r4 = rd32(0x80338730u);
    r3 = rd32(0x80338734u);
    r0 = rd32(0x80338738u);
    wr32(0x817fdfc0u, rd32(0x80338718u));
    wr32(0x817fdfc4u, r9);
    wr32(0x817fdfc8u, r8);
    wr32(0x817fdfccu, r7);
    wr32(0x817fdfd0u, r6);
    wr32(0x817fdfd4u, r5);
    wr32(0x817fdfd8u, r4);
    wr32(0x817fdfdcu, r3);
    wr32(0x817fdfe0u, r0);
    do {
        r3 = tc_call(0x800545e4u, &a);
        a.r[0] = r3;
        a.r[1] = rd32(r30);
        a.r[2] = rd32(r30 + 4u);
        a.r[3] = rd32(r30 + 8u);
        a.r[4] = 0x5000u;
        (void)tc_call(0x8011de94u, &a);
        r31 = r31 + 1u;
        r30 = r30 + 0xcu;
    } while (r31 < 3u);
    r31 = 0x817fdf98u;
    r10 = rd32(0x8033887cu);
    r30 = 0x804b1598u;
    r9 = rd32(0x80338880u);
    r29 = 0u;
    r8 = rd32(0x80338884u);
    r7 = rd32(0x80338888u);
    r6 = rd32(0x8033888cu);
    r5 = rd32(0x80338890u);
    r4 = rd32(0x80338894u);
    r3 = rd32(0x80338898u);
    r0 = rd32(0x8033889cu);
    wr32(0x817fdf98u, rd32(0x80338878u));
    wr32(0x817fdf9cu, r10);
    wr32(0x817fdfa0u, r9);
    wr32(0x817fdfa4u, r8);
    wr32(0x817fdfa8u, r7);
    wr32(0x817fdfacu, r6);
    wr32(0x817fdfb0u, r5);
    wr32(0x817fdfb4u, r4);
    wr32(0x817fdfb8u, r3);
    wr32(0x817fdfbcu, r0);
    do {
        a.r[0] = rd32(r31);
        r3 = tc_call(0x8011df4cu, &a);
        r29 = r29 + 1u;
        wr32(r30, r3);
        r31 = r31 + 4u;
        r30 = r30 + 4u;
    } while ((s32)r29 < 10);
    return;
}
