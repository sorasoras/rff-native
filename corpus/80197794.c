#include "tc_rt.h"

void fn_80197794(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r16 = 0, r17 = 0, r18 = 0, r19 = 0;
    u32 r20 = 0, r21 = 0, r24 = 0, r25 = 0, r28 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fde40u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfc0u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r21 = rd32((u32)param_1 + 0xcu);
    a.r[0] = (r21 * 0xdcu) + 0x10u;
    r3 = tc_call(0x80197f9cu, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0x8019800cu;
        a.r[2] = 0x80198074u;
        a.r[3] = 0xdcu;
        a.r[4] = r21;
        r3 = tc_call(0x80255464u, &a);
        r31 = r3;
    }
    a.r[0] = 0x817fde8cu;
    a.r[1] = 0x80197c7cu;
    a.r[2] = 0x80197c9cu;
    a.r[3] = 0xcu;
    a.r[4] = 0x19u;
    (void)tc_call(0x80255624u, &a);
    wr32(0x817fde5cu, 0u);
    r17 = 0u;
    r19 = 0u;
    wr32(0x817fde60u, 0x817fde60u);
    wr32(0x817fde64u, 0x817fde60u);
    while ((s32)r17 < (s32)(rd32((u32)param_1 + 0xcu) - 1u)) {
        if ((u32)rd16(rd32(rd32((u32)param_1 + 0x2cu) + r19) + 0xbcu) != 0x2e8u) {
            r18 = r17 + 1u;
            r20 = (r18 << 2u) & 0xfffffffcu;
            while ((s32)r18 < (s32)rd32((u32)param_1 + 0xcu)) {
                r4 = rd32((u32)param_1 + 0x2cu);
                r3 = rd32(r19 + r4);
                r4 = rd32(r4 + r20);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0xffffffffu;
                (void)tc_call(0x801621e4u, &a);
                r20 = r20 + 4u;
                r18 = r18 + 1u;
            }
        }
        r19 = r19 + 4u;
        r17 = r17 + 1u;
    }
    r19 = r31;
    r30 = 0u;
    r20 = 0u;
    while ((s32)r30 < (s32)rd32((u32)param_1 + 0xcu)) {
        r4 = rd32(rd32((u32)param_1 + 0x2cu) + r20);
        r16 = (u32)rd16(r4 + 0xbcu);
        a.r[0] = r19;
        a.r[1] = r4;
        f1 = tc_callf(0x801980ccu, &a);
        if (r16 != 0x2e8u) {
            a.r[0] = r19;
            r3 = tc_call(0x801980dcu, &a);
            r24 = r3;
            a.r[0] = r19;
            r3 = tc_call(0x80198110u, &a);
            r25 = r3;
            a.r[0] = r16;
            r3 = tc_call(0x800cd6e4u, &a);
            f1 = tc_lastf();
            r18 = ((r3 & 0xffu) * 0xcu) - 0x7e802174u;
            r28 = rd32(r18 + 4u);
            r17 = r18 + 4u;
            while (r28 != r17) {
                if (r28 == 0u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x80370b08u;
                    a.r[1] = 0x23du;
                    a.r[2] = 0x80370ae4u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x802e41c0u, &a);
                }
                a.r[0] = r28 - 0xd4u;
                r3 = tc_call(0x801980dcu, &a);
                f1 = tc_lastf();
                if ((s32)r3 > (s32)r24) {
                    if (r19 == 0u) {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = 0x80370ad8u;
                        a.r[1] = 0x233u;
                        a.r[2] = 0x80370ab4u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        (void)tc_call(0x802e41c0u, &a);
                    }
                    wr32(0x817fde54u, r28);
                    a.r[0] = r18;
                    a.r[1] = 0x817fde54u;
                    a.r[2] = r19 + 0xd4u;
                    f1 = tc_callf(0x802deba4u, &a);
                    break;
                }
                if (r28 == 0u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x80370b08u;
                    a.r[1] = 0x23du;
                    a.r[2] = 0x80370ae4u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x802e41c0u, &a);
                }
                a.r[0] = r28 - 0xd4u;
                r3 = tc_call(0x801980dcu, &a);
                f1 = tc_lastf();
                if (r24 == r3) {
                    if (r28 == 0u) {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = 0x80370b08u;
                        a.r[1] = 0x23du;
                        a.r[2] = 0x80370ae4u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        (void)tc_call(0x802e41c0u, &a);
                    }
                    a.r[0] = r28 - 0xd4u;
                    r3 = tc_call(0x80198108u, &a);
                    f1 = tc_lastf();
                    if ((s32)r3 > (s32)r16) {
                        if (r19 == 0u) {
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            a.f[4] = 0.0;
                            a.f[5] = 0.0;
                            a.f[6] = 0.0;
                            a.f[7] = 0.0;
                            a.r[0] = 0x80370ad8u;
                            a.r[1] = 0x233u;
                            a.r[2] = 0x80370ab4u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            a.r[7] = 0u;
                            (void)tc_call(0x802e41c0u, &a);
                        }
                        wr32(0x817fde50u, r28);
                        a.r[0] = r18;
                        a.r[1] = 0x817fde50u;
                        a.r[2] = r19 + 0xd4u;
                        f1 = tc_callf(0x802deba4u, &a);
                        break;
                    }
                    if (r28 == 0u) {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = 0x80370b08u;
                        a.r[1] = 0x23du;
                        a.r[2] = 0x80370ae4u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        (void)tc_call(0x802e41c0u, &a);
                    }
                    a.r[0] = r28 - 0xd4u;
                    r3 = tc_call(0x80198108u, &a);
                    f1 = tc_lastf();
                    if (r16 == r3) {
                        if (r28 == 0u) {
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            a.f[4] = 0.0;
                            a.f[5] = 0.0;
                            a.f[6] = 0.0;
                            a.f[7] = 0.0;
                            a.r[0] = 0x80370b08u;
                            a.r[1] = 0x23du;
                            a.r[2] = 0x80370ae4u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            a.r[7] = 0u;
                            (void)tc_call(0x802e41c0u, &a);
                        }
                        a.r[0] = r28 - 0xd4u;
                        r3 = tc_call(0x80198110u, &a);
                        f1 = tc_lastf();
                        if ((s32)r3 >= (s32)r25) {
                            if (r19 == 0u) {
                                a.f[0] = f1;
                                a.f[1] = 0.0;
                                a.f[2] = 0.0;
                                a.f[3] = 0.0;
                                a.f[4] = 0.0;
                                a.f[5] = 0.0;
                                a.f[6] = 0.0;
                                a.f[7] = 0.0;
                                a.r[0] = 0x80370ad8u;
                                a.r[1] = 0x233u;
                                a.r[2] = 0x80370ab4u;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.r[6] = 0u;
                                a.r[7] = 0u;
                                (void)tc_call(0x802e41c0u, &a);
                            }
                            wr32(0x817fde4cu, r28);
                            a.r[0] = r18;
                            a.r[1] = 0x817fde4cu;
                            a.r[2] = r19 + 0xd4u;
                            f1 = tc_callf(0x802deba4u, &a);
                            break;
                        }
                    }
                }
                r28 = rd32(r28);
            }
            if (r28 == r17) {
                if (r19 == 0u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x80370ad8u;
                    a.r[1] = 0x233u;
                    a.r[2] = 0x80370ab4u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x802e41c0u, &a);
                }
                wr32(0x817fde48u, r17);
                a.r[0] = r18;
                a.r[1] = 0x817fde48u;
                a.r[2] = r19 + 0xd4u;
                (void)tc_call(0x802deba4u, &a);
            }
        } else {
            if (r19 == 0u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x80370ad8u;
                a.r[1] = 0x233u;
                a.r[2] = 0x80370ab4u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x802e41c0u, &a);
            }
            wr32(0x817fde58u, 0x817fde60u);
            a.r[0] = 0x817fde5cu;
            a.r[1] = 0x817fde58u;
            a.r[2] = r19 + 0xd4u;
            (void)tc_call(0x802deba4u, &a);
        }
        r20 = r20 + 4u;
        r19 = r19 + 0xdcu;
        r30 = r30 + 1u;
    }
    r21 = 0x817fde8cu;
    r16 = 0u;
    do {
        a.r[0] = r21;
        (void)tc_call(0x802deb3cu, &a);
        r16 = r16 + 1u;
        r21 = r21 + 0xcu;
    } while ((s32)r16 < 25);
    r10 = rd32(0x8033adbcu);
    r9 = rd32(0x8033adc0u);
    r30 = 0u;
    r8 = rd32(0x8033adc4u);
    r7 = rd32(0x8033adc8u);
    r6 = rd32(0x8033adccu);
    r4 = rd32(0x8033add0u);
    r3 = rd32(0x8033add4u);
    r0 = rd32(0x8033add8u);
    wr32(0x817fde68u, rd32(0x8033adb8u));
    wr32(0x817fde6cu, r10);
    wr32(0x817fde70u, r9);
    wr32(0x817fde74u, r8);
    wr32(0x817fde78u, r7);
    wr32(0x817fde7cu, r6);
    wr32(0x817fde80u, r4);
    wr32(0x817fde84u, r3);
    wr32(0x817fde88u, r0);
    do {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x802558bcu, &a);
        r30 = r30 + 1u;
    } while ((s32)r30 < 3);
    r21 = 0x817fde8cu;
    r4 = rd32((u32)param_1 + 0x30u) + 4u;
    r16 = 0u;
    r3 = ppc_mulhw(1431655766, (s32)r4);
    wr32((u32)param_1 + 0x30u, r4 - ((r3 + ((r3 >> 0x1fu) & 1u)) * 3u));
    do {
        a.r[0] = r21;
        (void)tc_call(0x802deaf8u, &a);
        r16 = r16 + 1u;
        r21 = r21 + 0xcu;
    } while ((s32)r16 < 25);
    a.r[0] = 0x817fde5cu;
    (void)tc_call(0x802deaf8u, &a);
    a.r[0] = r31;
    a.r[1] = 0x80198074u;
    a.r[2] = 0x80197fd4u;
    a.r[3] = 0u;
    (void)tc_call(0x80255794u, &a);
    a.r[0] = 0x817fde5cu;
    a.r[1] = 0u;
    (void)tc_call(0x802dea2cu, &a);
    a.r[0] = 0x817fde8cu;
    a.r[1] = 0x80197c9cu;
    a.r[2] = 0xcu;
    a.r[3] = 0x19u;
    (void)tc_call(0x8025571cu, &a);
    return;
}
