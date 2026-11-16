#include "tc_rt.h"

u32 fn_8013c440(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = rd32((u32)param_1 + 0x1cu);
    r3 = r3 + ((rd32(r3 + 0x5f0u) << 2u) & 0xfffffffcu);
    r3 = rd32(r3 + 0x44u);
    a.r[0] = r3;
    r3 = tc_call(0x8013ba98u, &a);
    r3 = (ppc_cntlzw(r3) >> 5u) & 0x7ffffffu;
    return r3;
}
