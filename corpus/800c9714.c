#include "tc_rt.h"

void fn_800c9714(s32 param_1, s32 param_2, u32 param_3, s32 param_4)
{
    u32 r3 = 0, r4 = 0, r28 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r28 = param_3;
    if ((u32)param_2 != 0xfffffffeu) {
        if ((u32)param_2 != 4u) {
            if ((u32)param_2 != 0x165u) {
                return;
            }
            a.r[0] = 6u;
            r3 = tc_call(0x800a7904u, &a);
            r31 = r3;
            r30 = 0u;
            while ((s32)r30 < param_4) {
                r4 = rd32(r31 + ((rd32(r28) << 3u) & 0xfffffff8u));
                wr32(0x817fdfd8u, r4);
                a.r[0] = (u32)param_1;
                a.r[1] = r4;
                (void)tc_call(0x800c9ce8u, &a);
                r28 = r28 + 4u;
                r30 = r30 + 1u;
            }
        } else {
            a.r[0] = 6u;
            r3 = tc_call(0x800a7904u, &a);
            r31 = r3;
            r4 = rd32(r3 + ((rd32(param_3) << 3u) & 0xfffffff8u));
            wr32(0x817fdfd8u, r4);
            a.r[0] = (u32)param_1;
            a.r[1] = r4;
            (void)tc_call(0x800c9ce8u, &a);
            r4 = (u32)rd16(r31 + ((rd32(param_3) << 3u) & 0xfffffff8u) + 4u);
            if (r4 != 0xffffu) {
                a.r[0] = 0x804b9da0u;
                a.r[1] = r4;
                (void)tc_call(0x8010a924u, &a);
                r3 = tc_call(0x80097da4u, &a);
                r3 = rd32(r3 + 0x30u);
                wr32(r3 + 0x4b4u, 0u);
            }
        }
    } else {
        r3 = tc_call(0x80097da4u, &a);
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = rd32(param_3);
        a.r[2] = 0x817fdfd8u;
        (void)tc_call(0x800a2b6cu, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = rd32(0x817fdfd8u);
        (void)tc_call(0x800c9ce8u, &a);
    }
    r3 = rd32((u32)param_1 + 0x49cu);
    wr32((u32)param_1 + 0x490u, 1u);
    if (r3 != 1u && r3 != 3u && r3 != 4u && r3 != 9u && r3 != 0xau) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x800c985cu, &a);
    }
    return;
}
