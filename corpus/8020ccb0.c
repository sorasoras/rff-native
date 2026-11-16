#include "tc_rt.h"

u32 fn_8020ccb0(u32 param_1)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80070a70u, &a);
    f1 = (f64)rdf32(0x805767c8u);
    wr32(param_1, 0x80378230u);
    wrf32d(param_1 + 0x84u, f1);
    wrf32d(param_1 + 0x80u, f1);
    wrf32d(param_1 + 0x7cu, f1);
    wr32(param_1 + 0x78u, 0x21u);
    wrf32d(param_1 + 0x7cu, (f64)rdf32(0x804890c8u));
    wrf32d(param_1 + 0x80u, (f64)rdf32(0x804890ccu));
    wrf32d(param_1 + 0x84u, (f64)rdf32(0x804890d0u));
    wrf32d(param_1 + 0x88u, f1);
    wrf32d(param_1 + 0x8cu, f1);
    wr32(param_1 + 0x90u, 0u);
    wr32(param_1 + 0x94u, 0u);
    wr32(param_1 + 0x74u, 0u);
    return param_1;
}
