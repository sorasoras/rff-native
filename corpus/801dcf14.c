#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

u32 fn_801dcf14(u32 param_1)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x8006f1b4u, &a);
    wr32(param_1 + 0xe4u, 0u);
    wr32(param_1, 0x80375750u);
    f2 = (f64)rdf32(0x80576200u);
    f1 = (f64)rdf32(0x8057621cu);
    f0 = (f64)rdf32(0x80576204u);
    wr32(param_1 + 0xe4u, 0u);
    wr32(param_1 + 0xe8u, 0xffffffffu);
    wrf32d(param_1 + 0xecu, f2);
    wrf32d(param_1 + 0xf0u, f1);
    wrf32d(param_1 + 0xf4u, f0);
    wr32(param_1 + 0xf8u, 0u);
    wr32(param_1 + 0xfcu, 0u);
    f2 = (f64)rdf32(0x80576200u);
    f1 = (f64)rdf32(0x8057621cu);
    f0 = (f64)rdf32(0x80576204u);
    wr32(param_1 + 0xfcu, 0u);
    wr32(param_1 + 0x100u, 0xffffffffu);
    wrf32d(param_1 + 0x104u, f2);
    wrf32d(param_1 + 0x108u, f1);
    wrf32d(param_1 + 0x10cu, f0);
    wr32(param_1 + 0x110u, 0u);
    wr32(param_1 + 0x114u, 0u);
    f2 = (f64)rdf32(0x80576200u);
    f1 = (f64)rdf32(0x8057621cu);
    f0 = (f64)rdf32(0x80576204u);
    wr32(param_1 + 0x114u, 0u);
    wr32(param_1 + 0x118u, 0xffffffffu);
    wrf32d(param_1 + 0x11cu, f2);
    wrf32d(param_1 + 0x120u, f1);
    wrf32d(param_1 + 0x124u, f0);
    wr32(param_1 + 0x128u, 0u);
    wr32(param_1 + 0x12cu, 0u);
    f2 = (f64)rdf32(0x80576200u);
    f1 = (f64)rdf32(0x8057621cu);
    f0 = (f64)rdf32(0x80576204u);
    wr32(param_1 + 0x12cu, 0u);
    wr32(param_1 + 0x130u, 0xffffffffu);
    wrf32d(param_1 + 0x134u, f2);
    wrf32d(param_1 + 0x138u, f1);
    wrf32d(param_1 + 0x13cu, f0);
    wr32(param_1 + 0x140u, 0u);
    wr32(param_1 + 0x144u, 0u);
    r3 = rd32(param_1 + 0xe4u);
    f0 = (f64)rdf32(0x805761f0u);
    f3 = (f64)rdf32(0x80576200u);
    f2 = (f64)rdf32(0x8057621cu);
    f1 = (f64)rdf32(0x80576204u);
    wr32(param_1 + 0x144u, 0u);
    wr32(param_1 + 0x148u, 0xffffffffu);
    wrf32d(param_1 + 0x14cu, f3);
    wrf32d(param_1 + 0x150u, f2);
    wrf32d(param_1 + 0x154u, f1);
    wr32(param_1 + 0x158u, 0u);
    wrf32d(param_1 + 0x164u, f0);
    wrf32d(param_1 + 0x160u, f0);
    wrf32d(param_1 + 0x15cu, f0);
    wrf32d(param_1 + 0x170u, f0);
    wrf32d(param_1 + 0x16cu, f0);
    wrf32d(param_1 + 0x168u, f0);
    wrf32d(param_1 + 0x17cu, f0);
    wrf32d(param_1 + 0x178u, f0);
    wrf32d(param_1 + 0x174u, f0);
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x80320fe4u, &a);
        if (r3 != 0u) {
            a.r[0] = rd32(param_1 + 0xe4u);
            (void)tc_call(0x80157f30u, &a);
        }
    }
    r3 = rd32(param_1 + 0xfcu);
    f2 = (f64)rdf32(0x80576200u);
    f1 = (f64)rdf32(0x8057621cu);
    f0 = (f64)rdf32(0x80576204u);
    wr32(param_1 + 0xe4u, 0u);
    wr32(param_1 + 0xe8u, 0xffffffffu);
    wrf32d(param_1 + 0xecu, f2);
    wrf32d(param_1 + 0xf0u, f1);
    wrf32d(param_1 + 0xf4u, f0);
    wr32(param_1 + 0xf8u, 0u);
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x80320fe4u, &a);
        if (r3 != 0u) {
            a.r[0] = rd32(param_1 + 0xfcu);
            (void)tc_call(0x80157f30u, &a);
        }
    }
    r3 = rd32(param_1 + 0x114u);
    f2 = (f64)rdf32(0x80576200u);
    f1 = (f64)rdf32(0x8057621cu);
    f0 = (f64)rdf32(0x80576204u);
    wr32(param_1 + 0xfcu, 0u);
    wr32(param_1 + 0x100u, 0xffffffffu);
    wrf32d(param_1 + 0x104u, f2);
    wrf32d(param_1 + 0x108u, f1);
    wrf32d(param_1 + 0x10cu, f0);
    wr32(param_1 + 0x110u, 0u);
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x80320fe4u, &a);
        if (r3 != 0u) {
            a.r[0] = rd32(param_1 + 0x114u);
            (void)tc_call(0x80157f30u, &a);
        }
    }
    r3 = rd32(param_1 + 0x144u);
    f2 = (f64)rdf32(0x80576200u);
    f1 = (f64)rdf32(0x8057621cu);
    f0 = (f64)rdf32(0x80576204u);
    wr32(param_1 + 0x114u, 0u);
    wr32(param_1 + 0x118u, 0xffffffffu);
    wrf32d(param_1 + 0x11cu, f2);
    wrf32d(param_1 + 0x120u, f1);
    wrf32d(param_1 + 0x124u, f0);
    wr32(param_1 + 0x128u, 0u);
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x80320fe4u, &a);
        if (r3 != 0u) {
            a.r[0] = rd32(param_1 + 0x144u);
            (void)tc_call(0x80157f30u, &a);
        }
    }
    f0 = (f64)rdf32(0x8057621cu);
    f4 = (f64)rdf32(0x80576204u);
    wrf32d(param_1 + 0x14cu, (f64)rdf32(0x80576200u));
    f3 = (f64)rdf32(0x805761f0u);
    wrf32d(param_1 + 0x150u, f0);
    f2 = (f64)rdf32(0x80576220u);
    wr32(param_1 + 0x144u, 0u);
    f1 = (f64)rdf32(0x80576224u);
    wr32(param_1 + 0x148u, 0xffffffffu);
    f0 = (f64)rdf32(0x80576228u);
    wrf32d(param_1 + 0x154u, f4);
    wr32(param_1 + 0x158u, 0u);
    f5 = (f64)px_w2f(rd32(0x804890d8u));
    f4 = (f64)px_w2f(rd32(0x804890dcu));
    wrf32d(param_1 + 0x174u, (f64)px_w2f(rd32(0x804890d4u)));
    wrf32d(param_1 + 0x178u, f5);
    wrf32d(param_1 + 0x17cu, f4);
    f5 = (f64)px_w2f(rd32(0x804890ccu));
    f4 = (f64)px_w2f(rd32(0x804890d0u));
    wrf32d(param_1 + 0x15cu, (f64)px_w2f(rd32(0x804890c8u)));
    wrf32d(param_1 + 0x160u, f5);
    wrf32d(param_1 + 0x164u, f4);
    f5 = (f64)px_w2f(rd32(0x804890ccu));
    f4 = (f64)px_w2f(rd32(0x804890d0u));
    wrf32d(param_1 + 0x168u, (f64)px_w2f(rd32(0x804890c8u)));
    wrf32d(param_1 + 0x16cu, f5);
    wrf32d(param_1 + 0x170u, f4);
    wr32(param_1 + 0x180u, 0u);
    wrf32d(param_1 + 0x184u, f3);
    wrf32d(param_1 + 0x188u, f3);
    wrf32d(param_1 + 0x18cu, f3);
    wrf32d(param_1 + 0x190u, f2);
    wr32(param_1 + 0x1a4u, 0u);
    wr32(param_1 + 0x1a8u, 1u);
    wrf32d(param_1 + 0x194u, f1);
    wr32(param_1 + 0x1acu, 0u);
    wrf32d(param_1 + 0x20u, f0);
    wr32(param_1 + 0x1a0u, 0u);
    wr32(param_1 + 0x19cu, 0u);
    wr32(param_1 + 0x1b4u, 0u);
    wr32(param_1 + 0x1b0u, 0u);
    wr32(param_1 + 0x1b8u, 0u);
    wr32(param_1 + 0x1bcu, 0xffffffffu);
    wr32(param_1 + 0x1c0u, 0xffffffffu);
    return param_1;
}
