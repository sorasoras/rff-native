#include "tc_rt.h"

void fn_80156d88(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x20u);
    if (r0 != 0u) {
        a.r[0] = r0;
        a.r[1] = (u32)param_1;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = 0.0;
        (void)tc_call(rd32(rd32(r0) + 0x10u), &a);
    }
    wr32((u32)param_1 + 0x20u, 0u);
    r29 = (u32)rd8(0x80492824u);
    r28 = (u32)rd8(0x80492825u);
    for (;;) {
        a.r[0] = r29;
        a.r[1] = r28;
        a.r[2] = (u32)rd8((u32)param_1 + 0x52u);
        a.r[3] = (u32)rd8((u32)param_1 + 0x53u);
        r3 = tc_call(0x80156d6cu, &a);
        if ((s32)r3 < 5) break;
        r3 = (u32)rd8((u32)param_1 + 0x53u) + 5u;
        wr8((u32)param_1 + 0x53u, (u8)r3);
        if ((r3 & 0xffu) >= 0x3cu) {
            r3 = (u32)rd8((u32)param_1 + 0x52u);
            wr8((u32)param_1 + 0x53u, 0u);
            r3 = r3 + 1u;
            wr8((u32)param_1 + 0x52u, (u8)r3);
            if ((r3 & 0xffu) >= 0x18u) {
                wr8((u32)param_1 + 0x52u, 0u);
            }
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x80156eb8u, &a);
            if (r3 != 0u) continue;
        }
        r3 = rd32((u32)param_1 + 0x4cu);
        if ((s32)rd32((u32)param_1 + ((r3 << 2u) & 0xfffffffcu) + 0x28u) >= 0) {
            a.r[0] = r3;
            a.r[1] = (u32)param_1 + 0x44u;
            r3 = tc_call(0x80155bf4u, &a);
            if (r3 != 0u) {
                r4 = rd32((u32)param_1 + 0x4cu);
                a.r[0] = rd32((u32)param_1 + ((r4 << 2u) & 0xfffffffcu) + 0x28u);
                a.r[1] = r4;
                a.r[2] = (u32)param_1 + 0x44u;
                (void)tc_call(0x80155f6cu, &a);
            }
        }
    }
    return;
}
