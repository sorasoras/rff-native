#include "tc_rt.h"

u32 fn_802155d8(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0;
    r5 = param_2;
    r7 = 0u;
    while ((s32)r7 < (s32)rd32(param_2)) {
        r0 = rd32(r5 + 0x10u);
        if (r0 != 0u) {
            r8 = param_2 + r0;
            r9 = 0u;
            wr32(r5 + 0x10u, r8);
            r0 = rd32(param_2 + r0);
            if ((s32)r0 > 0) {
                r6 = r8;
                while ((s32)r9 < (s32)rd32(r8)) {
                    r9 = r9 + 1u;
                    wr32(r6 + 4u, param_2 + rd32(r6 + 4u));
                    r6 = r6 + 4u;
                }
            }
        }
        r5 = r5 + 4u;
        r7 = r7 + 1u;
    }
    r7 = 0u;
    r6 = 0u;
    r0 = param_2 + rd32(param_2 + 0xcu);
    wr32(param_2 + 0xcu, r0);
    wr32((u32)param_1 + 0x3ecu, r0);
    while ((s32)r7 < (s32)rd32(param_2 + 4u)) {
        r5 = rd32((u32)param_1 + 0x3ecu);
        r7 = r7 + 1u;
        wr32(r5 + r6, rd32(r5 + r6) + param_2);
        r6 = r6 + 4u;
    }
    wr32((u32)param_1 + 0x3e8u, param_2);
    return 1u;
}
