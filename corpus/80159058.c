#include "tc_rt.h"

void fn_80159058(u32 param_1)
{
    u32 r0 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    (void)tc_call(0x80159888u, &a);
    r0 = rd32(param_1 + 0x34u);
    wr32(param_1 + 8u, 0xffffffffu);
    r0 = r0 & 0x9fffffffu;
    wr32(param_1 + 0x34u, r0);
    a.r[0] = param_1;
    a.r[1] = 0xffffffffu;
    (void)tc_call(0x80159388u, &a);
    f0 = (f64)rdf32(0x80574960u);
    r0 = rd32(param_1 + 0x34u) | 0x10000000u;
    wr32(param_1, 0u);
    wrf32d(param_1 + 0x24u, f0);
    wr32(param_1 + 0x14u, 0xffffffffu);
    wr32(param_1 + 4u, 0u);
    wr8(param_1 + 0x28u, 0u);
    wr16(param_1 + 0x2au, 0u);
    wr32(param_1 + 0x34u, r0);
    wr32(param_1 + 0x38u, 1u);
    return;
}
