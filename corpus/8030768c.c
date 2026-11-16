#include "tc_rt.h"

u32 fn_8030768c(s32 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 4u) == 0u) {
        r3 = 0u;
    } else {
        r3 = rd32((u32)param_1 + 8u);
        r5 = r3 + 8u;
        r3 = (u32)rd8(r3 + 8u);
        a.r[0] = r3;
        a.r[1] = rd32(r5 + 4u);
        a.r[2] = r5;
        r3 = tc_call(0x8030e93cu, &a);
        if ((u32)rd8(r3) == 2u) {
            r4 = rd32((u32)param_1 + 8u);
            r3 = (u32)rd8(r4 + 0x18u);
            r5 = r4 + 8u;
            r4 = rd32(r4 + 0x1cu);
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = r5;
            r3 = tc_call(0x8030e93cu, &a);
            if (param_4 < (s32)rd8(r3)) {
                r6 = r3 + (((u32)param_4 << 3u) & 0xfffffff8u);
                a.r[0] = (u32)rd8(r6 + 4u);
                a.r[1] = rd32(r6 + 8u);
                a.r[2] = rd32((u32)param_1 + 8u) + 8u;
                r3 = tc_call(0x8030e93cu, &a);
                r4 = r3;
                r3 = (u32)rd8(r3);
                r4 = rd32(r4 + 4u);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = rd32((u32)param_1 + 8u) + 8u;
                r3 = tc_call(0x8030e93cu, &a);
                r0 = (u32)rd16(r3 + 2u);
                wr16(param_2, rd16(r3));
                wr16(param_2 + 2u, (u16)r0);
                r0 = (u32)rd16(r3 + 6u);
                wr16(param_2 + 4u, rd16(r3 + 4u));
                wr16(param_2 + 6u, (u16)r0);
                r0 = (u32)rd16(r3 + 0xau);
                wr16(param_2 + 8u, rd16(r3 + 8u));
                wr16(param_2 + 0xau, (u16)r0);
                r0 = (u32)rd16(r3 + 0xeu);
                wr16(param_2 + 0xcu, rd16(r3 + 0xcu));
                wr16(param_2 + 0xeu, (u16)r0);
                r0 = (u32)rd16(r3 + 0x12u);
                wr16(param_2 + 0x10u, rd16(r3 + 0x10u));
                wr16(param_2 + 0x12u, (u16)r0);
                r0 = (u32)rd16(r3 + 0x16u);
                wr16(param_2 + 0x14u, rd16(r3 + 0x14u));
                wr16(param_2 + 0x16u, (u16)r0);
                r0 = (u32)rd16(r3 + 0x1au);
                wr16(param_2 + 0x18u, rd16(r3 + 0x18u));
                wr16(param_2 + 0x1au, (u16)r0);
                r0 = (u32)rd16(r3 + 0x1eu);
                wr16(param_2 + 0x1cu, rd16(r3 + 0x1cu));
                wr16(param_2 + 0x1eu, (u16)r0);
                wr16(param_2 + 0x20u, rd16(r3 + 0x20u));
                wr16(param_2 + 0x22u, rd16(r3 + 0x22u));
                wr16(param_2 + 0x24u, rd16(r3 + 0x24u));
                wr16(param_2 + 0x26u, rd16(r3 + 0x26u));
                wr16(param_3, rd16(r3 + 0x28u));
                wr16(param_3 + 2u, rd16(r3 + 0x2au));
                wr16(param_3 + 4u, rd16(r3 + 0x2cu));
            }
        }
        r3 = 1u;
    }
    return r3;
}
