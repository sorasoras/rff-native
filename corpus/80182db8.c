#include "tc_rt.h"

void fn_80182db8(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0, f30 = 0.0, f31 = 0.0;
    f5 = (f64)rdf32(0x805750b8u);
    f6 = (f64)rdf32(0x80575144u);
    f3 = (f64)rdf32(0x805750bcu);
    f30 = (f64)rdf32(0x80575124u);
    f31 = (f64)rdf32(0x80575128u);
    f13 = (f64)rdf32(0x8057512cu);
    f12 = (f64)rdf32(0x80575130u);
    f11 = (f64)rdf32(0x80575134u);
    f10 = (f64)rdf32(0x80575138u);
    f9 = (f64)rdf32(0x805750d8u);
    f8 = (f64)rdf32(0x8057513cu);
    f7 = (f64)rdf32(0x80575140u);
    f4 = (f64)rdf32(0x80575148u);
    f2 = (f64)rdf32(0x8057514cu);
    f1 = (f64)rdf32(0x80575150u);
    f0 = (f64)rdf32(0x80575154u);
    wrf32d((u32)param_1 + 0x108u, (f64)rdf32(0x80575120u));
    wrf32d((u32)param_1 + 0x10cu, f30);
    wrf32d((u32)param_1 + 0x110u, f31);
    wrf32d((u32)param_1 + 0x114u, f13);
    wrf32d((u32)param_1 + 0x118u, f12);
    wrf32d((u32)param_1 + 0x11cu, f11);
    wrf32d((u32)param_1 + 0x124u, f10);
    wrf32d((u32)param_1 + 0x128u, f9);
    wrf32d((u32)param_1 + 0x12cu, f8);
    wrf32d((u32)param_1 + 0x148u, f7);
    wrf32d((u32)param_1 + 0x14cu, f6);
    wrf32d((u32)param_1 + 0x150u, f5);
    wrf32d((u32)param_1 + 0x154u, f5);
    wrf32d((u32)param_1 + 0x158u, f5);
    wrf32d((u32)param_1 + 0x130u, f6);
    wrf32d((u32)param_1 + 0x134u, f4);
    wrf32d((u32)param_1 + 0x120u, f3);
    wrf32d((u32)param_1 + 0x138u, f3);
    wrf32d((u32)param_1 + 0x15cu, f2);
    wrf32d((u32)param_1 + 0x160u, f1);
    wrf32d((u32)param_1 + 0x164u, f0);
    wr32((u32)param_1 + 0x168u, 1u);
    wr32((u32)param_1 + 0x13cu, 2u);
    wr32((u32)param_1 + 0x140u, 1u);
    wr32((u32)param_1 + 0x144u, 1u);
    wr32((u32)param_1 + 0xf8u, 0u);
    return;
}
