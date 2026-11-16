#include "tc_rt.h"

u32 fn_801b1e74(s32 param_1)
{
    u32 r0 = 0;
    TcArgs a = {0};
    wr32((u32)param_1 + 0x78u, 0x708u);
    wr32((u32)param_1 + 0x7cu, 0u);
    wr32((u32)param_1 + 0x80u, 0u);
    r0 = rd32(0x80372458u);
    wr32((u32)param_1 + 0x38u, rd32(0x80372454u));
    wr32((u32)param_1 + 0x3cu, r0);
    wr32((u32)param_1 + 0x40u, rd32(0x8037245cu));
    a.r[0] = 1u;
    (void)tc_call(0x801b10dcu, &a);
    return 1u;
}
