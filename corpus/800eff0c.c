#include "tc_rt.h"

void fn_800eff0c(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wrf32d(param_2, (f64)rdf32(0x804890c8u));
    wrf32d(param_2 + 4u, (f64)rdf32(0x804890ccu));
    wrf32d(param_2 + 8u, (f64)rdf32(0x804890d0u));
    a.r[0] = 0x817fdfd8u;
    a.r[1] = param_2;
    (void)tc_call(0x800f00b0u, &a);
    r4 = rd32(param_2 + 0x1cu);
    wrf32d(param_2, (f64)rdf32(0x817fdfd8u));
    wrf32d(param_2 + 4u, (f64)rdf32(0x817fdfdcu));
    wrf32d(param_2 + 8u, (f64)rdf32(0x817fdfe0u));
    if (((r4 & 0x10000u) - 0x10000u) == 0u) {
        r0 = rd32(0x804890ccu);
        wr32(param_1, rd32(0x804890c8u));
        wr32(param_1 + 4u, r0);
        wr32(param_1 + 8u, rd32(0x804890d0u));
    } else {
        if (((r4 & 0x20000u) - 0x20000u) == 0u) {
            r3 = rd32(param_2 + 0x24u);
            if ((s32)r3 > 0) {
                wr32(param_2 + 0x24u, r3 - 1u);
            }
            r0 = rd32(param_2 + 0x24u);
            if (r0 != 0xffffffffu && (s32)r0 <= 0) {
                r3 = rd32(param_2 + 0x1cu);
                wr32(param_2 + 0x1cu, r3 ^ (r3 & 0x20000u));
            } else {
                r0 = rd32(0x804890ccu);
                wr32(param_1, rd32(0x804890c8u));
                wr32(param_1 + 4u, r0);
                wr32(param_1 + 8u, rd32(0x804890d0u));
                return;
            }
        }
        r0 = rd32(param_2 + 4u);
        wr32(param_1, rd32(param_2));
        wr32(param_1 + 4u, r0);
        wr32(param_1 + 8u, rd32(param_2 + 8u));
    }
    return;
}
