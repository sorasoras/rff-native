#include "tc_rt.h"

void fn_800d875c(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r28 = 0;
    u32 r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf10u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r3 = tc_call(0x80311554u, &a);
    r30 = r3;
    a.r[0] = 0x817fdf50u;
    (void)tc_call(0x80233740u, &a);
    a.r[0] = 0x817fdf80u;
    (void)tc_call(0x80233740u, &a);
    f1 = (f64)rdf32(0x805739e0u);
    f0 = (f64)rdf32(0x805739d0u);
    wr8(0x817fdfb0u, 0u);
    wr32(0x817fdfb4u, 0u);
    wr32(0x817fdfb8u, 0u);
    wr8(0x817fdfbcu, 1u);
    wr32(0x817fdfc0u, 0u);
    wrf32d(0x817fdfc4u, f1);
    wrf32d(0x817fdfc8u, f0);
    wrf32d(0x817fdfccu, f1);
    wrf32d(0x817fdfd0u, f0);
    wrf32d(0x817fdfd8u, f1);
    wrf32d(0x817fdfdcu, f1);
    wrf32d(0x817fdfe0u, f1);
    wrf32d(0x817fdfe4u, f1);
    wr8(0x817fdfeau, 0xffu);
    wr8(0x817fdfe9u, 0xffu);
    wr8(0x817fdfe8u, 0xffu);
    wr8(0x817fdfebu, 0xffu);
    wr8(0x817fdfeeu, 0u);
    wr8(0x817fdfedu, 0u);
    wr8(0x817fdfecu, 0u);
    wr8(0x817fdfefu, 0xffu);
    a.r[0] = 0x817fdf20u;
    (void)tc_call(0x800d8bb8u, &a);
    r12 = rd32(0x817fdf24u);
    r31 = 0x804b1df8u;
    r11 = rd32(0x817fdf28u);
    r29 = 0u;
    r10 = rd32(0x817fdf2cu);
    r9 = rd32(0x817fdf30u);
    r8 = rd32(0x817fdf34u);
    r7 = rd32(0x817fdf38u);
    r6 = rd32(0x817fdf3cu);
    r5 = rd32(0x817fdf40u);
    r4 = rd32(0x817fdf44u);
    r3 = rd32(0x817fdf48u);
    r0 = rd32(0x817fdf4cu);
    wr32(0x817fdf50u, rd32(0x817fdf20u));
    wr32(0x817fdf54u, r12);
    wr32(0x817fdf58u, r11);
    wr32(0x817fdf5cu, r10);
    wr32(0x817fdf60u, r9);
    wr32(0x817fdf64u, r8);
    wr32(0x817fdf68u, r7);
    wr32(0x817fdf6cu, r6);
    wr32(0x817fdf70u, r5);
    wr32(0x817fdf74u, r4);
    wr32(0x817fdf78u, r3);
    wr32(0x817fdf7cu, r0);
    do {
        a.r[0] = r31;
        r3 = tc_call(0x80320fe4u, &a);
        if (r3 != 0u) {
            r5 = rd32(r31 + 0x34u);
            a.r[0] = 0x817fdf18u;
            a.r[1] = r31;
            (void)tc_call(0x80320f94u, &a);
            a.r[0] = 0x817fdf18u;
            r3 = tc_call(0x80321010u, &a);
            if (((((0u - r5) | r5) >> 0x1fu) & 1u) != 0u) {
                wr32(r3 + 0x50u, rd32(r3 + 0x50u) | 2u);
            } else {
                wr32(r3 + 0x50u, rd32(r3 + 0x50u) & 0xfffffffdu);
            }
        }
        r29 = r29 + 1u;
        r31 = r31 + 0x54u;
    } while ((s32)r29 < 320);
    (void)tc_call(0x800d8cc8u, &a);
    r28 = 0u;
    do {
        a.r[0] = r30;
        a.r[1] = 0x817fdf50u;
        a.r[2] = r28;
        (void)tc_call(0x80311af0u, &a);
        r28 = r28 + 1u;
    } while ((s32)r28 < 2);
    (void)tc_call(0x800d89f4u, &a);
    (void)tc_call(0x800d8a8cu, &a);
    a.r[0] = 0u;
    (void)tc_call(0x8025326cu, &a);
    a.r[0] = 1u;
    (void)tc_call(0x8025326cu, &a);
    a.r[0] = 2u;
    (void)tc_call(0x8025326cu, &a);
    a.r[0] = 3u;
    (void)tc_call(0x8025326cu, &a);
    return;
}
