#include "tc_rt.h"

u32 fn_800e388c(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    if ((param_2 & 1u) != 0u) {
        a.r[0] = 0x80469958u;
        a.r[1] = 0xb1u;
        a.r[2] = 1u;
        (void)tc_call(0x800586f8u, &a);
    }
    if ((param_2 & 2u) != 0u) {
        a.r[0] = 0x8046a200u;
        a.r[1] = 0xb1u;
        a.r[2] = 1u;
        (void)tc_call(0x80058cd4u, &a);
    }
    if ((param_2 & 4u) != 0u) {
        wr32(0x817fdfe8u, param_1);
        a.r[0] = 0x817fdfe8u;
        r3 = tc_call(0x801496f0u, &a);
        if (r3 != 0xffffffffu) {
            if (r3 < 0x38u || r3 > 0x63u) {
                if (r3 != 0x64u) {
                    return 1u;
                }
            }
            if ((param_2 & 8u) != 0u) {
                a.r[0] = 0x804b9da0u;
                a.r[1] = r3;
                (void)tc_call(0x8010a570u, &a);
            } else {
                if ((param_2 & 0x10u) == 0u) {
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = r3;
                    (void)tc_call(0x8010a5c0u, &a);
                }
            }
        }
    }
    return 1u;
}
