#include "tc_rt.h"

u32 fn_80247f58(s32 param_1)
{
    u32 r3 = 0, r29 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    f1 = (f64)rdf32((u32)param_1 + 0xb8u);
    f0 = (f64)rdf32(0x80576c1cu);
    r31 = r3;
    wr32((u32)param_1 + 0xb0u, 1u);
    if (f1 < f0) {
        r3 = tc_call(0x8022c2b0u, &a);
        r29 = r3;
        wr32((u32)param_1 + 0xb0u, rd32((u32)param_1 + 0xb0u) | 1u);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x8024885cu, &a);
        a.r[0] = r29;
        (void)tc_call(0x8022c2d8u, &a);
        a.r[0] = r31;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = 0u;
    } else {
        f1 = (f64)(f32)((f64)rdf32(0x80576c18u) * f1);
        wr32((u32)param_1 + 0x14u, rd32(0x8038c6bcu));
        a.f[0] = f1;
        r3 = tc_call(0x802558e4u, &a);
        wr32((u32)param_1 + 0x30u, r3);
        wr32((u32)param_1 + 0x5cu, rd32(0x8038c720u));
        wr32((u32)param_1 + 0x60u, rd32(0x8038c724u));
        wr32((u32)param_1 + 0x94u, rd32(0x8038c728u));
        wr32((u32)param_1 + 0x98u, rd32(0x8038c72cu));
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x80248618u, &a);
        if (r3 == 0u) {
            r3 = tc_call(0x8022c2b0u, &a);
            r29 = r3;
            wr32((u32)param_1 + 0xb0u, rd32((u32)param_1 + 0xb0u) | 1u);
            a.r[0] = (u32)param_1;
            (void)tc_call(0x8024885cu, &a);
            a.r[0] = r29;
            (void)tc_call(0x8022c2d8u, &a);
            a.r[0] = r31;
            (void)tc_call(0x8022c2d8u, &a);
            r3 = 0u;
        } else {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x8024875cu, &a);
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x8024894cu, &a);
            if (r3 == 0u) {
                r3 = tc_call(0x8022c2b0u, &a);
                r29 = r3;
                wr32((u32)param_1 + 0xb0u, rd32((u32)param_1 + 0xb0u) | 1u);
                a.r[0] = (u32)param_1;
                (void)tc_call(0x8024885cu, &a);
                a.r[0] = r29;
                (void)tc_call(0x8022c2d8u, &a);
                a.r[0] = r31;
                (void)tc_call(0x8022c2d8u, &a);
                r3 = 0u;
            } else {
                wr32((u32)param_1 + 0xb0u, rd32((u32)param_1 + 0xb0u) & 0xfffffffeu);
                a.r[0] = r31;
                (void)tc_call(0x8022c2d8u, &a);
                r3 = 1u;
            }
        }
    }
    return r3;
}
