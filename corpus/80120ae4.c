#include "tc_rt.h"

void fn_80120ae4(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r12 = 0, r22 = 0, r24 = 0;
    u32 r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf80u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
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
    a.r[0] = rd32(param_1);
    a.r[1] = rd32(param_2);
    r3 = tc_call(0x803014dcu, &a);
    if ((r3 & 0x10u) != 0u) {
        return;
    }
    r10 = rd32(0x803396fcu);
    r22 = rd32(param_2 + 0x50u);
    r24 = rd32(0x803396dcu);
    r25 = rd32(0x803396e0u);
    r26 = rd32(0x803396e4u);
    r27 = rd32(0x803396e8u);
    r28 = rd32(0x803396ecu);
    r29 = rd32(0x803396f0u);
    r30 = rd32(0x803396f4u);
    r12 = rd32(0x803396f8u);
    r9 = rd32(0x80339700u);
    r8 = rd32(0x80339704u);
    r7 = rd32(0x80339708u);
    r6 = rd32(0x8033970cu);
    r5 = rd32(0x80339710u);
    r4 = rd32(0x80339714u);
    r3 = rd32(0x80339718u);
    r0 = rd32(0x8033971cu);
    wr32(0x817fdfacu, rd32(0x803396d8u));
    f1 = (f64)rdf32(0x805742a8u);
    wr32(0x817fdfb0u, r24);
    f2 = (f64)rdf32(0x805742acu);
    wr32(0x817fdfb4u, r25);
    wr32(0x817fdfb8u, r26);
    wr32(0x817fdfbcu, r27);
    wr32(0x817fdfc0u, r28);
    wr32(0x817fdfc4u, r29);
    wr32(0x817fdfc8u, r30);
    wr32(0x817fdfccu, r12);
    wr32(0x817fdf88u, r10);
    wr32(0x817fdf8cu, r9);
    wr32(0x817fdf90u, r8);
    wr32(0x817fdf94u, r7);
    wr32(0x817fdf98u, r6);
    wr32(0x817fdf9cu, r5);
    wr32(0x817fdfa0u, r4);
    wr32(0x817fdfa4u, r3);
    wr32(0x817fdfa8u, r0);
    if ((s32)r22 >= 0) {
        r0 = (r22 << 2u) & 0xfffffffcu;
        f1 = (f64)rdf32(r0 - 0x7e802054u);
        f2 = (f64)rdf32(r0 - 0x7e802078u);
    }
    a.f[0] = f1;
    a.f[1] = f2;
    a.r[0] = param_3;
    a.r[1] = 2u;
    (void)tc_call(0x80179fb8u, &a);
    return;
}
