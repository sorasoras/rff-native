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

void fn_80047d64(void)
{
    u32 ca = 0, r3 = 0, r4 = 0, r5 = 0, r29 = 0, r31 = 0;
    u64 t0 = 0;
    TcArgs a = {0};
    if (rd32(0x80571040u) != 0u) {
        r5 = 1u;
        if (rd32(0x80571054u) == 0u && rd32(0x80571058u) == 0u) {
            r5 = 0u;
        }
        if (((ppc_cntlzw((u32)rd8(0x803c1de5u) - 3u) >> 5u) & 0x7ffffffu & r5) != 0u) {
            a.f[0] = (f64)(f32)((f64)rdf32(0x80572148u) + (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)(rd32(0x803c1dd0u) * 0x28u) | 0x4330000000000000ull) - rdf64(0x80572150u)), (f64)rdf32(0x8057214cu)));
            r3 = tc_call(0x802558e4u, &a);
            r5 = rd32(0x80571054u);
            r3 = r3 + 0x1fu;
            r29 = r3 & 0xffffffe0u;
            r4 = rd32(0x803c2740u);
            r31 = ((u32)rd16(r5 + 0xa4u) & 0xffffu) | (((u32)rd16(r5 + 0xa2u) << 0x10u) & 0xffff0000u);
            if (r31 >= r4) {
                r4 = r31 - r4;
            } else {
                r3 = ((rd32(0x8057105cu) - 0x80000000u) >> 1u) & 0x7fffffffu;
                r4 = r3 + r29 - r4;
                r4 = r4 + (r31 - r3);
            }
            r3 = rd32(0x803c274cu);
            ca = (r3 + r4) < r3;
            r4 = r3 + r4;
            t0 = (u64)rd32(0x803c2748u) + (u64)ca;
            wr32(0x803c274cu, r4);
            wr32(0x803c2748u, (u32)t0);
            a.r[0] = (u32)t0;
            a.r[1] = r4;
            (void)tc_call(0x80047980u, &a);
            r29 = (((rd32(0x8057105cu) - 0x80000000u) >> 1u) & 0x7fffffffu) + ((r29 >> 1u) & 0x7fffffffu);
            if (r31 < rd32(0x803c2740u)) {
                a.r[0] = 1u;
                (void)tc_call(0x80047ee4u, &a);
            }
            if (r31 >= r29 && rd32(0x803c2740u) < r29) {
                a.r[0] = 0u;
                (void)tc_call(0x80047ee4u, &a);
            }
            wr32(0x803c2740u, r31);
        }
    }
    return;
}
