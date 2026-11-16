#include "tc_rt.h"

void fn_800ac2e0(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    if (param_2 > 0) {
        if (param_2 >= 3) {
            return;
        }
        r0 = (u32)rd8(0x8049912eu);
        if (r0 == 0x1eu) {
            r0 = 1u;
        } else {
            if (r0 == 0x1fu) {
                r0 = 2u;
            } else {
                r0 = 0u;
            }
        }
        if (r0 != 0u) {
            if (r0 == 1u) {
                r31 = 0u;
            } else {
                r31 = 1u;
            }
            if ((u32)param_2 == 2u) {
                r31 = (ppc_cntlzw(r31) >> 5u) & 0x7ffffffu;
            }
            wr32((u32)param_1 + 8u, (u32)param_2);
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x44u);
            wr32(r3 + 0x498u, r31);
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x40u);
            wr32(r3 + 0x7b8u, r31);
        }
    }
    return;
}
