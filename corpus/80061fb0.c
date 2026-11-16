#include "tc_rt.h"

u32 fn_80061fb0(s32 param_1)
{
    u32 r4 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80061594u, &a);
    (void)tc_call(0x80061facu, &a);
    r4 = rd32((u32)param_1 + 0xcu);
    return (((7u - r4) | (r4 - 7u)) >> 0x1fu) & 1u;
}
