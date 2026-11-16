#include "tc_rt.h"

u32 fn_8015aef0(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = (u32)param_1 + 0xcdu;
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = r3;
        a.r[1] = 0x8033a6c9u;
        r3 = tc_call(0x8025beb0u, &a);
        r3 = (ppc_cntlzw(r3) >> 5u) & 0x7ffffffu;
    }
    return r3;
}
