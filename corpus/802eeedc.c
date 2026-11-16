#include "tc_rt.h"

void fn_802eeedc(u32 param_r3, u32 param_r4)
{
    u32 r3 = 0, r28 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r31 = rd32(param_r3 + 4u);
    r30 = param_r3 + 4u;
    while (r31 != r30) {
        r28 = r31;
        r31 = rd32(r31);
        if (param_r4 == 0u || rd32(r28 + 8u) == param_r4) {
            wr32(0x817fdfd8u, r28);
            a.r[0] = param_r3;
            a.r[1] = 0x817fdfd8u;
            r3 = tc_call(0x802deab0u, &a);
            f1 = tc_lastf();
            wr32(r28 + 8u, 0u);
            wr16(r28 + 0xcu, 0u);
            wr8(r28 + 0xeu, 0u);
        }
    }
    return;
}
