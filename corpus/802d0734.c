#include "tc_rt.h"

void fn_802d0734(u32 param_r3, u32 param_r4)
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
    r31 = rd32(param_r3 + 0x1cu);
    r30 = param_r3 + 0x1cu;
    while (r31 != r30) {
        r28 = r31;
        r31 = rd32(r31);
        if (param_r4 == 0u || rd32(r28 + 8u) == param_r4) {
            wr32(0x817fdfd8u, r28);
            a.r[0] = param_r3 + 0x18u;
            a.r[1] = 0x817fdfd8u;
            r3 = tc_call(0x802d7a44u, &a);
            f1 = tc_lastf();
            wr32(r28 + 8u, 0u);
            wr16(r28 + 0xcu, 0u);
        }
    }
    return;
}
