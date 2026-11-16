#include "tc_rt.h"

void fn_80193cfc(s32 param_1)
{
    u32 fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32((u32)param_1 + 0x1a4u);
    r30 = rd32((u32)param_1 + 0x1a8u);
    a.r[0] = (u32)rd16(rd32((u32)param_1 + 0x1a0u) + 0xbcu);
    r3 = tc_call(0x800cd704u, &a);
    r0 = r3 & 0xffu;
    r6 = rd32(0x803541ccu);
    do {
        if ((r6 & 8u) == 0u) {
            r7 = rd32(0x803541c8u);
            if ((r7 & 2u) == 0u) {
                r5 = rd32(0x803541bcu);
                if (r5 != 0u) {
                    r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r3 != 1u) {
                        if (r3 != 2u) {
                            r4 = 0u;
                        } else {
                            r4 = rd32(0x8035416cu);
                        }
                    } else {
                        r4 = rd32(0x80354138u);
                    }
                } else {
                    r4 = 0u;
                }
                if (r5 != 0u) {
                    r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r3 != 1u) {
                        if (r3 != 2u) {
                            r3 = 0u;
                        } else {
                            r3 = r4 & rd32(rd32(0x803541b4u));
                        }
                    } else {
                        r3 = r4 & rd32(rd32(0x803541a4u));
                    }
                } else {
                    r3 = 0u;
                }
                if (r3 != 0u) break;
            }
            if ((r6 & 2u) == 0u) {
                if ((r7 & 8u) != 0u) {
                    fl_ = 1u;
                    break;
                }
                r5 = rd32(0x803541bcu);
                if (r5 != 0u) {
                    r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r3 != 1u) {
                        if (r3 != 2u) {
                            r4 = 0u;
                        } else {
                            r4 = rd32(0x80354170u);
                        }
                    } else {
                        r4 = rd32(0x8035413cu);
                    }
                } else {
                    r4 = 0u;
                }
                if (r5 != 0u) {
                    r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r3 != 1u) {
                        if (r3 != 2u) {
                            r3 = 0u;
                        } else {
                            r3 = r4 & rd32(rd32(0x803541b4u));
                        }
                    } else {
                        r3 = r4 & rd32(rd32(0x803541a4u));
                    }
                } else {
                    r3 = 0u;
                }
                if (r3 == 0u) {
                    fl_ = 1u;
                    break;
                }
            }
            if (rd32((u32)param_1 + 0x1a4u) == 1u) {
                wr32((u32)param_1 + 0x1a8u, 1u);
            }
            wr32((u32)param_1 + 0x1a4u, 1u);
            fl_ = 1u;
            break;
        }
    } while (0);
    if (fl_ == 1u) {
        fl_ = 0u;
    } else {
        if (rd32((u32)param_1 + 0x1a4u) == 0xau) {
            wr32((u32)param_1 + 0x1a8u, r0);
        }
        wr32((u32)param_1 + 0x1a4u, 0xau);
    }
    r7 = rd32(0x803541ccu);
    do {
        if ((r7 & 1u) == 0u) {
            r8 = rd32(0x803541c8u);
            if ((r8 & 4u) == 0u) {
                r6 = rd32(0x803541bcu);
                if (r6 != 0u) {
                    r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r3 != 1u) {
                        if (r3 != 2u) {
                            r4 = 0u;
                        } else {
                            r4 = rd32(0x80354164u);
                        }
                    } else {
                        r4 = rd32(0x80354130u);
                    }
                } else {
                    r4 = 0u;
                }
                if (r6 != 0u) {
                    r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r3 != 1u) {
                        if (r3 != 2u) {
                            r3 = 0u;
                        } else {
                            r3 = r4 & rd32(rd32(0x803541b4u));
                        }
                    } else {
                        r3 = r4 & rd32(rd32(0x803541a4u));
                    }
                } else {
                    r3 = 0u;
                }
                if (r3 != 0u) break;
            }
            if ((r7 & 4u) == 0u) {
                if ((r8 & 1u) != 0u) {
                    fl_ = 2u;
                    break;
                }
                r5 = rd32(0x803541bcu);
                if (r5 != 0u) {
                    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r0 != 1u) {
                        if (r0 != 2u) {
                            r4 = 0u;
                        } else {
                            r4 = rd32(0x80354168u);
                        }
                    } else {
                        r4 = rd32(0x80354134u);
                    }
                } else {
                    r4 = 0u;
                }
                if (r5 != 0u) {
                    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r0 != 1u) {
                        if (r0 != 2u) {
                            r0 = 0u;
                        } else {
                            r0 = r4 & rd32(rd32(0x803541b4u));
                        }
                    } else {
                        r0 = r4 & rd32(rd32(0x803541a4u));
                    }
                } else {
                    r0 = 0u;
                }
                if (r0 == 0u) {
                    fl_ = 2u;
                    break;
                }
            }
            r3 = rd32((u32)param_1 + 0x1a8u);
            if ((s32)r3 <= 1) {
                fl_ = 2u;
                break;
            }
            r0 = r3 - rd32((u32)param_1 + 0x1a4u);
            wr32((u32)param_1 + 0x1a8u, r0);
            if ((s32)r0 >= 1) {
                fl_ = 2u;
                break;
            }
            wr32((u32)param_1 + 0x1a8u, 1u);
            fl_ = 2u;
            break;
        }
    } while (0);
    if (fl_ == 2u) {
        fl_ = 0u;
    } else {
        r4 = rd32((u32)param_1 + 0x1a8u);
        if ((s32)r0 > (s32)r4) {
            r3 = r4 + rd32((u32)param_1 + 0x1a4u);
            wr32((u32)param_1 + 0x1a8u, r3);
            if ((s32)r3 > (s32)r0) {
                wr32((u32)param_1 + 0x1a8u, r0);
            }
        }
    }
    if (r31 != rd32((u32)param_1 + 0x1a4u) || r30 != rd32((u32)param_1 + 0x1a8u)) {
        a.r[0] = 0x804b9da0u;
        a.r[1] = 1u;
        (void)tc_call(0x8010a75cu, &a);
    }
    return;
}
