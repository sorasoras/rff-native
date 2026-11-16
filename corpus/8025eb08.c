#include "tc_rt.h"

s32 fn_8025eb08(s32 param_1, s32 param_2)
{
    u32 c0lt = 0, r0 = 0, r4 = 0, r5 = 0;
    r4 = (u32)param_2;
    if ((u32)param_1 != 0u) {
        r5 = rd32((u32)param_1 + 4u);
        if (((r5 >> 0x16u) & 7u) != 0u) {
            r0 = (r5 >> 0x14u) & 3u;
            c0lt = (s32)r0 < 1;
            if (r0 == 1u) {
                r4 = 0xffffffffu;
            } else if (!c0lt) {
                if ((s32)r0 < 3) {
                    r4 = 1u;
                }
            } else if ((s32)r0 >= 0) {
                c0lt = param_2 < 0;
                if (param_2 <= 0) {
                    if (c0lt) {
                        r5 = (r5 & 0xffcfffffu) | 0x100000u;
                        wr32((u32)param_1 + 4u, r5);
                    }
                } else {
                    r5 = (r5 & 0xffcfffffu) | 0x200000u;
                    wr32((u32)param_1 + 4u, r5);
                }
            }
            return (s32)r4;
        }
    }
    return 0;
}
