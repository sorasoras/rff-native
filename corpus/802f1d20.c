#include "tc_rt.h"

u32 fn_802f1d20(u32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    if (rd32(param_1 + 0x10u) != 0u) {
        r4 = rd32(param_1);
        if (r4 == 0u) {
            r30 = 0u;
        } else {
            r30 = (((u32)rd16(r4 + 0xa2u) << 0x10u) & 0xffff0000u) + (u32)rd16(r4 + 0xa4u);
        }
        r3 = tc_call(0x802f08ccu, &a);
        a.r[0] = r3;
        r3 = tc_call(0x802f0ebcu, &a);
        r0 = rd32(param_1 + 0x14u);
        if (r3 != 0u) {
            r3 = r3 - 0x80000000u;
        }
        c0lt = (s32)r0 < 2;
        r4 = 0u;
        if (r0 == 2u) {
            r4 = r3;
        } else if (!c0lt) {
            if ((s32)r0 < 4) {
                r3 = (r3 << 1u) & 0xfffffffeu;
                r4 = r3 + 2u;
            }
        } else if ((s32)r0 >= 1) {
            r4 = (r3 >> 1u) & 0x7fffffffu;
        }
        r0 = rd32(param_1 + 0x14u);
        c0lt = (s32)r0 < 2;
        if (r0 == 2u) {
            r0 = r4 + 0x100u;
        } else if (!c0lt) {
            if ((s32)r0 >= 4) {
                a.r[0] = r31;
                (void)tc_call(0x8022c2d8u, &a);
                r3 = 0u;
                return r3;
            }
            r0 = r4 + 0x200u;
        } else {
            if ((s32)r0 < 1) {
                a.r[0] = r31;
                (void)tc_call(0x8022c2d8u, &a);
                r3 = 0u;
                return r3;
            }
            r0 = r4 + 0x80u;
        }
        if (r4 > r30 || r30 >= r0) {
            a.r[0] = r31;
            (void)tc_call(0x8022c2d8u, &a);
            r3 = 0u;
        } else {
            a.r[0] = r31;
            (void)tc_call(0x8022c2d8u, &a);
            r3 = 1u;
        }
    } else {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = 0u;
    }
    return r3;
}
