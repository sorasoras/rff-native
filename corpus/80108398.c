#include "tc_rt.h"

u32 fn_80108398(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = (ppc_mulhwu(0x51eb851fu, (u32)rd16(0x8049908au) + 0x63u) >> 5u) & 0x7ffffffu;
    (void)tc_call(0x80100bb4u, &a);
    return 1u;
}
