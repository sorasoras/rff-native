#include "tc_rt.h"

void fn_80211c9c(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    if (rd32(0x804dfa68u) != 0u && rd32(0x80571128u) == 0u) {
        r31 = 1u;
        r0 = rd32(rd32(0x805711ccu) + 0x104u);
        if (r0 == 0xffffffffu || r0 == 0xfffffffdu) {
            r31 = 0u;
        }
        if (rd32(0x804dfa80u) != 0u) {
            if (r31 != 0u) {
                r3 = rd32(0x804dfa7cu) - 1u;
                r0 = r3 & ~(u32)((s32)r3 >> 31);
                wr32(0x804dfa7cu, r0);
                if ((s32)r0 <= 0) {
                    r0 = rd32(0x804dfa6cu);
                    wr32(0x804dfa80u, 0u);
                    r0 = r0 & 0xfffffffeu;
                    wr32(0x804dfa7cu, 0x13u);
                    wr32(0x804dfa6cu, r0);
                    if (r0 != 0u) {
                        r0 = r0 & 2u;
                        if (r0 != 0u) {
                            if (rd32(0x803541b8u) == 0xffu) {
                                wr32(0x804dfa7cu, 0x26u);
                            } else {
                                wr32(0x804dfa84u, 0u);
                            }
                        }
                    } else {
                        a.r[0] = 0x804b9e14u;
                        (void)tc_call(0x8011eafcu, &a);
                        a.r[0] = 0u;
                        a.r[1] = 0xfu;
                        (void)tc_call(0x8004f3bcu, &a);
                        (void)tc_call(0x800a8474u, &a);
                    }
                }
            }
        } else if (r31 != 0u || (rd32(0x804dfa74u) & 2u) == 0u) {
            wr32(0x804dfa7cu, 0x13u);
        } else {
            r3 = rd32(0x804dfa7cu) - 1u;
            r0 = r3 & ~(u32)((s32)r3 >> 31);
            wr32(0x804dfa7cu, r0);
            if ((s32)r0 <= 0) {
                r0 = rd32(0x804dfa6cu);
                wr32(0x804dfa80u, 1u);
                wr32(0x804dfa7cu, 0x13u);
                if (r0 == 0u) {
                    wr32(0x804dfa78u, 0u);
                    a.r[0] = 0x804b9e14u;
                    (void)tc_call(0x8011eadcu, &a);
                    a.r[0] = 1u;
                    a.r[1] = 0xfu;
                    (void)tc_call(0x8004f3bcu, &a);
                    (void)tc_call(0x800a85e4u, &a);
                }
                wr32(0x804dfa6cu, rd32(0x804dfa6cu) | 1u);
            }
        }
        if (rd32(0x804dfa88u) != 0u) {
            if (r31 != 0u && rd32(0x803541b8u) != 0xffu) {
                r3 = rd32(0x804dfa84u) - 1u;
                r0 = r3 & ~(u32)((s32)r3 >> 31);
                wr32(0x804dfa84u, r0);
                if ((s32)r0 <= 0) {
                    r3 = rd32(0x804dfa6cu);
                    wr32(0x804dfa88u, 0u);
                    r3 = r3 & 0xfffffffdu;
                    wr32(0x804dfa84u, 0xfu);
                    wr32(0x804dfa6cu, r3);
                    if (r3 == 0u) {
                        wr32(0x804dfa78u, 0u);
                        a.r[0] = 0x804b9e14u;
                        (void)tc_call(0x8011eafcu, &a);
                        a.r[0] = 0u;
                        a.r[1] = 0xfu;
                        (void)tc_call(0x8004f3bcu, &a);
                        (void)tc_call(0x800a8474u, &a);
                    }
                }
            }
        } else {
            r4 = 1u;
            if (r31 != 0u) {
                if (rd32(0x803541b8u) != 0xffu || (rd32(0x804dfa74u) & 4u) == 0u) {
                    wr32(0x804dfa84u, 0xfu);
                } else {
                    r3 = rd32(0x804dfa84u) - 1u;
                    r0 = r3 & ~(u32)((s32)r3 >> 31);
                    wr32(0x804dfa84u, r0);
                    if ((s32)r0 <= 0) {
                        r4 = 0u;
                    }
                }
            } else if (rd32(0x803541b8u) != 0xffu || (rd32(0x804dfa74u) & 4u) == 0u) {
                wr32(0x804dfa84u, 0xfu);
            } else {
                r3 = rd32(0x804dfa84u) - 1u;
                r0 = r3 & ~(u32)((s32)r3 >> 31);
                wr32(0x804dfa84u, r0);
                if ((s32)r0 <= 0) {
                    r4 = 0u;
                }
            }
            if (r4 == 0u) {
                r0 = rd32(0x804dfa6cu);
                wr32(0x804dfa88u, 1u);
                wr32(0x804dfa84u, 0xfu);
                if (r0 == 0u) {
                    wr32(0x804dfa78u, 0u);
                    a.r[0] = 0x804b9e14u;
                    (void)tc_call(0x8011eadcu, &a);
                    a.r[0] = 1u;
                    a.r[1] = 0xfu;
                    (void)tc_call(0x8004f3bcu, &a);
                    (void)tc_call(0x800a85e4u, &a);
                }
                wr32(0x804dfa6cu, rd32(0x804dfa6cu) | 2u);
            }
        }
        if (rd32(0x804dfa6cu) != 0u) {
            a.r[0] = 0x804b9e14u;
            (void)tc_call(0x8011eadcu, &a);
            a.r[0] = 1u;
            a.r[1] = 0xfu;
            (void)tc_call(0x8004f3bcu, &a);
        }
    }
    return;
}
