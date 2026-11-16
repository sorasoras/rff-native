#include "tc_rt.h"

s32 fn_802de4c4(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r9 = 0, r10 = 0;
    TcArgs a = {0};
    wr32(0x817fdec0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r10 = rd32(0x80570f00u);
    if ((s32)r10 < 0 || param_4 == 0u) {
        r3 = 0xfffffc07u;
    } else {
        if ((param_3 & 0x1fu) != 0u) {
            r3 = 0xfffffc07u;
        } else {
            wr32(0x817fdee4u, param_2);
            wr32(0x817fdee0u, param_1);
            if (param_3 == 0u) {
                wr32(0x817fdfb4u, 8u);
                wr32(0x817fdfb0u, 0x817fdee0u);
                wr32(0x817fdfb8u, 0x817fdf00u);
                wr32(0x817fdfbcu, 4u);
                a.r[0] = r10;
                a.r[1] = 0x14u;
                a.r[2] = 1u;
                a.r[3] = 1u;
                a.r[4] = 0x817fdfb0u;
                r3 = tc_call(0x802701f8u, &a);
                if (r3 != 0u) {
                    return (s32)r3;
                }
                wr32(param_4, rd32(0x817fdf00u));
            } else {
                r9 = rd32(param_4);
                if (r9 == 0u) {
                    r3 = 0xfffffc07u;
                } else {
                    wr32(0x817fdfc0u, param_3);
                    wr32(0x817fdf00u, r9);
                    wr32(0x817fdfb0u, 0x817fdee0u);
                    wr32(0x817fdfb4u, 8u);
                    wr32(0x817fdfb8u, 0x817fdf00u);
                    wr32(0x817fdfbcu, 4u);
                    wr32(0x817fdfc4u, rd32(param_4));
                    a.r[0] = r10;
                    a.r[1] = 0x15u;
                    a.r[2] = 2u;
                    a.r[3] = 1u;
                    a.r[4] = 0x817fdfb0u;
                    r3 = tc_call(0x802701f8u, &a);
                }
            }
        }
    }
    return (s32)r3;
}
