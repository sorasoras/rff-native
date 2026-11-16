#include "tc_rt.h"

u32 fn_802ded24(u32 param_1)
{
    u32 r0 = 0, r5 = 0, r6 = 0;
    r6 = rd32(param_1);
    r0 = 0u;
    r5 = (u32)rd8(r6);
    if ((r5 >= 0x81u && r5 < 0xa0u) || r5 >= 0xe0u) {
        r0 = 1u;
    }
    if (r0 == 0u) {
        r6 = r5;
        wr32(param_1, rd32(param_1) + 1u);
    } else {
        r6 = (u32)rd8(r6 + 1u);
        r6 = (r6 & 0xffff00ffu) | ((r5 << 8u) & 0xff00u);
        wr32(param_1, rd32(param_1) + 2u);
    }
    return r6;
}
