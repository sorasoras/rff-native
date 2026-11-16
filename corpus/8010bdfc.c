#include "tc_rt.h"

u32 fn_8010bdfc(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3 + 0x4cu);
    a.r[0] = r3;
    a.r[1] = 0x817fdffcu;
    a.r[2] = 0x817fdff8u;
    (void)tc_call(0x800ac41cu, &a);
    a.r[0] = rd32(0x817fdffcu);
    a.r[1] = rd32(0x817fdff8u);
    r3 = tc_call(0x800a74e4u, &a);
    if ((s32)r3 >= 0) {
        a.r[0] = 1u;
        a.r[1] = 0x52u;
        a.r[2] = r3 + 0xau;
        r3 = tc_call(0x800a6dccu, &a);
        if (r3 != 0u) {
            r3 = 1u;
            return r3;
        }
    }
    r3 = 0u;
    return r3;
}
