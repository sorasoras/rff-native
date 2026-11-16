#include "tc_rt.h"

u32 fn_80305494(s32 param_1, s32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_3;
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r3 = rd32(rd32((u32)param_1 + 4u) + 0x10u);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = r3;
        r3 = tc_call(0x80301480u, &a);
    }
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r31 = rd32(rd32((u32)param_1 + 4u) + 0x10u);
        a.r[0] = r31;
        a.r[1] = rd32((u32)param_2 + 0xccu);
        a.r[2] = 0x817fdfd0u;
        r3 = tc_call(0x803014f4u, &a);
        if (r3 == 0u) {
            r3 = 0u;
        } else {
            a.r[0] = r31;
            a.r[1] = rd32(0x817fdfd4u);
            a.r[2] = 0x817fdfb8u;
            r3 = tc_call(0x8030151cu, &a);
            if (r3 == 0u) {
                r3 = 0u;
            } else {
                a.r[0] = rd32((u32)param_1 + 4u);
                a.r[1] = rd32(0x817fdfb8u);
                r3 = tc_call(0x80303ee8u, &a);
                if (r3 == 0u) {
                    r3 = 0u;
                } else {
                    a.r[0] = 0x817fdfc0u;
                    a.r[1] = r3;
                    (void)tc_call(0x802f500cu, &a);
                    a.r[0] = rd32((u32)param_1 + 4u);
                    a.r[1] = rd32(0x817fdfb8u);
                    r3 = tc_call(0x80304038u, &a);
                    if (r3 == 0u) {
                        a.r[0] = 0x817fdfc0u;
                        a.r[1] = 0xffffffffu;
                        (void)tc_call(0x802f5044u, &a);
                        r3 = 0u;
                    } else {
                        wr32(0x817fdfccu, r3);
                        a.r[0] = 0x817fdfc0u;
                        a.r[1] = param_4;
                        r3 = tc_call(0x802f5084u, &a);
                        r31 = r3;
                        a.r[0] = 0x817fdfc0u;
                        a.r[1] = 0xffffffffu;
                        (void)tc_call(0x802f5044u, &a);
                        r3 = r31;
                    }
                }
            }
        }
    }
    return r3;
}
