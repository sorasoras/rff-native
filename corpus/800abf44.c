#include "tc_rt.h"

void fn_800abf44(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (ppc_cntlzw((u32)param_2) >> 5u) & 0x7ffffffu;
    if (r31 != rd32((u32)param_1 + 0x70u)) {
        a.r[0] = (u32)param_1;
        a.r[1] = 1u;
        r3 = tc_call(0x800ac714u, &a);
        if (r3 == 0u && rd32(0x805706e0u) == 4u && rd32(rd32(0x8057110cu) + 0x14u) != 0u) {
            if ((u32)param_2 == 0u) {
                if ((u32)param_3 == 0u) {
                    a.r[0] = 0x80486da8u;
                    (void)tc_call(0x800b8708u, &a);
                } else {
                    a.r[0] = 0x80486da8u;
                    (void)tc_call(0x800b8754u, &a);
                }
                wr32(0x8057118cu, rd32(0x8057118cu) & 0xffffffbfu);
            } else {
                wr32(0x8057118cu, rd32(0x8057118cu) | 0x40u);
                if ((u32)param_3 == 0u) {
                    a.r[0] = 0x80486da8u;
                    (void)tc_call(0x800b872cu, &a);
                } else {
                    a.r[0] = 0x80486da8u;
                    (void)tc_call(0x800b8ca8u, &a);
                }
            }
            wr32((u32)param_1 + 0x70u, r31);
        }
    }
    return;
}
