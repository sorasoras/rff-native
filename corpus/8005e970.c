#include "tc_rt.h"

u32 fn_8005e970(s32 param_1)
{
    u32 r3 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = (u32)param_1;
    a.r[1] = 0x100u;
    (void)tc_call(0x8005df40u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 0x100u;
    (void)tc_call(0x8005df48u, &a);
    a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
    (void)tc_call(0x801e6900u, &a);
    if (rd32(0x805706d0u) != 7u) {
        return 1u;
    }
    a.r[0] = 0x804b9da0u;
    a.r[1] = 0u;
    (void)tc_call(0x8010a91cu, &a);
    r3 = rd32(0x804bb728u);
    f1 = (f64)(f32)((f64)rdf32(0x80572430u) * (f64)rdf32(0x804bb72cu));
    if (r3 != 0u) {
        a.f[0] = f1;
        a.r[0] = r3;
        a.r[1] = 5u;
        (void)tc_call(0x802f7194u, &a);
    }
    a.r[0] = 0x803d29f8u;
    (void)tc_call(0x800978dcu, &a);
    (void)tc_call(0x80075520u, &a);
    f2 = (f64)rdf32(0x805724e8u);
    wr32((u32)param_1 + 0xcu, 0xeu);
    f0 = (f64)rdf32(0x805724ecu);
    wrf32d(0x817fdfecu, (f64)rdf32(0x805724a0u));
    r3 = rd32(0x8057115cu);
    wrf32d(0x817fdfe8u, f2);
    wrf32d(0x817fdff0u, f0);
    a.r[0] = r3;
    a.r[1] = 0u;
    a.r[2] = 0x817fdfe8u;
    (void)tc_call(0x80073fe4u, &a);
    a.r[0] = rd32((u32)param_1 + 0x14u);
    a.r[1] = rd32(0x8057115cu);
    (void)tc_call(0x8005c40cu, &a);
    wr32(0x80571168u, 0u);
    r30 = 0u;
    wr32(0x80486da8u, 0x7fu);
    do {
        a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
        (void)tc_call(0x80056604u, &a);
        r30 = r30 + 1u;
    } while (r30 < 0x64u);
    return 1u;
}
