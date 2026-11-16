#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_8015d018(f64 param_1, f64 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, s32 param_7, s32 param_8)
{
    u32 r0 = 0, r3 = 0;
    f64 f1 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f29 = param_1;
    f30 = param_2;
    a.r[0] = param_4;
    a.r[1] = param_5;
    (void)tc_call(0x800d3858u, &a);
    a.r[0] = param_4;
    a.r[1] = param_6;
    (void)tc_call(0x800d3830u, &a);
    r3 = tc_call(0x80097da4u, &a);
    wr32(param_4 + 0x51cu, (ppc_cntlzw(rd32(rd32(r3 + 0x40u) + 0x7a4u) - 1u) >> 5u) & 0x7ffffffu);
    a.f[0] = (f64)rdf32(param_3 + 0x490u);
    a.r[0] = param_4;
    (void)tc_call(0x800d3b10u, &a);
    a.f[0] = (f64)rdf32(param_3 + 0x49cu);
    a.r[0] = param_4;
    (void)tc_call(0x800d59c8u, &a);
    a.f[0] = (f64)rdf32(param_3 + 0x4a0u);
    a.r[0] = param_4;
    (void)tc_call(0x800d59d0u, &a);
    f1 = (f64)rdf32(param_3 + 0x494u);
    if ((f64)rdf32(0x805749e8u) != f1) {
        f29 = f1;
    }
    f1 = (f64)rdf32(param_3 + 0x498u);
    if ((f64)rdf32(0x805749e8u) != f1) {
        f30 = f1;
    }
    a.r[0] = param_4;
    f1 = tc_callf(0x800d3b00u, &a);
    a.r[0] = param_4;
    r3 = tc_call(0x800d56bcu, &a);
    r3 = r3 ^ 0x80000000u;
    f31 = (f64)(f32)((f64)(f32)((f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - rdf64(0x805749c8u)) * (f64)rdf32(0x805749c0u)) * f1);
    a.r[0] = param_4;
    f1 = tc_callf(0x800d3b00u, &a);
    f1 = (f64)(f32)((f64)rdf32(0x805749ecu) * f1);
    if ((f64)(f32)(f30 - f31) < f1) {
        f30 = (f64)(f32)(f31 + f1);
    }
    a.f[0] = f29;
    a.f[1] = f30;
    a.r[0] = param_4;
    (void)tc_call(0x800d3824u, &a);
    if (rd32(param_3 + 0x474u) != 0u) {
        a.r[0] = param_4;
        (void)tc_call(0x800d48d4u, &a);
    }
    if (rd32(param_3 + 0x4a8u) != 0u) {
        r0 = rd32(param_4 + 0x518u);
        if (r0 != 3u && r0 != 4u) {
            wr32(param_4 + 0x72cu, rd32(param_4 + 0x72cu) & 0xf7ffffffu);
        }
    }
    if ((u32)param_7 != 0u) {
        if ((u32)param_8 == 0u) {
            a.r[0] = param_4;
            a.r[1] = 0u;
            (void)tc_call(0x800d5bacu, &a);
        }
        a.r[0] = param_4;
        (void)tc_call(0x800d395cu, &a);
        a.r[0] = param_4;
        a.r[1] = 1u;
        (void)tc_call(0x800d5bacu, &a);
    }
    return;
}
