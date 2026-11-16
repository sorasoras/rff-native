#include "tc_rt.h"

u32 fn_800ccb48(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r21 = 0, r22 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = (u32)rd16(param_2);
    r3 = tc_call(0x800ccaf4u, &a);
    if (r3 != 0u) {
        r21 = param_2 + 2u;
        r3 = tc_call(0x800ccfacu, &a);
        a.r[0] = r21;
        a.r[1] = r3;
        r3 = tc_call(0x8025e8ecu, &a);
        r30 = r3;
        r3 = tc_call(0x800ccf94u, &a);
        a.r[0] = r21;
        a.r[1] = r3;
        r3 = tc_call(0x8025e8ecu, &a);
        r31 = r3;
        r3 = tc_call(0x800ccf88u, &a);
        a.r[0] = r21;
        a.r[1] = r3;
        r3 = tc_call(0x8025e8ecu, &a);
        wr32(param_5, 1u);
        wr32(param_4, 1u);
        wr32(param_3, param_2);
        if (r31 != 0u) {
            if (r3 == 0u || r3 >= r31) {
                if (r30 == 0u || r30 > r31) {
                    r3 = 0u;
                } else {
                    a.r[0] = param_1;
                    r3 = tc_call(0x800cb948u, &a);
                    a.r[0] = r3;
                    r3 = tc_call(0x80079df8u, &a);
                    r29 = r3;
                    while (r21 != 0u && (u32)rd16(r21) != 0u) {
                        r3 = tc_call(0x800ccfa0u, &a);
                        a.r[0] = r21;
                        a.r[1] = r3;
                        r3 = tc_call(0x8025e8ecu, &a);
                        r22 = r3;
                        if (r3 == 0u || r3 > r30) {
                            r5 = r30 - r21;
                            r4 = r21;
                            r21 = (u32)((s32)(((r5 >> 0x1fu) & 1u) + r5) >> 1);
                            a.r[0] = r29;
                            a.r[1] = r4;
                            a.r[2] = r21;
                            (void)tc_call(0x8025e7dcu, &a);
                            wr16(r29 + ((r21 << 1u) & 0xfffffffeu), 0u);
                            a.r[0] = param_1;
                            a.r[1] = r29;
                            (void)tc_call(0x800cceccu, &a);
                            break;
                        }
                        r5 = r3 - r21;
                        r4 = r21;
                        r21 = (u32)((s32)(((r5 >> 0x1fu) & 1u) + r5) >> 1);
                        a.r[0] = r29;
                        a.r[1] = r4;
                        a.r[2] = r21;
                        (void)tc_call(0x8025e7dcu, &a);
                        wr16(r29 + ((r21 << 1u) & 0xfffffffeu), 0u);
                        r21 = r22 + 2u;
                        a.r[0] = param_1;
                        a.r[1] = r29;
                        (void)tc_call(0x800cceccu, &a);
                    }
                    r0 = r30 + 2u;
                    r4 = r31 - param_2;
                    r5 = r31 - r0;
                    wr32(param_3, r0);
                    r5 = ((r5 >> 0x1fu) & 1u) + r5;
                    r5 = (u32)((s32)r5 >> 1);
                    r4 = (u32)((s32)(((r4 >> 0x1fu) & 1u) + r4) >> 1);
                    wr32(param_4, r5);
                    r3 = 1u;
                    wr32(param_5, r4 + 1u);
                }
            } else {
                r3 = 0u;
            }
        } else {
            r3 = 0u;
        }
    } else {
        r3 = 0u;
    }
    return r3;
}
