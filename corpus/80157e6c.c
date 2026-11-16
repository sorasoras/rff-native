#include "tc_rt.h"

void fn_80157e6c(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x80320fe4u, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x80321010u, &a);
        r31 = r3;
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x80310c3cu, &a);
            a.r[0] = r31;
            (void)tc_call(0x80310d14u, &a);
            a.r[0] = (u32)param_1;
            a.r[1] = 0x80571310u;
            (void)tc_call(0x80320fd0u, &a);
            if ((s32)rd32((u32)param_1 + 8u) >= 0) {
                r4 = rd32((u32)param_1 + 0x10u);
                if ((s32)r4 >= 0) {
                    a.r[0] = 0x804b9e80u;
                    a.r[1] = r4;
                    (void)tc_call(0x801206f4u, &a);
                }
            }
            wr32((u32)param_1 + 8u, 0xffffffffu);
            wr32((u32)param_1 + 0x10u, 0xffffffffu);
            wr32((u32)param_1 + 0xcu, 0u);
            wr32((u32)param_1 + 0x14u, 0xffffffffu);
            wr32((u32)param_1 + 0x18u, 0xffffffffu);
            wr32((u32)param_1 + 0x34u, 0u);
            wr32((u32)param_1 + 0x1cu, 0xffffffffu);
            wr32((u32)param_1 + 0x20u, 0xffffffffu);
            wr32((u32)param_1 + 0x24u, 0u);
        }
    }
    return;
}
