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

u32 fn_801cd7cc(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r28 = 0, r29 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    r29 = 1u;
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801cfa98u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        if ((u32)param_2 == 0u) {
            wr32((u32)param_1 + 0xd18u, 0u);
            a.r[0] = (u32)param_1;
            a.r[1] = 0u;
            a.r[2] = 2u;
            a.r[3] = 0x100u;
            (void)tc_call(0x801ce348u, &a);
            a.r[0] = (u32)param_1;
            a.r[1] = 1u;
            a.r[2] = 2u;
            a.r[3] = 0x140100u;
            (void)tc_call(0x801ce348u, &a);
            r28 = 2u;
            do {
                r3 = tc_call(0x80040b64u, &a);
                a.r[0] = (u32)param_1;
                a.r[1] = r28;
                a.r[2] = 4u;
                a.r[3] = (((r3 - (((ppc_mulhwu(0xaaaaaaabu, r3) >> 2u) & 0x3fffffffu) * 6u)) << 0x13u) & 0xfff80000u) | 1u;
                (void)tc_call(0x801ce368u, &a);
                r28 = r28 + 1u;
            } while (r28 < 0xau);
            r3 = tc_call(0x80040b64u, &a);
            r0 = r3 - (((ppc_mulhwu(0x51eb851fu, r3) >> 5u) & 0x7ffffffu) * 0x64u);
            if (r0 >= 0x19u && r0 <= 0x4bu) {
                wrf32d((u32)param_1 + 0xd1cu, (f64)rdf32(0x80575edcu));
            } else {
                wrf32d((u32)param_1 + 0xd1cu, (f64)rdf32(0x80575eb0u));
            }
            wrf32d((u32)param_1 + 0xd20u, (f64)rdf32(0x80575ea8u));
        } else {
            if ((u32)param_2 == 1u) {
                a.r[0] = (u32)param_1;
                r3 = tc_call(0x801cfa98u, &a);
                f2 = (f64)rdf32(0x80575e9cu);
                f2 = ppc_fmadds(f2, (f64)(f32)((f64)(f32)(px_b2f((u64)(r3 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80575ec0u)) * (f64)rdf32(0x80575ee0u)), f2);
                if ((f64)rdf32((u32)param_1 + 0xd1cu) < (f64)rdf32(0x80575ea8u)) {
                    f2 = (f64)(f32)(f2 * (f64)rdf32((u32)param_1 + 0xd54u));
                    wrf32d((u32)param_1 + 0xd14u, -(f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x80575eacu) * f2), (f64)rdf32(0x80575ee8u)));
                } else {
                    f2 = (f64)(f32)(f2 * (f64)rdf32((u32)param_1 + 0xd54u));
                    wrf32d((u32)param_1 + 0xd14u, (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x80575eacu) * f2), (f64)rdf32(0x80575ee8u)));
                }
                f0 = (f64)(f32)((f64)rdf32((u32)param_1 + 0xd20u) + (f64)rdf32((u32)param_1 + 0xd14u));
                f1 = ppc_fabs((f64)rdf32((u32)param_1 + 0xd1cu));
                f2 = ppc_fabs(f0);
                wrf32d((u32)param_1 + 0xd20u, f0);
                f0 = (f64)(f32)f1;
                f1 = (f64)(f32)f2;
                if ((f1 > f0) || (f1 == f0)) {
                    a.r[0] = (u32)param_1;
                    a.r[1] = 0u;
                    a.r[2] = 1u;
                    a.r[3] = 1u;
                    (void)tc_call(0x801ce348u, &a);
                    a.r[0] = (u32)param_1;
                    a.r[1] = 1u;
                    a.r[2] = 1u;
                    a.r[3] = 1u;
                    (void)tc_call(0x801ce348u, &a);
                    r28 = 2u;
                    do {
                        r3 = tc_call(0x80040b64u, &a);
                        a.r[0] = (u32)param_1;
                        a.r[1] = r28;
                        a.r[2] = 1u;
                        a.r[3] = (((r3 - (((ppc_mulhwu(0xaaaaaaabu, r3) >> 2u) & 0x3fffffffu) * 6u)) << 0x13u) & 0xfff80000u) | 1u;
                        (void)tc_call(0x801ce368u, &a);
                        r28 = r28 + 1u;
                    } while (r28 < 0xau);
                    r29 = 0u;
                }
            }
        }
        r3 = r29;
    }
    return r3;
}
