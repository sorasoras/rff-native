#include "tc_rt.h"

u32 fn_802d8178(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    TcArgs a = {0};
    r6 = rd32(rd32((u32)param_1 + 0x14u) + 0x10u);
    for (;;) {
        if (r6 == 0u) {
            r3 = 0xffffu;
            break;
        }
        if ((u32)rd16(r6) <= param_2 && param_2 <= (u32)rd16(r6 + 2u)) {
            a.r[0] = (u32)param_1;
            a.r[1] = r6;
            a.r[2] = param_2;
            r3 = tc_call(0x802d8314u, &a);
            break;
        }
        r6 = rd32(r6 + 8u);
    }
    if ((r3 & 0xffffu) == 0xffffu) {
        r3 = (u32)rd16(rd32((u32)param_1 + 0x14u) + 2u);
    }
    r6 = rd32((u32)param_1 + 0x14u);
    r3 = r3 & 0xffffu;
    r4 = rd32(r6 + 0xcu);
    for (;;) {
        if (r4 == 0u) {
            r4 = r6 + 4u;
            return (((u32)rd16(r4) << 0x10u) & 0xffff0000u) | (((u32)rd8(r4 + 2u) << 8u) & 0xff00u);
        }
        r5 = (u32)rd16(r4);
        if (r5 <= r3 && r3 <= (u32)rd16(r4 + 2u)) break;
        r4 = rd32(r4 + 4u);
    }
    r3 = r3 - r5;
    r3 = r4 + (((r3 << 2u) & 0xfffffffcu) - r3);
    r4 = r3 + 8u;
    return (((u32)rd16(r4) << 0x10u) & 0xffff0000u) | (((u32)rd8(r4 + 2u) << 8u) & 0xff00u);
}
