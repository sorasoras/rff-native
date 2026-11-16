#include "tc_rt.h"

void fn_8014f720(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(param_1 + 0x74u, rd32(param_1 + 0x74u) & 0xfbffffffu);
    a.r[0] = rd32(param_1 + 0x78u);
    a.r[1] = param_1 + 0x158u;
    a.r[2] = param_1 + 0x74cu;
    (void)tc_call(0x80147414u, &a);
    r3 = param_1 + 0x80u;
    if (r3 != 0u) {
        r0 = rd32(param_1 + 0x134u);
        if (r0 != 0u) {
            if (r0 == 1u) {
                wr32(r3 + 0x18u, 0u);
            }
        } else if (rd32(r3 + 0x24u) != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x800cb5a8u, &a);
        }
    }
    f0 = (f64)rdf32(0x805747acu);
    wrf32d(0x817fdfb8u, f0);
    wrf32d(0x817fdfb4u, f0);
    wrf32d(0x817fdfb0u, f0);
    a.r[0] = rd32(param_1 + 0x78u);
    a.r[1] = 0x817fdfd8u;
    (void)tc_call(0x80031998u, &a);
    f6 = (f64)rdf32(0x817fdfd8u);
    f3 = (f64)rdf32(0x817fdfdcu);
    f1 = (f64)rdf32(0x817fdfe0u);
    f5 = (f64)rdf32(0x805747b4u);
    f0 = (f64)(f32)((f64)rdf32(0x817fdfecu) - f1);
    f2 = ppc_fmadds(f5, (f64)(f32)((f64)rdf32(0x817fdfe8u) - f3), f3);
    wrf32d(0x817fdfb0u, ppc_fmadds(f5, (f64)(f32)((f64)rdf32(0x817fdfe4u) - f6), f6));
    f0 = ppc_fmadds(f5, f0, f1);
    wrf32d(0x817fdfb4u, f2);
    wrf32d(0x817fdfb8u, f0);
    if (rd32(param_1 + 0x130u) == 0u) {
        wr32(param_1 + 0x130u, 0x12cu);
    }
    f2 = (f64)rdf32(0x805747c0u);
    wr32(0x817fdff4u, rd32(param_1 + 0x130u));
    f4 = rdf64(0x805747b8u);
    wr32(0x817fdff0u, 0x43300000u);
    f4 = (f64)(f32)(rdf64(0x817fdff0u) - f4);
    a.f[0] = (f64)rdf32(param_1 + 0x770u);
    a.f[1] = f2;
    a.f[2] = f2;
    a.f[3] = f4;
    a.r[0] = param_1 + 0x774u;
    a.r[1] = 0x817fdfb0u;
    a.r[2] = 0x10008fu;
    a.r[3] = 0u;
    a.r[4] = 0u;
    f1 = tc_callf(0x800cdc78u, &a);
    r3 = rd32(param_1 + 0x118u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = param_1;
        a.r[2] = 0x13u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        f1 = tc_callf(rd32(rd32(r3) + 0x7cu), &a);
    }
    r4 = rd32(param_1 + 0x874u);
    if (r4 != 0xffffffffu) {
        a.r[0] = 0x804b9e80u;
        a.r[1] = r4;
        f1 = tc_callf(0x801206f4u, &a);
        r4 = tc_lastr4();
        wr32(param_1 + 0x874u, 0xffffffffu);
    }
    if (rd32(param_1 + 0x868u) != 0xffffffffu) {
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        r0 = rd32(r3 + 4u);
        wr32(0x817fdfa4u, rd32(r3));
        wr32(0x817fdfa8u, r0);
        wr32(0x817fdfacu, rd32(r3 + 8u));
        a.r[0] = 0x804b9da0u;
        a.r[1] = rd32(param_1 + 0x868u);
        a.r[2] = 0x817fdfa4u;
        (void)tc_call(0x8010a754u, &a);
    }
    if (rd32(param_1 + 0x86cu) != 0xffffffffu) {
        a.r[0] = rd32(param_1 + 0x78u);
        a.r[1] = 0x817fdfc0u;
        (void)tc_call(0x80031998u, &a);
        f6 = (f64)rdf32(0x817fdfc0u);
        f3 = (f64)rdf32(0x817fdfc4u);
        f1 = (f64)rdf32(0x817fdfc8u);
        f5 = (f64)rdf32(0x805747b4u);
        f0 = (f64)(f32)((f64)rdf32(0x817fdfd4u) - f1);
        f2 = ppc_fmadds(f5, (f64)(f32)((f64)rdf32(0x817fdfd0u) - f3), f3);
        wrf32d(0x817fdf98u, ppc_fmadds(f5, (f64)(f32)((f64)rdf32(0x817fdfccu) - f6), f6));
        f0 = ppc_fmadds(f5, f0, f1);
        wrf32d(0x817fdf9cu, f2);
        wrf32d(0x817fdfa0u, f0);
        a.f[0] = (f64)rdf32(param_1 + 0x878u);
        a.r[0] = rd32(param_1 + 0x86cu);
        a.r[1] = 0x817fdf98u;
        a.r[2] = 0x804890c8u;
        a.r[3] = 0x804b15c0u;
        r3 = tc_call(0x800d782cu, &a);
        r30 = r3;
        if (r3 != 0u) {
            a.r[1] = 0xffffffffu;
            r3 = tc_call(0x8010b43cu, &a);
            wr32(r30 + 0x20u, r3);
            wr32(r30 + 0x24u, 0u);
        }
    }
    wr32(param_1 + 0x14cu, 1u);
    return;
}
