#include "tc_rt.h"

void fn_800ac680(s32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32((u32)param_1 + 0x80u);
    if ((s32)param_2 < 8) {
        r0 = r31 & ~param_2;
        if ((u32)param_3 != 0u) {
            r0 = r31 | param_2;
        }
        wr32((u32)param_1 + 0x80u, r0);
        if ((u32)param_3 == 0u) {
            if ((r31 & 1u) != 0u && (param_2 & 1u) != 0u) {
                a.r[0] = (u32)param_1;
                a.r[1] = (ppc_cntlzw((u32)param_3) >> 5u) & 0x7ffffffu;
                a.r[2] = 0u;
                (void)tc_call(0x800abf44u, &a);
            }
            if ((r31 & 2u) != 0u && (param_2 & 2u) != 0u) {
                r3 = tc_call(0x80097da4u, &a);
                r3 = rd32(r3 + 0x48u);
                a.r[0] = r3;
                (void)tc_call(0x800add14u, &a);
            }
        }
    }
    return;
}
