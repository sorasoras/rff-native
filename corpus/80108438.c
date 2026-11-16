#include "tc_rt.h"

u32 fn_80108438(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = (ppc_mulhwu(0xcccccccdu, (u32)rd16(0x8049908cu) + 0x13u) >> 4u) & 0xfffffffu;
    (void)tc_call(0x80100bb4u, &a);
    return 1u;
}
