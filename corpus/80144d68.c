#include "tc_rt.h"

u32 fn_80144d68(u32 param_1)
{
    u32 r31 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    r31 = param_1 + 4u;
    a.r[0] = r31;
    (void)tc_call(0x80079efcu, &a);
    f0 = (f64)rdf32(0x80574550u);
    wrf32d(r31 + 0x7cu, f0);
    wrf32d(r31 + 0x78u, f0);
    wrf32d(r31 + 0x74u, f0);
    a.r[0] = param_1 + 0x94u;
    a.r[1] = 0x80144e6cu;
    a.r[2] = 0x80142ef8u;
    a.r[3] = 0x90u;
    a.r[4] = 6u;
    (void)tc_call(0x80255624u, &a);
    r31 = param_1 + 0x3f4u;
    a.r[0] = r31;
    (void)tc_call(0x80079efcu, &a);
    f0 = (f64)rdf32(0x80574550u);
    wrf32d(r31 + 0x78u, f0);
    wrf32d(r31 + 0x74u, f0);
    wrf32d(r31 + 0x7cu, f0);
    wrf32d(param_1 + 0x108u, f0);
    wrf32d(param_1 + 0x10cu, f0);
    wrf32d(param_1 + 0x114u, f0);
    wrf32d(param_1 + 0x118u, f0);
    wrf32d(param_1 + 0x198u, f0);
    wrf32d(param_1 + 0x19cu, f0);
    wrf32d(param_1 + 0x1a4u, f0);
    wrf32d(param_1 + 0x1a8u, f0);
    wrf32d(param_1 + 0x228u, f0);
    wrf32d(param_1 + 0x22cu, f0);
    wrf32d(param_1 + 0x234u, f0);
    wrf32d(param_1 + 0x238u, f0);
    wrf32d(param_1 + 0x2b8u, f0);
    wrf32d(param_1 + 0x2bcu, f0);
    wrf32d(param_1 + 0x2c4u, f0);
    wrf32d(param_1 + 0x2c8u, f0);
    wrf32d(param_1 + 0x348u, f0);
    wrf32d(param_1 + 0x34cu, f0);
    wrf32d(param_1 + 0x354u, f0);
    wrf32d(param_1 + 0x358u, f0);
    wrf32d(param_1 + 0x3d8u, f0);
    wrf32d(param_1 + 0x3dcu, f0);
    wrf32d(param_1 + 0x3e4u, f0);
    wrf32d(param_1 + 0x3e8u, f0);
    wrf32d(param_1 + 0x468u, f0);
    wrf32d(param_1 + 0x46cu, f0);
    wrf32d(param_1 + 0x474u, f0);
    wrf32d(param_1 + 0x478u, f0);
    wrf32d(param_1, f0);
    wrf32d(param_1 + 0x484u, f0);
    return param_1;
}
