#include "tc_rt.h"

u32 fn_800c4564(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r31 = 0;
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
                if (rd32(0x805711ecu) == 0u) {
                    r0 = rd32(param_1 + 0x290u);
                    if (r0 == 0u || r0 == 1u) {
                        r3 = 1u;
                        return r3;
                    }
                }
                r3 = 0u;
            }
        }
    }
    return r3;
}
