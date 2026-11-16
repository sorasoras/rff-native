#include "tc_rt.h"

void fn_8006d4b4(u32 param_1, s32 param_2, u32 param_r5, u32 param_r6)
{
    u32 r0 = 0, r7 = 0;
    TcArgs a = {0};
    r7 = 0xau;
    r0 = 0u;
    if (param_2 >= 504 && param_2 <= 525) {
        r0 = 1u;
    }
    if (r0 != 0u) {
        r7 = 0u;
    } else {
        r0 = 0u;
        if (param_2 >= 526 && param_2 <= 547) {
            r0 = 1u;
        }
        if (r0 != 0u) {
            r7 = 0u;
        } else {
            r0 = 0u;
            if (param_2 >= 548 && param_2 <= 569) {
                r0 = 1u;
            }
            if (r0 != 0u) {
                r7 = 0u;
            } else {
                r0 = 0u;
                if (param_2 >= 570 && param_2 <= 591) {
                    r0 = 1u;
                }
                if (r0 != 0u) {
                    r7 = 4u;
                } else {
                    r0 = 0u;
                    if (param_2 >= 592 && param_2 <= 613) {
                        r0 = 1u;
                    }
                    if (r0 != 0u) {
                        r7 = 3u;
                    } else {
                        r0 = 0u;
                        if (param_2 >= 614 && param_2 <= 624) {
                            r0 = 1u;
                        }
                        if (r0 != 0u) {
                            r7 = 1u;
                        } else {
                            r0 = 0u;
                            if (param_2 >= 625 && param_2 <= 629) {
                                r0 = 1u;
                            }
                            if (r0 != 0u) {
                                r7 = 2u;
                            } else {
                                r0 = 0u;
                                if (param_2 >= 630 && param_2 <= 634) {
                                    r0 = 1u;
                                }
                                if (r0 != 0u) {
                                    r7 = 2u;
                                } else {
                                    r0 = 0u;
                                    if (param_2 >= 635 && param_2 <= 639) {
                                        r0 = 1u;
                                    }
                                    if (r0 != 0u) {
                                        r7 = 2u;
                                    } else {
                                        r0 = 0u;
                                        if (param_2 >= 640 && param_2 <= 644) {
                                            r0 = 1u;
                                        }
                                        if (r0 != 0u) {
                                            r7 = 5u;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    a.r[0] = param_1;
    a.r[1] = r7;
    a.r[2] = param_r5;
    a.r[3] = param_r6;
    (void)tc_call(0x8006d64cu, &a);
    return;
}
