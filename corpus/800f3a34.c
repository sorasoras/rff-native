#include "tc_rt.h"

void fn_800f3a34(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0;
    TcArgs a = {0};
    if ((u32)((s32)rd32((u32)param_1 + 0x80u) >> 31) != 0u) {
        r0 = rd32((u32)param_1 + 0x128u);
        c0lt = (s32)r0 < 2;
        if (r0 != 2u) {
            if (!c0lt) {
                if ((s32)r0 < 4) {
                    if (rd32((u32)param_1 + 0x124u) == 0u) {
                        a.r[0] = rd32((u32)param_1 + 0x70u);
                        a.r[1] = 0u;
                        r3 = tc_call(0x800355acu, &a);
                        wr32((u32)param_1 + 0x124u, r3);
                    } else {
                        wr32((u32)param_1 + 0x128u, 2u);
                        a.r[0] = rd32((u32)param_1 + 0x70u);
                        a.r[1] = 0u;
                        (void)tc_call(0x800355acu, &a);
                        wr32((u32)param_1 + 0x124u, 0u);
                    }
                }
            } else {
                c0lt = (s32)r0 < 0;
                if (r0 != 0u && !c0lt) {
                    if (rd32((u32)param_1 + 0x124u) == 0u) {
                        a.r[0] = rd32((u32)param_1 + 0x70u);
                        a.r[1] = 0u;
                        r3 = tc_call(0x800355acu, &a);
                        wr32((u32)param_1 + 0x124u, r3);
                    } else {
                        wr32((u32)param_1 + 0x128u, 0u);
                        a.r[0] = rd32((u32)param_1 + 0x70u);
                        a.r[1] = 0u;
                        (void)tc_call(0x800355acu, &a);
                        wr32((u32)param_1 + 0x124u, 0u);
                    }
                }
            }
        }
    }
    return;
}
