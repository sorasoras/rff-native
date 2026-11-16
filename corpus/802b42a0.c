#include "tc_rt.h"

u32 fn_802b42a0(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    r5 = rd32((u32)param_1 + 4u);
    if (r5 >= 0x14u) {
        r31 = rd32((u32)param_1 + 0x68u);
        wr32((u32)param_1 + 4u, r5 - 0x14u);
        wr32((u32)param_1 + 0x68u, r31 + 0x14u);
        wr32(r31, 0u);
        wr32(r31 + 4u, 0u);
        a.r[0] = r31 + 0xcu;
        a.r[1] = param_2;
        a.r[2] = 6u;
        (void)tc_call(0x80004338u, &a);
        r3 = rd32((u32)param_1 + 8u);
        if (r3 != 0u) {
            for (;;) {
                r0 = rd32(r3 + 4u);
                if (r0 == 0u) break;
                r3 = r0;
            }
            wr32(r3 + 4u, r31);
        } else {
            wr32((u32)param_1 + 8u, r31);
        }
        r3 = r31;
    } else {
        r3 = 0u;
    }
    return r3;
}
