#include "tc_rt.h"

void fn_8004252c(void)
{
    u32 ctr = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    f1 = (f64)rdf32(0x80572028u);
    r3 = 0x803bf0e0u;
    f0 = (f64)rdf32(0x8057203cu);
    ctr = 8u;
    do {
        wrf32d(r3, f1);
        wrf32d(r3 + 0x10u, f0);
        wrf32d(r3 + 0x20u, f0);
        wrf32d(r3 + 4u, f0);
        wrf32d(r3 + 0x14u, f1);
        wrf32d(r3 + 0x24u, f0);
        wrf32d(r3 + 8u, f0);
        wrf32d(r3 + 0x18u, f0);
        wrf32d(r3 + 0x28u, f1);
        wrf32d(r3 + 0xcu, f0);
        wrf32d(r3 + 0x1cu, f0);
        wrf32d(r3 + 0x2cu, f0);
        wrf32d(r3 + 0x30u, f1);
        wrf32d(r3 + 0x40u, f0);
        wrf32d(r3 + 0x50u, f0);
        wrf32d(r3 + 0x34u, f0);
        wrf32d(r3 + 0x44u, f1);
        wrf32d(r3 + 0x54u, f0);
        wrf32d(r3 + 0x38u, f0);
        wrf32d(r3 + 0x48u, f0);
        wrf32d(r3 + 0x58u, f1);
        wrf32d(r3 + 0x3cu, f0);
        wrf32d(r3 + 0x4cu, f0);
        wrf32d(r3 + 0x5cu, f0);
        wrf32d(r3 + 0x60u, f1);
        wrf32d(r3 + 0x70u, f0);
        wrf32d(r3 + 0x80u, f0);
        wrf32d(r3 + 0x64u, f0);
        wrf32d(r3 + 0x74u, f1);
        wrf32d(r3 + 0x84u, f0);
        wrf32d(r3 + 0x68u, f0);
        wrf32d(r3 + 0x78u, f0);
        wrf32d(r3 + 0x88u, f1);
        wrf32d(r3 + 0x6cu, f0);
        wrf32d(r3 + 0x7cu, f0);
        wrf32d(r3 + 0x8cu, f0);
        wrf32d(r3 + 0x90u, f1);
        wrf32d(r3 + 0xa0u, f0);
        wrf32d(r3 + 0xb0u, f0);
        wrf32d(r3 + 0x94u, f0);
        wrf32d(r3 + 0xa4u, f1);
        wrf32d(r3 + 0xb4u, f0);
        wrf32d(r3 + 0x98u, f0);
        wrf32d(r3 + 0xa8u, f0);
        wrf32d(r3 + 0xb8u, f1);
        wrf32d(r3 + 0x9cu, f0);
        wrf32d(r3 + 0xacu, f0);
        wrf32d(r3 + 0xbcu, f0);
        r3 = r3 + 0xc0u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    wr32(0x803bf6e0u, 0x803bf0e0u);
    return;
}
