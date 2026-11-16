#include "tc_rt.h"

void fn_80190488(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f7 = (f64)rdf32(0x80575374u);
    f5 = (f64)rdf32(0x8057537cu);
    f4 = (f64)rdf32(0x80575380u);
    f3 = (f64)rdf32(0x80575384u);
    f2 = (f64)rdf32(0x80575388u);
    f11 = (f64)rdf32(0x80575364u);
    f10 = (f64)rdf32(0x80575368u);
    f9 = (f64)rdf32(0x8057536cu);
    f8 = (f64)rdf32(0x80575370u);
    f6 = (f64)rdf32(0x80575378u);
    f1 = (f64)rdf32(0x8057538cu);
    f0 = (f64)rdf32(0x80575390u);
    wrf32d((u32)param_1 + 0x49cu, (f64)rdf32(0x8057533cu));
    wrf32d((u32)param_1 + 0x4a0u, f11);
    wrf32d((u32)param_1 + 0x4a4u, f10);
    wrf32d((u32)param_1 + 0x4a8u, f9);
    wrf32d((u32)param_1 + 0x4acu, f8);
    wrf32d((u32)param_1 + 0x4b0u, f7);
    wrf32d((u32)param_1 + 0x4b4u, f6);
    wrf32d((u32)param_1 + 0x4b8u, f5);
    wrf32d((u32)param_1 + 0x4bcu, f4);
    wrf32d((u32)param_1 + 0x4c0u, f3);
    wrf32d((u32)param_1 + 0x4c4u, f2);
    wrf32d((u32)param_1 + 0x4c8u, f7);
    wrf32d((u32)param_1 + 0x4ccu, f1);
    wrf32d((u32)param_1 + 0x4d0u, f5);
    wrf32d((u32)param_1 + 0x4d4u, f4);
    wrf32d((u32)param_1 + 0x4d8u, f3);
    wrf32d((u32)param_1 + 0x4dcu, f2);
    wrf32d((u32)param_1 + 0x4e0u, f7);
    wrf32d((u32)param_1 + 0x4e4u, f0);
    wrf32d((u32)param_1 + 0x4e8u, f5);
    wrf32d((u32)param_1 + 0x4ecu, f4);
    wrf32d((u32)param_1 + 0x4f0u, f3);
    wrf32d((u32)param_1 + 0x4f4u, f2);
    wrf32d((u32)param_1 + 0x4f8u, f7);
    return;
}
