#include "tc_rt.h"

void fn_801a608c(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    r8 = rd32(0x804890c8u);
    r7 = rd32(0x804890ccu);
    r6 = rd32(0x804890d0u);
    r10 = ppc_single_bits((f64)rdf32(0x8057597cu));
    r9 = ppc_single_bits((f64)rdf32(0x80575980u));
    r4 = ppc_single_bits((f64)rdf32(0x80575984u));
    r3 = ppc_single_bits((f64)rdf32(0x80575988u));
    r0 = ppc_single_bits((f64)rdf32(0x8057598cu));
    wr32(0x80370fecu, ppc_single_bits((f64)rdf32(0x80575868u)));
    wr32(0x80370ff0u, r10);
    wr32(0x80370ff4u, r9);
    wr32(0x80371000u, r8);
    wr32(0x80371004u, r7);
    wr32(0x80371008u, r6);
    wr32(0x80371014u, r8);
    wr32(0x80371018u, r7);
    wr32(0x8037101cu, r6);
    wr32(0x80371028u, r8);
    wr32(0x8037102cu, r7);
    wr32(0x80371030u, r6);
    wr32(0x8037103cu, r4);
    wr32(0x80371040u, r3);
    wr32(0x80371044u, r0);
    wr32(0x80371050u, r8);
    wr32(0x80371054u, r7);
    wr32(0x80371058u, r6);
    wr32(0x80371064u, r8);
    wr32(0x80371068u, r7);
    wr32(0x8037106cu, r6);
    wr32(0x80371078u, r8);
    wr32(0x8037107cu, r7);
    wr32(0x80371080u, r6);
    wr32(0x8037108cu, r8);
    wr32(0x80371090u, r7);
    wr32(0x80371094u, r6);
    wr32(0x803710a0u, r8);
    wr32(0x803710a4u, r7);
    wr32(0x803710a8u, r6);
    wr32(0x803710b4u, r8);
    wr32(0x803710b8u, r7);
    wr32(0x803710bcu, r6);
    wr32(0x803710c8u, r8);
    wr32(0x803710ccu, r7);
    wr32(0x803710d0u, r6);
    return;
}
