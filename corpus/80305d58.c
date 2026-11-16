#include "tc_rt.h"

void fn_80305d58(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d56cu, &a);
    if (rd32(param_r3 + 0xcu) < 2u) {
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
    } else {
        if ((u32)(s8)rd8(0x80571db8u) == 0u) {
            a.r[0] = 0x80548718u;
            a.r[1] = 0x80305ad4u;
            a.r[2] = 0x80305af4u;
            a.r[3] = 0xcu;
            a.r[4] = 0x80u;
            (void)tc_call(0x80255624u, &a);
            a.r[0] = 0u;
            a.r[1] = 0x80305edcu;
            a.r[2] = 0x80548708u;
            (void)tc_call(0x802551b8u, &a);
            wr8(0x80571db8u, 1u);
        }
        while (rd32(param_r3 + 0xcu) != 0u) {
            r29 = rd32(param_r3 + 0x10u);
            wr32(0x817fdfe4u, r29);
            a.r[0] = param_r3 + 0xcu;
            a.r[1] = 0x817fdfe4u;
            (void)tc_call(0x802deab0u, &a);
            r3 = (u32)rd8(r29 - 0x64u) + rd32(r29 - 0xa8u);
            if ((s32)r3 > 127) {
                r0 = 0x7fu;
            } else {
                r0 = r3 & ~(u32)((s32)r3 >> 31);
            }
            r0 = r0 * 0xcu;
            r3 = r0 - 0x7fab78e8u;
            wr32(0x817fdfe0u, r3 + 4u);
            a.r[0] = r3;
            a.r[1] = 0x817fdfe0u;
            a.r[2] = r29;
            (void)tc_call(0x802deba4u, &a);
        }
        r30 = param_r3 + 0x10u;
        r29 = 0x80548718u;
        r27 = 0u;
        do {
            if (rd32(r29) != 0u) {
                while (rd32(r29) != 0u) {
                    r28 = rd32(r29 + 4u);
                    wr32(0x817fdfdcu, r28);
                    a.r[0] = r29;
                    a.r[1] = 0x817fdfdcu;
                    (void)tc_call(0x802deab0u, &a);
                    wr32(0x817fdfd8u, r30);
                    a.r[0] = param_r3 + 0xcu;
                    a.r[1] = 0x817fdfd8u;
                    a.r[2] = r28;
                    (void)tc_call(0x802deba4u, &a);
                }
            }
            r27 = r27 + 1u;
            r29 = r29 + 0xcu;
        } while ((s32)r27 < 128);
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
    }
    return;
}
