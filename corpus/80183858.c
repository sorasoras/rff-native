#include "tc_rt.h"

u32 fn_80183858(u32 param_1)
{
    u32 r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800d9ce0u, &a);
    r31 = param_1 + 0x134u;
    wr32(param_1, 0x8036f338u);
    a.r[0] = r31;
    (void)tc_call(0x8006f1b4u, &a);
    f1 = (f64)rdf32(0x80575168u);
    f0 = (f64)rdf32(0x8057516cu);
    wr32(r31, 0x80350198u);
    wrf32d(param_1 + 0x224u, f1);
    wrf32d(param_1 + 0x220u, f1);
    wrf32d(param_1 + 0x21cu, f1);
    wrf32d(param_1 + 0x230u, f1);
    wrf32d(param_1 + 0x22cu, f1);
    wrf32d(param_1 + 0x228u, f1);
    wrf32d(param_1 + 0x24cu, f0);
    wrf32d(param_1 + 0x25cu, f1);
    wrf32d(param_1 + 0x26cu, f1);
    wrf32d(param_1 + 0x250u, f1);
    wrf32d(param_1 + 0x260u, f0);
    wrf32d(param_1 + 0x270u, f1);
    wrf32d(param_1 + 0x254u, f1);
    wrf32d(param_1 + 0x264u, f1);
    wrf32d(param_1 + 0x274u, f0);
    wrf32d(param_1 + 0x258u, f1);
    wrf32d(param_1 + 0x268u, f1);
    wrf32d(param_1 + 0x278u, f1);
    wrf32d(param_1 + 0x284u, f1);
    wrf32d(param_1 + 0x280u, f1);
    wrf32d(param_1 + 0x27cu, f1);
    wr32(param_1 + 0x288u, 0u);
    wr32(param_1 + 0x234u, 0u);
    wr32(param_1 + 0x240u, 0u);
    wr32(param_1 + 0x238u, 0x40u);
    wr32(param_1 + 0x23cu, 2u);
    wr16(param_1 + 0x28cu, 0xffffu);
    wrf32d(param_1 + 0x244u, f1);
    wr32(param_1 + 0x120u, 4u);
    wr32(param_1 + 0x12cu, 0u);
    wrf32d(param_1 + 0x218u, f0);
    return param_1;
}
