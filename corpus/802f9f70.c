#include "tc_rt.h"

u32 fn_802f9f70(s32 param_1, u32 param_2)
{
    u32 c0eq = 0, r3 = 0, r4 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    TcArgs a = {0};
    f4 = (f64)rdf32(param_2);
    f5 = (f64)rdf32(0x80577620u);
    f3 = (f64)rdf32(param_2 + 4u);
    f2 = (f64)rdf32(param_2 + 8u);
    f1 = (f64)rdf32(param_2 + 0xcu);
    f0 = (f64)rdf32(param_2 + 0x10u);
    wrf32d((u32)param_1 + 0x18u, f4);
    wrf32d((u32)param_1 + 0x1cu, f3);
    wrf32d((u32)param_1 + 0x20u, f2);
    wrf32d((u32)param_1 + 0x24u, f1);
    wrf32d((u32)param_1 + 0x28u, f0);
    if (!(f4 > f5)) {
        f5 = (f64)rdf32(0x80577624u);
        if (!(f4 < f5)) {
            f5 = f4;
        }
    }
    f0 = (f64)rdf32(param_2 + 4u);
    f1 = (f64)rdf32(0x80577618u);
    wrf32d((u32)param_1 + 0xacu, f5);
    if (!(f0 > f1)) {
        f1 = (f64)rdf32(0x8057761cu);
        if (!(f0 < f1)) {
            f1 = f0;
        }
    }
    f0 = (f64)rdf32(param_2 + 8u);
    f2 = (f64)rdf32(0x80577628u);
    wrf32d((u32)param_1 + 0xb0u, f1);
    if (!(f0 > f2)) {
        f2 = (f64)rdf32(0x80577624u);
        if (!(f0 < f2)) {
            f2 = f0;
        }
    }
    f0 = (f64)rdf32(param_2 + 0xcu);
    f1 = (f64)rdf32(0x8057762cu);
    wrf32d((u32)param_1 + 0xb4u, f2);
    if (!(f0 > f1)) {
        f1 = (f64)rdf32(0x8057761cu);
        if (!(f0 < f1)) {
            f1 = f0;
        }
    }
    f0 = (f64)rdf32(param_2 + 0x10u);
    f2 = (f64)rdf32(0x80577618u);
    wrf32d((u32)param_1 + 0xb8u, f1);
    if (!(f0 > f2)) {
        f2 = (f64)rdf32(0x8057761cu);
        if (!(f0 < f2)) {
            f2 = f0;
        }
    }
    r31 = 0u;
    f0 = (f64)rdf32(0x8057761cu);
    c0eq = (u32)rd8((u32)param_1 + 0xcu) == 0u;
    wrf32d((u32)param_1 + 0xc4u, f2);
    wr32((u32)param_1 + 0xbcu, 0u);
    wr32((u32)param_1 + 0xc0u, 0u);
    wrf32d((u32)param_1 + 0xc8u, f0);
    if (!c0eq) {
        r3 = tc_call(0x80248bf8u, &a);
        r4 = rd32((u32)param_1 + 0x10u);
        r3 = (r3 + 0x87u) & 0xffffffe0u;
        if (r4 != 0u) {
            r31 = rd32(r4 + 0x1cu) - r4;
        }
        if (r3 <= r31) {
            a.r[0] = (u32)param_1 + 0x2cu;
            r3 = tc_call(0x80248e60u, &a);
            r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
        } else {
            r3 = 0u;
        }
    } else {
        r3 = 1u;
    }
    return r3;
}
