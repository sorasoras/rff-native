#include "tc_rt.h"

u32 fn_80059ea8(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8003c220u, &a);
    r3 = (ppc_cntlzw(r3 - 1u) >> 5u) & 0x7ffffffu;
    return r3;
}
