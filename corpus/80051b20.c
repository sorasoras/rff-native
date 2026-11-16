#include "tc_rt.h"

void fn_80051b20(u32 param_r3)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32(0x805710ecu);
    r30 = rd32(0x805710e8u);
    wr32(0x805710ecu, 0u);
    a.r[0] = 0u;
    (void)tc_call(0x8003d790u, &a);
    wr32(0x805710e8u, 0u);
    a.r[0] = 0u;
    (void)tc_call(0x8004e22cu, &a);
    (void)tc_call(0x80051d5cu, &a);
    a.r[0] = 1u;
    (void)tc_call(0x8004ca7cu, &a);
    if ((param_r3 & 2u) != 0u) {
        (void)tc_call(0x8005251cu, &a);
    }
    if ((param_r3 & 0x10u) != 0u) {
        (void)tc_call(0x80052d54u, &a);
    }
    a.r[0] = 0u;
    (void)tc_call(0x8004ca7cu, &a);
    wr32(0x805710ecu, 1u);
    a.r[0] = 1u;
    (void)tc_call(0x8003d790u, &a);
    r3 = rd32(0x803d2678u);
    wr32(0x803d26a4u, 0u);
    a.r[0] = r3;
    a.r[1] = 0u;
    (void)tc_call(0x8003d7b0u, &a);
    wr32(0x803d272cu, 0u);
    a.r[0] = rd32(0x803d2708u);
    a.r[1] = 0u;
    (void)tc_call(0x8003d7b0u, &a);
    wr32(0x803d26d4u, 0u);
    a.r[0] = rd32(0x803d26a8u);
    a.r[1] = 0u;
    (void)tc_call(0x8003d7b0u, &a);
    wr32(0x803d2754u, 0u);
    a.r[0] = rd32(0x803d2730u);
    a.r[1] = 0u;
    (void)tc_call(0x8003d7b0u, &a);
    wr32(0x803d2704u, 1u);
    a.r[0] = rd32(0x803d26d8u);
    a.r[1] = 1u;
    (void)tc_call(0x8003d7b0u, &a);
    wr32(0x803d277cu, 1u);
    a.r[0] = rd32(0x803d2758u);
    a.r[1] = 1u;
    (void)tc_call(0x8003d7b0u, &a);
    a.r[0] = 0x803d2678u;
    a.r[1] = 2u;
    (void)tc_call(0x8005768cu, &a);
    if ((param_r3 & 8u) != 0u) {
        (void)tc_call(0x80052648u, &a);
    }
    r3 = rd32(0x803d2678u);
    wr32(0x803d26a4u, 1u);
    a.r[0] = r3;
    a.r[1] = 1u;
    (void)tc_call(0x8003d7b0u, &a);
    wr32(0x803d272cu, 1u);
    a.r[0] = rd32(0x803d2708u);
    a.r[1] = 1u;
    (void)tc_call(0x8003d7b0u, &a);
    r3 = rd32(0x803d26d8u);
    wr32(0x803d2704u, 0u);
    a.r[0] = r3;
    a.r[1] = 0u;
    (void)tc_call(0x8003d7b0u, &a);
    wr32(0x803d277cu, 0u);
    a.r[0] = rd32(0x803d2758u);
    a.r[1] = 0u;
    (void)tc_call(0x8003d7b0u, &a);
    wr32(0x805710ecu, 0u);
    a.r[0] = 0u;
    (void)tc_call(0x8003d790u, &a);
    a.r[0] = 1u;
    (void)tc_call(0x8004ca7cu, &a);
    if ((param_r3 & 4u) != 0u) {
        (void)tc_call(0x80052b08u, &a);
    }
    if ((param_r3 & 0x20u) != 0u) {
        (void)tc_call(0x80052e68u, &a);
    }
    if ((param_r3 & 0x40u) != 0u) {
        (void)tc_call(0x80052dd8u, &a);
    }
    if ((param_r3 & 1u) != 0u) {
        (void)tc_call(0x800522a8u, &a);
    }
    if (rd32(0x803d18b0u) != 0u) {
        a.f[0] = (f64)rdf32(0x803d18acu);
        a.r[0] = 0x803d18a8u;
        (void)tc_call(0x80051e9cu, &a);
        wr32(0x803d18b0u, 0u);
    }
    a.r[0] = 0u;
    (void)tc_call(0x8004ca7cu, &a);
    wr32(0x805710ecu, r31);
    a.r[0] = (((0u - r31) | r31) >> 0x1fu) & 1u;
    (void)tc_call(0x8003d790u, &a);
    wr32(0x805710e8u, r30);
    a.r[0] = (((0u - r30) | r30) >> 0x1fu) & 1u;
    (void)tc_call(0x8004e22cu, &a);
    (void)tc_call(0x80051aecu, &a);
    return;
}
