#include "tc_rt.h"

u32 fn_802de330(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdee0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    if ((s32)rd32(0x80570f00u) < 0 || param_2 == 0u) {
        r3 = 0xfffffc07u;
    } else {
        if ((param_1 & 0x1fu) != 0u || (param_2 & 0x1fu) != 0u) {
            r3 = 0xfffffc07u;
        } else {
            wr32(0x817fdfd0u, param_1);
            if (param_1 == 0u) {
                wr32(0x817fdfd4u, 0u);
            } else {
                wr32(0x817fdfd4u, 0x2a4u);
            }
            wr32(0x817fdfd8u, param_2);
            r3 = rd32(0x80570f00u);
            wr32(0x817fdfdcu, 0xd8u);
            a.r[0] = r3;
            a.r[1] = 0x1bu;
            a.r[2] = 1u;
            a.r[3] = 1u;
            a.r[4] = 0x817fdfd0u;
            r3 = tc_call(0x802701f8u, &a);
        }
    }
    return r3;
}
