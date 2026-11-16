#include "tc_rt.h"

void fn_80188ce0(s32 param_1)
{
    u32 fl_ = 0, r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    TcArgs a = {0};
    r4 = rd32((u32)param_1 + 0x3d8u);
    r5 = rd32((u32)param_1 + 0x3dcu);
    r9 = rd32(0x803541ccu);
    r0 = (u32)rd8((u32)param_1 + 0xfeu);
    do {
        if ((r9 & 8u) == 0u) {
            r10 = rd32(0x803541c8u);
            if ((r10 & 2u) == 0u) {
                r8 = rd32(0x803541bcu);
                if (r8 != 0u) {
                    r6 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r6 != 1u) {
                        if (r6 != 2u) {
                            r7 = 0u;
                        } else {
                            r7 = rd32(0x8035416cu);
                        }
                    } else {
                        r7 = rd32(0x80354138u);
                    }
                } else {
                    r7 = 0u;
                }
                if (r8 != 0u) {
                    r6 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r6 != 1u) {
                        if (r6 != 2u) {
                            r6 = 0u;
                        } else {
                            r6 = r7 & rd32(rd32(0x803541b4u));
                        }
                    } else {
                        r6 = r7 & rd32(rd32(0x803541a4u));
                    }
                } else {
                    r6 = 0u;
                }
                if (r6 != 0u) break;
            }
            if ((r9 & 2u) == 0u) {
                if ((r10 & 8u) != 0u) {
                    fl_ = 1u;
                    break;
                }
                r8 = rd32(0x803541bcu);
                if (r8 != 0u) {
                    r6 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r6 != 1u) {
                        if (r6 != 2u) {
                            r7 = 0u;
                        } else {
                            r7 = rd32(0x80354170u);
                        }
                    } else {
                        r7 = rd32(0x8035413cu);
                    }
                } else {
                    r7 = 0u;
                }
                if (r8 != 0u) {
                    r6 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r6 != 1u) {
                        if (r6 != 2u) {
                            r6 = 0u;
                        } else {
                            r6 = r7 & rd32(rd32(0x803541b4u));
                        }
                    } else {
                        r6 = r7 & rd32(rd32(0x803541a4u));
                    }
                } else {
                    r6 = 0u;
                }
                if (r6 == 0u) {
                    fl_ = 1u;
                    break;
                }
            }
            if (r4 == 1u) {
                wr32((u32)param_1 + 0x3dcu, 1u);
            }
            wr32((u32)param_1 + 0x3d8u, 1u);
            fl_ = 1u;
            break;
        }
    } while (0);
    if (fl_ == 1u) {
        fl_ = 0u;
    } else {
        if (r4 == 0xau) {
            wr32((u32)param_1 + 0x3dcu, r0);
        }
        wr32((u32)param_1 + 0x3d8u, 0xau);
    }
    r10 = rd32(0x803541ccu);
    do {
        if ((r10 & 1u) == 0u) {
            r11 = rd32(0x803541c8u);
            if ((r11 & 4u) == 0u) {
                r9 = rd32(0x803541bcu);
                if (r9 != 0u) {
                    r6 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r6 != 1u) {
                        if (r6 != 2u) {
                            r7 = 0u;
                        } else {
                            r7 = rd32(0x80354164u);
                        }
                    } else {
                        r7 = rd32(0x80354130u);
                    }
                } else {
                    r7 = 0u;
                }
                if (r9 != 0u) {
                    r6 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r6 != 1u) {
                        if (r6 != 2u) {
                            r6 = 0u;
                        } else {
                            r6 = r7 & rd32(rd32(0x803541b4u));
                        }
                    } else {
                        r6 = r7 & rd32(rd32(0x803541a4u));
                    }
                } else {
                    r6 = 0u;
                }
                if (r6 != 0u) break;
            }
            if ((r10 & 4u) == 0u) {
                if ((r11 & 1u) != 0u) {
                    fl_ = 2u;
                    break;
                }
                r8 = rd32(0x803541bcu);
                if (r8 != 0u) {
                    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r0 != 1u) {
                        if (r0 != 2u) {
                            r7 = 0u;
                        } else {
                            r7 = rd32(0x80354168u);
                        }
                    } else {
                        r7 = rd32(0x80354134u);
                    }
                } else {
                    r7 = 0u;
                }
                if (r8 != 0u) {
                    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r0 != 1u) {
                        if (r0 != 2u) {
                            r0 = 0u;
                        } else {
                            r0 = r7 & rd32(rd32(0x803541b4u));
                        }
                    } else {
                        r0 = r7 & rd32(rd32(0x803541a4u));
                    }
                } else {
                    r0 = 0u;
                }
                if (r0 == 0u) {
                    fl_ = 2u;
                    break;
                }
            }
            r6 = rd32((u32)param_1 + 0x3dcu);
            if ((s32)r6 <= 1) {
                fl_ = 2u;
                break;
            }
            r0 = r6 - rd32((u32)param_1 + 0x3d8u);
            wr32((u32)param_1 + 0x3dcu, r0);
            if ((s32)r0 >= 1) {
                fl_ = 2u;
                break;
            }
            wr32((u32)param_1 + 0x3dcu, 1u);
            fl_ = 2u;
            break;
        }
    } while (0);
    if (fl_ == 2u) {
        fl_ = 0u;
    } else {
        r7 = rd32((u32)param_1 + 0x3dcu);
        if ((s32)r0 > (s32)r7) {
            r6 = r7 + rd32((u32)param_1 + 0x3d8u);
            wr32((u32)param_1 + 0x3dcu, r6);
            if ((s32)r6 > (s32)r0) {
                wr32((u32)param_1 + 0x3dcu, r0);
            }
        }
    }
    if (rd32((u32)param_1 + 0x3d4u) == 0u) {
        return;
    }
    if (r4 != rd32((u32)param_1 + 0x3d8u) || r5 != rd32((u32)param_1 + 0x3dcu)) {
        a.r[0] = 0x804b9da0u;
        a.r[1] = 1u;
        (void)tc_call(0x8010a75cu, &a);
        return;
    }
    return;
}
