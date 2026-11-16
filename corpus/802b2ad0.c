#include "tc_rt.h"

static void px_rec(u32 sp_, u32 param_1, u32 param_2, u32 param_3, u32 param_4, s32 param_5)
{
    u32 r0 = 0, r1 = 0, r3 = 0, r11 = 0, r26 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(sp_ - 0x30u, sp_);
    r1 = sp_ - 0x30u;
    wr32(r1 + 0x34u, 0x817ff000u);
    r11 = r1 + 0x30u;
    wr32(r11 - 0x18u, 0u);
    wr32(r11 - 0x14u, 0u);
    wr32(r11 - 0x10u, 0u);
    wr32(r11 - 0xcu, 0u);
    wr32(r11 - 8u, 0u);
    wr32(r11 - 4u, 0u);
    r26 = param_1;
    r31 = param_1 + param_2;
    if (param_5 <= 3) {
        for (;;) {
            if (r26 >= r31) {
                return;
            }
            r30 = (u32)rd8(r26);
            a.r[0] = r26 + 1u;
            a.r[1] = r30;
            a.r[2] = r1 + 8u;
            r3 = tc_call(0x802b6c90u, &a);
            r0 = (r30 >> 3u) & 0x1fu;
            r26 = r3;
            if (r0 != 3u) {
                if (r0 == 6u) {
                    px_rec(r1, r3, rd32(r1 + 8u), param_3, param_4, (u32)param_5 + 1u);
                    if ((r3 & 0xffu) != 0u) break;
                }
            } else {
                a.r[0] = r3;
                a.r[1] = rd32(r1 + 8u);
                a.r[2] = param_3;
                a.r[3] = param_4;
                r3 = tc_call(0x802b6e40u, &a);
                if ((r3 & 0xffu) != 0u) {
                    return;
                }
            }
            r26 = r26 + rd32(r1 + 8u);
        }
    }
    return;
}

void fn_802b2ad0(u32 param_1, u32 param_2, u32 param_3, u32 param_4, s32 param_5)
{
    px_rec(0x817fe000u, param_1, param_2, param_3, param_4, param_5);
}
