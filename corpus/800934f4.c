#include "tc_rt.h"

u32 fn_800934f4(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800f2a1cu, &a);
    wr32(param_1, 0x80351608u);
    a.r[0] = param_1 + 0x26cu;
    a.r[1] = 0x8007021cu;
    a.r[2] = 0x80070278u;
    a.r[3] = 0xacu;
    a.r[4] = 0xcu;
    (void)tc_call(0x80255624u, &a);
    wr32(param_1 + 0xa7cu, 0u);
    wr32(param_1 + 0x254u, 4u);
    wr32(param_1 + 0x25cu, 0x21u);
    wr32(param_1 + 0x260u, 0u);
    wr32(param_1 + 0x258u, 0u);
    wr32(param_1 + 0x268u, 0u);
    wr32(param_1 + 0x264u, 1u);
    return param_1;
}
