#include "tc_rt.h"

void fn_80128ef8(s32 param_1, u32 param_2)
{
    u32 r4 = 0;
    TcArgs a = {0};
    if (rd32(0x80499430u) <= param_2) {
        r4 = 0u;
    } else {
        r4 = ((param_2 << 2u) & 0xfffffffcu) - 0x7fb66cc0u;
    }
    a.r[0] = (u32)param_1 + 0xbcu;
    a.r[1] = r4;
    a.r[2] = 4u;
    (void)tc_call(0x80004338u, &a);
    return;
}
