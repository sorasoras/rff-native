#include "tc_rt.h"

u32 fn_80146e44(s32 param_1)
{
    u32 ctr = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    r8 = 0u;
    r6 = rd32((u32)param_1 + 0xd94u) + 1u;
    r9 = 0xau;
    r10 = 1u;
    ctr = 5u;
    do {
        r11 = r6 - (((ppc_mulhwu(0xcccccccdu, r6) >> 3u) & 0x1fffffffu) * 0xau);
        r7 = (u32)param_1 + (r11 * 0x94u);
        if ((rd32(r7 + 0x744u) + 0x10000u) != 0xffffu) {
            r4 = (u32)rd8(r7 + 0x7cau);
            if ((r8 & 0xffu) < r4) {
                r9 = r11;
                r8 = r4;
            }
        }
        r6 = r6 + 1u;
        r11 = r6 - (((ppc_mulhwu(0xcccccccdu, r6) >> 3u) & 0x1fffffffu) * 0xau);
        r7 = (u32)param_1 + (r11 * 0x94u);
        if ((rd32(r7 + 0x744u) + 0x10000u) != 0xffffu) {
            r4 = (u32)rd8(r7 + 0x7cau);
            if ((r8 & 0xffu) < r4) {
                r9 = r11;
                r8 = r4;
            }
        }
        r6 = r6 + 1u;
        r10 = r10 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return r9;
}
