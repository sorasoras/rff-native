#include "tc_rt.h"

u32 fn_80191550(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = rd32(rd32(0x80571398u) + 0x38u) + 0x20cu;
    if (r3 != 0u) {
        r3 = (u32)rd16(r3);
        if (r3 != 0x2e8u) {
            a.r[0] = r3;
            r3 = tc_call(0x800cd6e4u, &a);
            a.r[0] = 0xdu;
            a.r[1] = r3 & 0xffu;
            a.r[2] = 0u;
            r3 = tc_call(0x801412f8u, &a);
            a.r[0] = param_1;
            a.r[1] = r3;
            a.r[2] = 0u;
            (void)tc_call(0x801006a4u, &a);
        }
    }
    return 1u;
}
