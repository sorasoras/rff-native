#include "tc_rt.h"

u32 fn_8020f764(u32 param_r3)
{
    TcArgs a = {0};
    a.f[0] = (f64)rdf32(0x804b9e60u);
    a.r[0] = param_r3;
    (void)tc_call(0x80101108u, &a);
    return 0u;
}
