#include "tc_rt.h"

u32 fn_801fedbc(s32 param_1)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    TcArgs a = {0};
    r7 = rd32(0x803541ccu);
    do {
        if ((r7 & 8u) == 0u) {
            r8 = rd32(0x803541c8u);
            if ((r8 & 2u) == 0u) {
                r6 = rd32(0x803541bcu);
                if (r6 != 0u) {
                    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r0 != 1u) {
                        if (r0 != 2u) {
                            r5 = 0u;
                        } else {
                            r5 = rd32(0x8035416cu);
                        }
                    } else {
                        r5 = rd32(0x80354138u);
                    }
                } else {
                    r5 = 0u;
                }
                if (r6 != 0u) {
                    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r0 != 1u) {
                        if (r0 != 2u) {
                            r0 = 0u;
                        } else {
                            r0 = r5 & rd32(rd32(0x803541b4u));
                        }
                    } else {
                        r0 = r5 & rd32(rd32(0x803541a4u));
                    }
                } else {
                    r0 = 0u;
                }
                if (r0 != 0u) break;
            }
            do {
                if ((r7 & 2u) == 0u) {
                    if ((r8 & 8u) == 0u) {
                        r6 = rd32(0x803541bcu);
                        if (r6 != 0u) {
                            r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                            if (r0 != 1u) {
                                if (r0 != 2u) {
                                    r5 = 0u;
                                } else {
                                    r5 = rd32(0x80354170u);
                                }
                            } else {
                                r5 = rd32(0x8035413cu);
                            }
                        } else {
                            r5 = 0u;
                        }
                        if (r6 != 0u) {
                            r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                            if (r0 != 1u) {
                                if (r0 != 2u) {
                                    r0 = 0u;
                                } else {
                                    r0 = r5 & rd32(rd32(0x803541b4u));
                                }
                            } else {
                                r0 = r5 & rd32(rd32(0x803541a4u));
                            }
                        } else {
                            r0 = 0u;
                        }
                        if (r0 != 0u) break;
                    }
                    r0 = rd32(0x803541bcu);
                    if (r0 != 0u) {
                        r4 = rd32(rd32(0x805711ccu) + 0xfcu);
                        if (r4 != 1u) {
                            if (r4 != 2u) {
                                r5 = 0u;
                            } else {
                                r5 = rd32(0x80354178u);
                            }
                        } else {
                            r5 = rd32(0x80354144u);
                        }
                    } else {
                        r5 = 0u;
                    }
                    if (r0 != 0u) {
                        r4 = rd32(rd32(0x805711ccu) + 0xfcu);
                        if (r4 != 1u) {
                            if (r4 != 2u) {
                                r4 = 0u;
                            } else {
                                r4 = r5 & rd32(rd32(0x803541a8u));
                            }
                        } else {
                            r4 = r5 & rd32(rd32(0x80354198u));
                        }
                    } else {
                        r4 = 0u;
                    }
                    if (r4 == 0u) {
                        if (r0 != 0u) {
                            r4 = rd32(rd32(0x805711ccu) + 0xfcu);
                            if (r4 != 1u) {
                                if (r4 != 2u) {
                                    r5 = 0u;
                                } else {
                                    r5 = rd32(0x80354194u);
                                }
                            } else {
                                r5 = rd32(0x80354160u);
                            }
                        } else {
                            r5 = 0u;
                        }
                        if (r0 != 0u) {
                            r4 = rd32(rd32(0x805711ccu) + 0xfcu);
                            if (r4 != 1u) {
                                if (r4 != 2u) {
                                    r4 = 0u;
                                } else {
                                    r4 = r5 & rd32(rd32(0x803541a8u));
                                }
                            } else {
                                r4 = r5 & rd32(rd32(0x80354198u));
                            }
                        } else {
                            r4 = 0u;
                        }
                        if (r4 == 0u) {
                            if (r0 != 0u) {
                                r4 = rd32(rd32(0x805711ccu) + 0xfcu);
                                if (r4 != 1u) {
                                    if (r4 != 2u) {
                                        r5 = 0u;
                                    } else {
                                        r5 = rd32(0x80354184u);
                                    }
                                } else {
                                    r5 = rd32(0x80354150u);
                                }
                            } else {
                                r5 = 0u;
                            }
                            if (r0 != 0u) {
                                r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                                if (r0 != 1u) {
                                    if (r0 != 2u) {
                                        r0 = 0u;
                                    } else {
                                        r0 = r5 & rd32(rd32(0x803541a8u));
                                    }
                                } else {
                                    r0 = r5 & rd32(rd32(0x80354198u));
                                }
                            } else {
                                r0 = 0u;
                            }
                            if (r0 == 0u) {
                                return 1u;
                            }
                            a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xd0u;
                            a.r[1] = 6u;
                            (void)tc_call(0x800f8544u, &a);
                            wr32(rd32((u32)param_1 + 0x1cu) + 0xa5cu, 1u);
                            return 1u;
                        }
                    }
                    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xd0u;
                    a.r[1] = 6u;
                    (void)tc_call(0x800f8544u, &a);
                    wr32(rd32((u32)param_1 + 0x1cu) + 0xa58u, 1u);
                    return 1u;
                }
            } while (0);
            a.r[0] = 0x804de14cu;
            (void)tc_call(0x801f40c8u, &a);
            a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xd0u;
            a.r[1] = 6u;
            (void)tc_call(0x800f8544u, &a);
            return 1u;
        }
    } while (0);
    a.r[0] = 0x804de14cu;
    (void)tc_call(0x801f4064u, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xd0u;
    a.r[1] = 6u;
    (void)tc_call(0x800f8544u, &a);
    return 1u;
}
