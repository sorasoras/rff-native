#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

void fn_801dd3b8(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r12 = 0, r25 = 0, r26 = 0;
    f64 f1 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f25 = (f64)rdf32(0x80576200u);
    r26 = param_r3;
    f26 = (f64)rdf32(0x8057621cu);
    f27 = (f64)rdf32(0x80576204u);
    f28 = (f64)rdf32(0x805761f0u);
    r25 = 0u;
    f29 = (f64)rdf32(0x80576220u);
    f30 = (f64)rdf32(0x80576224u);
    f31 = (f64)rdf32(0x80576228u);
    do {
        if (rd32(r26 + 0x1a8u) != 0u) {
            a.r[0] = r26;
            f1 = tc_callf(0x8006ff00u, &a);
        }
        r12 = rd32(r26 + 0x1b0u);
        if (r12 != 0u) {
            a.r[0] = r26;
            a.r[1] = rd32(r26 + 0x1b8u);
            a.f[0] = f1;
            (void)tc_call(r12, &a);
        }
        r3 = rd32(r26 + 0xe4u);
        if (r3 != 0u) {
            a.r[0] = r3;
            r3 = tc_call(0x80320fe4u, &a);
            if (r3 != 0u) {
                a.r[0] = rd32(r26 + 0xe4u);
                (void)tc_call(0x80157f30u, &a);
            }
        }
        wr32(r26 + 0xe4u, 0u);
        wr32(r26 + 0xe8u, 0xffffffffu);
        wrf32d(r26 + 0xecu, f25);
        wrf32d(r26 + 0xf0u, f26);
        wrf32d(r26 + 0xf4u, f27);
        wr32(r26 + 0xf8u, 0u);
        r3 = rd32(r26 + 0xfcu);
        if (r3 != 0u) {
            a.r[0] = r3;
            r3 = tc_call(0x80320fe4u, &a);
            if (r3 != 0u) {
                a.r[0] = rd32(r26 + 0xfcu);
                (void)tc_call(0x80157f30u, &a);
            }
        }
        wr32(r26 + 0xfcu, 0u);
        wr32(r26 + 0x100u, 0xffffffffu);
        wrf32d(r26 + 0x104u, f25);
        wrf32d(r26 + 0x108u, f26);
        wrf32d(r26 + 0x10cu, f27);
        wr32(r26 + 0x110u, 0u);
        r3 = rd32(r26 + 0x114u);
        if (r3 != 0u) {
            a.r[0] = r3;
            r3 = tc_call(0x80320fe4u, &a);
            if (r3 != 0u) {
                a.r[0] = rd32(r26 + 0x114u);
                (void)tc_call(0x80157f30u, &a);
            }
        }
        wr32(r26 + 0x114u, 0u);
        wr32(r26 + 0x118u, 0xffffffffu);
        wrf32d(r26 + 0x11cu, f25);
        wrf32d(r26 + 0x120u, f26);
        wrf32d(r26 + 0x124u, f27);
        wr32(r26 + 0x128u, 0u);
        r3 = rd32(r26 + 0x144u);
        if (r3 != 0u) {
            a.r[0] = r3;
            r3 = tc_call(0x80320fe4u, &a);
            if (r3 != 0u) {
                a.r[0] = rd32(r26 + 0x144u);
                (void)tc_call(0x80157f30u, &a);
            }
        }
        wr32(r26 + 0x144u, 0u);
        r25 = r25 + 1u;
        wr32(r26 + 0x148u, 0xffffffffu);
        wrf32d(r26 + 0x14cu, f25);
        wrf32d(r26 + 0x150u, f26);
        wrf32d(r26 + 0x154u, f27);
        wr32(r26 + 0x158u, 0u);
        r3 = rd32(0x804890d8u);
        wr32(0x817fdf60u, rd32(0x804890d4u));
        r0 = rd32(0x804890dcu);
        wrf32d(r26 + 0x174u, (f64)rdf32(0x817fdf60u));
        wrf32d(r26 + 0x178u, (f64)px_w2f(r3));
        wrf32d(r26 + 0x17cu, (f64)px_w2f(r0));
        r3 = rd32(0x804890ccu);
        wr32(0x817fdf54u, rd32(0x804890c8u));
        r0 = rd32(0x804890d0u);
        wrf32d(r26 + 0x15cu, (f64)rdf32(0x817fdf54u));
        wrf32d(r26 + 0x160u, (f64)px_w2f(r3));
        wrf32d(r26 + 0x164u, (f64)px_w2f(r0));
        r3 = rd32(0x804890ccu);
        wr32(0x817fdf48u, rd32(0x804890c8u));
        r0 = rd32(0x804890d0u);
        f1 = (f64)px_w2f(r3);
        wrf32d(r26 + 0x168u, (f64)rdf32(0x817fdf48u));
        wrf32d(r26 + 0x16cu, f1);
        wrf32d(r26 + 0x170u, (f64)px_w2f(r0));
        wr32(r26 + 0x180u, 0u);
        wrf32d(r26 + 0x184u, f28);
        wrf32d(r26 + 0x188u, f28);
        wrf32d(r26 + 0x18cu, f28);
        wrf32d(r26 + 0x190u, f29);
        wr32(r26 + 0x1a4u, 0u);
        wr32(r26 + 0x1a8u, 1u);
        wrf32d(r26 + 0x194u, f30);
        wr32(r26 + 0x1acu, 0u);
        wrf32d(r26 + 0x20u, f31);
        wr32(r26 + 0x1a0u, 0u);
        wr32(r26 + 0x19cu, 0u);
        wr32(r26 + 0x1b4u, 0u);
        wr32(r26 + 0x1b0u, 0u);
        wr32(r26 + 0x1b8u, 0u);
        wr32(r26 + 0x1bcu, 0xffffffffu);
        wr32(r26 + 0x1c0u, 0xffffffffu);
        r26 = r26 + 0x1c4u;
    } while ((s32)r25 < 128);
    return;
}
