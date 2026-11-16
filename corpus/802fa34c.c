#include "tc_rt.h"

u32 fn_802fa34c(s32 param_1, u32 param_2)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    f1 = (f64)rdf32(param_2 + 0xcu);
    wr32(0x817fe004u, 0x817ff000u);
    f5 = (f64)rdf32(0x8057763cu);
    wr32(0x817fdffcu, 0u);
    f4 = (f64)rdf32(param_2);
    wr32(0x817fdff8u, 0u);
    f3 = (f64)rdf32(param_2 + 4u);
    wr32(0x817fdff4u, 0u);
    f2 = (f64)rdf32(param_2 + 8u);
    f0 = (f64)rdf32(param_2 + 0x10u);
    wrf32d((u32)param_1 + 0x18u, f4);
    wrf32d((u32)param_1 + 0x1cu, f3);
    wrf32d((u32)param_1 + 0x20u, f2);
    wrf32d((u32)param_1 + 0x24u, f1);
    wrf32d((u32)param_1 + 0x28u, f0);
    if (!(f1 < f5)) {
        f5 = f1;
    }
    f0 = (f64)rdf32((u32)param_1 + 0x64u);
    r0 = ((f5 < f0) << 0x1fu) | ((f5 > f0) << 0x1eu) | ((f5 == f0) << 0x1du) | (((f5 != f5) || (f0 != f0)) << 0x1cu);
    f1 = (f64)rdf32(param_2 + 0xcu);
    f0 = (f64)rdf32(param_2);
    r0 = (r0 >> 0x1du) & 1u;
    wrf32d((u32)param_1 + 0x64u, f5);
    r30 = r0 ^ 1u;
    if (!(f0 > f1)) {
        f1 = (f64)rdf32(0x8057763cu);
        if (!(f0 < f1)) {
            f1 = f0;
        }
    }
    f0 = (f64)rdf32(param_2 + 4u);
    f2 = (f64)rdf32(0x80577640u);
    wrf32d((u32)param_1 + 0x68u, f1);
    if (!(f0 > f2)) {
        f2 = (f64)rdf32(0x80577644u);
        if (!(f0 < f2)) {
            f2 = f0;
        }
    }
    f0 = (f64)rdf32(param_2 + 0x10u);
    f1 = (f64)rdf32(0x80577638u);
    wrf32d((u32)param_1 + 0x6cu, f2);
    if (!(f0 > f1)) {
        f1 = (f64)rdf32(0x80577644u);
        if (!(f0 < f1)) {
            f1 = f0;
        }
    }
    f0 = (f64)rdf32(param_2 + 8u);
    f2 = (f64)rdf32(0x80577638u);
    wrf32d((u32)param_1 + 0x70u, f1);
    if (!(f0 > f2)) {
        f2 = (f64)rdf32(0x80577644u);
        if (!(f0 < f2)) {
            f2 = f0;
        }
    }
    r31 = 0u;
    f0 = (f64)rdf32(0x80577644u);
    c0eq = (u32)rd8((u32)param_1 + 0xcu) == 0u;
    wrf32d((u32)param_1 + 0x7cu, f2);
    wr32((u32)param_1 + 0x74u, 0u);
    wr32((u32)param_1 + 0x78u, 0u);
    wrf32d((u32)param_1 + 0x80u, f0);
    if (!c0eq) {
        a.r[0] = (u32)param_1 + 0x2cu;
        r3 = tc_call(0x80247470u, &a);
        r4 = rd32((u32)param_1 + 0x10u);
        r3 = (r3 + 0x87u) & 0xffffffe0u;
        if (r4 != 0u) {
            r31 = rd32(r4 + 0x1cu) - r4;
        }
        if (r3 <= r31) {
            if (r30 == 0u) {
                a.r[0] = (u32)param_1 + 0x2cu;
                r3 = tc_call(0x802478dcu, &a);
                r30 = r3;
            } else {
                a.r[0] = (u32)param_1 + 0x10u;
                a.r[1] = 0x817fdfecu;
                a.r[2] = 0x817fdfe8u;
                (void)tc_call(0x802f4eecu, &a);
                a.r[0] = (u32)param_1 + 0x2cu;
                r3 = tc_call(0x8024775cu, &a);
                r30 = r3;
                a.r[0] = (u32)param_1 + 0x10u;
                a.r[1] = rd32(0x817fdfecu);
                a.r[2] = rd32(0x817fdfe8u);
                (void)tc_call(0x802f4f40u, &a);
            }
            r3 = (((0u - r30) | r30) >> 0x1fu) & 1u;
        } else {
            r3 = 0u;
        }
    } else {
        r3 = 1u;
    }
    return r3;
}
