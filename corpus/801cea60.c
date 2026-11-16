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

void fn_801cea60(s32 param_1)
{
    u32 r3 = 0, r6 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r31 = 0u;
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801cfa98u, &a);
    if (r3 != 0u) {
        f2 = (f64)rdf32(0x80575eacu);
        f31 = (f64)rdf32((u32)param_1 + 0x2dcu);
        f1 = (f64)rdf32(0x80575ee8u);
        f3 = (f64)rdf32(0x80575e9cu);
        f0 = (f64)(f32)px_fdiv((f64)(f32)(f2 * (f64)rdf32((u32)param_1 + 0xd64u)), f1);
        f4 = (f64)(f32)ppc_fabs(f31);
        f3 = ppc_fmadds(f3, (f64)(f32)((f64)(f32)(px_b2f((u64)(r3 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80575ec0u)) * (f64)rdf32(0x80575ee0u)), f3);
        if ((f4 > f0) || (f4 == f0)) {
            if (f31 > (f64)rdf32(0x80575ea8u)) {
                wrf32d((u32)param_1 + 0xd14u, (f64)(f32)px_fdiv((f64)(f32)(f2 * (f64)(f32)(f3 * (f64)rdf32((u32)param_1 + 0xd54u))), f1));
            } else {
                wrf32d((u32)param_1 + 0xd14u, -(f64)(f32)px_fdiv((f64)(f32)(f2 * (f64)(f32)(f3 * (f64)rdf32((u32)param_1 + 0xd54u))), f1));
            }
            r31 = 1u;
        }
        if (r31 != 0u) {
            f30 = (f64)rdf32(0x80575ea8u);
            r30 = 2u;
            do {
                r3 = tc_call(0x80040b64u, &a);
                r6 = (((r3 - (((ppc_mulhwu(0xaaaaaaabu, r3) >> 2u) & 0x3fffffffu) * 6u)) << 0x13u) & 0xfff80000u) | ((((((f31 < f30) << 0x1fu) | ((f31 > f30) << 0x1eu) | ((f31 == f30) << 0x1du) | (((f31 != f31) || (f30 != f30)) << 0x1cu)) >> 0x16u) & 0x100u) | 1u);
                a.r[0] = (u32)param_1;
                a.r[1] = r30;
                a.r[2] = 4u;
                a.r[3] = r6;
                (void)tc_call(0x801ce368u, &a);
                r30 = r30 + 1u;
            } while (r30 < 0xau);
        } else {
            r29 = 2u;
            do {
                a.r[0] = (u32)param_1;
                a.r[1] = r29;
                a.r[2] = 1u;
                a.r[3] = 0u;
                (void)tc_call(0x801ce368u, &a);
                r29 = r29 + 1u;
            } while (r29 < 0xau);
        }
    }
    return;
}
