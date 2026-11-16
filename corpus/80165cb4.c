#include "tc_rt.h"

u32 fn_80165cb4(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x100u) == 1u && (f64)rdf32(0x80574b90u) == (f64)rdf32(rd32((u32)param_1 + 0x70u) + 0x54u)) {
        a.r[0] = (u32)param_1 + 0xf5cu;
        (void)tc_call(0x800f17bcu, &a);
        a.f[0] = (f64)rdf32(0x80574b94u);
        a.r[0] = (u32)param_1 + 0xf5cu;
        (void)tc_call(0x800f1708u, &a);
    }
    r31 = 0u;
    if (rd32((u32)param_1 + 0x1468u) == 1u) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x800b2fe8u, &a);
        if (r3 != 0u) {
            r31 = 1u;
        }
    }
    if (r31 != 0u) {
        a.f[0] = (f64)rdf32(0x80574b8cu);
        a.r[0] = (u32)param_1;
        a.r[1] = 2u;
        a.r[2] = 0u;
        a.r[3] = 1u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        (void)tc_call(0x800b5248u, &a);
    }
    if (rd32((u32)param_1 + 0x100u) == 2u && (((u32)rd8((u32)param_1 + 0x358u) >> 6u) & 1u) != 0u) {
        a.f[0] = (f64)rdf32(0x80574b8cu);
        a.r[0] = (u32)param_1;
        a.r[1] = 3u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        (void)tc_call(0x800b5248u, &a);
    }
    r31 = 0u;
    if (rd32((u32)param_1 + 0x1468u) == 3u) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x800b2fe8u, &a);
        if (r3 != 0u) {
            r31 = 1u;
        }
    }
    return (((0u - r31) | r31) >> 0x1fu) & 1u;
}
