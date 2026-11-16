#include "tc_rt.h"

u32 fn_8007dde4(u32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80061ff8u, &a);
    f0 = (f64)rdf32(0x80572860u);
    wr32(param_1, 0x80350e58u);
    wrf32d(param_1 + 0x178u, f0);
    wrf32d(param_1 + 0x174u, f0);
    wrf32d(param_1 + 0x170u, f0);
    wrf32d(param_1 + 0x184u, f0);
    wrf32d(param_1 + 0x180u, f0);
    wrf32d(param_1 + 0x17cu, f0);
    wrf32d(param_1 + 0x198u, f0);
    wrf32d(param_1 + 0x194u, f0);
    wrf32d(param_1 + 0x190u, f0);
    wrf32d(param_1 + 0x1f4u, f0);
    wrf32d(param_1 + 0x1f0u, f0);
    wrf32d(param_1 + 0x1ecu, f0);
    a.r[0] = param_1 + 0x1fcu;
    (void)tc_call(0x800949d0u, &a);
    f0 = (f64)rdf32(0x80572860u);
    wrf32d(param_1 + 0x214u, f0);
    wrf32d(param_1 + 0x210u, f0);
    wrf32d(param_1 + 0x20cu, f0);
    wrf32d(param_1 + 0x220u, f0);
    wrf32d(param_1 + 0x21cu, f0);
    wrf32d(param_1 + 0x218u, f0);
    wrf32d(param_1 + 0x23cu, f0);
    wrf32d(param_1 + 0x238u, f0);
    wrf32d(param_1 + 0x234u, f0);
    a.r[0] = param_1 + 0x27cu;
    (void)tc_call(0x800a2270u, &a);
    wr32(param_1 + 0x150u, 0xffffffffu);
    return param_1;
}
