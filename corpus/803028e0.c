#include "tc_rt.h"

u32 fn_803028e0(s32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    (void)param_4;
    (void)param_5;
    r6 = rd32((u32)param_1 + 0x28u);
    r3 = (u32)rd8(r6);
    a.r[0] = r3;
    a.r[1] = rd32(r6 + 4u);
    a.r[2] = r6;
    r3 = tc_call(0x8030e93cu, &a);
    f1 = tc_lastf();
    r7 = tc_junkr(7u);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        if (param_2 >= rd32(r3)) {
            r3 = 0u;
        } else {
            if ((u32)rd16((u32)param_1 + 6u) >= 0x101u) {
                r5 = rd32((u32)param_1 + 0x28u);
                r4 = r3 + ((param_2 << 3u) & 0xfffffff8u);
                r3 = (u32)rd8(r4 + 4u);
                r4 = rd32(r4 + 8u);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = r5;
                r3 = tc_call(0x8030e93cu, &a);
                f1 = tc_lastf();
                if (r3 == 0u) {
                    r3 = 0u;
                    return r3;
                }
                wr8(param_3, rd8(r3 + 0x18u));
                wr8(param_3 + 1u, rd8(r3 + 0x19u));
                wr16(param_3 + 2u, rd16(r3 + 0x1au));
                r0 = rd32(r3 + 0x1cu);
                r3 = 1u;
                wr32(param_3 + 4u, r0);
            } else {
                r6 = r3 + ((param_2 << 3u) & 0xfffffff8u);
                r3 = 1u;
                r4 = rd32(r6 + 8u);
                r5 = (u32)rd8(r6 + 5u);
                r4 = r4 + 0x1cu;
                wr8(param_3, rd8(r6 + 4u));
                wr8(param_3 + 1u, (u8)r5);
                wr16(param_3 + 2u, (u16)r7);
                wr32(param_3 + 4u, r4);
            }
        }
    }
    return r3;
}
