#include "tc_rt.h"

void fn_800fd238(s32 param_1)
{
    u32 r3 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    r5 = rd32((u32)param_1 + 0x1cu);
    wr32((u32)param_1 + 0x24u, 0u);
    a.r[0] = rd32(r5 + 0x1cu) + 0xb98u;
    a.r[1] = 0xeu;
    (void)tc_call(0x8020f18cu, &a);
    r31 = rd32(rd32((u32)param_1 + 0x20u) + 0x5cu);
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    r3 = tc_call(0x800fb154u, &a);
    a.r[0] = r3;
    a.r[1] = r31;
    r3 = tc_call(0x80197508u, &a);
    if (r3 != 0u) {
        a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0xc08u;
        a.r[1] = 0xbu;
        (void)tc_call(0x8020f18cu, &a);
    } else {
        a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0xc08u;
        a.r[1] = 3u;
        (void)tc_call(0x8020f18cu, &a);
    }
    wr32(rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x434u, 1u);
    return;
}
