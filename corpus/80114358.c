#include "tc_rt.h"

static u32 px_rec(u32 sp_, u32 param_1)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r29 = 0, r31 = 0;
    wr32(sp_ - 0x20u, sp_);
    r1 = sp_ - 0x20u;
    wr32(r1 + 0x24u, 0x817ff000u);
    wr32(r1 + 0x1cu, 0u);
    wr32(r1 + 0x18u, 0u);
    wr32(r1 + 0x14u, 0u);
    r4 = rd32(param_1 + 0x40u);
    if (r4 == 0u) {
        r0 = 0xffffffffu;
    } else {
        r0 = rd32(param_1);
    }
    if (r0 != 4u) {
        r31 = rd32(param_1 + 0x4cu);
        if (r31 != 0u) {
            r3 = rd32(r31 + 0x40u);
            if (r3 == 0u) {
                r0 = 0xffffffffu;
            } else {
                r0 = rd32(r31);
            }
            do {
                if (r0 != 4u) {
                    r29 = rd32(r31 + 0x4cu);
                    if (r29 != 0u) {
                        r5 = rd32(r29 + 0x40u);
                        if (r5 == 0u) {
                            r0 = 0xffffffffu;
                        } else {
                            r0 = rd32(r29);
                        }
                        do {
                            if (r0 != 4u) {
                                r3 = rd32(r29 + 0x4cu);
                                if (r3 != 0u) {
                                    r3 = px_rec(r1, r3);
                                    if (r3 == 0xffffffffu) {
                                        if (rd32(r29 + 0x40u) == 0u) {
                                            r0 = 0xffffffffu;
                                        } else {
                                            r0 = rd32(r29);
                                        }
                                        c0lt = (s32)r0 < 2;
                                        if (r0 == 2u) {
                                            r3 = 0xffffffffu;
                                        } else {
                                            if (!c0lt) {
                                                if ((s32)r0 < 4) {
                                                    r3 = 0x19u;
                                                    break;
                                                }
                                            } else if ((s32)r0 >= 1) {
                                                r3 = 0x11u;
                                                break;
                                            }
                                            r3 = 0xffffffffu;
                                        }
                                    }
                                } else {
                                    if (r5 == 0u) {
                                        r0 = 0xffffffffu;
                                    } else {
                                        r0 = rd32(r29);
                                    }
                                    c0lt = (s32)r0 < 2;
                                    if (r0 == 2u) {
                                        r3 = 0xffffffffu;
                                    } else {
                                        if (!c0lt) {
                                            if ((s32)r0 < 4) {
                                                r3 = 0x19u;
                                                break;
                                            }
                                        } else if ((s32)r0 >= 1) {
                                            r3 = 0x11u;
                                            break;
                                        }
                                        r3 = 0xffffffffu;
                                    }
                                }
                            } else {
                                r6 = rd32(0x805707e8u);
                                r4 = 0u;
                                r3 = r5 - r6;
                                r5 = r29 + ((r6 << 2u) & 0xfffffffcu);
                                ctr = r3;
                                if ((s32)r3 > 0) {
                                    while ((rd32(r5) - 0x7fff0000u) == 0xffffu) {
                                        r4 = r4 + 1u;
                                        r5 = r5 + 4u;
                                        ctr = ctr - 1u;
                                        if (ctr == 0u) break;
                                    }
                                }
                                r3 = rd32(r29 + (((r4 + r6) << 2u) & 0xfffffffcu));
                                if (r3 != 0xffffffffu && ((s32)r3 < 3 || (s32)r3 >= 60)) {
                                    r3 = 3u;
                                }
                            }
                        } while (0);
                        if (r3 == 0xffffffffu) {
                            if (rd32(r31 + 0x40u) == 0u) {
                                r0 = 0xffffffffu;
                            } else {
                                r0 = rd32(r31);
                            }
                            c0lt = (s32)r0 < 2;
                            if (r0 == 2u) {
                                r3 = 0xffffffffu;
                            } else {
                                if (!c0lt) {
                                    if ((s32)r0 < 4) {
                                        r3 = 0x19u;
                                        break;
                                    }
                                } else if ((s32)r0 >= 1) {
                                    r3 = 0x11u;
                                    break;
                                }
                                r3 = 0xffffffffu;
                            }
                        }
                    } else {
                        if (r3 == 0u) {
                            r0 = 0xffffffffu;
                        } else {
                            r0 = rd32(r31);
                        }
                        c0lt = (s32)r0 < 2;
                        if (r0 == 2u) {
                            r3 = 0xffffffffu;
                        } else {
                            if (!c0lt) {
                                if ((s32)r0 < 4) {
                                    r3 = 0x19u;
                                    break;
                                }
                            } else if ((s32)r0 >= 1) {
                                r3 = 0x11u;
                                break;
                            }
                            r3 = 0xffffffffu;
                        }
                    }
                } else {
                    r6 = rd32(0x805707e8u);
                    r4 = 0u;
                    r3 = r3 - r6;
                    r5 = r31 + ((r6 << 2u) & 0xfffffffcu);
                    ctr = r3;
                    if ((s32)r3 > 0) {
                        while ((rd32(r5) - 0x7fff0000u) == 0xffffu) {
                            r4 = r4 + 1u;
                            r5 = r5 + 4u;
                            ctr = ctr - 1u;
                            if (ctr == 0u) break;
                        }
                    }
                    r3 = rd32(r31 + (((r4 + r6) << 2u) & 0xfffffffcu));
                    if (r3 != 0xffffffffu && ((s32)r3 < 3 || (s32)r3 >= 60)) {
                        r3 = 3u;
                    }
                }
            } while (0);
            if (r3 == 0xffffffffu) {
                if (rd32(param_1 + 0x40u) == 0u) {
                    r0 = 0xffffffffu;
                } else {
                    r0 = rd32(param_1);
                }
                c0lt = (s32)r0 < 2;
                if (r0 == 2u) {
                    r3 = 0xffffffffu;
                } else {
                    if (!c0lt) {
                        if ((s32)r0 < 4) {
                            r3 = 0x19u;
                            return r3;
                        }
                    } else if ((s32)r0 >= 1) {
                        r3 = 0x11u;
                        return r3;
                    }
                    r3 = 0xffffffffu;
                }
            }
        } else {
            if (r4 == 0u) {
                r0 = 0xffffffffu;
            } else {
                r0 = rd32(param_1);
            }
            c0lt = (s32)r0 < 2;
            if (r0 == 2u) {
                r3 = 0xffffffffu;
            } else {
                if (!c0lt) {
                    if ((s32)r0 < 4) {
                        r3 = 0x19u;
                        return r3;
                    }
                } else if ((s32)r0 >= 1) {
                    r3 = 0x11u;
                    return r3;
                }
                r3 = 0xffffffffu;
            }
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
        r3 = rd32(param_1 + (((r5 + r7) << 2u) & 0xfffffffcu));
        if (r3 != 0xffffffffu && ((s32)r3 < 3 || (s32)r3 >= 60)) {
            r3 = 3u;
        }
    }
    return r3;
}

s32 fn_80114358(u32 param_1)
{
    return (s32)px_rec(0x817fe000u, param_1);
}
