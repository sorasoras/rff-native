#include "tc_rt.h"

void fn_800dd6a4(void)
{
    u32 fl_ = 0, r3 = tc_argr(0u), r5 = tc_argr(2u), r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u);
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    for (;;) {
        r5 = 0u;
        r7 = 0u;
        for (;;) {
            r6 = 0u;
            r8 = 0u;
            r9 = 0u;
            for (;;) {
                if (r5 == 0u) {
                    for (;;) {
                        if (r6 > 0xcu) {
                            fl_ = 1u;
                            break;
                        }
                        for (;;) {
                            r10 = rd32(r9 - 0x7fca950cu);
                            if (r10 == 0x800dd6a4u) {
                                fl_ = 2u;
                                break;
                            }
                            if (r10 == 0x817ff000u) {
                                return;
                            }
                            if (r10 == 0x800dd898u) {
                                return;
                            }
                            if (r10 == 0x800dd888u) {
                                fl_ = 3u;
                                break;
                            }
                            if (r10 == 0x800dd874u) {
                                fl_ = 4u;
                                break;
                            }
                            if (r10 != 0x800dd6d8u) {
                                fl_ = 5u;
                                break;
                            }
                        }
                        if (fl_ == 5u) {
                            fl_ = 0u;
                        } else {
                            if (fl_ == 4u) {
                                fl_ = 0u;
                                fl_ = 6u;
                                break;
                            }
                            if (fl_ == 3u) {
                                fl_ = 0u;
                                fl_ = 7u;
                                break;
                            }
                            if (fl_ == 2u) {
                                fl_ = 0u;
                                fl_ = 8u;
                                break;
                            }
                        }
                        if (r10 != 0x800dd6d0u) {
                            fl_ = 9u;
                            break;
                        }
                    }
                    if (fl_ == 9u) {
                        fl_ = 0u;
                        if (r10 == 0x800dd6c8u) continue;
                        if (r10 == 0x800dd6bcu) {
                            fl_ = 10u;
                            break;
                        }
                        a.r[0] = tc_argr(0u);
                        a.r[1] = 0x80350000u;
                        a.r[2] = r5;
                        a.r[3] = r6;
                        a.r[4] = r7;
                        a.r[5] = r8;
                        a.r[6] = r9;
                        a.r[7] = r10;
                        a.f[0] = tc_argf(0u);
                        a.f[1] = tc_argf(1u);
                        a.f[2] = tc_argf(2u);
                        a.f[3] = tc_argf(3u);
                        a.f[4] = tc_argf(4u);
                        a.f[5] = tc_argf(5u);
                        a.f[6] = tc_argf(6u);
                        a.f[7] = tc_argf(7u);
                        r3 = tc_call(r10, &a);
                        f1 = tc_lastf();
                        return;
                    }
                    if (fl_ == 8u) {
                        fl_ = 0u;
                        fl_ = 11u;
                        break;
                    }
                    if (fl_ == 7u) {
                        fl_ = 0u;
                        fl_ = 12u;
                        break;
                    }
                    if (fl_ == 6u) {
                        fl_ = 0u;
                    } else if (fl_ == 1u) {
                        fl_ = 0u;
                    }
                }
                r6 = r6 + 1u;
                r9 = r9 + 4u;
                r8 = r8 + 8u;
                if ((s32)r6 >= 20) {
                    fl_ = 13u;
                    break;
                }
            }
            if (fl_ == 13u) {
                fl_ = 0u;
            } else if (fl_ == 12u) {
                fl_ = 0u;
            } else {
                if (fl_ == 11u) {
                    fl_ = 0u;
                    break;
                }
                if (fl_ == 10u) {
                    fl_ = 0u;
                    continue;
                }
            }
            r5 = r5 + 1u;
            r7 = r7 + 0xa0u;
            if ((s32)r5 >= 2) {
                return;
            }
        }
    }
}
