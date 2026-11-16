#include "tc_rt.h"

u32 fn_801b1398(u32 param_1)
{
    u32 r31 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x801a0d1cu, &a);
    wr32(param_1, 0x803724fcu);
    a.r[0] = param_1 + 0x84u;
    a.r[1] = 0x8018dbd0u;
    a.r[2] = 0x8018db78u;
    a.r[3] = 0x94u;
    a.r[4] = 8u;
    (void)tc_call(0x80255624u, &a);
    f0 = (f64)rdf32(0x80575b90u);
    r31 = param_1 + 0x604u;
    wrf32d(param_1 + 0x5f4u, f0);
    wrf32d(param_1 + 0x5f0u, f0);
    wrf32d(param_1 + 0x5ecu, f0);
    wrf32d(param_1 + 0x600u, f0);
    wrf32d(param_1 + 0x5fcu, f0);
    wrf32d(param_1 + 0x5f8u, f0);
    a.r[0] = r31;
    (void)tc_call(0x8006f1b4u, &a);
    f0 = (f64)rdf32(0x80575b90u);
    wrf32d(param_1 + 0x738u, f0);
    wr32(r31, 0x80350198u);
    wrf32d(param_1 + 0x734u, f0);
    wrf32d(param_1 + 0x730u, f0);
    wr32(param_1 + 0x78u, 0u);
    wr32(param_1 + 0x7cu, 0u);
    return param_1;
}
