#include "tc_rt.h"

void fn_80140a18(s32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x120u) == 2u) {
        a.r[0] = rd32((u32)param_1 + 0x78u);
        a.r[1] = 0u;
        r3 = tc_call(0x800355acu, &a);
        if (r3 != 0u) {
            f1 = (f64)rdf32(0x8057443cu);
            wr32((u32)param_1 + 0x120u, 3u);
            a.f[0] = f1;
            a.r[0] = (u32)param_1;
            (void)tc_call(0x800da490u, &a);
            a.f[0] = (f64)rdf32(0x80574440u);
            a.r[0] = (u32)param_1;
            (void)tc_call(0x800da4b8u, &a);
        }
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800d9ffcu, &a);
    return;
}
