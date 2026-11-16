#include "tc_rt.h"

u32 fn_8020ff88(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = rd32((u32)param_1 + 0x120u);
    r3 = tc_call(0x800dacf8u, &a);
    r3 = (((0xffffffffu - r3) | (r3 + 1u)) >> 0x1fu) & 1u;
    return r3;
}
