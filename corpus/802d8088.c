#include "tc_rt.h"

u32 fn_802d8088(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r5 = 0, r6 = 0;
    TcArgs a = {0};
    r6 = rd32(rd32((u32)param_1 + 0x14u) + 0x10u);
    for (;;) {
        if (r6 == 0u) {
            r5 = 0xffffu;
            break;
        }
        if ((u32)rd16(r6) <= param_2 && param_2 <= (u32)rd16(r6 + 2u)) {
            a.r[0] = (u32)param_1;
            a.r[1] = r6;
            a.r[2] = param_2;
            r3 = tc_call(0x802d8314u, &a);
            r5 = r3;
            break;
        }
        r6 = rd32(r6 + 8u);
    }
    if ((r5 & 0xffffu) == 0xffffu) {
        r3 = 0u;
    } else {
        r3 = 1u;
        wr16(rd32((u32)param_1 + 0x14u) + 2u, (u16)r5);
    }
    return r3;
}
