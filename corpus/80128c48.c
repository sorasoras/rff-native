#include "tc_rt.h"

void fn_80128c48(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0xbcu;
    a.r[1] = (((u32)param_2 << 2u) & 0xfffffffcu) - 0x7fb668f8u;
    a.r[2] = 4u;
    (void)tc_call(0x80004338u, &a);
    return;
}
