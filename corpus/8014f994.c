#include "tc_rt.h"

void fn_8014f994(s32 param_1)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x78u) != 0u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x800da1b4u, &a);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800da160u, &a);
    r3 = (u32)param_1 + 0x80u;
    if (r3 != 0u && rd32(r3 + 0x24u) != 0u) {
        wr32(r3 + 0x18u, 1u);
    }
    a.f[0] = (f64)rdf32(0x805747c4u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800da490u, &a);
    wr32((u32)param_1 + 0x74u, rd32((u32)param_1 + 0x74u) & 0xf3ffffffu);
    a.r[0] = (u32)param_1 + 0x158u;
    (void)tc_call(0x80147160u, &a);
    r3 = rd32((u32)param_1 + 0x118u);
    if (r3 != 0u && rd32(r3 + 0xf8u) == 0x22u) {
        r3 = rd32(r3 + 0x78u);
        a.r[0] = r3;
        a.r[1] = 0u;
        r3 = tc_call(0x80031cf8u, &a);
        r3 = rd32(r3 + 0x50u);
        f0 = (f64)rdf32(r3 + 0x2cu);
        f1 = (f64)rdf32(r3 + 0x1cu);
        wrf32d((u32)param_1 + 4u, (f64)rdf32(r3 + 0xcu));
        wrf32d((u32)param_1 + 8u, f1);
        wrf32d((u32)param_1 + 0xcu, f0);
    }
    f2 = (f64)rdf32(0x80570840u);
    f3 = (f64)rdf32((u32)param_1 + 8u);
    f0 = (f64)rdf32(0x80570844u);
    wr32((u32)param_1 + 0x120u, 9u);
    wr32((u32)param_1 + 0x87cu, 0u);
    wrf32d((u32)param_1 + 0x880u, f3);
    wrf32d((u32)param_1 + 0x888u, f2);
    wrf32d((u32)param_1 + 0x884u, f2);
    wrf32d((u32)param_1 + 0x88cu, f0);
    wr32((u32)param_1 + 0x890u, 2u);
    return;
}
