#include "tc_rt.h"

u32 fn_800da8b8(u32 param_1, s32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r29 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_1;
    r4 = (u32)param_2;
    if (param_3 == 0u) {
        r3 = 0u;
    } else {
        if ((rd32((u32)param_2 + 0x38u) == 2u && (param_3 & 0x10u) != 0u) && rd32((u32)param_2 + 0xe0u) == 4u) {
            r3 = 1u;
            return r3;
        }
        r31 = rd32((u32)param_2 + 0x30u);
        if ((r31 & 0x80000u) != 0u) {
            r3 = 1u;
        } else {
            if ((param_3 & 0xf00000u) != 0u) {
                r0 = r31 & 0xf00000u;
                if (r0 != 0u) {
                    r0 = r0 & param_3;
                    if (r0 != 0u) {
                        r3 = 1u;
                        return r3;
                    }
                }
            }
            if ((param_3 & 0xfff00u) == 0u) {
                r3 = 0u;
            } else {
                r3 = rd32((u32)param_2 + 0x2cu);
                r29 = 0u;
                if (r3 != 0u && rd32(r3 + 0xb8u) == 0u) {
                    r4 = rd32(r3 + 0x5c0u);
                    r0 = 0u;
                    if ((s32)r4 >= 504 && (s32)r4 <= 525) {
                        r0 = 1u;
                    }
                    if (r0 != 0u) {
                        r29 = 0x400u;
                    } else {
                        r0 = 0u;
                        if ((s32)r4 >= 526 && (s32)r4 <= 547) {
                            r0 = 1u;
                        }
                        if (r0 != 0u) {
                            r29 = 0x200u;
                        } else {
                            r0 = 0u;
                            if ((s32)r4 >= 548 && (s32)r4 <= 569) {
                                r0 = 1u;
                            }
                            if (r0 != 0u) {
                                r29 = 0x100u;
                            } else {
                                r0 = 0u;
                                if ((s32)r4 >= 570 && (s32)r4 <= 591) {
                                    r0 = 1u;
                                }
                                if (r0 != 0u) {
                                    r29 = 0x2000u;
                                } else {
                                    r0 = 0u;
                                    if ((s32)r4 >= 592 && (s32)r4 <= 613) {
                                        r0 = 1u;
                                    }
                                    if (r0 != 0u) {
                                        r29 = 0x4000u;
                                    } else {
                                        r0 = 0u;
                                        if ((s32)r4 >= 614 && (s32)r4 <= 624) {
                                            r0 = 1u;
                                        }
                                        if (r0 != 0u) {
                                            r29 = 0x80000u;
                                        } else {
                                            r0 = 0u;
                                            if ((s32)r4 >= 625 && (s32)r4 <= 629) {
                                                r0 = 1u;
                                            }
                                            if (r0 != 0u) {
                                                r4 = 0x10000u;
                                                r29 = 0x8000u;
                                            } else {
                                                r0 = 0u;
                                                if ((s32)r4 >= 630 && (s32)r4 <= 634) {
                                                    r0 = 1u;
                                                }
                                                if (r0 != 0u) {
                                                    r29 = 0x1000u;
                                                } else {
                                                    r0 = 0u;
                                                    if ((s32)r4 >= 635 && (s32)r4 <= 639) {
                                                        r0 = 1u;
                                                    }
                                                    if (r0 != 0u) {
                                                        r29 = 0x10000u;
                                                    } else {
                                                        r0 = 0u;
                                                        if ((s32)r4 >= 640 && (s32)r4 <= 644) {
                                                            r0 = 1u;
                                                        }
                                                        if (r0 != 0u) {
                                                            r29 = 0x800u;
                                                        } else {
                                                            if (r4 == 0x285u) {
                                                                r29 = 0x20000u;
                                                            } else {
                                                                if (r4 == 0x286u) {
                                                                    r29 = 0x40000u;
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
                        }
                    }
                }
                if (r3 != 0u && rd32(r3 + 0xb8u) == 2u) {
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = param_3;
                    a.f[0] = 0.0;
                    r3 = tc_call(rd32(rd32(r3) + 0x140u), &a);
                    if (r3 != 0u) {
                        r29 = 0x400u;
                    }
                }
                if ((r29 & param_3) != 0u) {
                    if ((param_3 & 0x10000000u) != 0u && (r31 & 0x200u) == 0u) {
                        r3 = 0u;
                        return r3;
                    }
                    r3 = 1u;
                } else {
                    r3 = 0u;
                }
            }
        }
    }
    return r3;
}
