#include "tc_rt.h"

void fn_80249974(s32 param_1, u32 param_2, s32 param_3, u32 param_4, u32 param_5, u32 param_6, u32 param_7, u32 param_8, u32 param_9)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r11 = 0, r12 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_9;
    r12 = rd32(0x80571918u);
    r4 = rd32((u32)param_1 + 0x18u) * 0x70u;
    r11 = rd32(0x817fe008u);
    wr32(r12 + r4, (u32)param_1);
    r30 = r12 + r4;
    wr32(r30 + 4u, param_2 & 0xfu);
    wr32(r30 + 8u, (u32)param_3);
    wr32(r30 + 0xcu, param_4);
    wr32(r30 + 0x10u, param_5);
    wr32(r30 + 0x14u, param_6);
    wr32(r30 + 0x18u, param_7);
    wr32(r30 + 0x1cu, param_8);
    wr32(r30 + 0x20u, r11);
    a.r[0] = r30;
    (void)tc_call(0x80249754u, &a);
    if ((rd32(r30 + 4u) & 8u) == 0u) {
        if (param_3 > -904) {
            if (param_3 < 60) {
                r0 = (u32)rd16(((((u32)param_3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
            } else {
                r0 = 0xff64u;
            }
        } else {
            r0 = 0u;
        }
        wr16(r30 + 0x3cu, (u16)r0);
    } else {
        wr16(r30 + 0x3cu, 0u);
    }
    r0 = rd32(0x80571924u);
    r29 = 0u;
    c0lt = (s32)r0 < 3;
    if (r0 == 3u) {
        r3 = rd32(r30 + 0x24u) + (rd32(r30 + 0x2cu) + rd32(r30 + 0x20u));
        if ((s32)r3 > -904) {
            if ((s32)r3 < 60) {
                r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
            } else {
                r0 = 0xff64u;
            }
        } else {
            r0 = 0u;
        }
        wr16(r30 + 0x40u, (u16)r0);
        r3 = rd32(r30 + 0x28u) + (rd32(r30 + 0x2cu) + rd32(r30 + 0x20u));
        if ((s32)r3 > -904) {
            if ((s32)r3 < 60) {
                r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
            } else {
                r0 = 0xff64u;
            }
        } else {
            r0 = 0u;
        }
        wr16(r30 + 0x44u, (u16)r0);
        r3 = rd32(r30 + 0x34u) + (rd32(r30 + 0x30u) + rd32(r30 + 0x20u));
        if ((s32)r3 > -904) {
            if ((s32)r3 < 60) {
                r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
            } else {
                r0 = 0xff64u;
            }
        } else {
            r0 = 0u;
        }
        wr16(r30 + 0x48u, (u16)r0);
        r3 = rd32(r30 + 0x38u) + (rd32(r30 + 0x30u) + rd32(r30 + 0x20u));
        if ((s32)r3 > -904) {
            if ((s32)r3 < 60) {
                r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
            } else {
                r0 = 0xff64u;
            }
        } else {
            r0 = 0u;
        }
        wr16(r30 + 0x64u, (u16)r0);
        if ((rd32(r30 + 4u) & 1u) == 0u) {
            r3 = rd32(r30 + 0x2cu) + rd32(r30 + 0x24u) + (rd32(r30 + 0x20u) + rd32(r30 + 0xcu));
            if ((s32)r3 > -904) {
                if ((s32)r3 < 60) {
                    r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                } else {
                    r0 = 0xff64u;
                }
            } else {
                r0 = 0u;
            }
            wr16(r30 + 0x4cu, (u16)r0);
            r3 = rd32(r30 + 0x2cu) + rd32(r30 + 0x28u) + (rd32(r30 + 0x20u) + rd32(r30 + 0xcu));
            if ((s32)r3 > -904) {
                if ((s32)r3 < 60) {
                    r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                } else {
                    r0 = 0xff64u;
                }
            } else {
                r0 = 0u;
            }
            wr16(r30 + 0x50u, (u16)r0);
            r3 = rd32(r30 + 0x30u) + rd32(r30 + 0x34u) + (rd32(r30 + 0x20u) + rd32(r30 + 0xcu));
            if ((s32)r3 > -904) {
                if ((s32)r3 < 60) {
                    r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                } else {
                    r0 = 0xff64u;
                }
            } else {
                r0 = 0u;
            }
            wr16(r30 + 0x54u, (u16)r0);
            r3 = rd32(r30 + 0x30u) + rd32(r30 + 0x38u) + (rd32(r30 + 0x20u) + rd32(r30 + 0xcu));
            if ((s32)r3 > -904) {
                if ((s32)r3 < 60) {
                    r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                } else {
                    r0 = 0xff64u;
                }
            } else {
                r0 = 0u;
            }
            wr16(r30 + 0x68u, (u16)r0);
        } else {
            r3 = rd32(r30 + 0x24u) + (rd32(r30 + 0x2cu) + rd32(r30 + 0xcu));
            if ((s32)r3 > -904) {
                if ((s32)r3 < 60) {
                    r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                } else {
                    r0 = 0xff64u;
                }
            } else {
                r0 = 0u;
            }
            wr16(r30 + 0x4cu, (u16)r0);
            r3 = rd32(r30 + 0x28u) + (rd32(r30 + 0x2cu) + rd32(r30 + 0xcu));
            if ((s32)r3 > -904) {
                if ((s32)r3 < 60) {
                    r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                } else {
                    r0 = 0xff64u;
                }
            } else {
                r0 = 0u;
            }
            wr16(r30 + 0x50u, (u16)r0);
            r3 = rd32(r30 + 0x34u) + (rd32(r30 + 0x30u) + rd32(r30 + 0xcu));
            if ((s32)r3 > -904) {
                if ((s32)r3 < 60) {
                    r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                } else {
                    r0 = 0xff64u;
                }
            } else {
                r0 = 0u;
            }
            wr16(r30 + 0x54u, (u16)r0);
            r3 = rd32(r30 + 0x38u) + (rd32(r30 + 0x30u) + rd32(r30 + 0xcu));
            if ((s32)r3 > -904) {
                if ((s32)r3 < 60) {
                    r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                } else {
                    r0 = 0xff64u;
                }
            } else {
                r0 = 0u;
            }
            wr16(r30 + 0x68u, (u16)r0);
        }
        if ((rd32(r30 + 4u) & 2u) == 0u) {
            r3 = rd32(r30 + 0x2cu) + rd32(r30 + 0x24u) + (rd32(r30 + 0x20u) + rd32(r30 + 0x10u));
            if ((s32)r3 > -904) {
                if ((s32)r3 < 60) {
                    r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                } else {
                    r0 = 0xff64u;
                }
            } else {
                r0 = 0u;
            }
            wr16(r30 + 0x58u, (u16)r0);
            r3 = rd32(r30 + 0x2cu) + rd32(r30 + 0x28u) + (rd32(r30 + 0x20u) + rd32(r30 + 0x10u));
            if ((s32)r3 > -904) {
                if ((s32)r3 < 60) {
                    r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                } else {
                    r0 = 0xff64u;
                }
            } else {
                r0 = 0u;
            }
            wr16(r30 + 0x5cu, (u16)r0);
            r3 = rd32(r30 + 0x30u) + rd32(r30 + 0x34u) + (rd32(r30 + 0x20u) + rd32(r30 + 0x10u));
            if ((s32)r3 > -904) {
                if ((s32)r3 < 60) {
                    r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                } else {
                    r0 = 0xff64u;
                }
            } else {
                r0 = 0u;
            }
            wr16(r30 + 0x60u, (u16)r0);
            r3 = rd32(r30 + 0x30u) + rd32(r30 + 0x38u) + (rd32(r30 + 0x20u) + rd32(r30 + 0x10u));
            if ((s32)r3 > -904) {
                if ((s32)r3 < 60) {
                    r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                } else {
                    r0 = 0xff64u;
                }
            } else {
                r0 = 0u;
            }
            wr16(r30 + 0x6cu, (u16)r0);
        } else {
            r3 = rd32(r30 + 0x24u) + (rd32(r30 + 0x2cu) + rd32(r30 + 0x10u));
            if ((s32)r3 > -904) {
                if ((s32)r3 < 60) {
                    r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                } else {
                    r0 = 0xff64u;
                }
            } else {
                r0 = 0u;
            }
            wr16(r30 + 0x58u, (u16)r0);
            r3 = rd32(r30 + 0x28u) + (rd32(r30 + 0x2cu) + rd32(r30 + 0x10u));
            if ((s32)r3 > -904) {
                if ((s32)r3 < 60) {
                    r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                } else {
                    r0 = 0xff64u;
                }
            } else {
                r0 = 0u;
            }
            wr16(r30 + 0x5cu, (u16)r0);
            r3 = rd32(r30 + 0x34u) + (rd32(r30 + 0x30u) + rd32(r30 + 0x10u));
            if ((s32)r3 > -904) {
                if ((s32)r3 < 60) {
                    r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                } else {
                    r0 = 0xff64u;
                }
            } else {
                r0 = 0u;
            }
            wr16(r30 + 0x60u, (u16)r0);
            r3 = rd32(r30 + 0x38u) + (rd32(r30 + 0x30u) + rd32(r30 + 0x10u));
            if ((s32)r3 > -904) {
                if ((s32)r3 < 60) {
                    r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                } else {
                    r0 = 0xff64u;
                }
            } else {
                r0 = 0u;
            }
            wr16(r30 + 0x6cu, (u16)r0);
        }
        r29 = 0x80000000u;
    } else if (c0lt) {
        c0lt = (s32)r0 < 0;
        if (r0 == 0u) {
            r3 = rd32(r30 + 0x20u) + rd32(r30 + 0x2cu);
            if ((s32)r3 > -904) {
                if ((s32)r3 < 60) {
                    r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                } else {
                    r0 = 0xff64u;
                }
            } else {
                r0 = 0u;
            }
            wr16(r30 + 0x40u, (u16)r0);
            r3 = rd32(r30 + 0x20u) + rd32(r30 + 0x2cu);
            if ((s32)r3 > -904) {
                if ((s32)r3 < 60) {
                    r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                } else {
                    r0 = 0xff64u;
                }
            } else {
                r0 = 0u;
            }
            wr16(r30 + 0x44u, (u16)r0);
            r3 = rd32(r30 + 0x20u) + rd32(r30 + 0x30u) - 0x1eu;
            if ((s32)r3 > -904) {
                if ((s32)r3 < 60) {
                    r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                } else {
                    r0 = 0xff64u;
                }
            } else {
                r0 = 0u;
            }
            wr16(r30 + 0x48u, (u16)r0);
            if ((rd32(r30 + 4u) & 1u) == 0u) {
                r3 = rd32(r30 + 0xcu) + (rd32(r30 + 0x2cu) + rd32(r30 + 0x20u));
                if ((s32)r3 > -904) {
                    if ((s32)r3 < 60) {
                        r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                    } else {
                        r0 = 0xff64u;
                    }
                } else {
                    r0 = 0u;
                }
                wr16(r30 + 0x4cu, (u16)r0);
                r3 = rd32(r30 + 0xcu) + (rd32(r30 + 0x2cu) + rd32(r30 + 0x20u));
                if ((s32)r3 > -904) {
                    if ((s32)r3 < 60) {
                        r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                    } else {
                        r0 = 0xff64u;
                    }
                } else {
                    r0 = 0u;
                }
                wr16(r30 + 0x50u, (u16)r0);
                r3 = rd32(r30 + 0x20u) + rd32(r30 + 0xcu) + rd32(r30 + 0x30u) - 0x1eu;
                if ((s32)r3 > -904) {
                    if ((s32)r3 < 60) {
                        r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                    } else {
                        r0 = 0xff64u;
                    }
                } else {
                    r0 = 0u;
                }
                wr16(r30 + 0x54u, (u16)r0);
            } else {
                r3 = rd32(r30 + 0xcu) + rd32(r30 + 0x2cu);
                if ((s32)r3 > -904) {
                    if ((s32)r3 < 60) {
                        r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                    } else {
                        r0 = 0xff64u;
                    }
                } else {
                    r0 = 0u;
                }
                wr16(r30 + 0x4cu, (u16)r0);
                r3 = rd32(r30 + 0xcu) + rd32(r30 + 0x2cu);
                if ((s32)r3 > -904) {
                    if ((s32)r3 < 60) {
                        r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                    } else {
                        r0 = 0xff64u;
                    }
                } else {
                    r0 = 0u;
                }
                wr16(r30 + 0x50u, (u16)r0);
                r3 = rd32(r30 + 0xcu) + rd32(r30 + 0x30u) - 0x1eu;
                if ((s32)r3 > -904) {
                    if ((s32)r3 < 60) {
                        r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                    } else {
                        r0 = 0xff64u;
                    }
                } else {
                    r0 = 0u;
                }
                wr16(r30 + 0x54u, (u16)r0);
            }
            if ((rd32(r30 + 4u) & 2u) == 0u) {
                r3 = rd32(r30 + 0x10u) + (rd32(r30 + 0x2cu) + rd32(r30 + 0x20u));
                if ((s32)r3 > -904) {
                    if ((s32)r3 < 60) {
                        r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                    } else {
                        r0 = 0xff64u;
                    }
                } else {
                    r0 = 0u;
                }
                wr16(r30 + 0x58u, (u16)r0);
                r3 = rd32(r30 + 0x10u) + (rd32(r30 + 0x2cu) + rd32(r30 + 0x20u));
                if ((s32)r3 > -904) {
                    if ((s32)r3 < 60) {
                        r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                    } else {
                        r0 = 0xff64u;
                    }
                } else {
                    r0 = 0u;
                }
                wr16(r30 + 0x5cu, (u16)r0);
                r3 = rd32(r30 + 0x20u) + rd32(r30 + 0x10u) + rd32(r30 + 0x30u) - 0x1eu;
                if ((s32)r3 > -904) {
                    if ((s32)r3 < 60) {
                        r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                    } else {
                        r0 = 0xff64u;
                    }
                } else {
                    r0 = 0u;
                }
                wr16(r30 + 0x60u, (u16)r0);
            } else {
                r3 = rd32(r30 + 0x10u) + rd32(r30 + 0x2cu);
                if ((s32)r3 > -904) {
                    if ((s32)r3 < 60) {
                        r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                    } else {
                        r0 = 0xff64u;
                    }
                } else {
                    r0 = 0u;
                }
                wr16(r30 + 0x58u, (u16)r0);
                r3 = rd32(r30 + 0x10u) + rd32(r30 + 0x2cu);
                if ((s32)r3 > -904) {
                    if ((s32)r3 < 60) {
                        r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                    } else {
                        r0 = 0xff64u;
                    }
                } else {
                    r0 = 0u;
                }
                wr16(r30 + 0x5cu, (u16)r0);
                r3 = rd32(r30 + 0x10u) + rd32(r30 + 0x30u) - 0x1eu;
                if ((s32)r3 > -904) {
                    if ((s32)r3 < 60) {
                        r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                    } else {
                        r0 = 0xff64u;
                    }
                } else {
                    r0 = 0u;
                }
                wr16(r30 + 0x60u, (u16)r0);
            }
            if ((rd32(r30 + 4u) & 4u) == 0u) {
                r3 = rd32(r30 + 0x14u) + (rd32(r30 + 0x2cu) + rd32(r30 + 0x20u));
                if ((s32)r3 > -904) {
                    if ((s32)r3 < 60) {
                        r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                    } else {
                        r0 = 0xff64u;
                    }
                } else {
                    r0 = 0u;
                }
                wr16(r30 + 0x64u, (u16)r0);
                r3 = rd32(r30 + 0x14u) + (rd32(r30 + 0x2cu) + rd32(r30 + 0x20u));
                if ((s32)r3 > -904) {
                    if ((s32)r3 < 60) {
                        r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                    } else {
                        r0 = 0xff64u;
                    }
                } else {
                    r0 = 0u;
                }
                wr16(r30 + 0x68u, (u16)r0);
                r3 = rd32(r30 + 0x20u) + rd32(r30 + 0x14u) + rd32(r30 + 0x30u) - 0x1eu;
                if ((s32)r3 > -904) {
                    if ((s32)r3 < 60) {
                        r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                    } else {
                        r0 = 0xff64u;
                    }
                } else {
                    r0 = 0u;
                }
                wr16(r30 + 0x6cu, (u16)r0);
            } else {
                r3 = rd32(r30 + 0x14u) + rd32(r30 + 0x2cu);
                if ((s32)r3 > -904) {
                    if ((s32)r3 < 60) {
                        r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                    } else {
                        r0 = 0xff64u;
                    }
                } else {
                    r0 = 0u;
                }
                wr16(r30 + 0x64u, (u16)r0);
                r3 = rd32(r30 + 0x14u) + rd32(r30 + 0x2cu);
                if ((s32)r3 > -904) {
                    if ((s32)r3 < 60) {
                        r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                    } else {
                        r0 = 0xff64u;
                    }
                } else {
                    r0 = 0u;
                }
                wr16(r30 + 0x68u, (u16)r0);
                r3 = rd32(r30 + 0x14u) + rd32(r30 + 0x30u) - 0x1eu;
                if ((s32)r3 > -904) {
                    if ((s32)r3 < 60) {
                        r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                    } else {
                        r0 = 0xff64u;
                    }
                } else {
                    r0 = 0u;
                }
                wr16(r30 + 0x6cu, (u16)r0);
            }
        } else if (!c0lt) {
            r3 = rd32(r30 + 0x24u) + (rd32(r30 + 0x2cu) + rd32(r30 + 0x20u));
            if ((s32)r3 > -904) {
                if ((s32)r3 < 60) {
                    r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                } else {
                    r0 = 0xff64u;
                }
            } else {
                r0 = 0u;
            }
            wr16(r30 + 0x40u, (u16)r0);
            r3 = rd32(r30 + 0x28u) + (rd32(r30 + 0x2cu) + rd32(r30 + 0x20u));
            if ((s32)r3 > -904) {
                if ((s32)r3 < 60) {
                    r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                } else {
                    r0 = 0xff64u;
                }
            } else {
                r0 = 0u;
            }
            wr16(r30 + 0x44u, (u16)r0);
            r3 = rd32(r30 + 0x20u) + rd32(r30 + 0x30u) - 0x1eu;
            if ((s32)r3 > -904) {
                if ((s32)r3 < 60) {
                    r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                } else {
                    r0 = 0xff64u;
                }
            } else {
                r0 = 0u;
            }
            wr16(r30 + 0x48u, (u16)r0);
            if ((rd32(r30 + 4u) & 1u) == 0u) {
                r3 = rd32(r30 + 0x2cu) + rd32(r30 + 0x24u) + (rd32(r30 + 0x20u) + rd32(r30 + 0xcu));
                if ((s32)r3 > -904) {
                    if ((s32)r3 < 60) {
                        r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                    } else {
                        r0 = 0xff64u;
                    }
                } else {
                    r0 = 0u;
                }
                wr16(r30 + 0x4cu, (u16)r0);
                r3 = rd32(r30 + 0x2cu) + rd32(r30 + 0x28u) + (rd32(r30 + 0x20u) + rd32(r30 + 0xcu));
                if ((s32)r3 > -904) {
                    if ((s32)r3 < 60) {
                        r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                    } else {
                        r0 = 0xff64u;
                    }
                } else {
                    r0 = 0u;
                }
                wr16(r30 + 0x50u, (u16)r0);
                r3 = rd32(r30 + 0x20u) + rd32(r30 + 0xcu) + rd32(r30 + 0x30u) - 0x1eu;
                if ((s32)r3 > -904) {
                    if ((s32)r3 < 60) {
                        r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                    } else {
                        r0 = 0xff64u;
                    }
                } else {
                    r0 = 0u;
                }
                wr16(r30 + 0x54u, (u16)r0);
            } else {
                r3 = rd32(r30 + 0x24u) + (rd32(r30 + 0x2cu) + rd32(r30 + 0xcu));
                if ((s32)r3 > -904) {
                    if ((s32)r3 < 60) {
                        r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                    } else {
                        r0 = 0xff64u;
                    }
                } else {
                    r0 = 0u;
                }
                wr16(r30 + 0x4cu, (u16)r0);
                r3 = rd32(r30 + 0x28u) + (rd32(r30 + 0x2cu) + rd32(r30 + 0xcu));
                if ((s32)r3 > -904) {
                    if ((s32)r3 < 60) {
                        r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                    } else {
                        r0 = 0xff64u;
                    }
                } else {
                    r0 = 0u;
                }
                wr16(r30 + 0x50u, (u16)r0);
                r3 = rd32(r30 + 0xcu) + rd32(r30 + 0x30u) - 0x1eu;
                if ((s32)r3 > -904) {
                    if ((s32)r3 < 60) {
                        r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                    } else {
                        r0 = 0xff64u;
                    }
                } else {
                    r0 = 0u;
                }
                wr16(r30 + 0x54u, (u16)r0);
            }
            if ((rd32(r30 + 4u) & 2u) == 0u) {
                r3 = rd32(r30 + 0x2cu) + rd32(r30 + 0x24u) + (rd32(r30 + 0x20u) + rd32(r30 + 0x10u));
                if ((s32)r3 > -904) {
                    if ((s32)r3 < 60) {
                        r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                    } else {
                        r0 = 0xff64u;
                    }
                } else {
                    r0 = 0u;
                }
                wr16(r30 + 0x58u, (u16)r0);
                r3 = rd32(r30 + 0x2cu) + rd32(r30 + 0x28u) + (rd32(r30 + 0x20u) + rd32(r30 + 0x10u));
                if ((s32)r3 > -904) {
                    if ((s32)r3 < 60) {
                        r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                    } else {
                        r0 = 0xff64u;
                    }
                } else {
                    r0 = 0u;
                }
                wr16(r30 + 0x5cu, (u16)r0);
                r3 = rd32(r30 + 0x20u) + rd32(r30 + 0x10u) + rd32(r30 + 0x30u) - 0x1eu;
                if ((s32)r3 > -904) {
                    if ((s32)r3 < 60) {
                        r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                    } else {
                        r0 = 0xff64u;
                    }
                } else {
                    r0 = 0u;
                }
                wr16(r30 + 0x60u, (u16)r0);
            } else {
                r3 = rd32(r30 + 0x24u) + (rd32(r30 + 0x2cu) + rd32(r30 + 0x10u));
                if ((s32)r3 > -904) {
                    if ((s32)r3 < 60) {
                        r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                    } else {
                        r0 = 0xff64u;
                    }
                } else {
                    r0 = 0u;
                }
                wr16(r30 + 0x58u, (u16)r0);
                r3 = rd32(r30 + 0x28u) + (rd32(r30 + 0x2cu) + rd32(r30 + 0x10u));
                if ((s32)r3 > -904) {
                    if ((s32)r3 < 60) {
                        r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                    } else {
                        r0 = 0xff64u;
                    }
                } else {
                    r0 = 0u;
                }
                wr16(r30 + 0x5cu, (u16)r0);
                r3 = rd32(r30 + 0x10u) + rd32(r30 + 0x30u) - 0x1eu;
                if ((s32)r3 > -904) {
                    if ((s32)r3 < 60) {
                        r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                    } else {
                        r0 = 0xff64u;
                    }
                } else {
                    r0 = 0u;
                }
                wr16(r30 + 0x60u, (u16)r0);
            }
            if ((rd32(r30 + 4u) & 4u) == 0u) {
                r3 = rd32(r30 + 0x2cu) + rd32(r30 + 0x24u) + (rd32(r30 + 0x20u) + rd32(r30 + 0x14u));
                if ((s32)r3 > -904) {
                    if ((s32)r3 < 60) {
                        r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                    } else {
                        r0 = 0xff64u;
                    }
                } else {
                    r0 = 0u;
                }
                wr16(r30 + 0x64u, (u16)r0);
                r3 = rd32(r30 + 0x2cu) + rd32(r30 + 0x28u) + (rd32(r30 + 0x20u) + rd32(r30 + 0x14u));
                if ((s32)r3 > -904) {
                    if ((s32)r3 < 60) {
                        r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                    } else {
                        r0 = 0xff64u;
                    }
                } else {
                    r0 = 0u;
                }
                wr16(r30 + 0x68u, (u16)r0);
                r3 = rd32(r30 + 0x20u) + rd32(r30 + 0x14u) + rd32(r30 + 0x30u) - 0x1eu;
                if ((s32)r3 > -904) {
                    if ((s32)r3 < 60) {
                        r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                    } else {
                        r0 = 0xff64u;
                    }
                } else {
                    r0 = 0u;
                }
                wr16(r30 + 0x6cu, (u16)r0);
            } else {
                r3 = rd32(r30 + 0x24u) + (rd32(r30 + 0x2cu) + rd32(r30 + 0x14u));
                if ((s32)r3 > -904) {
                    if ((s32)r3 < 60) {
                        r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                    } else {
                        r0 = 0xff64u;
                    }
                } else {
                    r0 = 0u;
                }
                wr16(r30 + 0x64u, (u16)r0);
                r3 = rd32(r30 + 0x28u) + (rd32(r30 + 0x2cu) + rd32(r30 + 0x14u));
                if ((s32)r3 > -904) {
                    if ((s32)r3 < 60) {
                        r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                    } else {
                        r0 = 0xff64u;
                    }
                } else {
                    r0 = 0u;
                }
                wr16(r30 + 0x68u, (u16)r0);
                r3 = rd32(r30 + 0x14u) + rd32(r30 + 0x30u) - 0x1eu;
                if ((s32)r3 > -904) {
                    if ((s32)r3 < 60) {
                        r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc72ed0u);
                    } else {
                        r0 = 0xff64u;
                    }
                } else {
                    r0 = 0u;
                }
                wr16(r30 + 0x6cu, (u16)r0);
            }
        }
    }
    a.r[0] = rd32((u32)param_1 + 0x18u);
    (void)tc_call(0x8024cb3cu, &a);
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    r3 = (u32)param_1 + 0x3eu;
    wr16((u32)param_1 + 0x92u, rd16(r30 + 0x3cu));
    wr16((u32)param_1 + 0x94u, 0u);
    r0 = (u32)rd16(r30 + 0x40u);
    wr16((u32)param_1 + 0x3cu, (u16)r0);
    if (r0 != 0u) {
        r29 = r29 | 1u;
    }
    wr16(r3, 0u);
    r0 = (u32)rd16(r30 + 0x44u);
    wr16(r3 + 2u, (u16)r0);
    if (r0 != 0u) {
        r29 = r29 | 2u;
    }
    wr16(r3 + 4u, 0u);
    r0 = (u32)rd16(r30 + 0x4cu);
    wr16(r3 + 6u, (u16)r0);
    if (r0 != 0u) {
        r29 = r29 | 0x10000u;
    }
    wr16(r3 + 8u, 0u);
    r0 = (u32)rd16(r30 + 0x50u);
    wr16(r3 + 0xau, (u16)r0);
    if (r0 != 0u) {
        r29 = r29 | 0x20000u;
    }
    wr16(r3 + 0xcu, 0u);
    r0 = (u32)rd16(r30 + 0x58u);
    wr16(r3 + 0xeu, (u16)r0);
    if (r0 != 0u) {
        r29 = r29 | 0x200000u;
    }
    wr16(r3 + 0x10u, 0u);
    r0 = (u32)rd16(r30 + 0x5cu);
    wr16(r3 + 0x12u, (u16)r0);
    if (r0 != 0u) {
        r29 = r29 | 0x400000u;
    }
    wr16(r3 + 0x14u, 0u);
    r0 = (u32)rd16(r30 + 0x64u);
    wr16(r3 + 0x16u, (u16)r0);
    if (r0 != 0u) {
        r29 = r29 | 0x4000000u;
    }
    wr16(r3 + 0x18u, 0u);
    r0 = (u32)rd16(r30 + 0x68u);
    wr16(r3 + 0x1au, (u16)r0);
    if (r0 != 0u) {
        r29 = r29 | 0x8000000u;
    }
    wr16(r3 + 0x1cu, 0u);
    r0 = (u32)rd16(r30 + 0x48u);
    wr16(r3 + 0x1eu, (u16)r0);
    if (r0 != 0u) {
        r29 = r29 | 8u;
    }
    wr16(r3 + 0x20u, 0u);
    r0 = (u32)rd16(r30 + 0x54u);
    wr16(r3 + 0x22u, (u16)r0);
    if (r0 != 0u) {
        r29 = r29 | 0x80000u;
    }
    wr16(r3 + 0x24u, 0u);
    r0 = (u32)rd16(r30 + 0x60u);
    wr16(r3 + 0x26u, (u16)r0);
    if (r0 != 0u) {
        r29 = r29 | 0x1000000u;
    }
    wr16(r3 + 0x28u, 0u);
    r0 = (u32)rd16(r30 + 0x6cu);
    wr16(r3 + 0x2au, (u16)r0);
    if (r0 != 0u) {
        r29 = r29 | 0x20000000u;
    }
    r0 = rd32((u32)param_1 + 0x1cu);
    wr16(r3 + 0x2cu, 0u);
    r0 = r0 | 0x112u;
    wr32((u32)param_1 + 0x34u, r29);
    wr32((u32)param_1 + 0x1cu, r0);
    a.r[0] = (u32)param_1 + 0x102u;
    a.r[1] = 0u;
    a.r[2] = 0x20u;
    (void)tc_call(0x8000443cu, &a);
    r0 = rd32((u32)param_1 + 0x1cu);
    wr16((u32)param_1 + 0x100u, 0u);
    r0 = r0 | 0x3000000u;
    wr32((u32)param_1 + 0x1cu, r0);
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
