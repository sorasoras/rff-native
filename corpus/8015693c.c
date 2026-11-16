#include "tc_rt.h"

void fn_8015693c(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r0 = (u32)rd8(0x80492b98u);
    if (r0 != 3u) {
        if (r0 == 4u) {
            return;
        }
        r29 = 0x45u;
        do {
            a.r[0] = 0x8049c500u;
            a.r[1] = r29;
            r3 = tc_call(0x800c8794u, &a);
            r30 = r3;
            if (r3 < 0xabu) {
                a.r[0] = 0x8049c500u;
                a.r[1] = r29;
                r3 = tc_call(0x800c8b88u, &a);
                if ((r3 & 0xffu) != 0u) {
                    a.r[0] = 0x8049c500u;
                    a.r[1] = r29;
                    r3 = tc_call(0x800c8ca4u, &a);
                    if ((r3 & 4u) != 0u) {
                        wr32(0x817fdfe8u, r30);
                        a.r[0] = 0x817fdfe8u;
                        r3 = tc_call(0x80149898u, &a);
                        if ((s32)r3 > 0) {
                            r3 = (u32)param_1 + ((r3 << 2u) & 0xfffffffcu);
                            if ((s32)rd32(r3 + 0x28u) < 0) {
                                wr32(r3 + 0x28u, r29);
                            }
                        }
                    }
                }
            }
            r29 = r29 - 1u;
        } while ((s32)r29 >= 0);
        if ((u32)rd8(0x80492b98u) == 1u) {
            wr32((u32)param_1 + 0x34u, 0xffffffffu);
        }
    }
    return;
}
