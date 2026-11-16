#include "tc_rt.h"

s32 fn_8030adc8(u32 param_1)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    r3 = tc_call(0x8022c2b0u, &a);
    r30 = r3;
    if (rd32(param_1 + 0x18u) == 0u) {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        r30 = 0u;
    } else {
        r29 = rd32(param_1 + 0x1cu);
        wr32(0x817fdfe0u, r29);
        a.r[0] = param_1 + 0x18u;
        a.r[1] = 0x817fdfe0u;
        (void)tc_call(0x802deab0u, &a);
        a.r[0] = r30;
        (void)tc_call(0x8022c2d8u, &a);
        r30 = r29 - 4u;
    }
    if (r30 != 0u) {
        a.r[0] = r31;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = r30;
    } else {
        r3 = tc_call(0x8022c2b0u, &a);
        r30 = r3;
        if (rd32(param_1 + 0xcu) == 0u) {
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
            r30 = 0u;
        } else {
            r29 = rd32(param_1 + 0x10u);
            wr32(0x817fdfdcu, r29);
            a.r[0] = param_1 + 0xcu;
            a.r[1] = 0x817fdfdcu;
            (void)tc_call(0x802deab0u, &a);
            a.r[0] = r30;
            (void)tc_call(0x8022c2d8u, &a);
            r30 = r29 - 4u;
        }
        if (r30 != 0u) {
            a.r[0] = r31;
            (void)tc_call(0x8022c2d8u, &a);
            r3 = r30;
        } else {
            r3 = tc_call(0x8022c2b0u, &a);
            r30 = r3;
            if (rd32(param_1) == 0u) {
                a.r[0] = r3;
                (void)tc_call(0x8022c2d8u, &a);
                r30 = 0u;
            } else {
                r29 = rd32(param_1 + 4u);
                wr32(0x817fdfd8u, r29);
                a.r[0] = param_1;
                a.r[1] = 0x817fdfd8u;
                (void)tc_call(0x802deab0u, &a);
                a.r[0] = r30;
                (void)tc_call(0x8022c2d8u, &a);
                r30 = r29 - 4u;
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
