#include "tc_rt.h"

s32 fn_8030af24(u32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    r3 = tc_call(0x8022c2b0u, &a);
    if (rd32(param_1 + 0x18u) == 0u) {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        r30 = 0u;
    } else {
        r30 = rd32(param_1 + 0x1cu);
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        r30 = r30 - 4u;
    }
    if (r30 != 0u) {
        a.r[0] = r31;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = r30;
    } else {
        r3 = tc_call(0x8022c2b0u, &a);
        if (rd32(param_1 + 0xcu) == 0u) {
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
            r30 = 0u;
        } else {
            r30 = rd32(param_1 + 0x10u);
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
            r30 = r30 - 4u;
        }
        if (r30 != 0u) {
            a.r[0] = r31;
            (void)tc_call(0x8022c2d8u, &a);
            r3 = r30;
        } else {
            r3 = tc_call(0x8022c2b0u, &a);
            if (rd32(param_1) == 0u) {
                a.r[0] = r3;
                (void)tc_call(0x8022c2d8u, &a);
                r30 = 0u;
            } else {
                r30 = rd32(param_1 + 4u);
                a.r[0] = r3;
                (void)tc_call(0x8022c2d8u, &a);
                r30 = r30 - 4u;
            }
            if (r30 != 0u) {
                a.r[0] = r31;
                (void)tc_call(0x8022c2d8u, &a);
                r3 = r30;
            } else {
                a.r[0] = r31;
                (void)tc_call(0x8022c2d8u, &a);
                r3 = 0u;
            }
        }
    }
    return (s32)r3;
}
