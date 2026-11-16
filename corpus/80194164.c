#include "tc_rt.h"

void fn_80194164(s32 param_1)
{
    u32 r30 = 0;
    TcArgs a = {0};
    r30 = rd32((u32)param_1 + 0x1a0u);
    wr32(r30 + 0x54u, 0u);
    a.r[0] = r30;
    (void)tc_call(0x80161ac4u, &a);
    wr16(r30 + 0xbcu, 0x2e8u);
    wr8(r30 + 0xbeu, 0u);
    wr8(r30 + 0xbfu, 0u);
    return;
}
