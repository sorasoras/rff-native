#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_801cdcb8(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    f27 = (f64)rdf32(0x80575e98u);
    f30 = (f64)rdf32(0x80575ef0u);
    f29 = (f64)rdf32(0x80575ea8u);
    f26 = (f64)(f32)(px_b2f((u64)rd16((u32)param_1 + 0x1deu) | 0x4330000000000000ull) - rdf64(0x80575ec8u));
    f8 = (f64)rdf32(0x80575ea0u);
    f28 = (f64)rdf32(0x80575eecu);
    f31 = (f64)rdf32(0x80575ed8u);
    f13 = (f64)rdf32(0x80575eb8u);
    f12 = (f64)rdf32(0x80575ef4u);
    f11 = (f64)rdf32(0x80575ef8u);
    f10 = (f64)rdf32(0x80575ee4u);
    f9 = (f64)rdf32(0x80575efcu);
    f7 = (f64)rdf32(0x80575f00u);
    f6 = (f64)rdf32(0x80575f04u);
    f5 = (f64)rdf32(0x80575f08u);
    f4 = (f64)rdf32(0x80575f0cu);
    f3 = (f64)rdf32(0x80575f10u);
    f2 = (f64)rdf32(0x80575f14u);
    f1 = (f64)rdf32(0x80575f18u);
    f0 = (f64)rdf32(0x80575f1cu);
    wrf32d((u32)param_1 + 0xd50u, f27);
    wrf32d((u32)param_1 + 0xd54u, f28);
    wrf32d((u32)param_1 + 0xd58u, f29);
    wrf32d((u32)param_1 + 0xd5cu, f30);
    wrf32d((u32)param_1 + 0xd60u, f31);
    wrf32d((u32)param_1 + 0xd64u, f30);
    wrf32d((u32)param_1 + 0xd68u, f13);
    wrf32d((u32)param_1 + 0xd6cu, f27);
    wrf32d((u32)param_1 + 0xd70u, f27);
    wrf32d((u32)param_1 + 0xd74u, f26);
    wrf32d((u32)param_1 + 0xdc0u, f12);
    wrf32d((u32)param_1 + 0xdc4u, f11);
    wrf32d((u32)param_1 + 0xdc8u, f27);
    wrf32d((u32)param_1 + 0xdccu, f10);
    wrf32d((u32)param_1 + 0xde0u, f9);
    wrf32d((u32)param_1 + 0xde4u, f8);
    wrf32d((u32)param_1 + 0xde8u, f7);
    wrf32d((u32)param_1 + 0xdecu, f30);
    wrf32d((u32)param_1 + 0xdf0u, f29);
    wrf32d((u32)param_1 + 0xdf4u, f6);
    wrf32d((u32)param_1 + 0xdf8u, f5);
    wrf32d((u32)param_1 + 0xdfcu, f4);
    wrf32d((u32)param_1 + 0xe00u, f3);
    wr32((u32)param_1 + 0xe04u, 0x32u);
    wr32((u32)param_1 + 0xe08u, 0x50u);
    wrf32d((u32)param_1 + 0xe0cu, f2);
    wr32((u32)param_1 + 0xe10u, 6u);
    wrf32d((u32)param_1 + 0xe18u, f1);
    wrf32d((u32)param_1 + 0xe14u, f8);
    wrf32d((u32)param_1 + 0xe1cu, f0);
    return;
}
