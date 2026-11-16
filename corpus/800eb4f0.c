#include "tc_rt.h"

u32 fn_800eb4f0(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r12 = 0;
    TcArgs a = {0};
    if (param_1 < 0x9au) {
        r12 = rd32(((param_1 << 2u) & 0xfffffffcu) - 0x7fca8cf8u);
        if (r12 != 0u) {
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = param_3;
            a.r[3] = param_4;
            a.r[4] = 0x80357308u;
            a.f[0] = 0.0;
            r3 = tc_call(r12, &a);
            return r3;
        }
    }
    if ((param_1 == 0x43u || param_1 == 0x63u) || param_1 == 0x67u) {
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = param_3;
        a.r[3] = param_4;
        r3 = tc_call(0x801d2e68u, &a);
        return r3;
    }
    r3 = tc_call(0x800a7eccu, &a);
    return r3;
}
