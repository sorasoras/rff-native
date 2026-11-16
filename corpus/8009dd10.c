#include "tc_rt.h"

void fn_8009dd10(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r31 = 0;
    TcArgs a = {0};
    r6 = rd32((u32)param_1 + 0x24u);
    r5 = rd32((u32)param_1 + 0x10u);
    r4 = rd32(r5 + 0x10u);
    r31 = r6 + 4u;
    a.r[0] = r4 + (((r6 & 0xffffu) + 2u) & 0xffffu);
    a.r[1] = r4;
    a.r[2] = r5;
    a.r[3] = r6;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32((u32)param_1 + 0xcu)), &a);
    r4 = rd32((u32)param_1 + 0x54u);
    wr32((u32)param_1 + 0x24u, r3 & 0xffffu);
    a.r[0] = (u32)param_1;
    a.r[1] = r4;
    r3 = tc_call(0x8009c430u, &a);
    if ((u32)(s8)r3 != 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = r31;
        r3 = tc_call(0x8009c430u, &a);
        if ((u32)(s8)r3 != 0u) {
            wr32((u32)param_1 + 0x54u, rd32((u32)param_1 + 0x1cu));
        }
    }
    return;
}
