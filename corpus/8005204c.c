#include "tc_rt.h"

void fn_8005204c(void)
{
    f64 f0 = 0.0;
    f0 = (f64)rdf32(0x8057229cu);
    wr8(0x805710b4u, 6u);
    wr32(0x805706d0u, 7u);
    wrf32d(0x805710b0u, f0);
    wr8(0x805710bbu, 0xffu);
    wr8(0x805710bau, 0xffu);
    wr8(0x805710b9u, 0xffu);
    wr8(0x805710b8u, 0xffu);
    wr8(0x805710d4u, 0u);
    wr8(0x805710c0u, 6u);
    wr8(0x805710beu, 0u);
    wr8(0x805710bdu, 0u);
    wr8(0x805710bcu, 0u);
    wr8(0x805710bfu, 0xffu);
    wr32(0x805710c4u, 0u);
    wr32(0x805710c8u, 0u);
    wr32(0x805710d8u, 0u);
    return;
}
