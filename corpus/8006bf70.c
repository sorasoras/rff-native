#include "tc_rt.h"

s32 fn_8006bf70(s32 param_1, s32 param_2)
{
    u32 c1eq = 0, c1lt = 0, r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    r0 = (u32)rd8((((u32)param_2 - 0x1f8u) * 0x14u) - 0x7fb60831u);
    if (r0 != 0u) {
        if (param_2 < 570 || param_2 > 591) {
            if (param_2 < 592 || param_2 > 613) {
                c1lt = param_2 < 614;
                c1eq = (u32)param_2 == 0x266u;
                if (c1lt || param_2 > 624) {
                    if (param_2 < 548 || param_2 > 569) {
                        if (param_2 < 504 || param_2 > 525) {
                            if (param_2 < 526 || param_2 > 547) {
                                if (param_2 < 635 || param_2 > 639) {
                                    if (param_2 < 625 || param_2 > 629) {
                                        if (param_2 < 630 || param_2 > 634) {
                                            if (param_2 < 640 || param_2 > 644) {
                                                r31 = 0x21u;
                                            } else {
                                                r31 = 5u;
                                            }
                                        } else {
                                            r31 = 7u;
                                        }
                                    } else {
                                        r31 = 3u;
                                    }
                                } else {
                                    r31 = 1u;
                                }
                            } else {
                                r31 = 0x18u;
                            }
                        } else {
                            r31 = 0x11u;
                        }
                    } else if (r0 >= 3u) {
                        r31 = 0x1du;
                    } else {
                        r31 = 0x1cu;
                    }
                } else if (param_2 >= 620) {
                    if ((u32)param_2 == 0x26eu) {
                        r31 = 0x1fu;
                    } else {
                        r31 = 0x20u;
                    }
                } else if (c1eq) {
                    r31 = 0x1fu;
                } else if (c1lt) {
                    r31 = 0x20u;
                } else if (param_2 >= 617) {
                    r31 = 0x1fu;
                } else {
                    r31 = 0x20u;
                }
            } else if (r0 >= 3u) {
                r31 = 0xcu;
            } else {
                r31 = 0xbu;
            }
        } else {
            r31 = 0xeu;
        }
        if (r31 != 0x21u) {
            a.r[0] = (u32)param_1;
            a.r[1] = r31;
            a.r[2] = (u32)rd8((u32)param_1 + 0x5c4u);
            (void)tc_call(0x8006d400u, &a);
            if ((u32)rd8((r31 * 0x58u) - 0x7fb97210u) == 0u) {
                r31 = 0x21u;
            }
            r3 = r31;
        } else {
            r3 = r31;
        }
    } else {
        r3 = 0x21u;
    }
    return (s32)r3;
}
