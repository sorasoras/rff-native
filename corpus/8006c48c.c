#include "tc_rt.h"

s32 fn_8006c48c(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r6 = (((u32)param_3 << 2u) & 0xfffffffcu) - 0x7fb66fa0u;
    r31 = (u32)param_2;
    r30 = (u32)rd16(r6 + 0x2d0u);
    if (r30 != 0x2e8u) {
        r4 = rd32((u32)param_1 + 0xa48u);
        wr32((u32)param_1 + 0xa68u, r4);
        if (r4 != 0u) {
            wr32(r4 + 0x7cu, 0u);
        }
        wr32((u32)param_1 + 0xa6cu, (u32)param_3);
        wr32((u32)param_1 + 0xa48u, 0u);
        r5 = (u32)rd8(r6 + 0x2d3u);
        r6 = (u32)rd8(r6 + 0x2d2u);
        a.r[0] = (u32)param_1;
        a.r[1] = r30;
        a.r[2] = r5;
        a.r[3] = r6;
        (void)tc_call(0x8006ba28u, &a);
        if ((s32)r30 < 37 || (s32)r30 > 84) {
            if ((s32)r30 < 115 || (s32)r30 > 133) {
                if ((s32)r30 < 134 || (s32)r30 > 336) {
                    if ((s32)r30 >= 337 && (s32)r30 <= 352) {
                        r31 = r30 - 0x43u;
                    }
                } else {
                    r31 = r30 - 0x43u;
                }
            } else {
                r31 = r30 - 0x43u;
            }
        } else {
            r31 = r30 - 0x25u;
        }
        if ((u32)rd8(((r31 << 4u) & 0xfffffff0u) - 0x7fb5fba2u) != 1u) {
            r0 = 0u;
            if ((s32)r30 >= 337 && (s32)r30 <= 352) {
                r0 = 1u;
            }
            if (r0 == 0u) {
                r31 = 0xdu;
                a.r[0] = (u32)param_1;
                (void)tc_call(0x800bfac4u, &a);
                r3 = r31;
                return (s32)r3;
            }
        }
        r31 = 0xeu;
        a.r[0] = (u32)param_1;
        (void)tc_call(0x800bfbb0u, &a);
        r3 = r31;
    } else {
        wr32((u32)param_1 + 0xa68u, 0u);
        wr32((u32)param_1 + 0xa6cu, 4u);
        r3 = (u32)param_2;
    }
    return (s32)r3;
}
