#include "tc_rt.h"

u32 fn_8028b6d8(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    if (param_1 >= 8u) {
        r3 = 1u;
    } else {
        r3 = tc_call(0x8022c2b0u, &a);
        r4 = ((param_1 << 1u) & 0x1feu) - 0x7fabef58u;
        wr32((((u32)rd8(0x805110a8u) << 2u) & 0xfffffffcu) - 0x7faeef54u, r3);
        wr8(0x805110a8u, (u8)((u32)rd8(0x805110a8u) + 1u));
        wr16(r4 - 0x77f8u, (u16)((u32)rd16(r4 - 0x77f8u) | param_2));
        r3 = (u32)rd8(0x805110a8u) - 1u;
        wr8(0x805110a8u, (u8)r3);
        r3 = ((r3 << 2u) & 0x3fcu) - 0x7faeef58u;
        r3 = rd32(r3 + 4u);
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = 0u;
    }
    return r3;
}
