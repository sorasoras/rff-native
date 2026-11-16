#include "tc_rt.h"

u32 fn_8009f16c(s32 param_1, s32 param_2, s32 param_3, s32 param_4, s32 param_5)
{
    u32 r3 = 0, r8 = 0, r31 = 0;
    TcArgs a = {0};
    r8 = 0u;
    r31 = 0u;
    if ((u32)param_1 != 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_3 + (u32)param_4 + (u32)param_5 + 0x20u;
        r3 = tc_call(0x8009c050u, &a);
        r8 = r3;
        if (r3 != 0u) {
            wr32(r3, (u32)param_1);
            wr32(r3 + 4u, (u32)param_2);
            r31 = 1u;
            wr32(r3 + 8u, 0xffffffffu);
            wr32(r3 + 0x14u, r3 + 0x20u);
            wr32(r3 + 0x10u, 0u);
            wr32(r3 + 0x18u, 0u);
            wr32(r3 + 0x1cu, 0u);
        }
    }
    if (r31 == 0u && r8 != 0u) {
        a.r[0] = r8;
        (void)tc_call(0x8009f220u, &a);
        r8 = 0u;
    }
    return r8;
}
