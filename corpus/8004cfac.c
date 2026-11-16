#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_8004cfac(u32 param_1, s32 param_2)
{
    u32 c0eq = 0, c0lt = 0, ctr = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0;
    TcArgs a = {0};
    c0eq = (rd32(param_1 + 0xf8u) & 1u) == 0u;
    wr32(param_1, (u32)param_2);
    if (c0eq) {
        a.r[0] = param_1 + 0x28u;
        a.r[1] = param_1 + 4u;
        a.r[2] = param_1 + 0x10u;
        a.r[3] = (u32)(s16)rd16(param_1 + 0xdau);
        (void)tc_call(0x800423e8u, &a);
    } else {
        a.r[0] = param_1 + 0x28u;
        a.r[1] = param_1 + 4u;
        a.r[2] = param_1 + 0x10u;
        a.r[3] = param_1 + 0x1cu;
        (void)tc_call(0x80042290u, &a);
    }
    c0lt = param_2 < 1;
    if ((u32)param_2 == 1u) {
        a.r[0] = param_1;
        (void)tc_call(0x8004cef8u, &a);
    } else if (!c0lt) {
        if (param_2 < 3) {
            a.r[0] = param_1;
            (void)tc_call(0x8004cf88u, &a);
        }
    } else if (param_2 >= 0) {
        a.r[0] = param_1;
        (void)tc_call(0x8004cea0u, &a);
    }
    r3 = param_1;
    ctr = 4u;
    do {
        wrf32d(r3 + 0x98u, ppc_fmadds((f64)rdf32(param_1 + 0x48u), (f64)rdf32(r3 + 0x60u), ppc_fmadds((f64)rdf32(param_1 + 0x28u), (f64)rdf32(r3 + 0x58u), (f64)(f32)((f64)rdf32(param_1 + 0x38u) * (f64)rdf32(r3 + 0x5cu)))));
        wrf32d(r3 + 0x9cu, ppc_fmadds((f64)rdf32(param_1 + 0x4cu), (f64)rdf32(r3 + 0x60u), ppc_fmadds((f64)rdf32(param_1 + 0x2cu), (f64)rdf32(r3 + 0x58u), (f64)(f32)((f64)rdf32(param_1 + 0x3cu) * (f64)rdf32(r3 + 0x5cu)))));
        wrf32d(r3 + 0xa0u, ppc_fmadds((f64)rdf32(param_1 + 0x50u), (f64)rdf32(r3 + 0x60u), ppc_fmadds((f64)rdf32(param_1 + 0x30u), (f64)rdf32(r3 + 0x58u), (f64)(f32)((f64)rdf32(param_1 + 0x40u) * (f64)rdf32(r3 + 0x5cu)))));
        f0 = (f64)(f32)((f64)rdf32(r3 + 0x64u) + ppc_fmadds((f64)rdf32(param_1 + 0x54u), (f64)rdf32(r3 + 0x60u), ppc_fmadds((f64)rdf32(param_1 + 0x34u), (f64)rdf32(r3 + 0x58u), (f64)(f32)((f64)rdf32(param_1 + 0x44u) * (f64)rdf32(r3 + 0x5cu)))));
        wrf32d(r3 + 0xa4u, f0);
        r3 = r3 + 0x10u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    f1 = (f64)rdf32(param_1 + 0xe8u);
    f6 = rdf64(0x80572208u);
    f4 = (f64)(f32)(px_b2f((u64)rd16(param_1 + 0xf2u) | 0x4330000000000000ull) - f6);
    f0 = (f64)rdf32(param_1 + 0xecu);
    f2 = px_b2f((u64)rd16(param_1 + 0xf6u) | 0x4330000000000000ull);
    f3 = (f64)(f32)(px_b2f((u64)rd16(param_1 + 0xf4u) | 0x4330000000000000ull) - f6);
    wrf32d(param_1 + 0x11cu, (f64)(f32)(px_b2f((u64)rd16(param_1 + 0xf0u) | 0x4330000000000000ull) - f6));
    f2 = (f64)(f32)(f2 - f6);
    wrf32d(param_1 + 0x120u, f4);
    wrf32d(param_1 + 0x124u, f3);
    wrf32d(param_1 + 0x128u, f2);
    wrf32d(param_1 + 0x12cu, f1);
    wrf32d(param_1 + 0x130u, f0);
    if ((u32)param_2 != 0u) {
        f5 = (f64)rdf32(param_1 + 0x58u);
        f4 = (f64)rdf32(param_1 + 0x64u);
        f3 = (f64)rdf32(param_1 + 0x6cu);
        f2 = (f64)rdf32(param_1 + 0x74u);
        f1 = (f64)rdf32(param_1 + 0x80u);
        f0 = (f64)rdf32(param_1 + 0x84u);
        wrf32d(param_1 + 0x100u, (f64)rdf32(0x805721e8u));
        wrf32d(param_1 + 0x104u, f5);
        wrf32d(param_1 + 0x108u, f4);
        wrf32d(param_1 + 0x10cu, f3);
        wrf32d(param_1 + 0x110u, f2);
        wrf32d(param_1 + 0x114u, f1);
        wrf32d(param_1 + 0x118u, f0);
    } else {
        f5 = (f64)rdf32(param_1 + 0x58u);
        f4 = (f64)rdf32(param_1 + 0x60u);
        f3 = (f64)rdf32(param_1 + 0x6cu);
        f2 = (f64)rdf32(param_1 + 0x70u);
        f1 = (f64)rdf32(param_1 + 0x80u);
        f0 = (f64)rdf32(param_1 + 0x84u);
        wrf32d(param_1 + 0x100u, (f64)rdf32(0x805721e0u));
        wrf32d(param_1 + 0x104u, f5);
        wrf32d(param_1 + 0x108u, f4);
        wrf32d(param_1 + 0x10cu, f3);
        wrf32d(param_1 + 0x110u, f2);
        wrf32d(param_1 + 0x114u, f1);
        wrf32d(param_1 + 0x118u, f0);
    }
    return;
}
