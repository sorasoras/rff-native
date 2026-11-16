#include "tc_rt.h"

void fn_80035aec(void)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0x8034c420u;
    a.r[1] = 0u;
    r3 = tc_call(0x8004bf2cu, &a);
    f1 = (f64)rdf32(0x80571eb8u);
    f0 = (f64)rdf32(0x80571ebcu);
    wr32(0x803a3e80u, r3);
    wr8(0x803a3e88u, 1u);
    wr8(0x803a3e89u, 0u);
    wr32(0x803a3e84u, 0u);
    wr8(0x803a3e8au, 0u);
    wrf32d(0x803a3e8cu, f1);
    wrf32d(0x803a3e90u, f0);
    wr8(0x803a3e8bu, 1u);
    return;
}
