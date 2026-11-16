#include "tc_rt.h"

void fn_8008d9dc(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    if ((param_2 & 1u) != 0u) {
        r5 = rd32(param_1);
        r3 = (u32)rd8(r5 + 1u);
        r4 = (u32)rd8(r5 + 2u);
        r5 = (u32)rd8(r5 + 3u);
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = r5;
        r3 = tc_call(0x8008dbc4u, &a);
        r4 = r3 - 0x96u;
        r31 = r3;
        r5 = 0u;
        if (r4 <= 0x15u) {
            r4 = ((r4 & 0x20u) != 0u) ? 0u : (1u << (r4 & 0x1fu));
            if ((r4 & 0x2c000bu) != 0u) {
                r5 = 1u;
            }
        }
        if (r5 == 0u) {
            a.r[0] = param_1;
            (void)tc_call(0x8008fbf4u, &a);
        } else {
            a.r[0] = param_1;
            (void)tc_call(0x8008fa20u, &a);
        }
        r5 = rd32(param_1 + 4u);
        if (r5 != 0u) {
            if (r31 != 0xffffffffu) {
                if ((u32)((s32)rd32(param_1 + 0x8cu) >> 31) == 0u) {
                    a.r[0] = 0x80471ed0u;
                    a.r[1] = r31;
                    a.r[2] = r5;
                    r3 = tc_call(0x800916acu, &a);
                    wr32(param_1 + 4u, r3);
                }
                wr32(param_1 + 8u, 1u);
            } else {
                if ((u32)((s32)rd32(param_1 + 0x8cu) >> 31) == 0u) {
                    a.r[0] = 0x80471ed0u;
                    a.r[1] = r5;
                    (void)tc_call(0x800917b8u, &a);
                    wr32(param_1 + 4u, 0u);
                }
                wr32(param_1 + 8u, 0u);
            }
        } else if (r31 != 0xffffffffu) {
            a.r[0] = 0x80471ed0u;
            a.r[1] = r31;
            a.r[2] = 0u;
            r3 = tc_call(0x800916acu, &a);
            wr32(param_1 + 4u, r3);
            wr32(param_1 + 8u, 1u);
        } else {
            wr32(param_1 + 8u, 0u);
        }
        if ((u32)((s32)rd32(param_1 + 0x8cu) >> 31) == 0u && rd32(param_1 + 8u) != 0u) {
            a.r[0] = r31;
            r3 = tc_call(0x8008d1b4u, &a);
            wr8(rd32(param_1) + 6u, (u8)r3);
        }
        wr32(param_1 + 0x8cu, rd32(param_1 + 0x8cu) | 0x80000000u);
    }
    if ((param_2 & 2u) != 0u) {
        r5 = rd32(param_1 + 0x48u);
        r4 = (u32)rd8(rd32(param_1)) + 0xb9u;
        if (r5 != 0u) {
            if ((u32)((s32)((rd32(param_1 + 0x8cu) << 1u) & 0xc0000000u) >> 31) == 0u) {
                a.r[0] = 0x80471ed0u;
                a.r[1] = r4;
                a.r[2] = r5;
                r3 = tc_call(0x800916acu, &a);
                wr32(param_1 + 0x48u, r3);
            }
        } else {
            a.r[0] = 0x80471ed0u;
            a.r[1] = r4;
            a.r[2] = 0u;
            r3 = tc_call(0x800916acu, &a);
            wr32(param_1 + 0x48u, r3);
            wr32(param_1 + 0x4cu, 1u);
        }
        wr32(param_1 + 0x8cu, rd32(param_1 + 0x8cu) | 0x40000000u);
    }
    return;
}
