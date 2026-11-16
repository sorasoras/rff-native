#include "tc_rt.h"

u32 fn_80246694(s32 param_1)
{
    u32 r3 = 0, r29 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    f1 = (f64)rdf32((u32)param_1 + 0x114u);
    f0 = (f64)rdf32(0x80576bc4u);
    r31 = r3;
    wr32((u32)param_1 + 0x10cu, 1u);
    if (f1 < f0) {
        r3 = tc_call(0x8022c2b0u, &a);
        r29 = r3;
        wr32((u32)param_1 + 0x10cu, rd32((u32)param_1 + 0x10cu) | 1u);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80247038u, &a);
        a.r[0] = r29;
        (void)tc_call(0x8022c2d8u, &a);
        a.r[0] = r31;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = 0u;
    } else {
        f1 = (f64)(f32)((f64)rdf32(0x80576bc0u) * f1);
        wr32((u32)param_1 + 0x1cu, rd32(0x8038c55cu));
        a.f[0] = f1;
        r3 = tc_call(0x802558e4u, &a);
        wr32((u32)param_1 + 0x40u, r3);
        wr32((u32)param_1 + 0x80u, rd32(0x8038c680u));
        wr32((u32)param_1 + 0x84u, rd32(0x8038c684u));
        wr32((u32)param_1 + 0x88u, rd32(0x8038c688u));
        wr32((u32)param_1 + 0xc0u, rd32(0x8038c68cu));
        wr32((u32)param_1 + 0xc4u, rd32(0x8038c690u));
        wr32((u32)param_1 + 0xecu, rd32(0x8038c694u));
        wr32((u32)param_1 + 0xf0u, rd32(0x8038c698u));
        wr32((u32)param_1 + 0xf4u, rd32(0x8038c69cu));
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x80246da0u, &a);
        if (r3 == 0u) {
            r3 = tc_call(0x8022c2b0u, &a);
            r29 = r3;
            wr32((u32)param_1 + 0x10cu, rd32((u32)param_1 + 0x10cu) | 1u);
            a.r[0] = (u32)param_1;
            (void)tc_call(0x80247038u, &a);
            a.r[0] = r29;
            (void)tc_call(0x8022c2d8u, &a);
            a.r[0] = r31;
            (void)tc_call(0x8022c2d8u, &a);
            r3 = 0u;
        } else {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x80246f14u, &a);
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x8024714cu, &a);
            if (r3 == 0u) {
                r3 = tc_call(0x8022c2b0u, &a);
                r29 = r3;
                wr32((u32)param_1 + 0x10cu, rd32((u32)param_1 + 0x10cu) | 1u);
                a.r[0] = (u32)param_1;
                (void)tc_call(0x80247038u, &a);
                a.r[0] = r29;
                (void)tc_call(0x8022c2d8u, &a);
                a.r[0] = r31;
                (void)tc_call(0x8022c2d8u, &a);
                r3 = 0u;
            } else {
                wr32((u32)param_1 + 0x10cu, rd32((u32)param_1 + 0x10cu) & 0xfffffffeu);
                a.r[0] = r31;
                (void)tc_call(0x8022c2d8u, &a);
                r3 = 1u;
            }
        }
    }
    return r3;
}
