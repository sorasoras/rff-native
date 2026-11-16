#include "tc_rt.h"

u32 fn_800c1254(s32 param_1)
{
    u32 r0 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 5u;
    if (rd32((u32)param_1 + 0x110u) != 0u) {
        r0 = (u32)rd8(((rd32((u32)param_1 + 0x5c0u) - 0x1f8u) * 0x14u) - 0x7fb6082fu);
        if (r0 > 0xffu) {
            r0 = 0xffu;
        }
        f1 = (f64)rdf32(0x80572ea8u);
        r31 = 0u;
        wr32(0x80499178u, r0);
        a.f[0] = f1;
        a.r[0] = (u32)param_1;
        a.r[1] = 1u;
        a.r[2] = 0u;
        (void)tc_call(0x800bf1d4u, &a);
    }
    return r31;
}
