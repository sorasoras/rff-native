#include "tc_rt.h"

void fn_80294470(u32 param_r3)
{
    u32 r3 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 0u;
    r29 = 0x8053d98cu;
    for (;;) {
        if ((u32)rd8(r29 + 0x119u) != 0u) {
            a.r[0] = r29 + 8u;
            a.r[1] = param_r3;
            a.r[2] = 6u;
            r3 = tc_call(0x802592d8u, &a);
            if (r3 == 0u) break;
        }
        r30 = r30 + 1u;
        r29 = r29 + 0x11cu;
        if (r30 >= 4u) {
            r29 = 0u;
            break;
        }
    }
    r28 = 0u;
    r31 = 0u;
    if (r29 == 0u) {
        a.r[0] = 0x8053df88u;
        a.r[1] = param_r3;
        a.r[2] = 6u;
        r3 = tc_call(0x802592d8u, &a);
        if (r3 == 0u) {
            r28 = (u32)rd16(0x8053dfacu);
        }
    } else {
        r28 = (u32)rd16(r29 + 2u);
    }
    if (r28 != 0u) {
        if ((r28 & 0x2000u) != 0u) {
            if ((r28 & 0x1000u) != 0u) {
                if ((r28 & 0x200u) != 0u) {
                    if ((r28 & 0x8000u) == 0u) {
                        if ((r28 & 0x100u) != 0u) {
                            if ((r28 & 0x4000u) == 0u) {
                                if ((r28 & 0x800u) == 0u) {
                                    if ((r28 & 0x400u) == 0u) {
                                        if ((r28 & 4u) != 0u) {
                                            if ((r28 & 2u) != 0u) {
                                                if ((r28 & 0x10u) == 0u) {
                                                    if ((r28 & 8u) != 0u) {
                                                        r31 = 0x11u;
                                                    }
                                                } else {
                                                    r31 = 0x1bu;
                                                }
                                            } else {
                                                r31 = 0x36u;
                                            }
                                        } else {
                                            r31 = 0x53u;
                                        }
                                    } else {
                                        r31 = 0x79u;
                                    }
                                } else {
                                    r31 = 0xb7u;
                                }
                            } else {
                                r31 = 0xe0u;
                            }
                        } else {
                            r31 = 0x16fu;
                        }
                    } else {
                        r31 = 0x153u;
                    }
                } else {
                    r31 = 0x228u;
                }
            } else {
                r31 = 0x2a7u;
            }
        } else {
            r31 = 0x3fdu;
        }
    }
    (void)(r31 != 0x3fdu || (u32)rd16(0x8053d4acu) != 0x3f9u);
    return;
}
