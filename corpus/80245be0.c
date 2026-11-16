#include "tc_rt.h"

void fn_80245be0(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0;
    TcArgs a = {0};
    r0 = rd32(0x805718f4u);
    wr32(0x805718f8u, 0u);
    a.r[0] = rd32(0x805718e8u);
    a.r[1] = r0 * 0x140u;
    (void)tc_call(0x8022770cu, &a);
    a.r[0] = rd32(0x805718ecu);
    a.r[1] = (rd32(0x805718f4u) << 6u) & 0xffffffc0u;
    (void)tc_call(0x8022770cu, &a);
    r3 = tc_call(0x80243f7cu, &a);
    r27 = 0x1fu;
    r3 = r3 + (rd32(0x805718f4u) * 0x258u) + param_r3;
    r28 = r3 + 0x20u;
    do {
        a.r[0] = r27;
        r3 = tc_call(0x802431e8u, &a);
        r26 = r3;
        while (r26 != 0u) {
            if ((u32)rd16(r26 + 0x6cu) == 1u) {
                r28 = r28 + 0x81u;
            }
            if (rd32(r26 + 0x20u) != 0u) {
                a.r[0] = rd32(0x805718e8u) + (rd32(r26 + 0x18u) * 0x140u);
                (void)tc_call(0x8024551cu, &a);
            }
            if ((u32)rd16(r26 + 0x38u) != 1u) {
                a.r[0] = r26;
                (void)tc_call(0x80245690u, &a);
            } else {
                r28 = r28 + 0x183u;
                if ((u32)rd16(r26 + 0xe2u) != 0u) {
                    r28 = r28 + 0x135u;
                }
                if ((u32)rd16(r26 + 0xeau) != 0u) {
                    r28 = r28 + 0x400u;
                }
                if ((u32)rd16(r26 + 0x6cu) == 1u) {
                    r28 = r28 + 0x1bu;
                }
                r3 = (u32)rd16(r26 + 0x30u);
                r4 = ((u32)rd16(r26 + 0xd0u) & 0xffffu) | (((u32)rd16(r26 + 0xceu) << 0x10u) & 0xffff0000u);
                if (r3 != 0u) {
                    r0 = 0x25du;
                    if (r3 == 1u) {
                        r0 = (((((r4 << 9u) & 0xfffffe00u) + 0x8000u) >> 0x10u) & 0xffffu) + 0x5bau;
                    }
                } else {
                    r0 = (((((r4 << 9u) & 0xfffffe00u) + 0x8000u) >> 0x10u) & 0xffffu) + 0x619u;
                }
                r4 = rd32(r26 + 0x34u);
                r28 = r28 + r0;
                r5 = (r4 >> 0x13u) & 0x7cu;
                r3 = (r4 << 2u) & 0x7cu;
                r6 = (r4 >> 0x18u) & 0x7cu;
                r4 = (r4 >> 0xeu) & 0x7cu;
                r5 = rd32(r5 - 0x7fc76b50u);
                r6 = rd32(r6 - 0x7fc76b50u);
                r4 = rd32(r4 - 0x7fc76b50u);
                r28 = r28 + r6 + (r4 + (r5 + rd32(r3 - 0x7fc76b50u)));
                if ((u32)rd16(r26 + 0xfeu) == 1u) {
                    r0 = (u32)rd16(r26 + 0x13cu);
                    r28 = r28 + 0x265u;
                    if (r0 != 1u) {
                        if (r0 == 2u) {
                            r28 = r28 + 0x342u;
                        }
                    } else {
                        r28 = r28 + 0x76u;
                    }
                    r3 = (u32)rd16(r26 + 0x100u);
                    r4 = rd32(((r3 >> 2u) & 0xcu) - 0x7fc76ad0u);
                    r9 = (r3 >> 0xcu) & 0xcu;
                    r0 = rd32(((r3 << 2u) & 0xcu) - 0x7fc76ad0u);
                    r8 = (r3 >> 0xau) & 0xcu;
                    r7 = (r3 >> 8u) & 0xcu;
                    r6 = (r3 >> 6u) & 0xcu;
                    r5 = (r3 >> 4u) & 0xcu;
                    r3 = r3 & 0xcu;
                    r7 = rd32(r7 - 0x7fc76ad0u);
                    r0 = r4 + r0;
                    r3 = rd32(r3 - 0x7fc76ad0u);
                    r9 = rd32(r9 - 0x7fc76ad0u);
                    r7 = r28 + r7;
                    r8 = rd32(r8 - 0x7fc76ad0u);
                    r0 = r3 + r0;
                    r6 = rd32(r6 - 0x7fc76ad0u);
                    r8 = r9 + r8;
                    r0 = r6 + rd32(r5 - 0x7fc76ad0u) + r0;
                    r28 = r8 + r7 + r0;
                }
                if (rd32(0x80571900u) <= r28) {
                    r25 = rd32(0x805718e8u) + (rd32(r26 + 0x18u) * 0x140u);
                    if ((u32)rd16(r25 + 0x10u) == 1u) {
                        a.r[0] = r25;
                        (void)tc_call(0x8024551cu, &a);
                    }
                    wr16(r26 + 0x38u, 0u);
                    wr16(r25 + 0x10u, 0u);
                    a.r[0] = r26;
                    (void)tc_call(0x80243424u, &a);
                } else {
                    a.r[0] = r26;
                    (void)tc_call(0x80245690u, &a);
                }
            }
            wr32(r26 + 0x1cu, 0u);
            wr32(r26 + 0x20u, 0u);
            r26 = rd32(r26);
        }
        r27 = r27 - 1u;
    } while (r27 != 0u);
    wr32(0x805718fcu, r28);
    a.r[0] = 0u;
    r3 = tc_call(0x802431e8u, &a);
    r25 = r3;
    while (r25 != 0u) {
        if (rd32(r25 + 0x20u) != 0u) {
            a.r[0] = rd32(0x805718e8u) + (rd32(r25 + 0x18u) * 0x140u);
            (void)tc_call(0x8024551cu, &a);
        }
        wr32(r25 + 0x20u, 0u);
        wr16(rd32(0x805718e8u) + (rd32(r25 + 0x18u) * 0x140u) + 0x10u, 0u);
        r25 = rd32(r25);
    }
    a.r[0] = rd32(0x805718e8u);
    a.r[1] = rd32(0x805718f4u) * 0x140u;
    (void)tc_call(0x80227738u, &a);
    a.r[0] = rd32(0x805718ecu);
    a.r[1] = (rd32(0x805718f4u) << 6u) & 0xffffffc0u;
    (void)tc_call(0x80227738u, &a);
    return;
}
