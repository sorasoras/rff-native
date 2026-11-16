#include "tc_rt.h"

u32 fn_80131bec(s32 param_1, s32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 1u;
    r0 = rd32((u32)param_1 + 0x44u);
    c0lt = (s32)r0 < 8;
    if (r0 == 8u) {
        r31 = (u32)rd16((u32)param_2 + 0xbcu);
        if (r31 != 0x2e8u) {
            a.r[0] = 0x8049f1b0u;
            a.r[1] = r31;
            r3 = tc_call(0x8015f2b0u, &a);
            r0 = r3 & 0xffu;
            r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
            r0 = r0 & 0x60000u;
            r3 = 0u;
            if (r0 != 0u) {
                r3 = 1u;
            }
            if (r3 != 0u) {
                r0 = 1u;
            } else {
                a.r[0] = 0x8049f1b0u;
                a.r[1] = r31;
                r3 = tc_call(0x8015f2b0u, &a);
                r0 = r3 & 0xffu;
                r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                r0 = r0 & 0x180000u;
                r3 = 0u;
                if (r0 != 0u) {
                    r3 = 1u;
                }
                if (r3 != 0u) {
                    r0 = 1u;
                } else {
                    a.r[0] = 0x8049f1b0u;
                    a.r[1] = r31;
                    r3 = tc_call(0x8015f2b0u, &a);
                    r0 = r3 & 0xffu;
                    r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                    r0 = r0 & 0x400000u;
                    r3 = 0u;
                    if (r0 != 0u) {
                        r3 = 1u;
                    }
                    if (r3 != 0u) {
                        r0 = 1u;
                    } else {
                        a.r[0] = 0x8049f1b0u;
                        a.r[1] = r31;
                        r3 = tc_call(0x8015f2b0u, &a);
                        r0 = r3 & 0xffu;
                        r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                        r0 = r0 & 0x200000u;
                        r3 = 0u;
                        if (r0 != 0u) {
                            r3 = 1u;
                        }
                        if (r3 == 0u) {
                            r0 = 0u;
                        } else {
                            r0 = 1u;
                        }
                    }
                }
            }
        } else {
            r0 = 1u;
        }
        if (r0 == 0u) {
            r30 = 0u;
        }
    } else if (c0lt) {
        if ((s32)r0 >= 6) {
            r31 = (u32)rd16((u32)param_2 + 0xbcu);
            do {
                if (r31 != 0x2e8u) {
                    a.r[0] = 0x8049f1b0u;
                    a.r[1] = r31;
                    r3 = tc_call(0x8015f2b0u, &a);
                    r0 = r3 & 0xffu;
                    r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                    r0 = r0 & 0x1fu;
                    r3 = 0u;
                    if (r0 != 0u) {
                        r3 = 1u;
                    }
                    if (r3 == 0u) {
                        a.r[0] = 0x8049f1b0u;
                        a.r[1] = r31;
                        r3 = tc_call(0x8015f2b0u, &a);
                        r0 = r3 & 0xffu;
                        r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                        r0 = r0 & 0x1ffe0u;
                        r3 = 0u;
                        if (r0 != 0u) {
                            r3 = 1u;
                        }
                        if (r3 == 0u) {
                            a.r[0] = 0x8049f1b0u;
                            a.r[1] = r31;
                            r3 = tc_call(0x8015f2b0u, &a);
                            r0 = r3 & 0xffu;
                            r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                            r0 = r0 & 0x60000u;
                            r3 = 0u;
                            if (r0 != 0u) {
                                r3 = 1u;
                            }
                            if (r3 == 0u) {
                                a.r[0] = 0x8049f1b0u;
                                a.r[1] = r31;
                                r3 = tc_call(0x8015f2b0u, &a);
                                r0 = r3 & 0xffu;
                                r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                                r0 = r0 & 0x180000u;
                                r3 = 0u;
                                if (r0 != 0u) {
                                    r3 = 1u;
                                }
                                if (r3 == 0u) {
                                    a.r[0] = 0x8049f1b0u;
                                    a.r[1] = r31;
                                    r3 = tc_call(0x8015f2b0u, &a);
                                    r0 = r3 & 0xffu;
                                    r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                                    r0 = r0 & 0x400000u;
                                    r3 = 0u;
                                    if (r0 != 0u) {
                                        r3 = 1u;
                                    }
                                    if (r3 == 0u) {
                                        a.r[0] = 0x8049f1b0u;
                                        a.r[1] = r31;
                                        r3 = tc_call(0x8015f2b0u, &a);
                                        r0 = r3 & 0xffu;
                                        r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                                        r0 = r0 & 0x200000u;
                                        r3 = 0u;
                                        if (r0 != 0u) {
                                            r3 = 1u;
                                        }
                                        if (r3 == 0u) {
                                            r0 = 0u;
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    r0 = 1u;
                } else {
                    r0 = 1u;
                }
            } while (0);
            if (r0 == 0u) {
                r30 = 0u;
            }
        } else if ((s32)r0 >= 0) {
            r31 = (u32)rd16((u32)param_2 + 0xbcu);
            if (r31 != 0x2e8u) {
                a.r[0] = 0x8049f1b0u;
                a.r[1] = r31;
                r3 = tc_call(0x8015f2b0u, &a);
                r0 = r3 & 0xffu;
                r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                r0 = r0 & 0x60000u;
                r3 = 0u;
                if (r0 != 0u) {
                    r3 = 1u;
                }
                if (r3 != 0u) {
                    r0 = 1u;
                } else {
                    a.r[0] = 0x8049f1b0u;
                    a.r[1] = r31;
                    r3 = tc_call(0x8015f2b0u, &a);
                    r0 = r3 & 0xffu;
                    r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                    r0 = r0 & 0x180000u;
                    r3 = 0u;
                    if (r0 != 0u) {
                        r3 = 1u;
                    }
                    if (r3 != 0u) {
                        r0 = 1u;
                    } else {
                        a.r[0] = 0x8049f1b0u;
                        a.r[1] = r31;
                        r3 = tc_call(0x8015f2b0u, &a);
                        r0 = r3 & 0xffu;
                        r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                        r0 = r0 & 0x400000u;
                        r3 = 0u;
                        if (r0 != 0u) {
                            r3 = 1u;
                        }
                        if (r3 != 0u) {
                            r0 = 1u;
                        } else {
                            a.r[0] = 0x8049f1b0u;
                            a.r[1] = r31;
                            r3 = tc_call(0x8015f2b0u, &a);
                            r0 = r3 & 0xffu;
                            r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                            r0 = r0 & 0x200000u;
                            r3 = 0u;
                            if (r0 != 0u) {
                                r3 = 1u;
                            }
                            if (r3 == 0u) {
                                r0 = 0u;
                            } else {
                                r0 = 1u;
                            }
                        }
                    }
                }
            } else {
                r0 = 1u;
            }
            if (r0 == 0u) {
                r30 = 0u;
            }
        }
    }
    return r30;
}
