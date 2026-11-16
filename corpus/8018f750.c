#include "tc_rt.h"

void fn_8018f750(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (ppc_cntlzw(param_2) >> 5u) & 0x7ffffffu;
    r30 = (u32)param_1 + 4u;
    r29 = 1u;
    do {
        a.r[0] = (u32)param_1;
        a.r[1] = rd32(r30 + 4u);
        r3 = tc_call(0x80190000u, &a);
        if (r3 != 0u) {
            wr32(r3 + 0x9cu, (rd32(r3 + 0x9cu) & 0xf7ffffffu) | ((r31 << 0x1bu) & 0x8000000u));
        }
        r29 = r29 + 1u;
        r30 = r30 + 4u;
    } while ((s32)r29 < 4);
    return;
}
