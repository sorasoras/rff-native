#include "tc_rt.h"

u32 fn_800a7e80(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1;
    a.r[0] = param_2;
    a.r[1] = param_3;
    r3 = tc_call(0x800a7528u, &a);
    if ((u32)param_1 == 0xdu) {
        r31 = 0xcu;
    }
    r3 = (ppc_cntlzw(r3 - r31) >> 5u) & 0x7ffffffu;
    return r3;
}
