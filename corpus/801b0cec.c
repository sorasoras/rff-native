#include "tc_rt.h"

void fn_801b0cec(u32 param_r3, u32 param_r4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r29 = 0;
    u32 r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf70u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    r12 = rd32(0x8033b394u);
    r31 = 0x817fdf88u;
    r11 = rd32(0x8033b398u);
    r30 = 0u;
    r10 = rd32(0x8033b39cu);
    r29 = 0u;
    r9 = rd32(0x8033b3a0u);
    r8 = rd32(0x8033b3a4u);
    r7 = rd32(0x8033b3a8u);
    r6 = rd32(0x8033b3acu);
    r5 = rd32(0x8033b3b0u);
    r4 = rd32(0x8033b3b4u);
    r3 = rd32(0x8033b3b8u);
    r0 = rd32(0x8033b3bcu);
    f30 = (f64)rdf32(0x80575b80u);
    f31 = (f64)rdf32(0x80575b78u);
    wr32(0x817fdf88u, rd32(0x8033b390u));
    wr32(0x817fdf8cu, r12);
    wr32(0x817fdf90u, r11);
    wr32(0x817fdf94u, r10);
    wr32(0x817fdf98u, r9);
    wr32(0x817fdf9cu, r8);
    wr32(0x817fdfa0u, r7);
    wr32(0x817fdfa4u, r6);
    wr32(0x817fdfa8u, r5);
    wr32(0x817fdfacu, r4);
    wr32(0x817fdfb0u, r3);
    wr32(0x817fdfb4u, r0);
    do {
        f2 = (f64)rdf32(r31 + 8u);
        f0 = (f64)rdf32(r31);
        wrf32d(0x817fdf7cu, (f64)rdf32(r31 + 4u));
        wrf32d(0x817fdf78u, f0);
        wrf32d(0x817fdf80u, f2);
        a.r[0] = 0x817fdf78u;
        a.r[1] = param_r4;
        a.r[2] = 0x817fdf78u;
        (void)tc_call(0x802343a4u, &a);
        wrf32d(0x817fdf7cu, f31);
        a.r[0] = 0x817fdf78u;
        f1 = tc_callf(0x80234428u, &a);
        if (f1 < f30) {
            r30 = r29;
            f30 = f1;
        }
        r29 = r29 + 1u;
        r31 = r31 + 0xcu;
    } while (r29 < 4u);
    r0 = r30 * 0xcu;
    f1 = (f64)rdf32(r0 - 0x7e802074u);
    f0 = (f64)rdf32(r0 - 0x7e802070u);
    wrf32d(param_r3, (f64)rdf32(r0 - 0x7e802078u));
    wrf32d(param_r3 + 4u, f1);
    wrf32d(param_r3 + 8u, f0);
    return;
}
