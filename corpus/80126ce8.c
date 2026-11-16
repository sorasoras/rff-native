#include "tc_rt.h"

u32 fn_80126ce8(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x7b0u);
    a.r[1] = 0x80339e0fu;
    a.r[2] = 0u;
    r3 = tc_call(0x800fe848u, &a);
    a.r[0] = r3;
    r3 = tc_call(0x800ff744u, &a);
    r3 = (ppc_cntlzw(r3) >> 5u) & 0x7ffffffu;
    return r3;
}
