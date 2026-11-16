#include "tc_rt.h"

u32 fn_801b1f2c(s32 param_1)
{
    u32 r0 = 0;
    TcArgs a = {0};
    a.r[0] = 0x80486da8u;
    (void)tc_call(0x800b8708u, &a);
    r0 = rd32(0x80372470u);
    wr32((u32)param_1 + 0x38u, rd32(0x8037246cu));
    wr32((u32)param_1 + 0x3cu, r0);
    wr32((u32)param_1 + 0x40u, rd32(0x80372474u));
    return 1u;
}
