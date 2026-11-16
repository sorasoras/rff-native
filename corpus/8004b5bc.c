#include "tc_rt.h"

u32 fn_8004b5bc(u32 param_r3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_r3;
    r3 = tc_call(0x8004b528u, &a);
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    return r3;
}
