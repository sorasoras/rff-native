#include "tc_rt.h"

void fn_80299158(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0, r7 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r7 = 0u;
    if (param_3 == 0u || ((u32)rd8(param_3 + 8u) & 0x10u) == 0u) {
        r30 = param_2;
        r31 = 0x8053d958u;
        r29 = 0u;
        do {
            if (((u32)rd8(r31 + 0x558u) & 1u) != 0u) {
                if ((u32)rd8(r30 + 8u) == 0u) {
                    return;
                }
                a.r[0] = r7;
                a.r[1] = r30;
                a.r[2] = param_4;
                r3 = tc_call(0x80298f3cu, &a);
                if (r3 == 0u) {
                    return;
                }
                r7 = param_4;
            }
            r29 = r29 + 1u;
            r30 = r30 + 0xau;
            r31 = r31 + 8u;
        } while ((s32)r29 < 2);
        if (r7 != 0u) {
            if (param_1 == 0x80u) {
                a.r[0] = param_3;
                a.r[1] = r7;
                a.r[2] = param_4;
                r3 = tc_call(0x80298f3cu, &a);
            }
        } else if (param_3 != 0u) {
            r0 = (u32)rd16(param_3 + 2u);
            wr16(param_4, rd16(param_3));
            wr16(param_4 + 2u, (u16)r0);
            r0 = (u32)rd16(param_3 + 6u);
            wr16(param_4 + 4u, rd16(param_3 + 4u));
            wr16(param_4 + 6u, (u16)r0);
            wr16(param_4 + 8u, rd16(param_3 + 8u));
        }
    } else {
        r0 = (u32)rd16(param_3 + 2u);
        wr16(param_4, rd16(param_3));
        wr16(param_4 + 2u, (u16)r0);
        r0 = (u32)rd16(param_3 + 6u);
        wr16(param_4 + 4u, rd16(param_3 + 4u));
        wr16(param_4 + 6u, (u16)r0);
        wr16(param_4 + 8u, rd16(param_3 + 8u));
        wr8(param_4 + 8u, (u8)((u32)rd8(param_4 + 8u) & 0xffffffefu));
    }
    return;
}
