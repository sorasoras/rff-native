#include "tc_rt.h"

u32 fn_8020f8cc(u32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800d9ce0u, &a);
    wr32(param_1, 0x80378528u);
    a.r[0] = param_1 + 0x124u;
    (void)tc_call(0x80157d94u, &a);
    f0 = (f64)rdf32(0x8057685cu);
    wrf32d(param_1 + 0x180u, (f64)rdf32(0x80576858u));
    wrf32d(param_1 + 0x17cu, f0);
    wr32(param_1 + 0x184u, 0xffffffffu);
    wr32(param_1 + 0x188u, 0x108fu);
    return param_1;
}
