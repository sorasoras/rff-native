#include "tc_rt.h"

void fn_801795c0(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    r4 = rd32((u32)param_1 + 0x160u);
    if (r4 != 0xffffffffu && rd32(((r4 << 2u) & 0xfffffffcu) - 0x7fca9e94u) == 0u) {
        a.f[0] = (f64)rdf32(0x80574fa8u);
        a.r[0] = r4;
        a.r[1] = (u32)param_1 + 0x100u;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        r3 = tc_call(0x800d783cu, &a);
        if (r3 != 0u) {
            wr32(r3 + 0x20u, rd32((u32)param_1 + 0x164u));
            wr32(r3 + 0x24u, 0u);
            a.f[0] = (f64)rdf32((u32)param_1 + 0x168u);
            a.r[0] = r3;
            (void)tc_call(0x80157f78u, &a);
        }
    }
    if ((((u32)rd8((u32)param_1 + 0x1a4u) >> 6u) & 1u) != 0u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80177c88u, &a);
    }
    return;
}
