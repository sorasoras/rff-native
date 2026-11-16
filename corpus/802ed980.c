#include "tc_rt.h"

u32 fn_802ed980(u32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    f1 = (f64)rdf32(0x805774e8u);
    f0 = (f64)rdf32(0x805774ecu);
    wr32(param_1, 0x8039d000u);
    wrf32d(param_1 + 0x34u, f1);
    wrf32d(param_1 + 0x38u, f1);
    wrf32d(param_1 + 0x3cu, f1);
    wrf32d(param_1 + 0x40u, f1);
    wrf32d(param_1 + 0x44u, f0);
    wrf32d(param_1 + 0x48u, f0);
    wrf32d(param_1 + 0x4cu, f0);
    a.r[0] = param_1 + 0x50u;
    a.r[1] = 0u;
    a.r[2] = 1u;
    (void)tc_call(0x8000443cu, &a);
    a.r[0] = param_1 + 4u;
    (void)tc_call(0x80233740u, &a);
    return param_1;
}
