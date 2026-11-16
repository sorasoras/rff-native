#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_802b83c0(u32 param_1)
{
    u32 r0 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r29 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0;
    r0 = param_1 + 0xc4u;
    f6 = (f64)rdf32(0x805773a0u);
    f5 = (f64)rdf32(0x805773a4u);
    f4 = (f64)rdf32(0x805773a8u);
    r29 = param_1 + 0xe8u;
    f3 = (f64)rdf32(0x805773acu);
    wr8(param_1 + 0x51du, 0u);
    f1 = (f64)rdf32(param_1 + 0xa4u);
    r5 = (u32)rd16(param_1 + 0x4d0u);
    f2 = (f64)rdf32(0x80577390u);
    r11 = rd32(param_1 + 0xb0u);
    r10 = rd32(param_1 + 0xb4u);
    wrf32d(param_1 + 0x4f4u, (f64)(f32)(f6 + (f64)rdf32(0x80570eacu)));
    wrf32d(param_1 + 0x4fcu, (f64)(f32)(f5 - (f64)rdf32(0x80570eacu)));
    wrf32d(param_1 + 0x4f8u, (f64)(f32)(f4 + (f64)rdf32(0x80570eacu)));
    wrf32d(param_1 + 0x500u, (f64)(f32)(f3 - (f64)rdf32(0x80570eacu)));
    wrf32d(param_1 + 0x504u, (f64)(f32)px_fdiv(f5, (f64)rdf32(0x80570eb4u)));
    wrf32d(param_1 + 0x508u, (f64)(f32)px_fdiv(f6, (f64)rdf32(0x80570eb4u)));
    f0 = (f64)rdf32(0x80570ea0u);
    f0 = (f64)(f32)(f0 * f0);
    wrf32d(param_1 + 0x50cu, f0);
    wrf32d(param_1 + 0x514u, (f64)rdf32(0x80571bb4u));
    f3 = (f64)rdf32(0x80571bb0u);
    f0 = (f64)(f32)px_fdiv(f3, f1);
    wrf32d(param_1 + 0x510u, f3);
    wr32(param_1 + 8u, 0u);
    wr32(param_1 + 4u, 0u);
    wr32(param_1, 0u);
    wr16(param_1 + 0x4ccu, 0u);
    wr16(param_1 + 0x4ceu, (u16)r5);
    wr8(param_1 + 0x5eu, 0u);
    wr8(param_1 + 0x4cau, 0u);
    r8 = rd32(0x80571ba8u);
    r7 = rd32(0x80571bacu);
    wrf32d(param_1 + 0x4b8u, f5);
    wrf32d(param_1 + 0x4bcu, f2);
    r6 = rd32(param_1 + 0x4b8u);
    wr32(param_1 + 0x28u, r8);
    r5 = rd32(param_1 + 0x4bcu);
    wr32(param_1 + 0x2cu, r7);
    wr32(param_1 + 0x20u, r8);
    wr32(param_1 + 0x24u, r7);
    wrf32d(param_1 + 0x30u, f2);
    wrf32d(param_1 + 0x4b0u, f5);
    wrf32d(param_1 + 0x34u, f5);
    wrf32d(param_1 + 0x4b4u, f2);
    wrf32d(param_1 + 0x38u, f2);
    r31 = rd32(0x80571ba8u);
    r12 = rd32(0x80571bacu);
    wrf32d(param_1 + 0x14u, f2);
    wrf32d(param_1 + 0xcu, f2);
    r7 = rd32(param_1 + 0x14u);
    wrf32d(param_1 + 0x10u, f6);
    r9 = rd32(param_1 + 0xcu);
    r8 = rd32(param_1 + 0x10u);
    wr32(param_1 + 0x3cu, r31);
    wr32(param_1 + 0x40u, r12);
    wrf32d(param_1 + 0x44u, f2);
    wrf32d(param_1 + 0x54u, f5);
    wrf32d(param_1 + 0x58u, f2);
    wrf32d(param_1 + 0x48u, f1);
    wrf32d(param_1 + 0x50u, f2);
    wrf32d(param_1 + 0x4cu, f2);
    wrf32d(param_1 + 0x49cu, f1);
    wrf32d(param_1 + 0x4a0u, f0);
    wrf32d(param_1 + 0x490u, f0);
    wr32(param_1 + 0x494u, r11);
    wr32(param_1 + 0x498u, r10);
    wrf32d(param_1 + 0x18u, f5);
    wrf32d(param_1 + 0x1cu, f2);
    wr32(param_1 + 0x4a4u, r9);
    wr32(param_1 + 0x4a8u, r8);
    wr32(param_1 + 0x4acu, r7);
    wr32(param_1 + 0x4c0u, r6);
    wr32(param_1 + 0x4c4u, r5);
    wr16(param_1 + 0x4c8u, rd16(0x80570ea8u));
    wr16(param_1 + 0x10cu, 0u);
    do {
        wr8(r29 + 8u, 0xffu);
        r29 = r29 - 0xcu;
    } while (r29 >= r0);
    r5 = param_1 + 0x100u;
    r0 = param_1 + 0xf4u;
    do {
        wr8(r5 + 8u, 0xffu);
        r5 = r5 - 0xcu;
    } while (r5 >= r0);
    wr8(param_1 + 0x10fu, 0u);
    wr8(param_1 + 0x51eu, 1u);
    return;
}
