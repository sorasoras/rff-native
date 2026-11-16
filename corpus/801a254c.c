#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_801a254c(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0, f30 = 0.0, f31 = 0.0;
    f31 = (f64)rdf32(0x805758ccu);
    f10 = (f64)rdf32(0x805758d8u);
    f8 = (f64)rdf32(0x805758e0u);
    f30 = (f64)(f32)(px_b2f((u64)rd16((u32)param_1 + 0x1deu) | 0x4330000000000000ull) - rdf64(0x805758a0u));
    f7 = (f64)rdf32(0x805758e4u);
    f1 = (f64)rdf32(0x805758c8u);
    f0 = (f64)rdf32(0x805758d0u);
    f13 = (f64)rdf32(0x805758d4u);
    f12 = (f64)rdf32(0x80575868u);
    f11 = (f64)rdf32(0x80575894u);
    f9 = (f64)rdf32(0x805758dcu);
    f6 = (f64)rdf32(0x805758e8u);
    f5 = (f64)rdf32(0x805758ecu);
    wrf32d((u32)param_1 + 0xd1cu, (f64)rdf32(0x8057586cu));
    f4 = (f64)rdf32(0x805758f0u);
    wrf32d((u32)param_1 + 0xd20u, f1);
    f3 = (f64)rdf32(0x805758f4u);
    wrf32d((u32)param_1 + 0xd2cu, f0);
    f2 = (f64)rdf32(0x8057587cu);
    wrf32d((u32)param_1 + 0xd24u, f31);
    f1 = (f64)rdf32(0x805758f8u);
    wrf32d((u32)param_1 + 0xd28u, f31);
    f0 = (f64)rdf32(0x80575890u);
    wrf32d((u32)param_1 + 0xd30u, f31);
    wrf32d((u32)param_1 + 0xd34u, f13);
    wrf32d((u32)param_1 + 0xd38u, f12);
    wrf32d((u32)param_1 + 0xd3cu, f31);
    wrf32d((u32)param_1 + 0xd40u, f11);
    wrf32d((u32)param_1 + 0xd44u, f10);
    wrf32d((u32)param_1 + 0xd48u, f10);
    wrf32d((u32)param_1 + 0xd4cu, f9);
    wrf32d((u32)param_1 + 0xd54u, f30);
    wrf32d((u32)param_1 + 0xd6cu, f31);
    wrf32d((u32)param_1 + 0xd70u, f8);
    wrf32d((u32)param_1 + 0xd74u, f7);
    wrf32d((u32)param_1 + 0xd78u, f8);
    wrf32d((u32)param_1 + 0xd7cu, f7);
    wrf32d((u32)param_1 + 0xd80u, f6);
    wrf32d((u32)param_1 + 0xd84u, f5);
    wrf32d((u32)param_1 + 0xd88u, (f64)rdf32(0x80371168u));
    wrf32d((u32)param_1 + 0xd8cu, (f64)rdf32(0x8037116cu));
    wrf32d((u32)param_1 + 0xd90u, (f64)rdf32(0x80371170u));
    wrf32d((u32)param_1 + 0xd94u, (f64)rdf32(0x80371174u));
    wrf32d((u32)param_1 + 0xda4u, f4);
    wrf32d((u32)param_1 + 0xdacu, f3);
    wrf32d((u32)param_1 + 0xdb8u, (f64)rdf32(0x805708e8u));
    wrf32d((u32)param_1 + 0xdbcu, (f64)rdf32(0x805708ecu));
    wrf32d((u32)param_1 + 0xd98u, f2);
    wrf32d((u32)param_1 + 0xd9cu, f4);
    wrf32d((u32)param_1 + 0xda0u, f1);
    wrf32d((u32)param_1 + 0xda8u, f0);
    wr32((u32)param_1 + 0xdb0u, 2u);
    wr32((u32)param_1 + 0xdb4u, 3u);
    wrf32d((u32)param_1 + 0xde4u, f10);
    return;
}
