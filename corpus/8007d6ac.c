#include "tc_rt.h"

u32 fn_8007d6ac(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if (param_1 != 0u) {
        r31 = param_1;
        r30 = param_1 + 0xacu;
        wr32(param_1, 0x80350d80u);
        r29 = 0u;
        while (r29 < rd32(param_1 + 0x19cu)) {
            if (rd32(r31 + 0xf4u) != 0u) {
                a.r[0] = r30;
                (void)tc_call(0x80070068u, &a);
            }
            r31 = r31 + 0xe4u;
            r30 = r30 + 0xe4u;
            r29 = r29 + 1u;
        }
        wr32(param_1 + 0x19cu, 0u);
        a.r[0] = param_1 + 0xacu;
        a.r[1] = 0x80066970u;
        a.r[2] = 0xe4u;
        a.r[3] = 1u;
        (void)tc_call(0x8025571cu, &a);
        a.r[0] = param_1;
        a.r[1] = 0u;
        (void)tc_call(0x80070278u, &a);
        if (param_2 > 0 && param_1 != 0u) {
            r3 = tc_call(0x8006bb94u, &a);
            r6 = r3;
            if (rd32(r3 + 0x10u) != 0u) {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = param_1;
                a.r[2] = r5;
                a.r[3] = r6;
                (void)tc_call(0x80040e98u, &a);
            } else {
                if (rd32(r3 + 0x20u) != 0u) {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = param_1;
                    (void)tc_call(0x80094ec0u, &a);
                } else {
                    r5 = rd32(r3 + 0xcu);
                    r3 = rd32(r3);
                    r6 = r6 + 0x18u;
                    a.r[0] = r3;
                    a.r[1] = param_1;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    (void)tc_call(0x80040e98u, &a);
                }
            }
        }
    }
    return param_1;
}
