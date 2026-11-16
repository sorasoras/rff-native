#include "tc_rt.h"

void fn_800abeec(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x14u) != 0u) {
        wr32((u32)param_1 + 0x14u, 0u);
        r3 = tc_call(0x80097da4u, &a);
        r3 = rd32(r3 + 0x4cu);
        a.r[0] = r3;
        (void)tc_call(0x800ac390u, &a);
        a.r[0] = 0u;
        (void)tc_call(0x800ab460u, &a);
        (void)tc_call(0x800ab73cu, &a);
        r3 = tc_call(0x80097da4u, &a);
        r3 = rd32(r3 + 0x30u);
        a.r[0] = r3;
        a.r[1] = 1u;
        (void)tc_call(0x8015d874u, &a);
    }
    return;
}
