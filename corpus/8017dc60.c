#include "tc_rt.h"

u32 fn_8017dc60(u32 param_1)
{
    u32 r4 = 0, r5 = 0, r6 = 0;
    f64 f0 = 0.0;
    if (rd32(param_1 + 0x94u) != 1u) {
        return 1u;
    }
    f0 = (f64)rdf32(0x80575028u);
    r6 = rd32(param_1);
    while (r6 != 0u) {
        r4 = r6;
        r6 = rd32(r6);
        r4 = rd32(r4 + 8u);
        if (rd32(r4 + 0x80u) == 6u && (f64)rdf32(r4 + 0x88u) < f0) {
            return 0u;
        }
    }
    r6 = rd32(param_1 + 0x1cu);
    while (r6 != 0u) {
        r4 = r6;
        r6 = rd32(r6);
        r4 = rd32(r4 + 8u);
        if (rd32(r4 + 0x80u) == 6u && (f64)rdf32(r4 + 0x88u) < f0) {
            return 0u;
        }
    }
    r6 = rd32(param_1 + 0x38u);
    r5 = param_1 + 0x38u;
    while (r6 != 0u) {
        r4 = r6;
        r6 = rd32(r6);
        r4 = rd32(r4 + 8u);
        if (rd32(r4 + 0x80u) == 6u && (f64)rdf32(r4 + 0x88u) < f0) {
            return 0u;
        }
    }
    r6 = rd32(r5 + 0x1cu);
    while (r6 != 0u) {
        r4 = r6;
        r6 = rd32(r6);
        r4 = rd32(r4 + 8u);
        if (rd32(r4 + 0x80u) == 6u && (f64)rdf32(r4 + 0x88u) < f0) {
            return 0u;
        }
    }
    wr32(param_1 + 0x94u, 2u);
    return 1u;
}
