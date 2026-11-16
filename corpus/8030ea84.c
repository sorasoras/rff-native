#include "tc_rt.h"

void fn_8030ea84(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r0 = (u32)rd8(rd32(param_1));
    c0lt = (s32)r0 < 1;
    if (r0 == 1u) {
        r30 = 1u;
    } else if (!c0lt) {
        if ((s32)r0 >= 3) {
            r30 = 3u;
        } else {
            r30 = 3u;
        }
    } else if ((s32)r0 >= 0) {
        r30 = 2u;
    } else {
        r30 = 3u;
    }
    r7 = rd32(param_1);
    wr32(param_2, r30);
    wr32(param_2 + 8u, (u32)rd8(r7 + 2u));
    wr32(param_2 + 0xcu, (((u32)rd8(r7 + 3u) << 0x10u) & 0xffff0000u) + (u32)rd16(r7 + 4u));
    r6 = (u32)rd8(r7 + 1u);
    wr8(param_2 + 4u, (u8)((((0u - r6) | r6) >> 0x1fu) & 1u));
    a.r[0] = 0u;
    a.r[1] = rd32(r7 + 8u);
    a.r[2] = r30;
    r3 = tc_call(0x802f25e8u, &a);
    wr32(param_2 + 0x10u, r3);
    a.r[0] = 0u;
    a.r[1] = rd32(rd32(param_1) + 0xcu);
    a.r[2] = r30;
    r3 = tc_call(0x802f25e8u, &a);
    r0 = r3 + 1u;
    r3 = rd32(param_1);
    wr32(param_2 + 0x14u, r0);
    r31 = param_2 + 0x18u;
    r29 = 0u;
    r30 = rd32(r3 + 0x10u) + r3;
    for (;;) {
        r3 = rd32(param_1);
        if ((s32)r29 >= (s32)rd8(r3 + 2u)) break;
        if ((s32)r29 < 2) {
            r4 = rd32(r30) + r3;
            r0 = rd32(r4 + 4u);
            if (r0 != 0u) {
                r3 = r3 + r0;
                r0 = (u32)rd16(r3 + 2u);
                wr16(r31 + 4u, rd16(r3));
                wr16(r31 + 6u, (u16)r0);
                r0 = (u32)rd16(r3 + 6u);
                wr16(r31 + 8u, rd16(r3 + 4u));
                wr16(r31 + 0xau, (u16)r0);
                r0 = (u32)rd16(r3 + 0xau);
                wr16(r31 + 0xcu, rd16(r3 + 8u));
                wr16(r31 + 0xeu, (u16)r0);
                r0 = (u32)rd16(r3 + 0xeu);
                wr16(r31 + 0x10u, rd16(r3 + 0xcu));
                wr16(r31 + 0x12u, (u16)r0);
                r0 = (u32)rd16(r3 + 0x12u);
                wr16(r31 + 0x14u, rd16(r3 + 0x10u));
                wr16(r31 + 0x16u, (u16)r0);
                r0 = (u32)rd16(r3 + 0x16u);
                wr16(r31 + 0x18u, rd16(r3 + 0x14u));
                wr16(r31 + 0x1au, (u16)r0);
                r0 = (u32)rd16(r3 + 0x1au);
                wr16(r31 + 0x1cu, rd16(r3 + 0x18u));
                wr16(r31 + 0x1eu, (u16)r0);
                r0 = (u32)rd16(r3 + 0x1eu);
                wr16(r31 + 0x20u, rd16(r3 + 0x1cu));
                wr16(r31 + 0x22u, (u16)r0);
                wr16(r31 + 0x24u, rd16(r3 + 0x20u));
                wr16(r31 + 0x26u, rd16(r3 + 0x22u));
                wr16(r31 + 0x28u, rd16(r3 + 0x24u));
                wr16(r31 + 0x2au, rd16(r3 + 0x26u));
                wr16(r31 + 0x2cu, rd16(r3 + 0x28u));
                wr16(r31 + 0x2eu, rd16(r3 + 0x2au));
                wr16(r31 + 0x30u, rd16(r3 + 0x2cu));
            }
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = param_3;
            r3 = tc_call(0x8030ec84u, &a);
            wr32(r31, r3);
        }
        r31 = r31 + 0x34u;
        r30 = r30 + 4u;
        r29 = r29 + 1u;
    }
    return;
}
