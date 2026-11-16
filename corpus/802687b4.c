#include "tc_rt.h"

s32 fn_802687b4(s32 param_1, s32 param_2, u32 param_3, u32 param_4, s32 param_5, s32 param_6)
{
    u32 r0 = 0, r3 = 0, r19 = 0, r20 = 0, r21 = 0, r22 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdf70u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    if ((u32)param_2 == 0u || rd32(param_3) == 0u) {
        r3 = 2u;
    } else {
        r29 = 0u;
        wr32(param_4, 0u);
        r30 = 0u;
        r21 = 0u;
        while ((r29 == 0u && r30 < rd32(param_3)) && (r21 == 0u && rd32(param_4) == 0u)) {
            a.r[0] = 0x817fdf84u;
            a.r[1] = 0u;
            a.r[2] = 0x40u;
            (void)tc_call(0x8000446cu, &a);
            r3 = 0x800u;
            r0 = rd32(param_3) - r30;
            if (r0 <= 0x800u) {
                r3 = r0;
            }
            r31 = r3;
            r0 = 0xd0u;
            if ((u32)param_6 != 0u) {
                r0 = 0xd1u;
            }
            wr8(0x817fdf88u, (u8)r0);
            r0 = 0x40u;
            if ((u32)param_6 == 0u) {
                r0 = r3 + 0x40u;
            }
            wr32(0x817fdf84u, r0);
            wr32(0x817fdf8cu, (u32)param_1);
            wr16(0x817fdf90u, (u16)r3);
            a.r[0] = 0x817fdf7cu;
            a.r[1] = 0x817fdf78u;
            (void)tc_call(0x80266d88u, &a);
            a.r[0] = rd32(0x817fdf78u);
            a.r[1] = 0x817fdf84u;
            a.r[2] = 0x40u;
            r3 = tc_call(0x802669f4u, &a);
            r21 = r3;
            if ((u32)param_6 == 0u && r3 == 0u) {
                a.r[0] = rd32(0x817fdf78u);
                a.r[1] = (u32)param_2 + r30;
                a.r[2] = r31;
                r3 = tc_call(0x802669f4u, &a);
                r21 = r3;
            }
            if (r3 == 0u) {
                if ((u32)param_5 != 0u) {
                    r0 = 0u;
                    if ((u32)param_6 != 0u && (u32)param_1 == 0u) {
                        r0 = 1u;
                    }
                    r0 = ppc_cntlzw(r0);
                    a.r[0] = rd32(0x817fdf78u);
                    a.r[1] = 0x817fdf80u;
                    a.r[2] = 5u;
                    a.r[3] = 3u;
                    a.r[4] = (r0 >> 5u) & 0x7ffffffu;
                    r3 = tc_call(0x80268634u, &a);
                    r21 = r3;
                    if (r3 == 0u) {
                        a.r[0] = rd32(0x817fdf80u);
                        r3 = tc_call(0x80266d5cu, &a);
                        r22 = r3;
                    }
                    r19 = (u32)rd16(r22 + 0x24u);
                    r20 = rd32(r22 + 0x20u) & 0xffu;
                    if (((u32)param_6 != 0u && r21 == 0u) && r19 <= r31) {
                        a.r[0] = r22;
                        a.r[1] = 0x40u;
                        (void)tc_call(0x80266c88u, &a);
                        a.r[0] = r22;
                        a.r[1] = (u32)param_2 + r30;
                        a.r[2] = r19;
                        r3 = tc_call(0x80266778u, &a);
                        r21 = r3;
                        if (r3 == 0x302u) {
                            r21 = 0u;
                        }
                    }
                    if (r19 != r31) {
                        r31 = r19;
                        r29 = 1u;
                    }
                    wr32(param_4, r20);
                    a.r[0] = rd32(0x817fdf80u);
                    (void)tc_call(0x80266cf8u, &a);
                } else {
                    a.r[0] = rd32(0x817fdf78u);
                    r3 = tc_call(0x8026665cu, &a);
                    r21 = r3;
                }
            }
            a.r[0] = rd32(0x817fdf7cu);
            (void)tc_call(0x80266cf8u, &a);
            r30 = r30 + r31;
        }
        wr32(param_3, r30);
        r3 = r21;
    }
    return (s32)r3;
}
