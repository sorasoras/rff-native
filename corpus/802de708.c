#include "tc_rt.h"

u32 fn_802de708(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdec0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if ((s32)rd32(0x80570f00u) < 0) {
        r3 = 0xfffffc07u;
    } else {
        if ((param_3 & 0x1fu) != 0u) {
            r3 = 0xfffffc07u;
        } else {
            wr32(0x817fdee4u, param_2);
            wr32(0x817fdee0u, param_1);
            wr32(0x817fdfb0u, 0x817fdee0u);
            wr32(0x817fdfb4u, 8u);
            if (param_3 == 0u) {
                wr32(0x817fdfb8u, 0u);
                wr32(0x817fdfbcu, 0u);
            } else {
                wr32(0x817fdfb8u, param_3);
                wr32(0x817fdfbcu, (rd32(param_4) << 3u) & 0xfffffff8u);
                wr32(0x817fdf00u, rd32(param_4));
            }
            wr32(0x817fdfc0u, 0x817fdf00u);
            r3 = rd32(0x80570f00u);
            wr32(0x817fdfc4u, 4u);
            a.r[0] = r3;
            a.r[1] = 0x16u;
            a.r[2] = 1u;
            a.r[3] = 2u;
            a.r[4] = 0x817fdfb0u;
            r3 = tc_call(0x802701f8u, &a);
            wr32(param_4, rd32(0x817fdf00u));
        }
    }
    return r3;
}
