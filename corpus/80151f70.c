#include "tc_rt.h"

u32 fn_80151f70(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800af074u, &a);
    wr32(param_1, 0x803688b0u);
    wr32(param_1 + 0x1694u, 0x25u);
    wr32(param_1 + 0x1698u, 1u);
    wr32(param_1 + 0x1690u, 0x80368aacu);
    a.r[0] = param_1 + 0x16a0u;
    a.r[1] = 0x8015259cu;
    a.r[2] = 0x801528f8u;
    a.r[3] = 0x1f0u;
    a.r[4] = 2u;
    (void)tc_call(0x80255624u, &a);
    wr32(param_1 + 0x1a80u, 0u);
    return param_1;
}
