#include "tc_rt.h"

void fn_802c1858(s32 param_1, s32 param_2)
{
    u32 r4 = 0;
    TcArgs a = {0};
    if ((u32)rd8((u32)param_1 + 0x1ecu) != 0u) {
        a.r[0] = (u32)param_2;
        a.r[1] = 1u;
        a.r[2] = 0x802c1664u;
        (void)tc_call(0x8027b0acu, &a);
        r4 = (u32)param_1 + ((u32)param_2 * 0x68u);
        wr32(r4 + 0x30u, 0u);
        wr32(r4 + 0x34u, 0u);
        wr32(r4 + 0x38u, 0u);
        wr32(r4 + 0x3cu, 0u);
        wr32(r4 + 0x40u, 0u);
        wr32(r4 + 0x44u, 0u);
        wr32(r4 + 0x48u, 0u);
        wr32(r4 + 0x4cu, 0u);
        wr8(r4 + 0x5cu, 1u);
        wr8(r4 + 0x62u, 0u);
    }
    return;
}
