#include "tc_rt.h"

void fn_80089228(s32 param_1, u32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r20 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0;
    TcArgs a = {0};
    a.r[0] = param_2;
    r3 = tc_call(0x80037914u, &a);
    r25 = rd32(r3 + 8u);
    r20 = r3;
    r24 = 0u;
    r23 = 0u;
    while ((s32)r24 < (s32)r25) {
        r3 = tc_call(0x80083e38u, &a);
        r4 = r3;
        if (rd32(r3 + 0x10u) == 0u) {
            if (rd32(r3 + 0x20u) == 0u) {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x28u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040cd8u, &a);
            } else {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = 0x28u;
                r3 = tc_call(0x80094e80u, &a);
            }
            r27 = r3;
        } else {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x28u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040db8u, &a);
            r27 = r3;
        }
        if (r3 != 0u) {
            wr32(r3, 0u);
            wr32(r3 + 0x18u, 0u);
            wr32(r3 + 0x14u, 0u);
            wr32(r3 + 0x10u, 0xffffffffu);
            wr32(r3 + 0x1cu, 1u);
            wr32(r3 + 4u, 0u);
            wr32(r3 + 8u, 0u);
            wr32(r3 + 0xcu, 0u);
            wr32(r3 + 0x20u, 0u);
            wr32(r3 + 0x24u, 0u);
        }
        r26 = r3;
        r22 = 0u;
        r21 = 0u;
        do {
            r4 = r24;
            r24 = r24 + 1u;
            a.r[0] = r20;
            a.r[1] = r4;
            r3 = tc_call(0x80037988u, &a);
            r4 = rd32(r3);
            c0lt = (s32)r4 < 1213745218;
            if (r4 == 0x48584842u) {
                r22 = r22 | 1u;
                a.r[0] = r3;
                r3 = tc_call(0x8003b444u, &a);
                wr32(r27 + 4u, r3);
            } else if (!c0lt) {
                if (r4 == 0x48584d42u) {
                    r22 = r22 | 4u;
                    a.r[0] = r3;
                    r3 = tc_call(0x8003e048u, &a);
                    wr32(r27 + 0xcu, r3);
                }
            } else {
                c0lt = (s32)r4 < 1213744962;
                if (r4 == 0x48584742u) {
                    r22 = r22 | 2u;
                    a.r[0] = r3;
                    r3 = tc_call(0x80038ce4u, &a);
                    wr32(r27 + 8u, r3);
                } else if (c0lt && r4 == 0x48584142u) {
                    r0 = r21 + 3u;
                    r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                    r22 = r22 | r0;
                    a.r[0] = r3;
                    r3 = tc_call(0x80031edcu, &a);
                    wr32(r26 + 0x20u, r3);
                    r26 = r26 + 4u;
                    r21 = r21 + 1u;
                }
            }
        } while ((r22 & 7u) != 7u);
        wr32(r27 + 0x10u, r23);
        r23 = r23 + 1u;
        a.r[0] = (u32)param_1 + 0x524u;
        a.r[1] = r27;
        (void)tc_call(0x8007b03cu, &a);
    }
    return;
}
