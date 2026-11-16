#include "tc_rt.h"

u32 fn_800a3310(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = param_1;
    (void)tc_call(0x800a2ad0u, &a);
    a.r[0] = param_1;
    r3 = tc_call(0x800a32a0u, &a);
    if (r3 != 0u) {
        r5 = 0x817fdf94u;
        r4 = 0x80337b44u;
        ctr = 8u;
        do {
            r3 = rd32(r4 + 4u);
            r4 = r4 + 8u;
            r0 = rd32(r4);
            wr32(r5 + 4u, r3);
            wr32(r5 + 8u, r0);
            r5 = r5 + 8u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
        wr32(r5 + 4u, rd32(r4 + 4u));
        wr32(0x817fdfbcu, param_2);
        wr32(0x817fdfc0u, param_3);
        wr32(0x817fdfc4u, param_4);
        wr32(0x817fdfc8u, param_5);
        wr32(0x817fdfd8u, param_1);
        a.r[0] = 0x817fdf98u;
        r3 = tc_call(0x8009b6b0u, &a);
        wr32(param_1, r3);
        a.r[0] = param_1;
        r3 = tc_call(0x800a2d38u, &a);
        if (r3 != 0u) {
            a.r[0] = param_1;
            r3 = tc_call(0x800a2d38u, &a);
            a.r[0] = r3;
            a.r[1] = 0u;
            (void)tc_call(0x8009ba78u, &a);
            for (;;) {
                a.r[0] = param_1;
                r3 = tc_call(0x800a35f8u, &a);
                if (r3 != 0u) break;
                a.r[0] = param_1;
                r3 = tc_call(0x800a2d38u, &a);
                a.r[0] = r3;
                a.r[1] = 0u;
                (void)tc_call(0x8009ba78u, &a);
            }
            r31 = param_1;
            r30 = 0u;
            do {
                a.r[0] = param_1;
                r3 = tc_call(0x800a2d38u, &a);
                a.r[0] = r3;
                a.r[1] = 0x400u;
                a.r[2] = 0u;
                a.r[3] = 1u;
                a.r[4] = 1u;
                a.r[5] = 1u;
                r3 = tc_call(0x8009bbbcu, &a);
                wr32(r31 + 4u, r3);
                if (r3 == 0u) {
                    r3 = 0u;
                    return r3;
                }
                r30 = r30 + 1u;
                r31 = r31 + 4u;
            } while ((s32)r30 < 2);
            a.r[0] = param_1;
            a.r[1] = 0u;
            (void)tc_call(0x800a3580u, &a);
            r3 = 1u;
        } else {
            r3 = 0u;
        }
    } else {
        r3 = 0u;
    }
    return r3;
}
