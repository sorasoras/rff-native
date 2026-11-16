#include "tc_rt.h"

u32 fn_802acd94(u32 param_1)
{
    u32 ctr = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0;
    r6 = param_1 & 1u;
    r7 = param_1 - 1u;
    r8 = 0u;
    ctr = 5u;
    do {
        r4 = ((r8 & 0xffffu) * 0xa4u) - 0x7fabedf8u;
        r9 = r4 + 0x68u;
        if ((u32)rd8(r4 + 0x69u) != 0u && rd32(r9 + 0x6cu) == 0u) {
            r4 = (u32)rd8(r9 + 0xdu);
            if (r4 == param_1) {
                return r9;
            }
            if (r6 != 0u && r4 == r7) {
                wr8(r9 + 0xdu, (u8)(r4 + 1u));
                return r9;
            }
        }
        r8 = r8 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return 0u;
}
