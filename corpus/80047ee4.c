#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80047ee4(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.f[0] = (f64)(f32)((f64)rdf32(0x80572148u) + (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)(rd32(0x803c1dd0u) * 0x28u) | 0x4330000000000000ull) - rdf64(0x80572150u)), (f64)rdf32(0x8057214cu)));
    r3 = tc_call(0x802558e4u, &a);
    r31 = ((r3 + 0x1fu) >> 1u) & 0x7ffffff0u;
    if ((u32)param_1 != 0u) {
        r4 = (r31 << 1u) & 0xfffffffeu;
        r30 = rd32(0x8057105cu) + r4;
        r29 = rd32(0x80571060u) + r4;
    } else {
        r30 = rd32(0x8057105cu);
        r29 = rd32(0x80571060u);
    }
    if (rd32(0x803c1dccu) == 2u) {
        a.r[0] = r30;
        a.r[1] = r29;
        a.r[2] = r31;
        (void)tc_call(0x80047c7cu, &a);
        r31 = (r31 << 1u) & 0xfffffffeu;
        a.r[0] = r30;
        a.r[1] = r31;
        (void)tc_call(0x80227738u, &a);
        a.r[0] = r29;
        a.r[1] = r31;
        (void)tc_call(0x80227738u, &a);
    } else {
        a.r[0] = r30;
        a.r[1] = 0u;
        a.r[2] = r31;
        (void)tc_call(0x80047c7cu, &a);
        a.r[0] = r30;
        a.r[1] = (r31 << 1u) & 0xfffffffeu;
        (void)tc_call(0x80227738u, &a);
    }
    return;
}
