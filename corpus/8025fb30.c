#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

f64 fn_8025fb30(f64 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f1 = param_1;
    wrf64(0x817fdfe8u, param_1);
    r4 = 0u;
    r5 = (u32)(px_f2b(param_1) >> 0x20ull);
    r3 = (u32)px_f2b(param_1);
    if ((s32)r5 < 1048576) {
        if (((r5 & 0x7fffffffu) | r3) == 0u) {
            f1 = rdf64(0x80576f88u);
            f0 = rdf64(0x805719e0u);
            wr32(0x805719c0u, 0x21u);
            f1 = px_fdiv(f1, f0);
            return f1;
        }
        if ((s32)r5 < 0) {
            f0 = rdf64(0x805719e0u);
            wr32(0x805719c0u, 0x21u);
            f1 = px_fdiv(param_1 - param_1, f0);
            return f1;
        }
        r4 = 0xffffffcau;
        f1 = param_1 * rdf64(0x80576f90u);
        wrf64(0x817fdfe8u, f1);
        r5 = (u32)(px_f2b(f1) >> 0x20ull);
    }
    if ((s32)r5 >= 2146435072) {
        f1 = f1 + f1;
    } else {
        wr32(0x817fdff0u, 0x43300000u);
        r4 = r4 + (u32)((s32)r5 >> 20) - 0x3ffu;
        f1 = rdf64(0x80576fb0u);
        r3 = (r4 >> 0x1fu) & 1u;
        r0 = (r4 + r3) ^ 0x80000000u;
        r3 = 0x3ffu - r3;
        wr32(0x817fdff4u, r0);
        f0 = rdf64(0x817fdff0u);
        wr32(0x817fdfe8u, ((r3 << 0x14u) & 0xfff00000u) | (r5 & 0xfffffu));
        f31 = f0 - f1;
        a.f[0] = rdf64(0x817fdfe8u);
        f1 = tc_callf(0x8025f87cu, &a);
        f1 = (rdf64(0x80576f98u) * f31) + (rdf64(0x80576fa0u) * f1) + (rdf64(0x80576fa8u) * f31);
    }
    return f1;
}
