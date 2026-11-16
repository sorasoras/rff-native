#include "tc_rt.h"

void fn_8013a61c(s32 param_1)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x8013a760u, &a);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = rd32((u32)param_1 + 0x584u);
        r3 = tc_call(0x801894d8u, &a);
        a.r[0] = (u32)param_1 + 0x198u;
        a.r[1] = r3;
        (void)tc_call(0x80119ffcu, &a);
    }
    r30 = rd32((u32)param_1 + 0x5f0u);
    r31 = rd32((u32)param_1 + 0x584u);
    if (rd32((u32)param_1 + 0x580u) == 0u) {
        a.r[0] = r30;
        a.r[1] = r31 + 1u;
        r3 = tc_call(0x800a7528u, &a);
        r29 = r3;
        a.r[0] = r30;
        a.r[1] = r31 + 1u;
        r3 = tc_call(0x800a74e4u, &a);
        r30 = r3;
        r31 = 0u;
        if (r29 == 0xcu) {
            a.r[0] = 0xcu;
            a.r[1] = 0xdu;
            r3 = tc_call(0x8014da9cu, &a);
            if (r3 == 0u) {
                a.r[0] = 0xdu;
                a.r[1] = 0xdu;
                r3 = tc_call(0x8014da9cu, &a);
                if (r3 != 0u) {
                    r31 = 1u;
                }
            } else {
                a.r[0] = 0xdu;
                a.r[1] = 0xdu;
                (void)tc_call(0x8014da9cu, &a);
                r31 = 1u;
            }
        } else {
            if ((s32)r29 > 0) {
                a.r[0] = r29;
                a.r[1] = 0xdu;
                r3 = tc_call(0x8014da9cu, &a);
                r31 = r3;
            }
            if ((s32)r30 >= 0) {
                a.r[0] = r30;
                a.r[1] = 4u;
                r3 = tc_call(0x8014db4cu, &a);
                r31 = r31 | r3;
            }
        }
        if (r31 == 0u) {
            wr32(rd32(0x80571398u) + 0x11cu, 0xffffffffu);
        } else {
            wr32(rd32(0x80571398u) + 0x11cu, (rd32((u32)param_1 + 0x5f0u) * 0x1eu) + rd32((u32)param_1 + 0x584u));
        }
    }
    return;
}
