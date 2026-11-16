#include "tc_rt.h"

s32 fn_8030ec84(u32 param_1, u32 param_2, s32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0;
    r5 = (u32)param_3;
    r6 = (ppc_cntlzw((u32)param_3) >> 5u) & 0x7ffffffu;
    if ((u32)param_3 == 0u) {
        r5 = rd32(param_1);
    }
    r3 = rd32(param_1);
    r0 = (u32)rd8(r3 + 6u);
    c0lt = (s32)r0 < 1;
    if (r0 != 1u) {
        if (!c0lt) {
            return 0;
        }
        if ((s32)r0 < 0) {
            return 0;
        }
        r3 = rd32(r3 + 0x14u) + r5;
        if (r6 == 0u) {
            r3 = rd32(param_2) + r3;
            return (s32)r3;
        }
        r3 = r3 + 8u;
        r3 = rd32(param_2) + r3;
        return (s32)r3;
    }
    r3 = rd32(r3 + 0x14u);
    r3 = rd32(param_2) + r3;
    return (s32)r3;
}
