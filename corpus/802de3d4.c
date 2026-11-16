#include "tc_rt.h"

s32 fn_802de3d4(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r5 = 0, r6 = 0;
    TcArgs a = {0};
    wr32(0x817fdec0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r6 = rd32(0x80570f00u);
    if ((s32)r6 < 0 || param_2 == 0u) {
        r3 = 0xfffffc07u;
    } else {
        if ((param_1 & 0x1fu) != 0u) {
            r3 = 0xfffffc07u;
        } else {
            if (param_1 == 0u) {
                wr32(0x817fdfb0u, 0x817fdee0u);
                wr32(0x817fdfb4u, 4u);
                a.r[0] = r6;
                a.r[1] = 0x39u;
                a.r[2] = 0u;
                a.r[3] = 1u;
                a.r[4] = 0x817fdfb0u;
                r3 = tc_call(0x802701f8u, &a);
                if (r3 != 0u) {
                    return (s32)r3;
                }
                wr32(param_2, rd32(0x817fdee0u));
            } else {
                r5 = rd32(param_2);
                if (r5 == 0u) {
                    r3 = 0xfffffc07u;
                } else {
                    wr32(0x817fdfb8u, param_1);
                    wr32(0x817fdee0u, r5);
                    wr32(0x817fdfb0u, 0x817fdee0u);
                    wr32(0x817fdfb4u, 4u);
                    wr32(0x817fdfbcu, rd32(param_2));
                    a.r[0] = r6;
                    a.r[1] = 0x3au;
                    a.r[2] = 1u;
                    a.r[3] = 1u;
                    a.r[4] = 0x817fdfb0u;
                    r3 = tc_call(0x802701f8u, &a);
                }
            }
        }
    }
    return (s32)r3;
}
