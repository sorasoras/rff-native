#include "tc_rt.h"

u32 fn_801083e0(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = (ppc_mulhwu(0x51eb851fu, rd32(rd32(rd32(0x80571398u) + 0x38u) + 0x28u) + (u32)rd16(0x80499088u) + 0x63u) >> 5u) & 0x7ffffffu;
    (void)tc_call(0x80100bb4u, &a);
    return 1u;
}
