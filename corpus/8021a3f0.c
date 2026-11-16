#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

void fn_8021a3f0(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r12 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x50u) != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x68u);
        r3 = tc_call(0x800a7b34u, &a);
        if (r3 == 0u) {
            a.r[0] = rd32((u32)param_1 + 0x68u);
            a.r[1] = 1u;
            (void)tc_call(0x800a7bb8u, &a);
        } else {
            a.r[0] = rd32((u32)param_1 + 0x68u);
            a.r[1] = 0u;
            (void)tc_call(0x800a7bb8u, &a);
        }
        a.r[0] = rd32((u32)param_1 + 0x68u);
        r3 = tc_call(0x800a4500u, &a);
        f1 = tc_lastf();
        if (r3 != 0u) {
            r5 = rd32((u32)param_1 + 0x38u);
            r4 = rd32((u32)param_1 + 0x3cu);
            r12 = rd32(rd32(r3) + 0x28u);
            wr32(0x817fdff0u, rd32((u32)param_1 + 0x40u));
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = r5;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(r12, &a);
            f1 = (f64)rdf32(0x80576a14u);
            f0 = (f64)(f32)ppc_fabs((f64)(f32)((f64)rdf32(r3) - (f64)px_w2f(r5)));
            r0 = ((((f0 < f1) << 0x1fu) | ((f0 > f1) << 0x1eu) | ((f0 == f1) << 0x1du) | (((f0 != f0) || (f1 != f1)) << 0x1cu)) >> 0x1fu) & 1u;
            if (r0 != 0u) {
                f0 = (f64)(f32)ppc_fabs((f64)(f32)((f64)rdf32(r3 + 8u) - (f64)rdf32(0x817fdff0u)));
                r0 = ((((f0 < f1) << 0x1fu) | ((f0 > f1) << 0x1eu) | ((f0 == f1) << 0x1du) | (((f0 != f0) || (f1 != f1)) << 0x1cu)) >> 0x1fu) & 1u;
            }
            if (r0 != 0u) {
                a.r[0] = rd32((u32)param_1 + 0x68u);
                r3 = tc_call(0x800a7b34u, &a);
                a.r[0] = rd32((u32)param_1 + 0x68u);
                a.r[1] = r3;
                (void)tc_call(0x800a7c60u, &a);
            }
        }
    }
    r31 = rd32((u32)param_1 + 0x4cu);
    if (r31 != 0xffffffffu) {
        wr32(rd32((u32)param_1 + 0x64u) + 0x9bcu, rd32((u32)param_1 + 0x68u));
        a.r[0] = rd32((u32)param_1 + 0x68u);
        a.r[1] = 1u;
        (void)tc_call(0x800a796cu, &a);
        a.r[0] = 2u;
        a.r[1] = 0x21u;
        a.r[2] = r31;
        (void)tc_call(0x800a6dccu, &a);
        a.r[0] = 0u;
        a.r[1] = 0x21u;
        a.r[2] = r31;
        (void)tc_call(0x800a6dccu, &a);
        wr32(rd32((u32)param_1 + 0x64u) + 0x9bcu, 0xffffffffu);
    }
    return;
}
