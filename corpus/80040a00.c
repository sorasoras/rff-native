#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

f64 fn_80040a00(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r7 = 0;
    f64 f2 = 0.0;
    r0 = rd32(0x80570670u) - 1u;
    wr32(0x80570670u, r0);
    if (r0 == 0u) {
        r3 = 0x803be700u;
        wr32(0x80570670u, 0x270u);
        r7 = 0xe4u;
        wr32(0x80571010u, 0x803be700u);
        for (;;) {
            r7 = r7 - 1u;
            if (r7 == 0u) break;
            r5 = rd32(r3 + 4u);
            r0 = r5 & 1u;
            r5 = r5 & 0x7fffffffu;
            r5 = (r5 & 0x7fffffffu) | (rd32(r3) & 0x80000000u);
            r0 = 0u - r0;
            r5 = (r5 >> 1u) & 0x7fffffffu;
            r0 = r0 & 0x9908b0dfu;
            r0 = r5 ^ r0;
            r0 = rd32(r3 + 0x634u) ^ r0;
            wr32(r3, r0);
            r3 = r3 + 4u;
        }
        r7 = 0x18du;
        for (;;) {
            r7 = r7 - 1u;
            if (r7 == 0u) break;
            r5 = rd32(r3 + 4u);
            r0 = r5 & 1u;
            r5 = r5 & 0x7fffffffu;
            r5 = (r5 & 0x7fffffffu) | (rd32(r3) & 0x80000000u);
            r0 = 0u - r0;
            r5 = (r5 >> 1u) & 0x7fffffffu;
            r0 = r0 & 0x9908b0dfu;
            r0 = r5 ^ r0;
            r0 = rd32(r3 - 0x38cu) ^ r0;
            wr32(r3, r0);
            r3 = r3 + 4u;
        }
        r5 = rd32(0x803be700u);
        r4 = r5 & 1u;
        r5 = r5 & 0x7fffffffu;
        r5 = (r5 & 0x7fffffffu) | (rd32(r3) & 0x80000000u);
        r4 = 0u - r4;
        r5 = (r5 >> 1u) & 0x7fffffffu;
        wr32(r3, rd32(r3 - 0x38cu) ^ (r5 ^ (r4 & 0x9908b0dfu)));
    }
    r5 = rd32(0x80571010u);
    f2 = rdf64(0x80571ff0u);
    wr32(0x80571010u, r5 + 4u);
    r4 = rd32(r5);
    r4 = r4 ^ ((r4 >> 0xbu) & 0x1fffffu);
    r4 = r4 ^ ((r4 << 7u) & 0x9d2c5680u);
    r4 = r4 ^ ((r4 << 0xfu) & 0xefc60000u);
    r4 = r4 ^ ((r4 >> 0x12u) & 0x3fffu);
    return (f64)(f32)((f64)rdf32(0x80571fe8u) * (f64)(f32)(px_b2f((u64)r4 | 0x4330000000000000ull) - f2));
}
