#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

static f64 px_hi(f64 x)
{
    return (f64)px_w2f((u32)(px_f2b(x) >> 32));
}

static f64 px_lo(f64 x)
{
    return (f64)px_w2f((u32)px_f2b(x));
}

void fn_802d96f0(u32 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    u32 r3 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, px_hi(0.0));
    wrf32d(0x817fdff8u, px_lo(0.0));
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    f1 = (f64)rdf32(0x80348b00u);
    r29 = (u32)param_3;
    r30 = (u32)param_4;
    wrf32d(param_2, f1);
    wrf32d(param_2 + 8u, f1);
    wrf32d(param_2 + 4u, f1);
    wrf32d(param_2 + 0xcu, f1);
    a.f[0] = f1;
    a.f[1] = f1;
    a.r[0] = param_1;
    (void)tc_call(0x802d72e8u, &a);
    f31 = (f64)rdf32(0x80348b00u);
    do {
        wrf32d(0x817fdfc8u, f31);
        wrf32d(0x817fdfccu, f31);
        wrf32d(0x817fdfd0u, f31);
        wrf32d(0x817fdfd4u, f31);
        a.r[0] = param_1;
        a.r[1] = 0x817fdfc8u;
        a.r[2] = r29;
        a.r[3] = r30;
        r3 = tc_call(0x802d9314u, &a);
        f1 = (f64)rdf32(0x817fdfc8u);
        f0 = (f64)rdf32(param_2);
        r29 = r29 + ((r3 << 1u) & 0xfffffffeu);
        r30 = r30 - r3;
        if (!(f0 > f1)) {
            f1 = f0;
        }
        wrf32d(param_2, f1);
        f0 = (f64)rdf32(param_2 + 4u);
        f1 = (f64)rdf32(0x817fdfccu);
        if (!(f0 > f1)) {
            f1 = f0;
        }
        wrf32d(param_2 + 4u, f1);
        f0 = (f64)rdf32(param_2 + 8u);
        f1 = (f64)rdf32(0x817fdfd0u);
        if (!(f0 < f1)) {
            f1 = f0;
        }
        wrf32d(param_2 + 8u, f1);
        f0 = (f64)rdf32(param_2 + 0xcu);
        f1 = (f64)rdf32(0x817fdfd4u);
        if (!(f0 < f1)) {
            f1 = f0;
        }
        wrf32d(param_2 + 0xcu, f1);
    } while ((s32)r30 > 0);
    return;
}
