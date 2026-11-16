#include "tc_rt.h"

void fn_80157ad0(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 8u;
    a.r[1] = 0u;
    r3 = tc_call(0x802de9f0u, &a);
    wr32((u32)param_1 + 4u, r3);
    if (r3 != 0u) {
        r3 = r3 + 0xcu;
        a.r[0] = r3;
        a.r[1] = 1u;
        a.r[2] = 0x46525341u;
        r3 = tc_call(0x80037648u, &a);
        wr32(rd32((u32)param_1 + 4u) + 0x74u, r3);
        r3 = rd32(rd32((u32)param_1 + 4u) + 0x74u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 2u;
            (void)tc_call(0x8003780cu, &a);
        }
    }
    return;
}
