#include "tc_rt.h"

void fn_802daa10(s32 param_1, s32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r8 = 0, r10 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r10 = rd32(0x805475ccu);
    r8 = (u32)(s8)rd8(rd32((u32)param_1 + 0x18u) - 0x7fab8a98u) * 0x64u;
    wr32(r10 + r8, (u32)param_1);
    r30 = r10 + r8;
    wr32(r30 + 4u, 0u);
    wr32(r30 + 8u, (u32)param_2);
    wr32(r30 + 0xcu, param_3);
    wr32(r30 + 0x10u, param_4);
    wr32(r30 + 0x14u, param_5);
    a.r[0] = r30;
    (void)tc_call(0x802da74cu, &a);
    if (param_2 > -904) {
        if (param_2 < 60) {
            r0 = (u32)rd16(((((u32)param_2 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc64c50u);
        } else {
            r0 = 0xff64u;
        }
    } else {
        r0 = 0u;
    }
    wr16(r30 + 0x30u, (u16)r0);
    r29 = 0u;
    r0 = rd32(0x805475c8u);
    c0lt = (s32)r0 < 1;
    if (r0 == 1u) {
        r3 = rd32(r30 + 0x18u) + (rd32(r30 + 0x20u) + rd32(r30 + 0x14u));
        if ((s32)r3 > -904) {
            if ((s32)r3 < 60) {
                r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc64c50u);
            } else {
                r0 = 0xff64u;
            }
        } else {
            r0 = 0u;
        }
        wr16(r30 + 0x34u, (u16)r0);
        r3 = rd32(r30 + 0x1cu) + (rd32(r30 + 0x20u) + rd32(r30 + 0x14u));
        if ((s32)r3 > -904) {
            if ((s32)r3 < 60) {
                r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc64c50u);
            } else {
                r0 = 0xff64u;
            }
        } else {
            r0 = 0u;
        }
        wr16(r30 + 0x38u, (u16)r0);
        r3 = rd32(r30 + 0x14u) + rd32(r30 + 0x24u) - 0x1eu;
        if ((s32)r3 > -904) {
            if ((s32)r3 < 60) {
                r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc64c50u);
            } else {
                r0 = 0xff64u;
            }
        } else {
            r0 = 0u;
        }
        wr16(r30 + 0x3cu, (u16)r0);
        r3 = rd32(r30 + 0x20u) + rd32(r30 + 0x18u) + (rd32(r30 + 0x14u) + rd32(r30 + 0xcu));
        if ((s32)r3 > -904) {
            if ((s32)r3 < 60) {
                r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc64c50u);
            } else {
                r0 = 0xff64u;
            }
        } else {
            r0 = 0u;
        }
        wr16(r30 + 0x40u, (u16)r0);
        r3 = rd32(r30 + 0x20u) + rd32(r30 + 0x1cu) + (rd32(r30 + 0x14u) + rd32(r30 + 0xcu));
        if ((s32)r3 > -904) {
            if ((s32)r3 < 60) {
                r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc64c50u);
            } else {
                r0 = 0xff64u;
            }
        } else {
            r0 = 0u;
        }
        wr16(r30 + 0x44u, (u16)r0);
        r3 = rd32(r30 + 0x14u) + rd32(r30 + 0xcu) + rd32(r30 + 0x24u) - 0x1eu;
        if ((s32)r3 > -904) {
            if ((s32)r3 < 60) {
                r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc64c50u);
            } else {
                r0 = 0xff64u;
            }
        } else {
            r0 = 0u;
        }
        wr16(r30 + 0x48u, (u16)r0);
        wr16(r30 + 0x4cu, 0u);
        wr16(r30 + 0x50u, 0u);
        wr16(r30 + 0x54u, 0u);
        wr16(r30 + 0x58u, 0u);
        wr16(r30 + 0x5cu, 0u);
        wr16(r30 + 0x60u, 0u);
    } else if (!c0lt) {
        if ((s32)r0 < 3) {
            r3 = rd32(r30 + 0x18u) + (rd32(r30 + 0x20u) + rd32(r30 + 0x14u));
            if ((s32)r3 > -904) {
                if ((s32)r3 < 60) {
                    r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc64c50u);
                } else {
                    r0 = 0xff64u;
                }
            } else {
                r0 = 0u;
            }
            wr16(r30 + 0x34u, (u16)r0);
            r3 = rd32(r30 + 0x1cu) + (rd32(r30 + 0x20u) + rd32(r30 + 0x14u));
            if ((s32)r3 > -904) {
                if ((s32)r3 < 60) {
                    r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc64c50u);
                } else {
                    r0 = 0xff64u;
                }
            } else {
                r0 = 0u;
            }
            wr16(r30 + 0x38u, (u16)r0);
            r3 = rd32(r30 + 0x28u) + (rd32(r30 + 0x24u) + rd32(r30 + 0x14u));
            if ((s32)r3 > -904) {
                if ((s32)r3 < 60) {
                    r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc64c50u);
                } else {
                    r0 = 0xff64u;
                }
            } else {
                r0 = 0u;
            }
            wr16(r30 + 0x3cu, (u16)r0);
            r3 = rd32(r30 + 0x2cu) + (rd32(r30 + 0x24u) + rd32(r30 + 0x14u));
            if ((s32)r3 > -904) {
                if ((s32)r3 < 60) {
                    r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc64c50u);
                } else {
                    r0 = 0xff64u;
                }
            } else {
                r0 = 0u;
            }
            wr16(r30 + 0x58u, (u16)r0);
            r3 = rd32(r30 + 0x20u) + rd32(r30 + 0x18u) + (rd32(r30 + 0x14u) + rd32(r30 + 0xcu));
            if ((s32)r3 > -904) {
                if ((s32)r3 < 60) {
                    r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc64c50u);
                } else {
                    r0 = 0xff64u;
                }
            } else {
                r0 = 0u;
            }
            wr16(r30 + 0x40u, (u16)r0);
            r3 = rd32(r30 + 0x20u) + rd32(r30 + 0x1cu) + (rd32(r30 + 0x14u) + rd32(r30 + 0xcu));
            if ((s32)r3 > -904) {
                if ((s32)r3 < 60) {
                    r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc64c50u);
                } else {
                    r0 = 0xff64u;
                }
            } else {
                r0 = 0u;
            }
            wr16(r30 + 0x44u, (u16)r0);
            r3 = rd32(r30 + 0x24u) + rd32(r30 + 0x28u) + (rd32(r30 + 0x14u) + rd32(r30 + 0xcu));
            if ((s32)r3 > -904) {
                if ((s32)r3 < 60) {
                    r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc64c50u);
                } else {
                    r0 = 0xff64u;
                }
            } else {
                r0 = 0u;
            }
            wr16(r30 + 0x48u, (u16)r0);
            r3 = rd32(r30 + 0x24u) + rd32(r30 + 0x2cu) + (rd32(r30 + 0x14u) + rd32(r30 + 0xcu));
            if ((s32)r3 > -904) {
                if ((s32)r3 < 60) {
                    r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc64c50u);
                } else {
                    r0 = 0xff64u;
                }
            } else {
                r0 = 0u;
            }
            wr16(r30 + 0x5cu, (u16)r0);
            r29 = 0x80000000u;
            wr16(r30 + 0x4cu, 0u);
            wr16(r30 + 0x50u, 0u);
            wr16(r30 + 0x54u, 0u);
            wr16(r30 + 0x60u, 0u);
        }
    } else if ((s32)r0 >= 0) {
        r3 = rd32(r30 + 0x14u) + rd32(r30 + 0x20u);
        if ((s32)r3 > -904) {
            if ((s32)r3 < 60) {
                r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc64c50u);
            } else {
                r0 = 0xff64u;
            }
        } else {
            r0 = 0u;
        }
        wr16(r30 + 0x34u, (u16)r0);
        r3 = rd32(r30 + 0x14u) + rd32(r30 + 0x20u);
        if ((s32)r3 > -904) {
            if ((s32)r3 < 60) {
                r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc64c50u);
            } else {
                r0 = 0xff64u;
            }
        } else {
            r0 = 0u;
        }
        wr16(r30 + 0x38u, (u16)r0);
        r3 = rd32(r30 + 0x14u) + rd32(r30 + 0x24u) - 0x1eu;
        if ((s32)r3 > -904) {
            if ((s32)r3 < 60) {
                r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc64c50u);
            } else {
                r0 = 0xff64u;
            }
        } else {
            r0 = 0u;
        }
        wr16(r30 + 0x3cu, (u16)r0);
        r3 = rd32(r30 + 0xcu) + (rd32(r30 + 0x20u) + rd32(r30 + 0x14u));
        if ((s32)r3 > -904) {
            if ((s32)r3 < 60) {
                r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc64c50u);
            } else {
                r0 = 0xff64u;
            }
        } else {
            r0 = 0u;
        }
        wr16(r30 + 0x40u, (u16)r0);
        r3 = rd32(r30 + 0xcu) + (rd32(r30 + 0x20u) + rd32(r30 + 0x14u));
        if ((s32)r3 > -904) {
            if ((s32)r3 < 60) {
                r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc64c50u);
            } else {
                r0 = 0xff64u;
            }
        } else {
            r0 = 0u;
        }
        wr16(r30 + 0x44u, (u16)r0);
        r3 = rd32(r30 + 0x14u) + rd32(r30 + 0xcu) + rd32(r30 + 0x24u) - 0x1eu;
        if ((s32)r3 > -904) {
            if ((s32)r3 < 60) {
                r0 = (u32)rd16((((r3 + 0x388u) << 1u) & 0xfffffffeu) - 0x7fc64c50u);
            } else {
                r0 = 0xff64u;
            }
        } else {
            r0 = 0u;
        }
        wr16(r30 + 0x48u, (u16)r0);
        wr16(r30 + 0x4cu, 0u);
        wr16(r30 + 0x50u, 0u);
        wr16(r30 + 0x54u, 0u);
        wr16(r30 + 0x58u, 0u);
        wr16(r30 + 0x5cu, 0u);
        wr16(r30 + 0x60u, 0u);
    }
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    r3 = (u32)param_1 + 0x3eu;
    wr16((u32)param_1 + 0x92u, rd16(r30 + 0x30u));
    wr16((u32)param_1 + 0x94u, 0u);
    r0 = (u32)rd16(r30 + 0x34u);
    wr16((u32)param_1 + 0x3cu, (u16)r0);
    if (r0 != 0u) {
        r29 = r29 | 1u;
    }
    wr16(r3, 0u);
    r0 = (u32)rd16(r30 + 0x38u);
    wr16(r3 + 2u, (u16)r0);
    if (r0 != 0u) {
        r29 = r29 | 2u;
    }
    wr16(r3 + 4u, 0u);
    r0 = (u32)rd16(r30 + 0x40u);
    wr16(r3 + 6u, (u16)r0);
    if (r0 != 0u) {
        r29 = r29 | 0x10000u;
    }
    wr16(r3 + 8u, 0u);
    r0 = (u32)rd16(r30 + 0x44u);
    wr16(r3 + 0xau, (u16)r0);
    if (r0 != 0u) {
        r29 = r29 | 0x20000u;
    }
    wr16(r3 + 0xcu, 0u);
    r0 = (u32)rd16(r30 + 0x4cu);
    wr16(r3 + 0xeu, (u16)r0);
    if (r0 != 0u) {
        r29 = r29 | 0x200000u;
    }
    wr16(r3 + 0x10u, 0u);
    r0 = (u32)rd16(r30 + 0x50u);
    wr16(r3 + 0x12u, (u16)r0);
    if (r0 != 0u) {
        r29 = r29 | 0x400000u;
    }
    wr16(r3 + 0x14u, 0u);
    r0 = (u32)rd16(r30 + 0x58u);
    wr16(r3 + 0x16u, (u16)r0);
    if (r0 != 0u) {
        r29 = r29 | 0x4000000u;
    }
    wr16(r3 + 0x18u, 0u);
    r0 = (u32)rd16(r30 + 0x5cu);
    wr16(r3 + 0x1au, (u16)r0);
    if (r0 != 0u) {
        r29 = r29 | 0x8000000u;
    }
    wr16(r3 + 0x1cu, 0u);
    r0 = (u32)rd16(r30 + 0x3cu);
    wr16(r3 + 0x1eu, (u16)r0);
    if (r0 != 0u) {
        r29 = r29 | 8u;
    }
    wr16(r3 + 0x20u, 0u);
    r0 = (u32)rd16(r30 + 0x48u);
    wr16(r3 + 0x22u, (u16)r0);
    if (r0 != 0u) {
        r29 = r29 | 0x80000u;
    }
    wr16(r3 + 0x24u, 0u);
    r0 = (u32)rd16(r30 + 0x54u);
    wr16(r3 + 0x26u, (u16)r0);
    if (r0 != 0u) {
        r29 = r29 | 0x1000000u;
    }
    wr16(r3 + 0x28u, 0u);
    r0 = (u32)rd16(r30 + 0x60u);
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
