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

u32 fn_801f9258(s32 param_1, s32 param_2, u32 param_3)
{
    u32 c0lt = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    c0lt = param_2 < 398;
    if ((u32)param_2 == 0x18eu) {
        r3 = tc_call(0x80097da4u, &a);
        r3 = rd32(r3 + 0x4cu);
        a.r[0] = r3;
        r3 = tc_call(0x800abc3cu, &a);
        if (r3 == 0u) {
            r3 = 0u;
            return r3;
        }
        a.f[0] = (f64)rdf32(0x80576654u);
        a.r[0] = (u32)param_1 + 0x24u;
        a.r[1] = rd32(param_3);
        r3 = tc_call(0x801f8ffcu, &a);
        if (r3 != 0u) {
            r3 = 1u;
            return r3;
        }
        r3 = tc_call(0x80097da4u, &a);
        r3 = rd32(r3 + 0x4cu);
        a.r[0] = r3;
        (void)tc_call(0x800abca8u, &a);
    } else if (!c0lt) {
        c0lt = param_2 < 537;
        if ((u32)param_2 == 0x219u) {
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x4cu);
            a.r[0] = r3;
            r3 = tc_call(0x800abc3cu, &a);
            if (r3 == 0u) {
                r3 = 0u;
                return r3;
            }
            a.f[0] = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)(rd32(param_3 + 4u) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80576668u)), (f64)rdf32(0x80576670u));
            a.r[0] = (u32)param_1 + 0x24u;
            a.r[1] = rd32(param_3);
            r3 = tc_call(0x801f8ffcu, &a);
            if (r3 != 0u) {
                r3 = 1u;
                return r3;
            }
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x4cu);
            a.r[0] = r3;
            (void)tc_call(0x800abca8u, &a);
        } else if (!c0lt) {
            if (param_2 >= 539) {
                r3 = 2u;
                return r3;
            }
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x4cu);
            a.r[0] = r3;
            r3 = tc_call(0x800abc3cu, &a);
            if (r3 == 0u) {
                r3 = 0u;
                return r3;
            }
            a.f[0] = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)(rd32(param_3) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80576668u)), (f64)rdf32(0x80576670u));
            a.r[0] = (u32)param_1 + 0x24u;
            r3 = tc_call(0x801f90a4u, &a);
            if (r3 != 0u) {
                r3 = 1u;
                return r3;
            }
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x4cu);
            a.r[0] = r3;
            (void)tc_call(0x800abca8u, &a);
        } else {
            if (param_2 >= 400) {
                r3 = 2u;
                return r3;
            }
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x4cu);
            a.r[0] = r3;
            r3 = tc_call(0x800abc3cu, &a);
            if (r3 == 0u) {
                r3 = 0u;
                return r3;
            }
            a.f[0] = (f64)rdf32(0x80576654u);
            a.r[0] = (u32)param_1 + 0x24u;
            r3 = tc_call(0x801f90a4u, &a);
            if (r3 != 0u) {
                r3 = 1u;
                return r3;
            }
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x4cu);
            a.r[0] = r3;
            (void)tc_call(0x800abca8u, &a);
        }
    } else {
        c0lt = param_2 < 253;
        if ((u32)param_2 == 0xfdu) {
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x4cu);
            a.r[0] = r3;
            r3 = tc_call(0x800abc3cu, &a);
            if (r3 == 0u) {
                r3 = 0u;
                return r3;
            }
            a.f[0] = (f64)rdf32(0x80576654u);
            a.r[0] = (u32)param_1 + 0xcu;
            r3 = tc_call(0x801f90a4u, &a);
            r31 = r3;
            a.f[0] = (f64)rdf32(0x80576654u);
            a.r[0] = (u32)param_1 + 0x24u;
            r3 = tc_call(0x801f90a4u, &a);
            if ((r31 | ((r3 << 0x10u) & 0xffff0000u)) != 0u) {
                r3 = 1u;
                return r3;
            }
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x4cu);
            a.r[0] = r3;
            (void)tc_call(0x800abca8u, &a);
        } else if (!c0lt) {
            if (param_2 < 397) {
                r3 = 2u;
                return r3;
            }
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x4cu);
            a.r[0] = r3;
            r3 = tc_call(0x800abc3cu, &a);
            if (r3 == 0u) {
                r3 = 0u;
                return r3;
            }
            a.f[0] = (f64)rdf32(0x80576654u);
            a.r[0] = (u32)param_1 + 0xcu;
            a.r[1] = rd32(param_3);
            r3 = tc_call(0x801f8ffcu, &a);
            r31 = r3;
            a.f[0] = (f64)rdf32(0x80576654u);
            a.r[0] = (u32)param_1 + 0x24u;
            a.r[1] = rd32(param_3 + 4u);
            r3 = tc_call(0x801f8ffcu, &a);
            if ((r31 | ((r3 << 0x10u) & 0xffff0000u)) != 0u) {
                r3 = 1u;
                return r3;
            }
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x4cu);
            a.r[0] = r3;
            (void)tc_call(0x800abca8u, &a);
        } else {
            if (param_2 < 252) {
                r3 = 2u;
                return r3;
            }
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x4cu);
            a.r[0] = r3;
            r3 = tc_call(0x800abc3cu, &a);
            if (r3 == 0u) {
                r3 = 0u;
                return r3;
            }
            a.f[0] = (f64)rdf32(0x80576654u);
            a.r[0] = (u32)param_1 + 0xcu;
            a.r[1] = rd32(param_3);
            r3 = tc_call(0x801f8ffcu, &a);
            if (r3 != 0u) {
                r3 = 1u;
                return r3;
            }
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x4cu);
            a.r[0] = r3;
            (void)tc_call(0x800abca8u, &a);
        }
    }
    r3 = 0u;
    return r3;
}
