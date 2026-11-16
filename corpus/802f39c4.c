#include "tc_rt.h"

void fn_802f39c4(u32 param_1, u32 param_2)
{
    u32 c1eq = 0, r3 = 0, r4 = 0, r28 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r3 = tc_call(0x8022c2b0u, &a);
    r4 = rd32(param_1);
    r30 = r3;
    c1eq = r4 == 0u;
    if (!c1eq) {
        if (param_2 < 0x3e80u) {
            r3 = 0u;
            if (!c1eq && (u32)rd16(r4 + 0xe2u) == 1u) {
                r3 = 1u;
            }
            if (r3 == 0u) {
                wr16(0x817fdfe0u, 1u);
                wr16(0x817fdfe2u, 0u);
                a.r[0] = param_2;
                a.r[1] = 0x817fdfe4u;
                a.r[2] = 0x817fdfe6u;
                (void)tc_call(0x802464fcu, &a);
                r3 = tc_call(0x8022c2b0u, &a);
                r4 = rd32(param_1);
                r29 = r3;
                if (r4 != 0u) {
                    a.r[0] = r4 + 0xe2u;
                    a.r[1] = 0x817fdfe0u;
                    a.r[2] = 8u;
                    (void)tc_call(0x80004338u, &a);
                    wr32(param_1 + 4u, rd32(param_1 + 4u) | 0x80000u);
                    a.r[0] = r29;
                    (void)tc_call(0x8022c2d8u, &a);
                } else {
                    a.r[0] = r3;
                    (void)tc_call(0x8022c2d8u, &a);
                }
            } else {
                a.r[0] = param_2;
                a.r[1] = 0x817fdfdau;
                a.r[2] = 0x817fdfd8u;
                (void)tc_call(0x802464fcu, &a);
                r28 = (u32)rd16(0x817fdfd8u);
                r29 = (u32)rd16(0x817fdfdau);
                r3 = tc_call(0x8022c2b0u, &a);
                r4 = rd32(param_1);
                if (r4 != 0u) {
                    wr16(r4 + 0xe6u, (u16)r29);
                    wr16(rd32(param_1) + 0xe8u, (u16)r28);
                    wr32(param_1 + 4u, rd32(param_1 + 4u) | 0x100000u);
                    a.r[0] = r3;
                    (void)tc_call(0x8022c2d8u, &a);
                } else {
                    a.r[0] = r3;
                    (void)tc_call(0x8022c2d8u, &a);
                }
            }
        } else {
            wr16(0x817fdfe8u, 0u);
            wr16(0x817fdfeau, 0u);
            r3 = tc_call(0x8022c2b0u, &a);
            r4 = rd32(param_1);
            r29 = r3;
            if (r4 != 0u) {
                a.r[0] = r4 + 0xe2u;
                a.r[1] = 0x817fdfe8u;
                a.r[2] = 8u;
                (void)tc_call(0x80004338u, &a);
                wr32(param_1 + 4u, rd32(param_1 + 4u) | 0x80000u);
                a.r[0] = r29;
                (void)tc_call(0x8022c2d8u, &a);
            } else {
                a.r[0] = r3;
                (void)tc_call(0x8022c2d8u, &a);
            }
        }
        a.r[0] = r30;
        (void)tc_call(0x8022c2d8u, &a);
    } else {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
