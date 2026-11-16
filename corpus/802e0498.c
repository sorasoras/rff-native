#include "tc_rt.h"

u32 fn_802e0498(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r6 = 0;
    TcArgs a = {0};
    if (param_2 == (u32)rd16((u32)param_1 + 0x18u)) {
        r4 = (u32)rd16((u32)param_1 + 0x1au);
    } else {
        wr16((u32)param_1 + 0x18u, (u16)param_2);
        r6 = rd32(rd32((u32)param_1 + 0x14u) + 0x10u);
        while (r6 != 0u) {
            if ((u32)rd16(r6) <= param_2 && param_2 <= (u32)rd16(r6 + 2u)) {
                a.r[0] = (u32)param_1;
                a.r[1] = r6;
                a.r[2] = param_2;
                r3 = tc_call(0x802e055cu, &a);
                wr16((u32)param_1 + 0x1au, (u16)r3);
                r4 = r3 & 0xffffu;
                return (((0xffffu - r4) | (r4 - 0xffffu)) >> 0x1fu) & 1u;
            }
            r6 = rd32(r6 + 8u);
        }
        wr16((u32)param_1 + 0x1au, 0xffffu);
        r4 = 0xffffu;
    }
    return (((0xffffu - r4) | (r4 - 0xffffu)) >> 0x1fu) & 1u;
}
