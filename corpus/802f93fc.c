#include "tc_rt.h"

u32 fn_802f93fc(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0;
    r5 = rd32(param_1 + 0xcu);
    if (r5 == 0u) {
        return 0u;
    }
    if ((s32)rd32(param_1) >= (s32)r5) {
        r5 = rd32(param_1 + 4u);
        r0 = param_1 + 4u;
        r8 = 0x80u;
        r7 = 0u;
        while (r5 != r0) {
            r9 = r5 - 0xf8u;
            r6 = (u32)rd8(r5 - 0x6cu) + rd32(r5 - 0xb0u);
            if ((s32)r6 > 127) {
                r3 = 0x7fu;
            } else {
                r3 = r6 & ~(u32)((s32)r6 >> 31);
            }
            if ((s32)r8 > (s32)r3) {
                r7 = r9;
                r8 = r3;
            }
            r5 = rd32(r5);
        }
        if (r7 == 0u) {
            return 0u;
        }
        r3 = (u32)rd8(r7 + 0x8cu) + rd32(r7 + 0x48u);
        if ((s32)r3 > 127) {
            r0 = 0x7fu;
        } else {
            r0 = r3 & ~(u32)((s32)r3 >> 31);
        }
        if (param_2 < (s32)r0) {
            return 0u;
        }
    }
    return 1u;
}
