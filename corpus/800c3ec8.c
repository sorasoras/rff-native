#include "tc_rt.h"

u32 fn_800c3ec8(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = 0x80499060u;
    r31 = 1u;
    if ((rd32(0x80499094u) & 0x20u) == 0u) {
        a.r[0] = 0x8049e140u;
        a.r[1] = 0x20u;
        r3 = tc_call(0x801a8f18u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 == 0u) {
            r31 = 0u;
        }
    }
    if (r31 != 0u) {
        r3 = 0u;
    } else {
        if (rd32(param_1 + 0xab4u) != 0xbu) {
            r3 = 0u;
        } else {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(param_1) + 0x94u), &a);
            if (r3 != 0u) {
                r3 = 0u;
            } else {
                if ((rd32(0x805711ecu) == 0u && ((ppc_cntlzw(rd32(0x80571188u) & 0x20u) >> 5u) & 0x7ffffffu) != 0u) && (rd32(param_1 + 0x290u) == 0u && ((ppc_cntlzw((u32)rd16(param_1 + 0x140u) & 0x10u) >> 5u) & 0x7ffffffu) != 0u)) {
                    r3 = 1u;
                } else {
                    r3 = 0u;
                }
            }
        }
    }
    return r3;
}
