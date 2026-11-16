#include "tc_rt.h"

s32 fn_802f23e0(u32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    if (rd32(param_1) != 0u) {
        if (rd32(param_1 + 0x10u) != 0u) {
            a.r[0] = param_1;
            r3 = tc_call(0x802f1d20u, &a);
            if (r3 == 0u) {
                r4 = rd32(param_1);
                if (r4 == 0u) {
                    r3 = 0u;
                } else {
                    r3 = (((u32)rd16(r4 + 0xa2u) << 0x10u) & 0xffff0000u) + (u32)rd16(r4 + 0xa4u);
                }
                r4 = rd32(param_1 + 0x10u);
                r0 = rd32(param_1 + 0x14u);
                if (r4 != 0u) {
                    r4 = r4 - 0x80000000u;
                }
                c0lt = (s32)r0 < 2;
                r30 = 0u;
                if (r0 == 2u) {
                    r30 = r3 - r4;
                } else if (!c0lt) {
                    if ((s32)r0 < 4) {
                        r4 = r3 - ((r4 << 1u) & 0xfffffffeu);
                        r30 = (r4 & 0xfu) + (((r4 >> 4u) & 0xfffffffu) * 0xeu) - 2u;
                    }
                } else if ((s32)r0 >= 1) {
                    r30 = r3 - ((r4 >> 1u) & 0x7fffffffu);
                }
                a.r[0] = r31;
                (void)tc_call(0x8022c2d8u, &a);
                r3 = r30;
            } else {
                r4 = rd32(param_1);
                if (r4 == 0u) {
                    r3 = 0u;
                } else {
                    r3 = (((u32)rd16(r4 + 0x9eu) << 0x10u) & 0xffff0000u) + (u32)rd16(r4 + 0xa0u);
                }
                r4 = rd32(param_1 + 0x10u);
                r0 = rd32(param_1 + 0x14u);
                if (r4 != 0u) {
                    r4 = r4 - 0x80000000u;
                }
                c0lt = (s32)r0 < 2;
                r30 = 0u;
                if (r0 == 2u) {
                    r30 = r3 - r4;
                } else if (!c0lt) {
                    if ((s32)r0 < 4) {
                        r4 = r3 - ((r4 << 1u) & 0xfffffffeu);
                        r30 = (r4 & 0xfu) + (((r4 >> 4u) & 0xfffffffu) * 0xeu) - 2u;
                    }
                } else if ((s32)r0 >= 1) {
                    r30 = r3 - ((r4 >> 1u) & 0x7fffffffu);
                }
                a.r[0] = r31;
                (void)tc_call(0x8022c2d8u, &a);
                r3 = r30 + 1u;
            }
        } else {
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
            r3 = 0u;
        }
    } else {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = 0u;
    }
    return (s32)r3;
}
