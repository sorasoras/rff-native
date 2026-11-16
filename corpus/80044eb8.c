#include "tc_rt.h"

void fn_80044eb8(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (ppc_cntlzw(param_1) >> 5u) & 0x7ffffffu;
    (void)tc_call(0x802547e8u, &a);
    return;
}
