#include "tc_rt.h"

void fn_801d727c(void)
{
    u32 r8 = 0, r9 = 0, r10 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0;
    f0 = (f64)rdf32(0x8057600cu);
    f6 = (f64)rdf32(0x80576070u);
    f5 = (f64)rdf32(0x80576074u);
    f4 = (f64)rdf32(0x80576078u);
    r28 = ppc_single_bits((f64)rdf32(0x80576064u));
    r29 = ppc_single_bits((f64)rdf32(0x80576068u));
    r30 = ppc_single_bits((f64)rdf32(0x8057606cu));
    r10 = ppc_single_bits((f64)rdf32(0x8057607cu));
    r9 = ppc_single_bits((f64)rdf32(0x80576080u));
    r8 = ppc_single_bits((f64)rdf32(0x80576084u));
    wr32(0x803746a0u, ppc_single_bits(f4));
    wr32(0x80374684u, r28);
    wr32(0x80374688u, r29);
    wr32(0x8037468cu, r30);
    wr32(0x80374698u, ppc_single_bits(f6));
    wr32(0x8037469cu, ppc_single_bits(f5));
    wr32(0x803746acu, r10);
    wr32(0x803746b0u, r9);
    wr32(0x803746b4u, r8);
    wr32(0x803746c0u, ppc_single_bits(f6));
    wr32(0x803746c4u, ppc_single_bits(f5));
    wr32(0x803746c8u, ppc_single_bits(f4));
    wr32(0x803746d4u, ppc_single_bits(f0));
    wr32(0x803746d8u, ppc_single_bits(f0));
    wr32(0x803746dcu, ppc_single_bits(f0));
    return;
}
