#include "tc_rt.h"

u32 fn_800d1938(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800ce4d4u, &a);
    wr32(param_1, 0x80355b98u);
    a.r[0] = param_1 + 0x34u;
    a.r[1] = 0x800d1ac8u;
    a.r[2] = 0x800d1a70u;
    a.r[3] = 0x24u;
    a.r[4] = 2u;
    (void)tc_call(0x80255624u, &a);
    wr32(param_1 + 0x28u, 3u);
    wr32(param_1 + 0x2cu, 0u);
    wr32(param_1 + 0x78u, 0u);
    wr32(param_1 + 0x54u, 0u);
    wr32(param_1 + 0x20u, 0u);
    wr32(param_1 + 0x24u, 0u);
    wr32(param_1 + 0x30u, 7u);
    return param_1;
}
