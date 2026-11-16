#include "tc_rt.h"

u32 fn_8018bdb8(u32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    if (rd32(0x804bb79cu) == 0u) {
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.f[0] = 0.0;
        (void)tc_call(rd32(rd32(param_1) + 0x3cu), &a);
        r3 = rd32(param_1 + 0x48u);
        r0 = rd32(param_1 + 0x4cu);
        wr32(param_1 + 0x38u, rd32(param_1 + 0x44u));
        wr32(param_1 + 0x3cu, r3);
        wr32(param_1 + 0x40u, r0);
        r0 = rd32(0x8033caa4u);
        wr32(param_1 + 0x44u, rd32(0x8033caa0u));
        wr32(param_1 + 0x48u, r0);
        wr32(param_1 + 0x4cu, rd32(0x8033caa8u));
    }
    return 1u;
}
