#include "tc_rt.h"

void fn_802452dc(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r6 = 0, r7 = 0;
    r7 = rd32(param_1);
    r0 = (u32)((s32)ppc_mulhw(954437177, (s32)r7) >> 2);
    r0 = r0 + ((r0 >> 0x1fu) & 1u);
    if (r0 != 0u) {
        if ((s32)r0 > 20) {
            r0 = 0x14u;
        }
        if ((s32)r0 < -20) {
            r0 = 0xffffffecu;
        }
        wr32(param_2, r7);
        r6 = r0 * 0x12u;
        r0 = 0u - r0;
        wr32(param_1, rd32(param_1) - r6);
        wr16(param_3, (u16)r0);
        return;
    }
    wr32(param_1, 0u);
    wr32(param_2, 0u);
    wr16(param_3, 0u);
    return;
}
