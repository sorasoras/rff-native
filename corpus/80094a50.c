#include "tc_rt.h"

void fn_80094a50(f64 param_1, f64 param_2, f64 param_3, s32 param_4, u32 param_5, u32 param_6, u32 param_7, u32 param_8, u32 param_9, u32 param_10, u32 param_11)
{
    f64 f0 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    TcArgs a = {0};
    f12 = (f64)rdf32(param_8);
    f11 = (f64)rdf32(param_8 + 4u);
    f10 = (f64)rdf32(param_8 + 8u);
    f9 = (f64)rdf32(param_7);
    f8 = (f64)rdf32(param_7 + 4u);
    f7 = (f64)rdf32(param_7 + 8u);
    f6 = (f64)rdf32(param_6);
    f5 = (f64)rdf32(param_6 + 4u);
    f4 = (f64)rdf32(param_6 + 8u);
    f0 = (f64)rdf32(0x80572a30u);
    wrf32d((u32)param_4 + 0x108u, param_2);
    wrf32d((u32)param_4 + 0xfcu, f12);
    wrf32d((u32)param_4 + 0x100u, f11);
    wrf32d((u32)param_4 + 0x104u, f10);
    wrf32d((u32)param_4 + 0xf0u, f9);
    wrf32d((u32)param_4 + 0xf4u, f8);
    wrf32d((u32)param_4 + 0xf8u, f7);
    wrf32d((u32)param_4 + 0xe4u, f6);
    wrf32d((u32)param_4 + 0xe8u, f5);
    wrf32d((u32)param_4 + 0xecu, f4);
    wr32((u32)param_4 + 0x10cu, param_11);
    wrf32d((u32)param_4 + 0x110u, f0);
    a.f[0] = param_1;
    a.f[1] = param_3;
    a.r[0] = (u32)param_4;
    a.r[1] = 1u;
    a.r[2] = param_6;
    a.r[3] = param_5;
    a.r[4] = param_9;
    a.r[5] = param_10;
    (void)tc_call(0x8006f570u, &a);
    a.r[0] = (u32)param_4;
    (void)tc_call(0x8006ff58u, &a);
    wr32((u32)param_4 + 0x40u, 2u);
    return;
}
