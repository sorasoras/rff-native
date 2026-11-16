#include "tc_rt.h"

void fn_8032b7c0(f64 param_1, f64 param_2, f64 param_3, f64 param_4, f64 param_5, f64 param_6, f64 param_7, f64 param_8, u32 param_9)
{
    f64 f0 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f11 = (f64)rdf32(0x817fe008u);
    f10 = (f64)rdf32(0x817fe00cu);
    f9 = (f64)rdf32(0x817fe010u);
    f0 = (f64)rdf32(0x817fe014u);
    wrf32d(param_9, param_1);
    wrf32d(param_9 + 4u, param_2);
    wrf32d(param_9 + 8u, param_3);
    wrf32d(param_9 + 0xcu, param_4);
    wrf32d(param_9 + 0x10u, param_5);
    wrf32d(param_9 + 0x14u, param_6);
    wrf32d(param_9 + 0x18u, param_7);
    wrf32d(param_9 + 0x1cu, param_8);
    wrf32d(param_9 + 0x20u, f11);
    wrf32d(param_9 + 0x24u, f10);
    wrf32d(param_9 + 0x28u, f9);
    wrf32d(param_9 + 0x2cu, f0);
    return;
}
