#include "tc_rt.h"

void fn_803039f0(u32 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    u32 r3 = 0, r4 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = param_2;
    r3 = tc_call(0x803014bcu, &a);
    r30 = rd32(param_3);
    r31 = r3;
    r4 = ((r3 * 0x5cu) + r30 + 3u) & 0xfffffffcu;
    if ((s32)(r4 - (u32)param_4) > 0) {
        return;
    }
    wr32(param_3, r4);
    r29 = 0u;
    wr32(param_1 + 0x3cu, r30);
    wr32(param_1 + 0x38u, r3);
    while (r29 < r31) {
        r28 = r30;
        if (r30 != 0u) {
            a.r[0] = r30;
            r3 = tc_call(0x80305a38u, &a);
            r28 = r3;
        }
        a.r[0] = param_2;
        a.r[1] = r29;
        a.r[2] = 0x817fdfc8u;
        r3 = tc_call(0x8030150cu, &a);
        if (r3 != 0u) {
            a.r[0] = r28;
            a.r[1] = rd32(0x817fdfc8u);
            (void)tc_call(0x80306158u, &a);
            if (rd32(0x817fdfccu) != 0u) {
                r27 = 0u;
                for (;;) {
                    r4 = rd32(0x817fdfc8u);
                    if ((s32)r27 >= (s32)r4) break;
                    a.r[0] = param_1;
                    a.r[1] = param_3;
                    a.r[2] = (u32)param_4;
                    a.r[3] = rd32(0x817fdfccu);
                    r3 = tc_call(0x80303924u, &a);
                    if (r3 == 0u) {
                        return;
                    }
                    a.r[0] = r28;
                    a.r[1] = r3;
                    (void)tc_call(0x803062ccu, &a);
                    r27 = r27 + 1u;
                }
                a.r[0] = r28;
                a.r[1] = r4;
                (void)tc_call(0x803061e8u, &a);
            }
        }
        r29 = r29 + 1u;
        r30 = r30 + 0x5cu;
    }
    return;
}
