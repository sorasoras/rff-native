#include "tc_rt.h"

u32 fn_8012e59c(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    r3 = 0xabu;
    r4 = rd32(rd32(0x80571398u) + 0x1a0u);
    if ((s32)r4 >= 0 && (s32)r4 < 70) {
        a.r[0] = 0x8049c500u;
        a.r[1] = r4;
        r3 = tc_call(0x800c8794u, &a);
    }
    if ((s32)r3 >= 171) {
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x82cu;
        a.r[1] = 0x19u;
        (void)tc_call(0x8020f18cu, &a);
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x864u;
        a.r[1] = 0x19u;
        (void)tc_call(0x8020f18cu, &a);
    } else {
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x82cu;
        a.r[1] = 0xau;
        (void)tc_call(0x8020f18cu, &a);
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x864u;
        a.r[1] = 1u;
        (void)tc_call(0x8020f18cu, &a);
    }
    r0 = rd32(0x803541bcu);
    if (r0 != 0u) {
        r3 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r3 != 1u) {
            if (r3 != 2u) {
                r4 = 0u;
            } else {
                r4 = rd32(0x80354174u);
            }
        } else {
            r4 = rd32(0x80354140u);
        }
    } else {
        r4 = 0u;
    }
    if (r0 != 0u) {
        r3 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r3 != 1u) {
            if (r3 != 2u) {
                r3 = 0u;
            } else {
                r3 = r4 & rd32(rd32(0x803541a8u));
            }
        } else {
            r3 = r4 & rd32(rd32(0x80354198u));
        }
    } else {
        r3 = 0u;
    }
    if (r3 == 0u) {
        if (r0 != 0u) {
            r3 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r3 != 1u) {
                if (r3 != 2u) {
                    r4 = 0u;
                } else {
                    r4 = rd32(0x80354190u);
                }
            } else {
                r4 = rd32(0x8035415cu);
            }
        } else {
            r4 = 0u;
        }
        if (r0 != 0u) {
            r3 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r3 != 1u) {
                if (r3 != 2u) {
                    r3 = 0u;
                } else {
                    r3 = r4 & rd32(rd32(0x803541a8u));
                }
            } else {
                r3 = r4 & rd32(rd32(0x80354198u));
            }
        } else {
            r3 = 0u;
        }
        if (r3 == 0u) {
            if (r0 != 0u) {
                r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                if (r3 != 1u) {
                    if (r3 != 2u) {
                        r4 = 0u;
                    } else {
                        r4 = rd32(0x80354178u);
                    }
                } else {
                    r4 = rd32(0x80354144u);
                }
            } else {
                r4 = 0u;
            }
            if (r0 != 0u) {
                r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                if (r3 != 1u) {
                    if (r3 != 2u) {
                        r3 = 0u;
                    } else {
                        r3 = r4 & rd32(rd32(0x803541a8u));
                    }
                } else {
                    r3 = r4 & rd32(rd32(0x80354198u));
                }
            } else {
                r3 = 0u;
            }
            if (r3 == 0u) {
                if (r0 != 0u) {
                    r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r3 != 1u) {
                        if (r3 != 2u) {
                            r4 = 0u;
                        } else {
                            r4 = rd32(0x80354194u);
                        }
                    } else {
                        r4 = rd32(0x80354160u);
                    }
                } else {
                    r4 = 0u;
                }
                if (r0 != 0u) {
                    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r0 != 1u) {
                        if (r0 != 2u) {
                            r0 = 0u;
                        } else {
                            r0 = r4 & rd32(rd32(0x803541a8u));
                        }
                    } else {
                        r0 = r4 & rd32(rd32(0x80354198u));
                    }
                } else {
                    r0 = 0u;
                }
                if (r0 == 0u) {
                    r3 = 1u;
                    return r3;
                }
            }
            r3 = 0u;
            return r3;
        }
    }
    r5 = rd32((u32)param_1 + 0x20u);
    r3 = rd32(r5 + 0x1cu);
    r4 = rd32(r3 + 0x58u);
    wr32(r5 + 0x5cu, r4 + (rd32(r4 + 0x810u) * 0x114u) + (rd32(r3 + 0x484u) * 0x14u) + 0x74u);
    r4 = rd32(rd32((u32)param_1 + 0x20u) + 0x1cu);
    r3 = rd32(r4 + 0x58u);
    r4 = rd32(r4 + 0x484u);
    r3 = r3 + (rd32(r3 + 0x810u) * 0x114u);
    r3 = r3 + 0x3cu;
    a.r[0] = r3;
    a.r[1] = r4;
    (void)tc_call(0x8012dbacu, &a);
    r4 = rd32(rd32((u32)param_1 + 0x20u) + 0x1cu);
    r5 = rd32(r4 + 0x58u);
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x54u);
    a.r[1] = rd32(r5 + (rd32(r5 + 0x810u) * 0x114u) + (rd32(r4 + 0x484u) * 0x14u) + 0x74u);
    (void)tc_call(0x8012c8acu, &a);
    a.r[0] = 0x804b9da0u;
    a.r[1] = 2u;
    (void)tc_call(0x8010a75cu, &a);
    a.r[0] = rd32((u32)param_1 + 0x20u) + 0x20u;
    a.r[1] = 1u;
    (void)tc_call(0x800f8544u, &a);
    r3 = 1u;
    return r3;
}
