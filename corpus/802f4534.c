#include "tc_rt.h"

void fn_802f4534(f64 param_1, f64 param_2, f64 param_3, f64 param_4, f64 param_5, f64 param_6, f64 param_7, f64 param_8, u32 param_9, u32 param_10, u32 param_11, u32 param_12, u32 param_13, u32 param_14, u32 param_15, u32 param_16)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    (void)param_1;
    (void)param_2;
    (void)param_3;
    (void)param_4;
    (void)param_5;
    (void)param_6;
    (void)param_7;
    (void)param_8;
    wr32(0x817fdf60u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdf68u, param_9);
    wr32(0x817fdf6cu, param_10);
    wr32(0x817fdf70u, param_11);
    wr32(0x817fdf74u, param_12);
    wr32(0x817fdf78u, param_13);
    wr32(0x817fdf7cu, param_14);
    wr32(0x817fdf80u, param_15);
    wr32(0x817fdf84u, param_16);
    r3 = tc_call(0x8022c2b0u, &a);
    r30 = r3;
    if (rd32(param_9) == 0u) {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    } else {
        if (param_10 == 1u) {
            r27 = 2u;
        } else {
            if (param_10 == 2u) {
                r27 = 5u;
            } else {
                a.r[0] = r3;
                (void)tc_call(0x8022c2d8u, &a);
                return;
            }
        }
        wr32(0x817fdfd8u, 0x817fe008u);
        r29 = 0x817fdfc8u;
        r28 = 0u;
        wr32(0x817fdfd4u, 0x2000000u);
        wr32(0x817fdfdcu, 0x817fdf68u);
        while ((s32)r28 < (s32)r27) {
            a.r[0] = 0x817fdfd4u;
            a.r[1] = 1u;
            r3 = tc_call(0x802550f0u, &a);
            r28 = r28 + 1u;
            wr16(r29, (u16)rd32(r3));
            r29 = r29 + 2u;
        }
        if (param_10 == 1u) {
            r0 = (u32)rd16(0x817fdfcau);
            wr16(rd32(param_9) + 0x140u, rd16(0x817fdfc8u));
            wr16(rd32(param_9) + 0x142u, (u16)r0);
            wr32(param_9 + 4u, rd32(param_9 + 4u) | 0x20000000u);
        } else {
            r0 = (u32)rd16(0x817fdfcau);
            wr16(rd32(param_9) + 0x146u, rd16(0x817fdfc8u));
            r5 = (u32)rd16(0x817fdfccu);
            r4 = (u32)rd16(0x817fdfceu);
            wr16(rd32(param_9) + 0x148u, (u16)r0);
            r0 = (u32)rd16(0x817fdfd0u);
            wr16(rd32(param_9) + 0x14au, (u16)r5);
            wr16(rd32(param_9) + 0x14cu, (u16)r4);
            wr16(rd32(param_9) + 0x14eu, (u16)r0);
            wr32(param_9 + 4u, rd32(param_9 + 4u) | 0x40000000u);
        }
        a.r[0] = r30;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
