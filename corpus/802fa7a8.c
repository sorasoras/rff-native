#include "tc_rt.h"

u32 fn_802fa7a8(s32 param_1, u32 param_2)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    f2 = (f64)rdf32(param_2 + 0x18u);
    wr32(0x817fe004u, 0x817ff000u);
    f8 = (f64)rdf32(0x8057765cu);
    wr32(0x817fdffcu, 0u);
    f7 = (f64)rdf32(param_2);
    wr32(0x817fdff8u, 0u);
    f6 = (f64)rdf32(param_2 + 4u);
    wr32(0x817fdff4u, 0u);
    f5 = (f64)rdf32(param_2 + 8u);
    f4 = (f64)rdf32(param_2 + 0xcu);
    f3 = (f64)rdf32(param_2 + 0x10u);
    r5 = rd32(param_2 + 0x14u);
    r0 = rd32(param_2 + 0x1cu);
    f1 = (f64)rdf32(param_2 + 0x20u);
    f0 = (f64)rdf32(param_2 + 0x24u);
    wrf32d((u32)param_1 + 0x18u, f7);
    wrf32d((u32)param_1 + 0x1cu, f6);
    wrf32d((u32)param_1 + 0x20u, f5);
    wrf32d((u32)param_1 + 0x24u, f4);
    wrf32d((u32)param_1 + 0x28u, f3);
    wr32((u32)param_1 + 0x2cu, r5);
    wrf32d((u32)param_1 + 0x30u, f2);
    wr32((u32)param_1 + 0x34u, r0);
    wrf32d((u32)param_1 + 0x38u, f1);
    wrf32d((u32)param_1 + 0x3cu, f0);
    if (!(f2 < f8)) {
        f8 = f2;
    }
    f0 = (f64)rdf32((u32)param_1 + 0xf8u);
    f1 = (f64)rdf32(param_2 + 0x18u);
    r0 = ((((f8 < f0) << 0x1fu) | ((f8 > f0) << 0x1eu) | ((f8 == f0) << 0x1du) | (((f8 != f8) || (f0 != f0)) << 0x1cu)) >> 0x1du) & 1u;
    f0 = (f64)rdf32(param_2);
    r30 = r0 ^ 1u;
    r0 = rd32(param_2 + 0x14u);
    wrf32d((u32)param_1 + 0xf8u, f8);
    wr32((u32)param_1 + 0xf4u, r0);
    if (!(f0 > f1)) {
        f1 = (f64)rdf32(0x8057765cu);
        if (!(f0 < f1)) {
            f1 = f0;
        }
    }
    f0 = (f64)rdf32(param_2 + 4u);
    f2 = (f64)rdf32(0x8057765cu);
    r0 = rd32(param_2 + 0x1cu);
    wrf32d((u32)param_1 + 0xfcu, f1);
    wr32((u32)param_1 + 0x100u, r0);
    if (!(f0 < f2)) {
        f2 = f0;
    }
    f0 = (f64)rdf32(param_2 + 8u);
    f1 = (f64)rdf32(0x80577658u);
    wrf32d((u32)param_1 + 0x104u, f2);
    if (!(f0 > f1)) {
        f1 = (f64)rdf32(0x8057765cu);
        if (!(f0 < f1)) {
            f1 = f0;
        }
    }
    f0 = (f64)rdf32(param_2 + 0xcu);
    f2 = (f64)rdf32(0x80577658u);
    wrf32d((u32)param_1 + 0x108u, f1);
    if (!(f0 > f2)) {
        f2 = (f64)rdf32(0x8057765cu);
        if (!(f0 < f2)) {
            f2 = f0;
        }
    }
    f0 = (f64)rdf32(param_2 + 0x20u);
    f1 = (f64)rdf32(0x80577658u);
    wrf32d((u32)param_1 + 0x10cu, f2);
    if (!(f0 > f1)) {
        f1 = (f64)rdf32(0x8057765cu);
        if (!(f0 < f1)) {
            f1 = f0;
        }
    }
    f0 = (f64)rdf32(param_2 + 0x24u);
    f2 = (f64)rdf32(0x80577658u);
    wrf32d((u32)param_1 + 0x110u, f1);
    if (!(f0 > f2)) {
        f2 = (f64)rdf32(0x8057765cu);
        if (!(f0 < f2)) {
            f2 = f0;
        }
    }
    f0 = (f64)rdf32(param_2 + 0x10u);
    f1 = (f64)rdf32(0x80577658u);
    wrf32d((u32)param_1 + 0x114u, f2);
    if (!(f0 > f1)) {
        f1 = (f64)rdf32(0x8057765cu);
        if (!(f0 < f1)) {
            f1 = f0;
        }
    }
    r31 = 0u;
    f0 = (f64)rdf32(0x8057765cu);
    c0eq = (u32)rd8((u32)param_1 + 0xcu) == 0u;
    wrf32d((u32)param_1 + 0x120u, f1);
    wr32((u32)param_1 + 0x118u, 0u);
    wr32((u32)param_1 + 0x11cu, 0u);
    wrf32d((u32)param_1 + 0x124u, f0);
    if (!c0eq) {
        a.r[0] = (u32)param_1 + 0x40u;
        r3 = tc_call(0x80247ef8u, &a);
        r4 = rd32((u32)param_1 + 0x10u);
        r3 = (r3 + 0x87u) & 0xffffffe0u;
        if (r4 != 0u) {
            r31 = rd32(r4 + 0x1cu) - r4;
        }
        if (r3 <= r31) {
            if (r30 == 0u) {
                a.r[0] = (u32)param_1 + 0x40u;
                r3 = tc_call(0x802481a4u, &a);
                r30 = r3;
            } else {
                a.r[0] = (u32)param_1 + 0x10u;
                a.r[1] = 0x817fdfecu;
                a.r[2] = 0x817fdfe8u;
                (void)tc_call(0x802f4eecu, &a);
                a.r[0] = (u32)param_1 + 0x40u;
                r3 = tc_call(0x802480d4u, &a);
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
