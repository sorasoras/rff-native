#include "tc_rt.h"

u32 fn_80058158(u32 param_1, u32 param_2, s32 param_3)
{
    u32 c0lt = 0, r3 = 0, r4 = 0, r6 = 0, r25 = 0, r26 = 0, r27 = 0;
    TcArgs a = {0};
    r6 = rd32(param_1);
    while (r6 != 0u) {
        r3 = r6;
        r6 = rd32(r6);
        r3 = rd32(r3 + 8u);
        if (rd32(r3 + 0x10u) == (u32)param_3) {
            a.r[0] = param_1;
            a.r[1] = (u32)param_3;
            a.r[2] = 1u;
            (void)tc_call(0x80057d6cu, &a);
            break;
        }
    }
    r3 = tc_call(0x80057a90u, &a);
    r4 = r3;
    if (rd32(r3 + 0x10u) == 0u) {
        if (rd32(r3 + 0x20u) == 0u) {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
        } else {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x20u;
            r3 = tc_call(0x80094e80u, &a);
        }
        r27 = r3;
    } else {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x20u;
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
    }
    wr32(r3 + 0x18u, 1u);
    wr32(r3 + 0x1cu, 1u);
    a.r[0] = param_2;
    r3 = tc_call(0x80037914u, &a);
    wr32(r27, r3);
    a.r[0] = r3;
    r3 = tc_call(0x80037914u, &a);
    wr32(r27, r3);
    r25 = 0u;
    r26 = rd32(r3 + 8u);
    while ((s32)r25 < (s32)r26) {
        a.r[0] = rd32(r27);
        a.r[1] = r25;
        r3 = tc_call(0x80037988u, &a);
        r4 = rd32(r3);
        c0lt = (s32)r4 < 1213745218;
        if (r4 == 0x48584842u) {
            a.r[0] = r3;
            r3 = tc_call(0x8003b444u, &a);
            wr32(r27 + 4u, r3);
        } else if (!c0lt) {
            if (r4 == 0x48584d42u) {
                a.r[0] = r3;
                r3 = tc_call(0x8003e048u, &a);
                wr32(r27 + 0xcu, r3);
            }
        } else if (r4 == 0x48584742u) {
            a.r[0] = r3;
            r3 = tc_call(0x80038ce4u, &a);
            wr32(r27 + 8u, r3);
        }
        r25 = r25 + 1u;
    }
    wr32(r27 + 0x10u, (u32)param_3);
    a.r[0] = param_1;
    a.r[1] = r27;
    r3 = tc_call(0x8007b03cu, &a);
    wr32(r27 + 0x14u, r3);
    return r27;
}
