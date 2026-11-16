#include "tc_rt.h"

u32 fn_80148a28(u32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80148ae4u, &a);
    f0 = (f64)rdf32(0x80574668u);
    wr32(param_1, 0x803652a0u);
    wr32(param_1 + 0x140u, 0x11c710u);
    wr32(param_1 + 0x778u, 0xffffffffu);
    wr32(param_1 + 0x77cu, 0x1071u);
    wr32(param_1 + 0x780u, 0x1072u);
    wr32(param_1 + 0x78cu, 0x42u);
    wr32(param_1 + 0x790u, 0x42u);
    wr32(param_1 + 0x794u, 0x3fu);
    wrf32d(param_1 + 0x7bcu, f0);
    return param_1;
}
