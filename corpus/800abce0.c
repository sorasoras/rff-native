#include "tc_rt.h"

void fn_800abce0(u32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    if (rd32(param_1 + 0x1cu) != 0u) {
        a.r[0] = param_1;
        (void)tc_call(0x800ac03cu, &a);
    }
    r0 = rd32(param_1 + 0x20u);
    wr32(param_1 + 0x1cu, 0u);
    if (r0 != 0u) {
        wr32(0x8057118cu, rd32(0x8057118cu) & 0xffff7fffu);
    }
    if (rd32(param_1 + 0x24u) == 0u && rd32(param_1 + 0x2cu) != 0u) {
        wr32(param_1 + 0x2cu, 0u);
        wr32(0x804b9e08u, 1u);
    }
    wr32(param_1 + 4u, rd32(param_1));
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3);
    a.r[0] = r3;
    r3 = tc_call(0x800a3578u, &a);
    wr32(param_1, r3);
    return;
}
