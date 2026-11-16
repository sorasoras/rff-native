#include "tc_rt.h"

u32 fn_8030f440(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r4 = 0, r7 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    r7 = rd32(param_1 + 8u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    if (r7 == 0u) {
        a.r[0] = 0x817fdfe0u;
        a.r[1] = param_4;
        (void)tc_call(0x8030e960u, &a);
        a.r[0] = 0x817fdfe0u;
        a.r[1] = param_2;
        r3 = tc_call(0x8030e9d4u, &a);
        if (r3 == 0u) {
            r3 = 0u;
            return r3;
        }
        a.r[0] = 0x817fdfdcu;
        a.r[1] = r3;
        (void)tc_call(0x8030ea5cu, &a);
        a.r[0] = 0x817fdfdcu;
        a.r[1] = param_3;
        a.r[2] = 0u;
        r3 = tc_call(0x8030ea84u, &a);
    } else {
        if ((u32)rd16(rd32(param_1) + 6u) >= 0x101u) {
            if (param_2 >= rd32(r7 + 8u)) {
                r3 = 0u;
                return r3;
            }
            r4 = rd32(r7 + ((param_2 << 2u) & 0xfffffffcu) + 0xcu) + r7;
        } else {
            r4 = rd32(r7 + ((param_2 << 2u) & 0xfffffffcu) + 8u) + r7;
        }
        a.r[0] = 0x817fdfd8u;
        a.r[1] = r4;
        (void)tc_call(0x8030ea7cu, &a);
        a.r[0] = 0x817fdfd8u;
        a.r[1] = param_3;
        a.r[2] = param_4;
        r3 = tc_call(0x8030ea84u, &a);
    }
    return r3;
}
