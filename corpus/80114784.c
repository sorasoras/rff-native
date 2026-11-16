#include "tc_rt.h"

static u32 px_rec(u32 sp_, u32 param_1)
{
    u32 ctr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(sp_ - 0x10u, sp_);
    r1 = sp_ - 0x10u;
    wr32(r1 + 0x14u, 0x817ff000u);
    wr32(r1 + 0xcu, 0u);
    r4 = rd32(param_1 + 0x40u);
    if (r4 == 0u) {
        r0 = 0xffffffffu;
    } else {
        r0 = rd32(param_1);
    }
    if (r0 != 4u) {
        r6 = rd32(param_1 + 0x4cu);
        if (r6 != 0u) {
            r3 = rd32(r6 + 0x40u);
            if (r3 == 0u) {
                r0 = 0xffffffffu;
            } else {
                r0 = rd32(r6);
            }
            if (r0 == 4u) {
                if (r3 == 0u) {
                    r0 = 0xffffffffu;
                } else {
                    r0 = rd32(r6);
                }
                if (r0 != 4u) {
                    r6 = rd32(r6 + 0x4cu);
                    if (r6 != 0u) {
                        r3 = rd32(r6 + 0x40u);
                        if (r3 == 0u) {
                            r0 = 0xffffffffu;
                        } else {
                            r0 = rd32(r6);
                        }
                        if (r0 == 4u) {
                            if (r3 == 0u) {
                                r0 = 0xffffffffu;
                            } else {
                                r0 = rd32(r6);
                            }
                            if (r0 != 4u) {
                                r31 = rd32(r6 + 0x4cu);
                                if (r31 != 0u) {
                                    r5 = rd32(r31 + 0x40u);
                                    if (r5 == 0u) {
                                        r0 = 0xffffffffu;
                                    } else {
                                        r0 = rd32(r31);
                                    }
                                    if (r0 == 4u) {
                                        if (r5 == 0u) {
                                            r0 = 0xffffffffu;
                                        } else {
                                            r0 = rd32(r31);
                                        }
                                        if (r0 != 4u) {
                                            r31 = rd32(r31 + 0x4cu);
                                            if (r31 != 0u) {
                                                a.r[0] = r31;
                                                r3 = tc_call(0x80112d30u, &a);
                                                if (r3 != 0u) {
                                                    r3 = px_rec(r1, r31);
                                                } else {
                                                    r3 = 0u;
                                                }
                                            } else {
                                                r3 = 0u;
                                            }
                                        } else {
                                            a.r[0] = r31;
                                            a.r[1] = r31;
                                            a.r[2] = r5;
                                            r3 = tc_call(0x8011157cu, &a);
                                            r3 = rd32(r31 + (((r3 + 1u) << 2u) & 0xfffffffcu));
                                        }
                                    } else {
                                        r3 = 0u;
                                    }
                                } else {
                                    r3 = 0u;
                                }
                            } else {
                                r7 = rd32(0x805707e8u);
                                r4 = 0u;
                                r3 = r3 - r7;
                                r5 = r6 + ((r7 << 2u) & 0xfffffffcu);
                                ctr = r3;
                                if ((s32)r3 > 0) {
                                    while ((rd32(r5) - 0x7fff0000u) == 0xffffu) {
                                        r4 = r4 + 1u;
                                        r5 = r5 + 4u;
                                        ctr = ctr - 1u;
                                        if (ctr == 0u) break;
                                    }
                                }
                                r3 = rd32(r6 + (((r4 + r7 + 1u) << 2u) & 0xfffffffcu));
                            }
                        } else {
                            r3 = 0u;
                        }
                    } else {
                        r3 = 0u;
                    }
                } else {
                    r7 = rd32(0x805707e8u);
                    r4 = 0u;
                    r3 = r3 - r7;
                    r5 = r6 + ((r7 << 2u) & 0xfffffffcu);
                    ctr = r3;
                    if ((s32)r3 > 0) {
                        while ((rd32(r5) - 0x7fff0000u) == 0xffffu) {
                            r4 = r4 + 1u;
                            r5 = r5 + 4u;
                            ctr = ctr - 1u;
                            if (ctr == 0u) break;
                        }
                    }
                    r3 = rd32(r6 + (((r4 + r7 + 1u) << 2u) & 0xfffffffcu));
                }
            } else {
                r3 = 0u;
            }
        } else {
            r3 = 0u;
        }
    } else {
        r7 = rd32(0x805707e8u);
        r5 = 0u;
        r4 = r4 - r7;
        r6 = param_1 + ((r7 << 2u) & 0xfffffffcu);
        ctr = r4;
        if ((s32)r4 > 0) {
            while ((rd32(r6) - 0x7fff0000u) == 0xffffu) {
                r5 = r5 + 1u;
                r6 = r6 + 4u;
                ctr = ctr - 1u;
                if (ctr == 0u) break;
            }
        }
        r3 = rd32(param_1 + (((r5 + r7 + 1u) << 2u) & 0xfffffffcu));
    }
    return r3;
}

s32 fn_80114784(u32 param_1)
{
    return (s32)px_rec(0x817fe000u, param_1);
}
