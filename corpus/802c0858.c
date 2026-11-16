#include "tc_rt.h"

void fn_802c0858(u32 param_r3)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_r3;
    r3 = tc_call(0x80226ea0u, &a);
    r31 = rd32(((r3 << 2u) & 0xfffffffcu) - 0x7fab8ba0u);
    r30 = rd32(r31);
    a.r[0] = r30;
    r3 = tc_call(0x8027b068u, &a);
    if (r3 != 0u) {
        a.r[0] = r30;
        a.r[1] = 3u;
        a.r[2] = 0u;
        (void)tc_call(0x8027b0acu, &a);
    }
    wr8(r31 + 0x41u, 0u);
    return;
}
