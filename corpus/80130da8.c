#include "tc_rt.h"

void fn_80130da8(s32 param_1, u32 param_2, s32 param_3)
{
    TcArgs a = {0};
    a.r[0] = rd32(rd32((u32)param_1 + (((u32)param_3 << 2u) & 0xfffffffcu) + 0x314u)) + 0xcdu;
    a.r[1] = param_2;
    a.r[2] = 8u;
    (void)tc_call(0x80004338u, &a);
    return;
}
