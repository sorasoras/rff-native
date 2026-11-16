#include "tc_rt.h"

u32 fn_8025c46c(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdfe8u, param_1);
    wr32(0x817fdfecu, 0u);
    a.r[0] = 0xau;
    a.r[1] = 0x7fffffffu;
    a.r[2] = 0x8025bbf4u;
    a.r[3] = 0x817fdfe8u;
    a.r[4] = 0x817fdfd8u;
    a.r[5] = 0x817fdfdcu;
    a.r[6] = 0x817fdfe0u;
    r3 = tc_call(0x8025c03cu, &a);
    if (rd32(0x817fdfe0u) == 0u) {
        r4 = rd32(0x817fdfdcu);
        if ((r4 != 0u || r3 <= 0x7fffffffu) && (r4 == 0u || r3 <= 0x80000000u)) {
            if (r4 == 0u) {
                return r3;
            }
            r3 = 0u - r3;
            return r3;
        }
    }
    r5 = rd32(0x817fdfdcu);
    wr32(0x805719c0u, 0x22u);
    r3 = ((((0u - r5) | r5) >> 0x1fu) & 1u) + 0x7fffffffu;
    return r3;
}
