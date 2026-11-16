#include "tc_rt.h"

void fn_800c9568(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r25 = param_3;
    a.r[0] = param_3;
    r3 = tc_call(0x8025e7a4u, &a);
    r29 = r3;
    if (r3 != 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x8025e7a4u, &a);
        r3 = ((r29 << 1u) & 0xfffffffeu) + r3;
        if ((r3 + 1u) < param_2) {
            r28 = (0u - (((param_2 + 1u) << 1u) & 0xfffffffeu)) & 0xfffffff8u;
            wr32(r28 - 0x7e802030u, rd32(0x817fdfd0u));
            r28 = r28 - 0x7e802028u;
            r27 = r28;
            a.r[0] = param_1;
            a.r[1] = 0x80570750u;
            a.r[2] = 0x817fdfd8u;
            r3 = tc_call(0x8025e9a4u, &a);
            r26 = r3;
            while (r3 != 0u) {
                if ((u32)rd16(r25) != 0u) {
                    a.r[0] = r27;
                    a.r[1] = r25;
                    a.r[2] = 1u;
                    (void)tc_call(0x8025e7dcu, &a);
                    r25 = r25 + 2u;
                    a.r[0] = r27 + 2u;
                    a.r[1] = 0x80570754u;
                    a.r[2] = 1u;
                    (void)tc_call(0x8025e7dcu, &a);
                    r27 = r27 + 4u;
                }
                a.r[0] = r27;
                a.r[1] = r26;
                (void)tc_call(0x8025e7c0u, &a);
                a.r[0] = r26;
                r3 = tc_call(0x8025e7a4u, &a);
                r27 = r27 + ((r3 << 1u) & 0xfffffffeu);
                a.r[0] = r27;
                a.r[1] = 0x80570750u;
                (void)tc_call(0x8025e7c0u, &a);
                r27 = r27 + 2u;
                a.r[0] = 0u;
                a.r[1] = 0x80570750u;
                a.r[2] = 0x817fdfd8u;
                r3 = tc_call(0x8025e9a4u, &a);
                r26 = r3;
            }
            a.r[0] = param_1;
            a.r[1] = r28;
            (void)tc_call(0x8025e7c0u, &a);
        }
    }
    return;
}
