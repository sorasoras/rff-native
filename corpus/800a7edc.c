#include "tc_rt.h"

void fn_800a7edc(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    r6 = ppc_single_bits((f64)rdf32(0x80572b34u));
    r5 = ppc_single_bits((f64)rdf32(0x80572b38u));
    r4 = ppc_single_bits((f64)rdf32(0x80572b3cu));
    r3 = ppc_single_bits((f64)rdf32(0x80572b40u));
    r0 = ppc_single_bits((f64)rdf32(0x80572b44u));
    wr32(0x8035410cu, ppc_single_bits((f64)rdf32(0x80572b30u)));
    wr32(0x80354110u, r6);
    wr32(0x80354114u, r5);
    wr32(0x80354120u, r4);
    wr32(0x80354124u, r3);
    wr32(0x80354128u, r0);
    return;
}
