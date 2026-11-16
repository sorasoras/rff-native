#include "tc_rt.h"

u32 fn_802de184(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r9 = 0;
    TcArgs a = {0};
    wr32(0x817fdee0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r9 = rd32(0x80570f00u);
    if ((s32)r9 < 0) {
        r3 = 0xfffffc07u;
    } else {
        if ((param_3 & 0x1fu) != 0u) {
            r3 = 0xfffffc07u;
        } else {
            wr32(0x817fdf04u, param_2);
            wr32(0x817fdf00u, param_1);
            wr32(0x817fdfd8u, param_3);
            wr32(0x817fdfd0u, 0x817fdf00u);
            wr32(0x817fdfd4u, 8u);
            wr32(0x817fdfdcu, 0xd8u);
            a.r[0] = r9;
            a.r[1] = 8u;
            a.r[2] = 2u;
            a.r[3] = 0u;
            a.r[4] = 0x817fdfd0u;
            r3 = tc_call(0x802702d4u, &a);
            wr32(0x80570f00u, 0xffffffffu);
        }
    }
    return r3;
}
