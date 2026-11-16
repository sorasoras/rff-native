#include "tc_rt.h"

void fn_80067334(s32 param_1)
{
    u32 c0lt = 0, c1eq = 0, r0 = 0, r3 = 0, r4 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    r29 = (u32)param_1 + 0xa84u;
    r27 = 1u;
    r28 = (u32)param_1;
    r26 = 0u;
    do {
        r3 = rd32(r28 + 0xa88u);
        c1eq = r3 == 0u;
        if (!c1eq) {
            c0lt = (s32)r26 < 3;
            if (r26 == 3u) {
                r4 = (u32)rd16(r29);
                if (r4 != 0x2e8u) {
                    if (r4 != rd32((u32)param_1 + 0x3bcu) || (u32)rd8(r29 + 2u) != (u32)rd8((u32)param_1 + 0x3c1u) || (u32)rd8(r29 + 3u) != (u32)rd8((u32)param_1 + 0x3c0u)) {
                        a.r[0] = (u32)param_1;
                        a.r[1] = r4;
                        a.r[2] = 1u;
                        a.r[3] = (u32)rd8(r29 + 3u);
                        a.r[4] = (u32)rd8(r29 + 2u);
                        (void)tc_call(0x800691a4u, &a);
                    }
                } else {
                    a.r[0] = (u32)param_1;
                    a.r[1] = 1u;
                    (void)tc_call(0x800690f0u, &a);
                }
            } else if (!c0lt) {
                c0lt = (s32)r26 < 5;
                if (r26 == 5u) {
                    r4 = (u32)rd16(r29);
                    if (r4 != 0x2e8u) {
                        if (r4 != rd32((u32)param_1 + 0x514u) || (u32)rd8(r29 + 2u) != (u32)rd8((u32)param_1 + 0x519u) || (u32)rd8(r29 + 3u) != (u32)rd8((u32)param_1 + 0x518u)) {
                            a.r[0] = (u32)param_1;
                            a.r[1] = r4;
                            a.r[2] = 3u;
                            a.r[3] = (u32)rd8(r29 + 3u);
                            a.r[4] = (u32)rd8(r29 + 2u);
                            (void)tc_call(0x800691a4u, &a);
                        }
                    } else {
                        a.r[0] = (u32)param_1;
                        a.r[1] = 3u;
                        (void)tc_call(0x800690f0u, &a);
                    }
                } else if (c0lt) {
                    r4 = (u32)rd16(r29);
                    if (r4 != 0x2e8u) {
                        if (r4 != rd32((u32)param_1 + 0x468u) || (u32)rd8(r29 + 2u) != (u32)rd8((u32)param_1 + 0x46du) || (u32)rd8(r29 + 3u) != (u32)rd8((u32)param_1 + 0x46cu)) {
                            a.r[0] = (u32)param_1;
                            a.r[1] = r4;
                            a.r[2] = 2u;
                            a.r[3] = (u32)rd8(r29 + 3u);
                            a.r[4] = (u32)rd8(r29 + 2u);
                            (void)tc_call(0x800691a4u, &a);
                        }
                    } else {
                        a.r[0] = (u32)param_1;
                        a.r[1] = 2u;
                        (void)tc_call(0x800690f0u, &a);
                    }
                }
            } else {
                c0lt = (s32)r26 < 1;
                if (r26 == 1u) {
                    if (r3 != 1u) {
                        r4 = rd32((u32)param_1 + 0xa48u);
                        if (r4 != 0u) {
                            r3 = (u32)rd16(r29);
                            if (r3 == 0x2e8u) {
                                wr32((u32)param_1 + 0x290u, 0x11u);
                                wr32((u32)param_1 + 0xa58u, 0x11u);
                                a.r[0] = (u32)param_1;
                                (void)tc_call(0x800bfee8u, &a);
                            } else if (r3 != rd32(r4 + 0x74u) || (u32)rd8(r29 + 3u) != (u32)rd8(r4 + 0x78u) || (u32)rd8(r29 + 2u) != (u32)rd8(r4 + 0x79u)) {
                                a.r[0] = (u32)param_1;
                                a.r[1] = r29;
                                (void)tc_call(0x8006c470u, &a);
                                wr32((u32)param_1 + 0x290u, 0x11u);
                                wr32((u32)param_1 + 0xa58u, 0x11u);
                                a.r[0] = (u32)param_1;
                                (void)tc_call(0x800bfee8u, &a);
                            }
                        } else if ((u32)rd16(r29) != 0x2e8u) {
                            a.r[0] = (u32)param_1;
                            a.r[1] = r29;
                            (void)tc_call(0x8006c470u, &a);
                            if (rd32((u32)param_1 + 0x290u) != 0x11u) {
                                wr32((u32)param_1 + 0x290u, 0x12u);
                                wr32((u32)param_1 + 0xa58u, 0x12u);
                                a.r[0] = (u32)param_1;
                                (void)tc_call(0x800bff48u, &a);
                                r27 = 0u;
                            }
                        }
                    } else {
                        a.r[0] = (u32)param_1;
                        a.r[1] = (u32)rd16(r29);
                        a.r[2] = (u32)rd8(r29 + 3u);
                        a.r[3] = (u32)rd8(r29 + 2u);
                        (void)tc_call(0x800c494cu, &a);
                    }
                } else if (!c0lt) {
                    r4 = (u32)rd16(r29);
                    if (r4 != 0x2e8u) {
                        if (r4 != rd32((u32)param_1 + 0x310u) || (u32)rd8(r29 + 2u) != (u32)rd8((u32)param_1 + 0x315u) || (u32)rd8(r29 + 3u) != (u32)rd8((u32)param_1 + 0x314u)) {
                            a.r[0] = (u32)param_1;
                            a.r[1] = r4;
                            a.r[2] = 0u;
                            a.r[3] = (u32)rd8(r29 + 3u);
                            a.r[4] = (u32)rd8(r29 + 2u);
                            (void)tc_call(0x800691a4u, &a);
                        }
                    } else {
                        a.r[0] = (u32)param_1;
                        a.r[1] = 0u;
                        (void)tc_call(0x800690f0u, &a);
                    }
                } else if ((s32)r26 >= 0) {
                    if (rd32((u32)param_1 + 0xa48u) != 0u || c1eq) {
                        if ((u32)rd16(r29) != 0x2e8u) {
                            a.r[0] = (u32)param_1;
                            a.r[1] = 0u;
                            a.r[2] = 0u;
                            (void)tc_call(0x800693a8u, &a);
                            a.r[0] = (u32)param_1;
                            a.r[1] = (u32)rd16(r29);
                            a.r[2] = (u32)rd8(r29 + 3u);
                            a.r[3] = (u32)rd8(r29 + 2u);
                            a.r[4] = 1u;
                            (void)tc_call(0x8006c6c0u, &a);
                        } else {
                            a.r[0] = (u32)param_1;
                            a.r[1] = 0u;
                            a.r[2] = 0u;
                            (void)tc_call(0x800693a8u, &a);
                        }
                    } else if ((r3 - 2u) <= 1u) {
                        if (r3 == 3u && rd32((u32)param_1 + 0x5c0u) != 0x2e8u) {
                            a.r[0] = (u32)param_1;
                            a.r[1] = 0u;
                            a.r[2] = 0u;
                            (void)tc_call(0x800693a8u, &a);
                        }
                        r0 = (u32)rd16(r29);
                        if (r0 != 0x2e8u) {
                            r3 = rd32((u32)param_1 + 0x5c0u);
                            if (r3 == 0x2e8u) {
                                a.r[0] = (u32)param_1;
                                a.r[1] = r29;
                                (void)tc_call(0x8006c454u, &a);
                                wr32((u32)param_1 + 0x290u, 0x12u);
                                r0 = 0u;
                                wr32((u32)param_1 + 0xa58u, 0x12u);
                                r3 = (u32)rd16(r29);
                                if (((s32)r3 >= 526 && (s32)r3 <= 547) || ((s32)r3 >= 570 && (s32)r3 <= 591) || ((s32)r3 >= 592 && (s32)r3 <= 613) || ((s32)r3 >= 635 && (s32)r3 <= 639) || ((s32)r3 >= 640 && (s32)r3 <= 644)) {
                                    r0 = 1u;
                                }
                                if (r0 == 0u) {
                                    r0 = 0u;
                                    if ((s32)r3 >= 504 && (s32)r3 <= 646) {
                                        r0 = 1u;
                                    }
                                    if (r0 == 0u) {
                                        a.r[0] = (u32)param_1;
                                        (void)tc_call(0x800bff48u, &a);
                                    } else {
                                        a.r[0] = (u32)param_1;
                                        (void)tc_call(0x800bff88u, &a);
                                    }
                                } else {
                                    a.r[0] = (u32)param_1;
                                    (void)tc_call(0x800c0008u, &a);
                                }
                            } else if (r0 != r3 || (u32)rd8(r29 + 3u) != (u32)rd8((u32)param_1 + 0x5c4u) || (u32)rd8(r29 + 2u) != (u32)rd8((u32)param_1 + 0x5c5u)) {
                                a.r[0] = (u32)param_1;
                                a.r[1] = r29;
                                (void)tc_call(0x8006c454u, &a);
                                r3 = rd32((u32)param_1 + 0x5c0u);
                                r0 = 0u;
                                wr32((u32)param_1 + 0x290u, 0x11u);
                                wr32((u32)param_1 + 0xa58u, 0x11u);
                                if (((s32)r3 >= 526 && (s32)r3 <= 547) || ((s32)r3 >= 570 && (s32)r3 <= 591) || ((s32)r3 >= 592 && (s32)r3 <= 613) || ((s32)r3 >= 635 && (s32)r3 <= 639) || ((s32)r3 >= 640 && (s32)r3 <= 644)) {
                                    r0 = 1u;
                                }
                                if (r0 == 0u) {
                                    r0 = 0u;
                                    if ((s32)r3 >= 504 && (s32)r3 <= 646) {
                                        r0 = 1u;
                                    }
                                    if (r0 == 0u) {
                                        a.r[0] = (u32)param_1;
                                        (void)tc_call(0x800bfee8u, &a);
                                        r27 = 0u;
                                    } else {
                                        a.r[0] = (u32)param_1;
                                        (void)tc_call(0x800bff68u, &a);
                                    }
                                } else {
                                    a.r[0] = (u32)param_1;
                                    (void)tc_call(0x800bffe8u, &a);
                                }
                            }
                        } else {
                            r3 = rd32((u32)param_1 + 0x5c0u);
                            if (r3 != 0x2e8u) {
                                wr32((u32)param_1 + 0x290u, 0x11u);
                                r0 = 0u;
                                wr32((u32)param_1 + 0xa58u, 0x11u);
                                if (((s32)r3 >= 526 && (s32)r3 <= 547) || ((s32)r3 >= 570 && (s32)r3 <= 591) || ((s32)r3 >= 592 && (s32)r3 <= 613) || ((s32)r3 >= 635 && (s32)r3 <= 639) || ((s32)r3 >= 640 && (s32)r3 <= 644)) {
                                    r0 = 1u;
                                }
                                if (r0 == 0u) {
                                    r0 = 0u;
                                    if ((s32)r3 >= 504 && (s32)r3 <= 646) {
                                        r0 = 1u;
                                    }
                                    if (r0 == 0u) {
                                        a.r[0] = (u32)param_1;
                                        (void)tc_call(0x800bfee8u, &a);
                                        r27 = 0u;
                                    } else {
                                        a.r[0] = (u32)param_1;
                                        (void)tc_call(0x800bff68u, &a);
                                    }
                                } else {
                                    a.r[0] = (u32)param_1;
                                    (void)tc_call(0x800bffe8u, &a);
                                }
                            }
                        }
                    }
                }
            }
        }
        wr16(r29, 0x2e8u);
        r26 = r26 + 1u;
        wr8(r29 + 3u, 1u);
        wr8(r29 + 2u, 1u);
        r29 = r29 + 8u;
        wr32(r28 + 0xa88u, 0u);
        r28 = r28 + 8u;
    } while (r26 < 6u);
    if (r27 == 0u) {
        wr32((u32)param_1 + 0xa60u, 0u);
        wr32((u32)param_1 + 0xa5cu, 0u);
    }
    (void)tc_call(0x80081be0u, &a);
    return;
}
