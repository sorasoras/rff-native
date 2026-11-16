#include "tc_rt.h"

s32 fn_80268634(u32 param_1, u32 param_2, u32 param_3, s32 param_4, s32 param_5)
{
    u32 r3 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_3;
    r28 = (u32)param_4 + 1u;
    r31 = 0u;
    r25 = 1u;
    wr32(param_2, 0xffffffffu);
    while (r28 != 0u && rd32(param_2) == 0xffffffffu && r31 == 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x8026665cu, &a);
        r31 = r3;
        if (r3 == 0u) {
            if ((u32)param_5 != 0u) {
                r29 = 0u;
            }
            for (;;) {
                r3 = tc_call(0x80266fa0u, &a);
                wr32(param_2, r3);
                r3 = rd32(param_2);
                if (r3 == 0xffffffffu) {
                    if ((u32)param_5 == 0u) continue;
                    r29 = r29 + 1u;
                    if (r29 < 0x4c4b3ecu) continue;
                }
                if (r3 == 0xffffffffu) break;
                r25 = 0u;
                a.r[0] = r3;
                r3 = tc_call(0x80266d5cu, &a);
                r30 = r3;
                a.r[0] = r3;
                a.r[1] = 0u;
                (void)tc_call(0x80266c88u, &a);
                a.r[0] = r30 + 0x10u;
                a.r[1] = rd32(r30 + 8u);
                (void)tc_call(0x8026b5e4u, &a);
                r27 = (u32)rd8(r30 + 0x14u);
                if (r27 >= 0x80u) break;
                a.r[0] = rd32(param_2);
                (void)tc_call(0x80266ef0u, &a);
                wr32(param_2, 0xffffffffu);
            }
            r3 = rd32(param_2);
            if (r3 != 0xffffffffu) {
                if (rd32(r30 + 8u) < 0x40u) {
                    r25 = 1u;
                }
                if (r31 == 0u && r25 == 0u) {
                    r26 = (u32)rd8(r30 + 0x18u);
                }
                if (r31 == 0u && r25 == 0u && (r27 != 0x80u || r26 != 0u)) {
                    r25 = 1u;
                }
                if (r31 != 0u || r25 != 0u) {
                    a.r[0] = r3;
                    (void)tc_call(0x80266cf8u, &a);
                    wr32(param_2, 0xffffffffu);
                }
            }
        }
        r28 = r28 - 1u;
    }
    if (rd32(param_2) == 0xffffffffu) {
        r31 = 0x800u;
    }
    return (s32)r31;
}
