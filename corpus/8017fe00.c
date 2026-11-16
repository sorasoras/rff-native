#include "tc_rt.h"

u32 fn_8017fe00(u32 param_1)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80083d34u, &a);
    f1 = (f64)rdf32(0x805750b8u);
    wrf32d(param_1 + 0xb8u, f1);
    wr32(param_1, 0x8036f2c8u);
    wrf32d(param_1 + 0xb4u, f1);
    wrf32d(param_1 + 0xb0u, f1);
    wrf32d(param_1 + 0xd0u, f1);
    wrf32d(param_1 + 0xccu, f1);
    wrf32d(param_1 + 0xc8u, f1);
    wrf32d(param_1 + 0xecu, f1);
    wrf32d(param_1 + 0xe8u, f1);
    wrf32d(param_1 + 0xe4u, f1);
    wr32(param_1 + 0x104u, 0x8036f32cu);
    wr32(param_1 + 0xbcu, 0u);
    wr32(param_1 + 0xacu, 0u);
    wrf32d(param_1 + 0xb0u, (f64)rdf32(0x804890d4u));
    wrf32d(param_1 + 0xb4u, (f64)rdf32(0x804890d8u));
    wrf32d(param_1 + 0xb8u, (f64)rdf32(0x804890dcu));
    wrf32d(param_1 + 0xd4u, f1);
    wr32(param_1 + 0xe0u, 1u);
    wrf32d(param_1 + 0xd8u, f1);
    wr32(param_1 + 0xdcu, 1u);
    wr32(param_1 + 0xf4u, 1u);
    wrf32d(param_1 + 0xf0u, f1);
    wr32(param_1 + 0xc4u, 0u);
    wr32(param_1 + 0xc0u, 0u);
    wr32(param_1 + 0xf8u, 0u);
    wr32(param_1 + 0xfcu, 0xffffffffu);
    wr32(param_1 + 0x16cu, 1u);
    wr32(param_1 + 0x180u, 0u);
    wr32(param_1 + 0x188u, 0u);
    return param_1;
}
