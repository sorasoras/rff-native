#include "tc_rt.h"

u32 fn_802e01b4(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r6 = 0;
    TcArgs a = {0};
    if (param_2 != (u32)rd16((u32)param_1 + 0x18u)) {
        wr16((u32)param_1 + 0x18u, (u16)param_2);
        r6 = rd32(rd32((u32)param_1 + 0x14u) + 0x10u);
        for (;;) {
            if (r6 == 0u) {
                wr16((u32)param_1 + 0x1au, 0xffffu);
                r0 = 0xffffu;
                break;
            }
            if ((u32)rd16(r6) <= param_2 && param_2 <= (u32)rd16(r6 + 2u)) {
                a.r[0] = (u32)param_1;
                a.r[1] = r6;
                a.r[2] = param_2;
                r3 = tc_call(0x802e055cu, &a);
                wr16((u32)param_1 + 0x1au, (u16)r3);
                r0 = r3 & 0xffffu;
                break;
            }
            r6 = rd32(r6 + 8u);
        }
    } else {
        r0 = (u32)rd16((u32)param_1 + 0x1au);
    }
    if (r0 == 0xffffu) {
        r3 = 0u;
    } else {
        r3 = 1u;
        wr16(rd32((u32)param_1 + 0x14u) + 2u, (u16)r0);
    }
    return r3;
}
