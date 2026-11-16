#include "tc_rt.h"

u32 fn_80041118(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80047138u, &a);
    r3 = (ppc_cntlzw(r3 - 5u) >> 5u) & 0x7ffffffu;
    return r3;
}
