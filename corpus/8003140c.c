#include "tc_rt.h"

u32 fn_8003140c(s32 param_1, s32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    r4 = (u32)param_2;
    r6 = rd32((u32)param_1 + 8u);
    if ((u32)param_2 == 0xffffffffu) {
        r4 = rd32((u32)param_1 + 0x30u);
    }
    c0lt = (s32)r4 < 1;
    r5 = 0x90u;
    if (r4 == 1u) {
        r5 = (r6 * 0x98u) + 0x90u;
    } else if (!c0lt) {
        if ((s32)r4 < 3) {
            r5 = (r6 * 0xc8u) + 0x90u;
        }
    } else if ((s32)r4 >= 0) {
        r5 = (r6 * 0x68u) + 0x90u;
    }
    r3 = rd32((u32)param_1 + 0x3cu);
    if (r3 == 0u) {
        r0 = 0u;
    } else {
        r0 = (u32)rd16(r3 + 4u);
    }
    r0 = r0 * 0x30u;
    r3 = (r6 << 2u) & 0xfffffffcu;
    r5 = r5 + r0;
    r5 = r5 + r3;
    r5 = r5 + r3;
    return (r5 + 0xfu) & 0xfffffff0u;
}
