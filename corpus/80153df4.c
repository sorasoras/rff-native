#include "tc_rt.h"

u32 fn_80153df4(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r8 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    f0 = (f64)rdf32(0x805748c0u);
    r8 = param_1 + 8u;
    r0 = param_1 + 0xbcu;
    wr32(param_1 + 4u, param_2);
    do {
        wr8(r8, 0u);
        wr32(r8 + 4u, 0u);
        wr32(r8 + 8u, ppc_single_bits(f0));
        wr32(r8 + 0xcu, ppc_single_bits(f0));
        wr32(r8 + 0x10u, ppc_single_bits(f0));
        wr32(r8 + 0x14u, 0u);
        wr32(r8 + 0x18u, 0u);
        wr32(r8 + 0x1cu, 0u);
        wr32(r8 + 0x20u, ppc_single_bits(f0));
        wr32(r8 + 0x24u, ppc_single_bits(f0));
        wr32(r8 + 0x28u, ppc_single_bits(f0));
        wr8(r8 + 0x2cu, 0u);
        wr32(r8 + 0x30u, 0xffffffffu);
        wr32(r8 + 0x34u, 0u);
        wrf32d(r8 + 0x38u, f0);
        r8 = r8 + 0x3cu;
    } while (r8 < r0);
    r4 = rd32(0x80571308u);
    while (rd32(((r4 << 2u) & 0x3fcu) - 0x7fb41430u) != 0u) {
        r4 = r4 + 1u;
    }
    wr32(param_1, r4);
    wr32(0x80571308u, r4 + 1u);
    a.r[0] = param_1;
    r3 = tc_call(0x80153f74u, &a);
    wr32(((r3 << 2u) & 0xfffffffcu) - 0x7fb41430u, param_2);
    return param_1;
}
