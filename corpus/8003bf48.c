#include "tc_rt.h"

u32 fn_8003bf48(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8003ced8u, &a);
    r3 = (ppc_cntlzw(r3 - 1u) >> 5u) & 0x7ffffffu;
    return r3;
}
