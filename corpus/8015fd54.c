#include "tc_rt.h"

u32 fn_8015fd54(u32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80148ae4u, &a);
    f0 = (f64)rdf32(0x80574a60u);
    wr32(param_1, 0x80369180u);
    wr32(param_1 + 0x140u, 0x102010u);
    wr32(param_1 + 0x77cu, 0x107bu);
    wr32(param_1 + 0x790u, 0x80u);
    wrf32d(param_1 + 0x7a8u, f0);
    return param_1;
}
