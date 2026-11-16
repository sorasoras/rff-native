#include "tc_rt.h"

u32 fn_80123384(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32(rd32((u32)param_1 + 0x20u) + 0x1cu) + 0x92cu;
    r3 = tc_call(0x8012447cu, &a);
    r3 = (ppc_cntlzw(r3) >> 5u) & 0x7ffffffu;
    return r3;
}
