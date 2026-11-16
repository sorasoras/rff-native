#include "tc_rt.h"

void fn_800ce3e4(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r4 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r28 = param_4;
    if (param_2 != 0u) {
        if (param_3 == 0u) {
            return;
        }
        r30 = param_2;
        r29 = param_3;
        for (;;) {
            r31 = (u32)rd16(r29);
            if (r31 == 0u || r28 <= 1u) break;
            r3 = tc_call(0x800ce3d8u, &a);
            if (r31 != (r3 & 0xffffu)) {
                wr16(r30, (u16)r31);
                r29 = r29 + 2u;
                r30 = r30 + 2u;
                r28 = r28 - 1u;
            } else {
                a.r[0] = param_1;
                a.r[1] = r29;
                a.r[2] = r30;
                a.r[3] = r28;
                a.r[4] = 0x817fdfd8u;
                a.r[5] = 0x817fdfdcu;
                r3 = tc_call(0x800ce334u, &a);
                if (r3 != 0u) {
                    r4 = rd32(0x817fdfd8u);
                    r28 = r28 - r4;
                    r30 = r30 + ((r4 << 1u) & 0xfffffffeu);
                    r29 = r29 + ((rd32(0x817fdfdcu) << 1u) & 0xfffffffeu);
                } else {
                    r29 = r29 + 2u;
                    r28 = r28 - 1u;
                }
            }
        }
        wr16(r30, 0u);
    }
    return;
}
