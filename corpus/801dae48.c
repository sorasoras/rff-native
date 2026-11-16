#include "tc_rt.h"

u32 fn_801dae48(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 0x4953534du;
    r3 = tc_call(0x800a5f14u, &a);
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    return r3;
}
