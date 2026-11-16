#include "tc_rt.h"

u32 fn_80301be8(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0;
    TcArgs a = {0};
    r6 = rd32((u32)param_1 + 0x28u);
    a.r[0] = (u32)rd8(r6);
    a.r[1] = rd32(r6 + 4u);
    a.r[2] = r6;
    r3 = tc_call(0x8030e93cu, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        if (param_2 >= rd32(r3)) {
            r3 = 0u;
        } else {
            if ((u32)rd16((u32)param_1 + 6u) >= 0x101u) {
                r4 = r3 + ((param_2 << 3u) & 0xfffffff8u);
                r3 = (u32)rd8(r4 + 4u);
                r4 = rd32(r4 + 8u);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = rd32((u32)param_1 + 0x28u);
                r3 = tc_call(0x8030e93cu, &a);
            } else {
                r3 = r3 + ((param_2 << 3u) & 0xfffffff8u);
                r3 = rd32(r3 + 8u);
                r3 = r3 + rd32((u32)param_1 + 0x28u);
            }
        }
    }
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r0 = (u32)rd16((u32)param_1 + 6u);
        wr32(param_3, rd32(r3 + 4u));
        wr32(param_3 + 4u, rd32(r3 + 8u));
        wr32(param_3 + 8u, (u32)rd8(r3 + 0x2au));
        wr32(param_3 + 0xcu, (u32)rd8(r3 + 0x15u));
        wr32(param_3 + 0x10u, (u32)rd8(r3 + 0x14u));
        wr32(param_3 + 0x14u, (u32)rd8(r3 + 0x17u));
        if (r0 >= 0x102u) {
            wr32(param_3 + 0x18u, (u32)rd8(r3 + 0x28u));
            wr32(param_3 + 0x1cu, (u32)rd8(r3 + 0x29u));
        } else {
            wr32(param_3 + 0x18u, 1u);
            wr32(param_3 + 0x1cu, 0u);
        }
        r3 = 1u;
    }
    return r3;
}
