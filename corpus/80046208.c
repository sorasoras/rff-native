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

s32 fn_80046208(void)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r30 = 0;
    TcArgs a = {0};
    if (rd32(0x803c1de0u) != 0u) {
        if (rd32(0x803c1df0u) != 0u) {
            r30 = (rd32(0x803c1d98u) + 0x1fu) & 0xffffffe0u;
        } else {
            r30 = ((rd32(0x803c1d84u) + 0x1fu) & 0xffffffe0u) * 0xau;
        }
        r3 = rd32(0x803c1dc0u) * rd32(0x803c1dc4u);
        r5 = r3 + 0x1fu;
        r3 = (r3 >> 2u) & 0x3fffffffu;
        r0 = r3 + 0x1fu;
        r3 = r0 & 0xffffffe0u;
        r0 = (r0 << 2u) & 0xffffff80u;
        r30 = r30 + (((r5 << 2u) & 0xffffff80u) - (r5 & 0xffffffe0u));
        r0 = r0 - r3;
        r30 = r30 + r0;
        r30 = r30 + r0;
        if ((u32)rd8(0x803c1de7u) != 0u) {
            r30 = r30 + (((((rd32(0x803c1d88u) << 2u) & 0xfffffffcu) + 0x1fu) & 0xffffffe0u) * 6u);
            a.f[0] = (f64)(f32)((f64)rdf32(0x80572148u) + (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)(rd32(0x803c1dd0u) * 0x28u) | 0x4330000000000000ull) - rdf64(0x80572150u)), (f64)rdf32(0x8057214cu)));
            r3 = tc_call(0x802558e4u, &a);
            r3 = r3 + 0x1fu;
            r3 = (r3 << 1u) & 0xffffffc0u;
            r30 = r30 + (rd32(0x803c1dccu) * r3);
        }
        r3 = r30 + 0x1000u;
    } else {
        r3 = 0u;
    }
    return (s32)r3;
}
