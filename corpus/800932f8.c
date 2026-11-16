#include "tc_rt.h"

u32 fn_800932f8(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r5 = 0;
    r0 = 0u;
    if ((f64)rdf32(param_2) < (f64)rdf32(param_1)) {
        r0 = 1u;
    }
    if ((f64)rdf32(param_2) > (f64)rdf32(param_1 + 0xcu)) {
        r0 = r0 | 2u;
    }
    if ((f64)rdf32(param_2 + 4u) < (f64)rdf32(param_1 + 4u)) {
        r0 = r0 | 4u;
    }
    if ((f64)rdf32(param_2 + 4u) > (f64)rdf32(param_1 + 0x10u)) {
        r0 = r0 | 8u;
    }
    if ((f64)rdf32(param_2 + 8u) < (f64)rdf32(param_1 + 8u)) {
        r0 = r0 | 0x10u;
    }
    if ((f64)rdf32(param_2 + 8u) > (f64)rdf32(param_1 + 0x14u)) {
        r0 = r0 | 0x20u;
    }
    r5 = 0u;
    if ((f64)rdf32(param_2 + 0xcu) < (f64)rdf32(param_1)) {
        r5 = 1u;
    }
    if ((f64)rdf32(param_2 + 0xcu) > (f64)rdf32(param_1 + 0xcu)) {
        r5 = r5 | 2u;
    }
    if ((f64)rdf32(param_2 + 0x10u) < (f64)rdf32(param_1 + 4u)) {
        r5 = r5 | 4u;
    }
    if ((f64)rdf32(param_2 + 0x10u) > (f64)rdf32(param_1 + 0x10u)) {
        r5 = r5 | 8u;
    }
    if ((f64)rdf32(param_2 + 0x14u) < (f64)rdf32(param_1 + 8u)) {
        r5 = r5 | 0x10u;
    }
    if ((f64)rdf32(param_2 + 0x14u) > (f64)rdf32(param_1 + 0x14u)) {
        r5 = r5 | 0x20u;
    }
    if (r0 == 0u && r5 == 0u) {
        return 2u;
    }
    r0 = r0 & 0x2au;
    if (r0 != 0u || (r5 & 0x15u) != 0u) {
        return 0u;
    }
    return 1u;
}
