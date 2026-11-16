#include "tc_rt.h"

void fn_802c0244(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfd8u, 0u);
    r3 = rd32((u32)param_1 + 0x28u);
    a.r[0] = r3;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0x50u), &a);
    if (r3 != 0u) {
        r3 = rd32((u32)param_1 + 0x2cu);
        f1 = (f64)rdf32(r3 + 0x4cu);
        f0 = (f64)rdf32(r3 + 0x50u);
        f31 = (f64)rdf32(r3 + 0x90u);
        f30 = (f64)rdf32(r3 + 0xa0u);
        r5 = (u32)rd8(0x8034862du);
        r3 = (u32)rd8(0x8034862eu);
        r0 = (u32)rd8(0x8034862fu);
        wr8(0x817fdfc8u, rd8(0x8034862cu));
        wr8(0x817fdfc9u, (u8)r5);
        wr8(0x817fdfcau, (u8)r3);
        wr8(0x817fdfcbu, (u8)r0);
        r0 = (u32)rd8((u32)param_1 + 4u);
        wrf32d(0x817fdfd0u, f1);
        wrf32d(0x817fdfd4u, f0);
        if (r0 != 0u) {
            wr8(0x817fdfc8u, 0u);
            wr8(0x817fdfcau, 0xffu);
        }
        f1 = (f64)rdf32(0x80348630u);
        f3 = (f64)(f32)((f64)rdf32(0x817fdfd0u) * f1);
        f2 = (f64)(f32)(f30 - (f64)(f32)((f64)rdf32(0x817fdfd4u) * f1));
        f1 = (f64)(f32)(f31 - f3);
        f3 = (f64)(f32)(f31 + f3);
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f2;
        a.f[4] = (f64)rdf32(0x80348628u);
        a.r[0] = 8u;
        a.r[1] = 0x817fdfc8u;
        (void)tc_call(0x802befa0u, &a);
        f2 = (f64)rdf32(0x80348630u);
        f0 = (f64)(f32)((f64)rdf32(0x817fdfd4u) * f2);
        f1 = (f64)(f32)(f31 + (f64)(f32)((f64)rdf32(0x817fdfd0u) * f2));
        a.f[0] = f1;
        a.f[1] = (f64)(f32)(f30 - f0);
        a.f[2] = f1;
        a.f[3] = (f64)(f32)(f30 + f0);
        a.f[4] = (f64)rdf32(0x80348628u);
        a.r[0] = 8u;
        a.r[1] = 0x817fdfc8u;
        (void)tc_call(0x802befa0u, &a);
        f1 = (f64)rdf32(0x80348630u);
        f3 = (f64)(f32)((f64)rdf32(0x817fdfd0u) * f1);
        f2 = (f64)(f32)(f30 + (f64)(f32)((f64)rdf32(0x817fdfd4u) * f1));
        f1 = (f64)(f32)(f31 + f3);
        f3 = (f64)(f32)(f31 - f3);
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f2;
        a.f[4] = (f64)rdf32(0x80348628u);
        a.r[0] = 8u;
        a.r[1] = 0x817fdfc8u;
        (void)tc_call(0x802befa0u, &a);
        f2 = (f64)rdf32(0x80348630u);
        f0 = (f64)(f32)((f64)rdf32(0x817fdfd4u) * f2);
        f1 = (f64)(f32)(f31 - (f64)(f32)((f64)rdf32(0x817fdfd0u) * f2));
        a.f[0] = f1;
        a.f[1] = (f64)(f32)(f30 + f0);
        a.f[2] = f1;
        a.f[3] = (f64)(f32)(f30 - f0);
        a.f[4] = (f64)rdf32(0x80348628u);
        a.r[0] = 8u;
        a.r[1] = 0x817fdfc8u;
        (void)tc_call(0x802befa0u, &a);
    }
    return;
}
