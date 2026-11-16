#include "tc_rt.h"

u32 fn_80266be4(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    r30 = param_3;
    if (param_3 == 0u) {
        r3 = 0u;
    } else {
        r3 = rd32((u32)param_1 + 0xcu);
        r0 = 0x880u - r3;
        if (r0 < param_3) {
            r31 = 0x301u;
            r30 = r0;
        }
        if (r30 == 1u) {
            r3 = (u32)param_1 + r3;
            wr8(r3 + 0x10u, rd8(param_2));
        } else {
            r3 = r3 + 0x10u;
            r3 = (u32)param_1 + r3;
            a.r[0] = r3;
            a.r[1] = param_2;
            a.r[2] = r30;
            (void)tc_call(0x8000449cu, &a);
        }
        r3 = r31;
        wr32((u32)param_1 + 0xcu, rd32((u32)param_1 + 0xcu) + r30);
        wr32((u32)param_1 + 8u, rd32((u32)param_1 + 0xcu));
    }
    return r3;
}
