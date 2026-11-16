#include "tc_rt.h"

void fn_8026fd70(u32 param_1, u32 param_2, s32 param_3, u32 param_4, s32 param_5, u32 param_6, u32 param_7, u32 param_8)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    a.r[0] = rd32(0x80570c3cu);
    a.r[1] = 0x40u;
    a.r[2] = 0x20u;
    r3 = tc_call(0x80270904u, &a);
    wr32(0x817fdfc8u, r3);
    if (r3 == 0u) {
        r31 = 0xffffffeau;
    } else {
        wr32(r3 + 0x20u, param_7);
        wr32(r3 + 0x24u, param_8);
        wr32(r3 + 0x28u, 0u);
        wr32(r3, 6u);
        wr32(r3 + 8u, param_1);
    }
    if (r31 == 0u) {
        r31 = 0u;
        if (r3 == 0u) {
            r31 = 0xfffffffcu;
        } else {
            wr32(r3 + 0xcu, param_2);
            if ((u32)param_5 != 0u) {
                r0 = (u32)param_5 - 0x80000000u;
            } else {
                r0 = 0u;
            }
            wr32(r3 + 0x18u, r0);
            wr32(r3 + 0x1cu, param_6);
            if ((u32)param_3 != 0u) {
                r0 = (u32)param_3 - 0x80000000u;
            } else {
                r0 = 0u;
            }
            wr32(r3 + 0x10u, r0);
            wr32(r3 + 0x14u, param_4);
            a.r[0] = (u32)param_3;
            a.r[1] = param_4;
            (void)tc_call(0x80227738u, &a);
            a.r[0] = (u32)param_5;
            a.r[1] = param_6;
            (void)tc_call(0x80227738u, &a);
        }
        if (r31 == 0u) {
            a.r[0] = rd32(0x817fdfc8u);
            a.r[1] = param_7;
            (void)tc_call(0x8026f2a0u, &a);
        }
    }
    return;
}
