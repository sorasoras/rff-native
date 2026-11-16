#include "tc_rt.h"

u32 fn_80107708(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r4 = 0, r6 = 0, r7 = 0;
    TcArgs a = {0};
    r7 = (u32)rd8(0x804990a2u);
    r6 = rd32(rd32(0x80571398u) + 0x38u);
    r4 = 1u;
    r0 = rd32(r6 + 0xb0u) + r7 - (rd32(r6 + 0x34u) + r7);
    c0lt = (s32)r0 < 0;
    if ((s32)r0 > 0) {
        r4 = 2u;
    } else {
        if (c0lt) {
            r4 = 0u;
        }
    }
    a.r[0] = rd32((u32)param_1 + 0x40u);
    a.r[1] = r4;
    (void)tc_call(0x801ed110u, &a);
    a.r[0] = rd32((u32)param_1 + 0x40u);
    a.r[1] = (u32)param_1;
    (void)tc_call(0x801ec6bcu, &a);
    return 1u;
}
