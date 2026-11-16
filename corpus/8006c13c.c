#include "tc_rt.h"

void fn_8006c13c(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r23 = 0, r24 = 0, r25 = 0, r27 = 0, r29 = 0, r30 = 0, r31 = 0;
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
    r25 = 0u;
    r27 = 0u;
    r31 = (u32)rd16(0x8049908au);
    do {
        r3 = r27 - 0x7fb66fa0u;
        r4 = (u32)rd16(r3 + 0x106u);
        if (r4 != 0x2e8u) {
            r24 = (u32)rd8(r3 + 0x109u);
            r23 = (u32)rd8(r3 + 0x108u);
        }
        if (r4 != 0x2e8u) {
            r0 = 0u;
            if ((s32)r4 >= 647 && (s32)r4 <= 743) {
                r0 = 1u;
            }
            if (r0 != 0u) {
                a.r[0] = param_1;
                a.r[1] = r4;
                a.r[2] = r25;
                a.r[3] = r24;
                a.r[4] = r23;
                (void)tc_call(0x800691a4u, &a);
            }
        }
        r25 = r25 + 1u;
        r27 = r27 + 4u;
    } while ((s32)r25 < 4);
    r23 = 0u;
    r27 = 0u;
    do {
        r3 = r27 - 0x7fb66fa0u;
        r4 = (u32)rd16(r3 + 0xfeu);
        if (r4 != 0x2e8u) {
            r30 = (u32)rd8(r3 + 0x101u);
            r29 = (u32)rd8(r3 + 0x100u);
        }
        if (r4 != 0x2e8u) {
            r0 = 1u;
            r3 = 1u;
            r5 = 0u;
            if ((s32)r4 >= 504 && (s32)r4 <= 646) {
                r5 = 1u;
            }
            if (r5 == 0u) {
                r5 = 0u;
                if ((s32)r4 >= 0 && (s32)r4 <= 36) {
                    r5 = 1u;
                }
                if (r5 == 0u) {
                    r3 = 0u;
                }
            }
            if (r3 == 0u) {
                r3 = 0u;
                if ((s32)r4 >= 353 && (s32)r4 <= 360) {
                    r3 = 1u;
                }
                if (r3 == 0u) {
                    r0 = 0u;
                }
            }
            if (r0 != 0u) {
                if (r23 == 0u) {
                    a.r[0] = param_1;
                    a.r[1] = r4;
                    a.r[2] = r30;
                    a.r[3] = r29;
                    a.r[4] = 1u;
                    (void)tc_call(0x8006c6c0u, &a);
                } else {
                    if (r23 == 1u) {
                        a.r[0] = param_1;
                        a.r[1] = r4;
                        a.r[2] = r30;
                        a.r[3] = r29;
                        a.r[4] = 1u;
                        (void)tc_call(0x8006c79cu, &a);
                    }
                }
            }
        }
        r23 = r23 + 1u;
        r27 = r27 + 4u;
    } while ((s32)r23 < 2);
    if ((u32)rd16(0x80499214u) != 0x2e8u) {
        a.r[0] = 0x80499214u;
        (void)tc_call(0x8008178cu, &a);
    }
    wr16(0x817fdfc8u, 0x2e8u);
    wr8(0x817fdfcau, 1u);
    wr8(0x817fdfcbu, 1u);
    a.r[0] = 0x817fdfc8u;
    (void)tc_call(0x80082a40u, &a);
    r4 = (u32)rd16(0x817fdfc8u);
    if (r4 != 0x2e8u) {
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = (u32)rd8(0x817fdfcbu);
        a.r[3] = (u32)rd8(0x817fdfcau);
        (void)tc_call(0x800c494cu, &a);
    }
    (void)tc_call(0x80082a24u, &a);
    if (r31 < 0xffffu) {
        wr16(0x8049908au, (u16)r31);
        return;
    }
    r31 = 0xffffu;
    wr16(0x8049908au, (u16)r31);
    return;
}
