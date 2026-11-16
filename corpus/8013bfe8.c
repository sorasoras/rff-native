#include "tc_rt.h"

u32 fn_8013bfe8(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x20u;
    a.r[1] = 1u;
    (void)tc_call(0x800f857cu, &a);
    a.r[0] = (u32)param_1 + 0x20u;
    r3 = tc_call(0x800f84d0u, &a);
    if (r3 == 2u) {
        r0 = rd32(0x803541bcu);
        if (r0 == 0u) {
            r4 = 0u;
        } else {
            r3 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r3 == 1u) {
                r4 = rd32(0x80354150u);
            } else {
                if (r3 == 2u) {
                    r4 = rd32(0x80354184u);
                } else {
                    r4 = 0u;
                }
            }
        }
        if (r0 == 0u) {
            r3 = 0u;
        } else {
            r3 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r3 == 1u) {
                r3 = r4 & rd32(rd32(0x803541a4u));
            } else {
                if (r3 == 2u) {
                    r3 = r4 & rd32(rd32(0x803541b4u));
                } else {
                    r3 = 0u;
                }
            }
        }
        if (r3 != 0u) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x8013c358u, &a);
        } else {
            if (r0 == 0u) {
                r4 = 0u;
            } else {
                r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                if (r3 == 1u) {
                    r4 = rd32(0x80354154u);
                } else {
                    if (r3 == 2u) {
                        r4 = rd32(0x80354188u);
                    } else {
                        r4 = 0u;
                    }
                }
            }
            if (r0 == 0u) {
                r3 = 0u;
            } else {
                r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                if (r3 == 1u) {
                    r3 = r4 & rd32(rd32(0x803541a4u));
                } else {
                    if (r3 == 2u) {
                        r3 = r4 & rd32(rd32(0x803541b4u));
                    } else {
                        r3 = 0u;
                    }
                }
            }
            if (r3 != 0u) {
                a.r[0] = (u32)param_1;
                (void)tc_call(0x8013c31cu, &a);
            } else {
                if (r0 == 0u) {
                    r4 = 0u;
                } else {
                    r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r3 == 1u) {
                        r4 = rd32(0x80354144u);
                    } else {
                        if (r3 == 2u) {
                            r4 = rd32(0x80354178u);
                        } else {
                            r4 = 0u;
                        }
                    }
                }
                if (r0 == 0u) {
                    r3 = 0u;
                } else {
                    r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r3 == 1u) {
                        r3 = r4 & rd32(rd32(0x80354198u));
                    } else {
                        if (r3 == 2u) {
                            r3 = r4 & rd32(rd32(0x803541a8u));
                        } else {
                            r3 = 0u;
                        }
                    }
                }
                if (r3 == 0u) {
                    if (r0 == 0u) {
                        r4 = 0u;
                    } else {
                        r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                        if (r3 == 1u) {
                            r4 = rd32(0x80354160u);
                        } else {
                            if (r3 == 2u) {
                                r4 = rd32(0x80354194u);
                            } else {
                                r4 = 0u;
                            }
                        }
                    }
                    if (r0 == 0u) {
                        r0 = 0u;
                    } else {
                        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                        if (r0 == 1u) {
                            r0 = r4 & rd32(rd32(0x80354198u));
                        } else {
                            if (r0 == 2u) {
                                r0 = r4 & rd32(rd32(0x803541a8u));
                            } else {
                                r0 = 0u;
                            }
                        }
                    }
                    if (r0 == 0u) {
                        return 1u;
                    }
                }
                a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x5b0u;
                a.r[1] = 2u;
                (void)tc_call(0x800f8544u, &a);
            }
        }
    }
    return 1u;
}
