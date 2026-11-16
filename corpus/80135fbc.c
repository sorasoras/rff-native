#include "tc_rt.h"

void fn_80135fbc(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x7c8u;
    a.r[1] = 0xeu;
    (void)tc_call(0x8020f18cu, &a);
    r4 = rd32((u32)param_1 + 0x20u);
    r3 = rd32(r4 + 0x1cu);
    r4 = rd32(r4 + 0x5cu);
    r3 = rd32(r3 + 0x454u);
    a.r[0] = r3;
    a.r[1] = r4;
    r3 = tc_call(0x80197508u, &a);
    if (r3 != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x838u;
        a.r[1] = 0xdu;
        (void)tc_call(0x8020f18cu, &a);
    } else {
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x838u;
        a.r[1] = 0x11u;
        (void)tc_call(0x8020f18cu, &a);
    }
    return;
}
