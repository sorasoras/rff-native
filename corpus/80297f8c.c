#include "tc_rt.h"

void fn_80297f8c(u32 param_r3)
{
    u32 r3 = 0, r28 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r29 = rd32(0x8053f034u);
    if (((u32)rd8(0x8053f1a0u) & 4u) != 0u || r29 == 0u) {
    } else {
        r30 = (u32)rd16(0x8053f038u);
        r28 = 0u;
        for (;;) {
            r3 = r28 & 0xffffu;
            if (r3 >= r30) break;
            a.r[0] = r29 + 4u;
            a.r[1] = param_r3;
            a.r[2] = 6u;
            r3 = tc_call(0x802592d8u, &a);
            if (r3 == 0u && rd32(r29) == rd32(0x8053f018u)) {
                return;
            }
            r28 = r28 + 1u;
            r29 = r29 + 0xcu;
        }
        if (r3 < (u32)rd16(0x8053f03au)) {
            wr32(r29, rd32(0x8053f018u));
            a.r[0] = r29 + 4u;
            a.r[1] = param_r3;
            a.r[2] = 6u;
            (void)tc_call(0x80004338u, &a);
            wr16(0x8053f038u, (u16)((u32)rd16(0x8053f038u) + 1u));
        }
    }
    return;
}
