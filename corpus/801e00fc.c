#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

s32 fn_801e00fc(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f5 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0xd14u);
    r3 = tc_call(0x801dd68cu, &a);
    r31 = r3;
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r3 = rd32(r3 + 0xe4u);
        if (r3 != 0u) {
            a.r[0] = r3;
            r3 = tc_call(0x80320fe4u, &a);
            if (r3 != 0u) {
                a.r[0] = rd32(r31 + 0xe4u);
                (void)tc_call(0x80157f30u, &a);
            }
        }
        wr32(r31 + 0xe4u, 0u);
        f0 = (f64)rdf32(0x80576200u);
        wr32(r31 + 0xe8u, 0xffffffffu);
        f1 = (f64)rdf32(0x8057621cu);
        wrf32d(r31 + 0xecu, f0);
        f0 = (f64)rdf32(0x80576204u);
        wrf32d(r31 + 0xf0u, f1);
        wrf32d(r31 + 0xf4u, f0);
        wr32(r31 + 0xf8u, 0u);
        r3 = rd32(r31 + 0xfcu);
        if (r3 != 0u) {
            a.r[0] = r3;
            r3 = tc_call(0x80320fe4u, &a);
            if (r3 != 0u) {
                a.r[0] = rd32(r31 + 0xfcu);
                (void)tc_call(0x80157f30u, &a);
            }
        }
        wr32(r31 + 0xfcu, 0u);
        f0 = (f64)rdf32(0x80576200u);
        wr32(r31 + 0x100u, 0xffffffffu);
        f1 = (f64)rdf32(0x8057621cu);
        wrf32d(r31 + 0x104u, f0);
        f0 = (f64)rdf32(0x80576204u);
        wrf32d(r31 + 0x108u, f1);
        wrf32d(r31 + 0x10cu, f0);
        wr32(r31 + 0x110u, 0u);
        r3 = rd32(r31 + 0x114u);
        if (r3 != 0u) {
            a.r[0] = r3;
            r3 = tc_call(0x80320fe4u, &a);
            if (r3 != 0u) {
                a.r[0] = rd32(r31 + 0x114u);
                (void)tc_call(0x80157f30u, &a);
            }
        }
        wr32(r31 + 0x114u, 0u);
        f0 = (f64)rdf32(0x80576200u);
        wr32(r31 + 0x118u, 0xffffffffu);
        f1 = (f64)rdf32(0x8057621cu);
        wrf32d(r31 + 0x11cu, f0);
        f0 = (f64)rdf32(0x80576204u);
        wrf32d(r31 + 0x120u, f1);
        wrf32d(r31 + 0x124u, f0);
        wr32(r31 + 0x128u, 0u);
        r3 = rd32(r31 + 0x144u);
        if (r3 != 0u) {
            a.r[0] = r3;
            r3 = tc_call(0x80320fe4u, &a);
            if (r3 != 0u) {
                a.r[0] = rd32(r31 + 0x144u);
                (void)tc_call(0x80157f30u, &a);
            }
        }
        wr32(r31 + 0x144u, 0u);
        f0 = (f64)rdf32(0x80576200u);
        wr32(r31 + 0x148u, 0xffffffffu);
        f1 = (f64)rdf32(0x8057621cu);
        r3 = r31;
        wrf32d(r31 + 0x14cu, f0);
        f0 = (f64)rdf32(0x80576204u);
        wrf32d(r31 + 0x150u, f1);
        f3 = (f64)rdf32(0x805761f0u);
        wrf32d(r31 + 0x154u, f0);
        f2 = (f64)rdf32(0x80576220u);
        wr32(r31 + 0x158u, 0u);
        f1 = (f64)rdf32(0x80576224u);
        wr32(0x817fdfc8u, rd32(0x804890d4u));
        r4 = rd32(0x804890dcu);
        f0 = (f64)px_w2f(rd32(0x804890d8u));
        wrf32d(r31 + 0x174u, (f64)rdf32(0x817fdfc8u));
        wrf32d(r31 + 0x178u, f0);
        f0 = (f64)rdf32(0x80576228u);
        wrf32d(r31 + 0x17cu, (f64)px_w2f(r4));
        wr32(0x817fdfd4u, rd32(0x804890c8u));
        r4 = rd32(0x804890d0u);
        f5 = (f64)px_w2f(rd32(0x804890ccu));
        wrf32d(r31 + 0x15cu, (f64)rdf32(0x817fdfd4u));
        wrf32d(r31 + 0x160u, f5);
        wrf32d(r31 + 0x164u, (f64)px_w2f(r4));
        r5 = rd32(0x804890ccu);
        wr32(0x817fdfe0u, rd32(0x804890c8u));
        r4 = rd32(0x804890d0u);
        wrf32d(r31 + 0x168u, (f64)rdf32(0x817fdfe0u));
        wrf32d(r31 + 0x16cu, (f64)px_w2f(r5));
        wrf32d(r31 + 0x170u, (f64)px_w2f(r4));
        wr32(r31 + 0x180u, 0u);
        wrf32d(r31 + 0x184u, f3);
        wrf32d(r31 + 0x188u, f3);
        wrf32d(r31 + 0x18cu, f3);
        wrf32d(r31 + 0x190u, f2);
        wr32(r31 + 0x1a4u, 0u);
        wr32(r31 + 0x1a8u, 1u);
        wrf32d(r31 + 0x194u, f1);
        wr32(r31 + 0x1acu, 0u);
        wrf32d(r31 + 0x20u, f0);
        wr32(r31 + 0x1a0u, 0u);
        wr32(r31 + 0x19cu, 0u);
        wr32(r31 + 0x1b4u, 0u);
        wr32(r31 + 0x1b0u, 0u);
        wr32(r31 + 0x1b8u, 0u);
        wr32(r31 + 0x1bcu, 0xffffffffu);
        wr32(r31 + 0x1c0u, 0xffffffffu);
    }
    return (s32)r3;
}
