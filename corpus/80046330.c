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

void fn_80046330(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    if (rd32(0x803c1de0u) != 0u && (u32)rd8(0x803c1de4u) == 0u) {
        if (rd32(0x803c1df0u) != 0u) {
            r0 = rd32(0x803c1d98u);
            wr32(0x803c1df8u, param_r3);
            r31 = param_r3 + r0;
        } else {
            wr32(0x803c1e40u, param_r3);
            r31 = param_r3 + ((rd32(0x803c1d84u) + 0x1fu) & 0xffffffe0u);
            wr32(0x803c1e4cu, r31);
            r31 = r31 + ((rd32(0x803c1d84u) + 0x1fu) & 0xffffffe0u);
            wr32(0x803c1e58u, r31);
            r31 = r31 + ((rd32(0x803c1d84u) + 0x1fu) & 0xffffffe0u);
            wr32(0x803c1e64u, r31);
            r31 = r31 + ((rd32(0x803c1d84u) + 0x1fu) & 0xffffffe0u);
            wr32(0x803c1e70u, r31);
            r31 = r31 + ((rd32(0x803c1d84u) + 0x1fu) & 0xffffffe0u);
            wr32(0x803c1e7cu, r31);
            r31 = r31 + ((rd32(0x803c1d84u) + 0x1fu) & 0xffffffe0u);
            wr32(0x803c1e88u, r31);
            r31 = r31 + ((rd32(0x803c1d84u) + 0x1fu) & 0xffffffe0u);
            wr32(0x803c1e94u, r31);
            r31 = r31 + ((rd32(0x803c1d84u) + 0x1fu) & 0xffffffe0u);
            wr32(0x803c1ea0u, r31);
            r31 = r31 + ((rd32(0x803c1d84u) + 0x1fu) & 0xffffffe0u);
            wr32(0x803c1eacu, r31);
            r31 = r31 + ((rd32(0x803c1d84u) + 0x1fu) & 0xffffffe0u);
        }
        r28 = 0u;
        r29 = 0x803c1d40u;
        r4 = rd32(0x803c1dc0u) * rd32(0x803c1dc4u);
        r3 = (r4 >> 2u) & 0x3fffffffu;
        r4 = r4 + 0x1fu;
        r30 = r4 & 0xffffffe0u;
        r27 = (r3 + 0x1fu) & 0xffffffe0u;
        do {
            wr32(r29 + 0x178u, r31);
            a.r[0] = r31;
            a.r[1] = r30;
            (void)tc_call(0x8022770cu, &a);
            r31 = r31 + r30;
            wr32(r29 + 0x17cu, r31);
            a.r[0] = r31;
            a.r[1] = r27;
            (void)tc_call(0x8022770cu, &a);
            r31 = r31 + r27;
            wr32(r29 + 0x180u, r31);
            a.r[0] = r31;
            a.r[1] = r27;
            (void)tc_call(0x8022770cu, &a);
            r28 = r28 + 1u;
            r31 = r31 + r27;
            r29 = r29 + 0x10u;
        } while (r28 < 3u);
        if ((u32)rd8(0x803c1de7u) != 0u) {
            r28 = rd32(0x803c1dd0u) * 0x28u;
            f3 = rdf64(0x80572150u);
            f1 = (f64)rdf32(0x8057214cu);
            f0 = (f64)rdf32(0x80572148u);
            r0 = (((rd32(0x803c1d88u) << 2u) & 0xfffffffcu) + 0x1fu) & 0xffffffe0u;
            wr32(0x803c1ee8u, r31);
            wr32(0x803c1eecu, r31);
            r31 = r31 + r0;
            f1 = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r28 | 0x4330000000000000ull) - f3), f1);
            wr32(0x803c1ef4u, r31);
            wr32(0x803c1ef8u, r31);
            r31 = r31 + r0;
            wr32(0x803c1f00u, r31);
            wr32(0x803c1f04u, r31);
            r31 = r31 + r0;
            f1 = (f64)(f32)(f0 + f1);
            wr32(0x803c1f0cu, r31);
            wr32(0x803c1f10u, r31);
            r31 = r31 + r0;
            wr32(0x803c1f18u, r31);
            wr32(0x803c1f1cu, r31);
            r31 = r31 + r0;
            wr32(0x803c1f24u, r31);
            wr32(0x803c1f28u, r31);
            r31 = r31 + r0;
            wr32(0x803c1ef0u, 0u);
            wr32(0x803c1efcu, 0u);
            wr32(0x803c1f08u, 0u);
            wr32(0x803c1f14u, 0u);
            wr32(0x803c1f20u, 0u);
            wr32(0x803c1f2cu, 0u);
            wr32(0x8057105cu, r31);
            a.f[0] = f1;
            r3 = tc_call(0x802558e4u, &a);
            r3 = r3 + 0x1fu;
            r3 = (r3 << 1u) & 0xffffffc0u;
            r31 = r31 + r3;
            if (rd32(0x803c1dccu) == 2u) {
                f1 = (f64)rdf32(0x8057214cu);
                f0 = (f64)rdf32(0x80572148u);
                f2 = (f64)(f32)(px_b2f((u64)r28 | 0x4330000000000000ull) - rdf64(0x80572150u));
                wr32(0x80571060u, r31);
                f1 = (f64)(f32)px_fdiv(f2, f1);
                f1 = (f64)(f32)(f0 + f1);
                a.f[0] = f1;
                r3 = tc_call(0x802558e4u, &a);
                r31 = r31 + (((r3 + 0x1fu) << 1u) & 0xffffffc0u);
            }
        }
        wr32(0x803c1ddcu, r31);
    }
    return;
}
