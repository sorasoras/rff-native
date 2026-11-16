#include "tc_rt.h"

void fn_80128c68(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32(0x80499524u) <= param_2) {
        r3 = 0u;
    } else {
        r3 = ((param_2 << 2u) & 0xfffffffcu) - 0x7fb66bccu;
    }
    a.r[0] = r3;
    a.r[1] = (u32)param_1 + 0xbcu;
    a.r[2] = 4u;
    (void)tc_call(0x80004338u, &a);
    return;
}
