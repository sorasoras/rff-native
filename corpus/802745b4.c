#include "tc_rt.h"

void fn_802745b4(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r3 = tc_call(0x8022c2b0u, &a);
    r30 = r3;
    if (param_1 != 0u) {
        if (param_3 >= rd32(0x80571abcu)) {
            r3 = 0u;
        } else {
            r3 = rd32(0x80571ac0u);
            if (r3 == 0u) {
                r3 = 0u;
            } else {
                r3 = r3 - 0x7fafc6e0u;
                r0 = (u32)rd16(r3 + (((0u - param_3) << 1u) & 0xfffffffeu));
                if (r0 == 0u) {
                    r3 = 0u;
                } else {
                    r0 = (u32)rd16(r0 - 0x7fafc6e0u);
                    a.r[0] = r0 - 0x7fafc6e0u;
                    a.r[1] = 0x817fdfc8u;
                    r3 = tc_call(0x80273f34u, &a);
                }
            }
        }
        if (r3 != 0u) {
            if ((u32)rd8(0x817fdfd1u) != 0u && rd32(0x817fdfd8u) == param_2) {
                a.r[0] = rd32(0x817fdfe0u);
                a.r[1] = param_1;
                a.r[2] = param_2;
                r3 = tc_call(0x802592d8u, &a);
                if (r3 != 0u) {
                    a.r[0] = rd32(0x817fdfe0u);
                    a.r[1] = param_1;
                    a.r[2] = param_2;
                    (void)tc_call(0x80004338u, &a);
                    wr8(0x80571ac5u, 1u);
                }
                a.r[0] = r30;
                (void)tc_call(0x8022c2d8u, &a);
                return;
            }
            a.r[0] = param_3;
            (void)tc_call(0x802740ccu, &a);
        }
        a.r[0] = param_3;
        a.r[1] = 0x40u;
        a.r[2] = param_1;
        a.r[3] = param_2;
        (void)tc_call(0x8027425cu, &a);
    }
    a.r[0] = r30;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
