#include "tc_rt.h"

void fn_802db4b4(void)
{
    u32 c0lt = 0, ctr = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    if (rd32(0x80547c10u) != 0u) {
        r7 = 0u;
        ctr = 0x10u;
        do {
            r9 = 0u;
            r10 = rd32(0x805475ccu) + r7;
            r11 = rd32(r10);
            r8 = 0u;
            if (r11 != 0u) {
                r12 = 0u;
                if ((rd32(r10 + 4u) & 0x20000000u) != 0u) {
                    r9 = 1u;
                    wr16(r10 + 0x30u, rd16(r10 + 0x32u));
                    wr32(r10 + 4u, rd32(r10 + 4u) & 0xdfffffffu);
                }
                if ((rd32(r10 + 4u) & 0x10000000u) != 0u) {
                    r9 = rd32(r10 + 8u);
                    if ((s32)r9 > -904) {
                        if ((s32)r9 < 60) {
                            r9 = (r9 << 1u) & 0xfffffffeu;
                            r9 = r9 - 0x7fc64c50u;
                            r9 = (u32)rd16(r9 + 0x710u);
                        } else {
                            r9 = 0xff64u;
                        }
                    } else {
                        r9 = 0u;
                    }
                    wr16(r10 + 0x32u, (u16)r9);
                    r9 = 1u;
                    wr32(r10 + 4u, (rd32(r10 + 4u) & 0xefffffffu) | 0x20000000u);
                }
                if ((rd32(r10 + 4u) & 0x80000000u) != 0u) {
                    r8 = 1u;
                    wr16(r10 + 0x34u, rd16(r10 + 0x36u));
                    wr16(r10 + 0x38u, rd16(r10 + 0x3au));
                    wr16(r10 + 0x3cu, rd16(r10 + 0x3eu));
                    wr16(r10 + 0x40u, rd16(r10 + 0x42u));
                    wr16(r10 + 0x44u, rd16(r10 + 0x46u));
                    wr16(r10 + 0x48u, rd16(r10 + 0x4au));
                    wr16(r10 + 0x4cu, rd16(r10 + 0x4eu));
                    wr16(r10 + 0x50u, rd16(r10 + 0x52u));
                    wr16(r10 + 0x54u, rd16(r10 + 0x56u));
                    wr16(r10 + 0x58u, rd16(r10 + 0x5au));
                    wr16(r10 + 0x5cu, rd16(r10 + 0x5eu));
                    wr16(r10 + 0x60u, rd16(r10 + 0x62u));
                    wr32(r10 + 4u, rd32(r10 + 4u) & 0x7fffffffu);
                }
                if ((rd32(r10 + 4u) & 0x40000000u) != 0u) {
                    r8 = rd32(0x805475c8u);
                    c0lt = (s32)r8 < 1;
                    if (r8 == 1u) {
                        r8 = rd32(r10 + 0x18u) + (rd32(r10 + 0x20u) + rd32(r10 + 0x14u));
                        if ((s32)r8 > -904) {
                            if ((s32)r8 < 60) {
                                r8 = (r8 << 1u) & 0xfffffffeu;
                                r8 = r8 - 0x7fc64c50u;
                                r8 = (u32)rd16(r8 + 0x710u);
                            } else {
                                r8 = 0xff64u;
                            }
                        } else {
                            r8 = 0u;
                        }
                        wr16(r10 + 0x36u, (u16)r8);
                        r8 = rd32(r10 + 0x1cu) + (rd32(r10 + 0x20u) + rd32(r10 + 0x14u));
                        if ((s32)r8 > -904) {
                            if ((s32)r8 < 60) {
                                r8 = (r8 << 1u) & 0xfffffffeu;
                                r8 = r8 - 0x7fc64c50u;
                                r8 = (u32)rd16(r8 + 0x710u);
                            } else {
                                r8 = 0xff64u;
                            }
                        } else {
                            r8 = 0u;
                        }
                        wr16(r10 + 0x3au, (u16)r8);
                        r8 = rd32(r10 + 0x14u) + rd32(r10 + 0x24u) - 0x1eu;
                        if ((s32)r8 > -904) {
                            if ((s32)r8 < 60) {
                                r8 = (r8 << 1u) & 0xfffffffeu;
                                r8 = r8 - 0x7fc64c50u;
                                r8 = (u32)rd16(r8 + 0x710u);
                            } else {
                                r8 = 0xff64u;
                            }
                        } else {
                            r8 = 0u;
                        }
                        wr16(r10 + 0x3eu, (u16)r8);
                        r8 = rd32(r10 + 0x20u) + rd32(r10 + 0x18u) + (rd32(r10 + 0x14u) + rd32(r10 + 0xcu));
                        if ((s32)r8 > -904) {
                            if ((s32)r8 < 60) {
                                r8 = (r8 << 1u) & 0xfffffffeu;
                                r8 = r8 - 0x7fc64c50u;
                                r8 = (u32)rd16(r8 + 0x710u);
                            } else {
                                r8 = 0xff64u;
                            }
                        } else {
                            r8 = 0u;
                        }
                        wr16(r10 + 0x42u, (u16)r8);
                        r8 = rd32(r10 + 0x20u) + rd32(r10 + 0x1cu) + (rd32(r10 + 0x14u) + rd32(r10 + 0xcu));
                        if ((s32)r8 > -904) {
                            if ((s32)r8 < 60) {
                                r8 = (r8 << 1u) & 0xfffffffeu;
                                r8 = r8 - 0x7fc64c50u;
                                r8 = (u32)rd16(r8 + 0x710u);
                            } else {
                                r8 = 0xff64u;
                            }
                        } else {
                            r8 = 0u;
                        }
                        wr16(r10 + 0x46u, (u16)r8);
                        r8 = rd32(r10 + 0x14u) + rd32(r10 + 0xcu) + rd32(r10 + 0x24u) - 0x1eu;
                        if ((s32)r8 > -904) {
                            if ((s32)r8 < 60) {
                                r8 = (r8 << 1u) & 0xfffffffeu;
                                r8 = r8 - 0x7fc64c50u;
                                r8 = (u32)rd16(r8 + 0x710u);
                            } else {
                                r8 = 0xff64u;
                            }
                        } else {
                            r8 = 0u;
                        }
                        wr16(r10 + 0x4au, (u16)r8);
                        wr16(r10 + 0x4eu, 0u);
                        wr16(r10 + 0x52u, 0u);
                        wr16(r10 + 0x56u, 0u);
                        wr16(r10 + 0x5au, 0u);
                        wr16(r10 + 0x5eu, 0u);
                        wr16(r10 + 0x62u, 0u);
                    } else if (!c0lt) {
                        if ((s32)r8 < 3) {
                            r8 = rd32(r10 + 0x18u) + (rd32(r10 + 0x20u) + rd32(r10 + 0x14u));
                            if ((s32)r8 > -904) {
                                if ((s32)r8 < 60) {
                                    r8 = (r8 << 1u) & 0xfffffffeu;
                                    r8 = r8 - 0x7fc64c50u;
                                    r8 = (u32)rd16(r8 + 0x710u);
                                } else {
                                    r8 = 0xff64u;
                                }
                            } else {
                                r8 = 0u;
                            }
                            wr16(r10 + 0x36u, (u16)r8);
                            r8 = rd32(r10 + 0x1cu) + (rd32(r10 + 0x20u) + rd32(r10 + 0x14u));
                            if ((s32)r8 > -904) {
                                if ((s32)r8 < 60) {
                                    r8 = (r8 << 1u) & 0xfffffffeu;
                                    r8 = r8 - 0x7fc64c50u;
                                    r8 = (u32)rd16(r8 + 0x710u);
                                } else {
                                    r8 = 0xff64u;
                                }
                            } else {
                                r8 = 0u;
                            }
                            wr16(r10 + 0x3au, (u16)r8);
                            r8 = rd32(r10 + 0x28u) + (rd32(r10 + 0x24u) + rd32(r10 + 0x14u));
                            if ((s32)r8 > -904) {
                                if ((s32)r8 < 60) {
                                    r8 = (r8 << 1u) & 0xfffffffeu;
                                    r8 = r8 - 0x7fc64c50u;
                                    r8 = (u32)rd16(r8 + 0x710u);
                                } else {
                                    r8 = 0xff64u;
                                }
                            } else {
                                r8 = 0u;
                            }
                            wr16(r10 + 0x3eu, (u16)r8);
                            r8 = rd32(r10 + 0x2cu) + (rd32(r10 + 0x24u) + rd32(r10 + 0x14u));
                            if ((s32)r8 > -904) {
                                if ((s32)r8 < 60) {
                                    r8 = (r8 << 1u) & 0xfffffffeu;
                                    r8 = r8 - 0x7fc64c50u;
                                    r8 = (u32)rd16(r8 + 0x710u);
                                } else {
                                    r8 = 0xff64u;
                                }
                            } else {
                                r8 = 0u;
                            }
                            wr16(r10 + 0x5au, (u16)r8);
                            r8 = rd32(r10 + 0x20u) + rd32(r10 + 0x18u) + (rd32(r10 + 0x14u) + rd32(r10 + 0xcu));
                            if ((s32)r8 > -904) {
                                if ((s32)r8 < 60) {
                                    r8 = (r8 << 1u) & 0xfffffffeu;
                                    r8 = r8 - 0x7fc64c50u;
                                    r8 = (u32)rd16(r8 + 0x710u);
                                } else {
                                    r8 = 0xff64u;
                                }
                            } else {
                                r8 = 0u;
                            }
                            wr16(r10 + 0x42u, (u16)r8);
                            r8 = rd32(r10 + 0x20u) + rd32(r10 + 0x1cu) + (rd32(r10 + 0x14u) + rd32(r10 + 0xcu));
                            if ((s32)r8 > -904) {
                                if ((s32)r8 < 60) {
                                    r8 = (r8 << 1u) & 0xfffffffeu;
                                    r8 = r8 - 0x7fc64c50u;
                                    r8 = (u32)rd16(r8 + 0x710u);
                                } else {
                                    r8 = 0xff64u;
                                }
                            } else {
                                r8 = 0u;
                            }
                            wr16(r10 + 0x46u, (u16)r8);
                            r8 = rd32(r10 + 0x24u) + rd32(r10 + 0x28u) + (rd32(r10 + 0x14u) + rd32(r10 + 0xcu));
                            if ((s32)r8 > -904) {
                                if ((s32)r8 < 60) {
                                    r8 = (r8 << 1u) & 0xfffffffeu;
                                    r8 = r8 - 0x7fc64c50u;
                                    r8 = (u32)rd16(r8 + 0x710u);
                                } else {
                                    r8 = 0xff64u;
                                }
                            } else {
                                r8 = 0u;
                            }
                            wr16(r10 + 0x4au, (u16)r8);
                            r8 = rd32(r10 + 0x24u) + rd32(r10 + 0x2cu) + (rd32(r10 + 0x14u) + rd32(r10 + 0xcu));
                            if ((s32)r8 > -904) {
                                if ((s32)r8 < 60) {
                                    r8 = (r8 << 1u) & 0xfffffffeu;
                                    r8 = r8 - 0x7fc64c50u;
                                    r8 = (u32)rd16(r8 + 0x710u);
                                } else {
                                    r8 = 0xff64u;
                                }
                            } else {
                                r8 = 0u;
                            }
                            wr16(r10 + 0x5eu, (u16)r8);
                            r12 = 0x80000000u;
                            wr16(r10 + 0x4eu, 0u);
                            wr16(r10 + 0x52u, 0u);
                            wr16(r10 + 0x56u, 0u);
                            wr16(r10 + 0x62u, 0u);
                        }
                    } else if ((s32)r8 >= 0) {
                        r8 = rd32(r10 + 0x14u) + rd32(r10 + 0x20u);
                        if ((s32)r8 > -904) {
                            if ((s32)r8 < 60) {
                                r8 = (r8 << 1u) & 0xfffffffeu;
                                r8 = r8 - 0x7fc64c50u;
                                r8 = (u32)rd16(r8 + 0x710u);
                            } else {
                                r8 = 0xff64u;
                            }
                        } else {
                            r8 = 0u;
                        }
                        wr16(r10 + 0x36u, (u16)r8);
                        r8 = rd32(r10 + 0x14u) + rd32(r10 + 0x20u);
                        if ((s32)r8 > -904) {
                            if ((s32)r8 < 60) {
                                r8 = (r8 << 1u) & 0xfffffffeu;
                                r8 = r8 - 0x7fc64c50u;
                                r8 = (u32)rd16(r8 + 0x710u);
                            } else {
                                r8 = 0xff64u;
                            }
                        } else {
                            r8 = 0u;
                        }
                        wr16(r10 + 0x3au, (u16)r8);
                        r8 = rd32(r10 + 0x14u) + rd32(r10 + 0x24u) - 0x1eu;
                        if ((s32)r8 > -904) {
                            if ((s32)r8 < 60) {
                                r8 = (r8 << 1u) & 0xfffffffeu;
                                r8 = r8 - 0x7fc64c50u;
                                r8 = (u32)rd16(r8 + 0x710u);
                            } else {
                                r8 = 0xff64u;
                            }
                        } else {
                            r8 = 0u;
                        }
                        wr16(r10 + 0x3eu, (u16)r8);
                        r8 = rd32(r10 + 0xcu) + (rd32(r10 + 0x20u) + rd32(r10 + 0x14u));
                        if ((s32)r8 > -904) {
                            if ((s32)r8 < 60) {
                                r8 = (r8 << 1u) & 0xfffffffeu;
                                r8 = r8 - 0x7fc64c50u;
                                r8 = (u32)rd16(r8 + 0x710u);
                            } else {
                                r8 = 0xff64u;
                            }
                        } else {
                            r8 = 0u;
                        }
                        wr16(r10 + 0x42u, (u16)r8);
                        r8 = rd32(r10 + 0xcu) + (rd32(r10 + 0x20u) + rd32(r10 + 0x14u));
                        if ((s32)r8 > -904) {
                            if ((s32)r8 < 60) {
                                r8 = (r8 << 1u) & 0xfffffffeu;
                                r8 = r8 - 0x7fc64c50u;
                                r8 = (u32)rd16(r8 + 0x710u);
                            } else {
                                r8 = 0xff64u;
                            }
                        } else {
                            r8 = 0u;
                        }
                        wr16(r10 + 0x46u, (u16)r8);
                        r8 = rd32(r10 + 0x14u) + rd32(r10 + 0xcu) + rd32(r10 + 0x24u) - 0x1eu;
                        if ((s32)r8 > -904) {
                            if ((s32)r8 < 60) {
                                r8 = (r8 << 1u) & 0xfffffffeu;
                                r8 = r8 - 0x7fc64c50u;
                                r8 = (u32)rd16(r8 + 0x710u);
                            } else {
                                r8 = 0xff64u;
                            }
                        } else {
                            r8 = 0u;
                        }
                        wr16(r10 + 0x4au, (u16)r8);
                        wr16(r10 + 0x4eu, 0u);
                        wr16(r10 + 0x52u, 0u);
                        wr16(r10 + 0x56u, 0u);
                        wr16(r10 + 0x5au, 0u);
                        wr16(r10 + 0x5eu, 0u);
                        wr16(r10 + 0x62u, 0u);
                    }
                    r8 = 1u;
                    wr32(r10 + 4u, (rd32(r10 + 4u) & 0xbfffffffu) | 0x80000000u);
                }
                if (r9 != 0u) {
                    wr16(r11 + 0x92u, rd16(r10 + 0x30u));
                    r9 = (u32)((s32)ppc_mulhw(715827883, (s32)((u32)rd16(r10 + 0x32u) - (u32)rd16(r10 + 0x30u))) >> 4);
                    r9 = r9 + ((r9 >> 0x1fu) & 1u);
                    wr16(r11 + 0x94u, (u16)r9);
                    wr32(r11 + 0x1cu, rd32(r11 + 0x1cu) | 0x100u);
                }
                if (r8 != 0u) {
                    r8 = (u32)rd16(r10 + 0x34u);
                    wr16(r11 + 0x3cu, (u16)r8);
                    if (r8 != 0u) {
                        r12 = r12 | 1u;
                    }
                    r8 = (u32)((s32)ppc_mulhw(715827883, (s32)((u32)rd16(r10 + 0x36u) - (u32)rd16(r10 + 0x34u))) >> 4);
                    r9 = r8 + ((r8 >> 0x1fu) & 1u);
                    wr16(r11 + 0x3eu, (u16)r9);
                    if ((r9 & 0xffffu) != 0u) {
                        r12 = r12 | 4u;
                    }
                    r8 = (u32)rd16(r10 + 0x38u);
                    wr16(r11 + 0x40u, (u16)r8);
                    if (r8 != 0u) {
                        r12 = r12 | 2u;
                    }
                    r8 = (u32)((s32)ppc_mulhw(715827883, (s32)((u32)rd16(r10 + 0x3au) - (u32)rd16(r10 + 0x38u))) >> 4);
                    r9 = r8 + ((r8 >> 0x1fu) & 1u);
                    wr16(r11 + 0x42u, (u16)r9);
                    if ((r9 & 0xffffu) != 0u) {
                        r12 = r12 | 4u;
                    }
                    r8 = (u32)rd16(r10 + 0x40u);
                    wr16(r11 + 0x44u, (u16)r8);
                    if (r8 != 0u) {
                        r12 = r12 | 0x10000u;
                    }
                    r8 = (u32)((s32)ppc_mulhw(715827883, (s32)((u32)rd16(r10 + 0x42u) - (u32)rd16(r10 + 0x40u))) >> 4);
                    r9 = r8 + ((r8 >> 0x1fu) & 1u);
                    wr16(r11 + 0x46u, (u16)r9);
                    if ((r9 & 0xffffu) != 0u) {
                        r12 = r12 | 0x40000u;
                    }
                    r8 = (u32)rd16(r10 + 0x44u);
                    wr16(r11 + 0x48u, (u16)r8);
                    if (r8 != 0u) {
                        r12 = r12 | 0x20000u;
                    }
                    r8 = (u32)((s32)ppc_mulhw(715827883, (s32)((u32)rd16(r10 + 0x46u) - (u32)rd16(r10 + 0x44u))) >> 4);
                    r9 = r8 + ((r8 >> 0x1fu) & 1u);
                    wr16(r11 + 0x4au, (u16)r9);
                    if ((r9 & 0xffffu) != 0u) {
                        r12 = r12 | 0x40000u;
                    }
                    r8 = (u32)rd16(r10 + 0x4cu);
                    wr16(r11 + 0x4cu, (u16)r8);
                    if (r8 != 0u) {
                        r12 = r12 | 0x200000u;
                    }
                    r8 = (u32)((s32)ppc_mulhw(715827883, (s32)((u32)rd16(r10 + 0x4eu) - (u32)rd16(r10 + 0x4cu))) >> 4);
                    r9 = r8 + ((r8 >> 0x1fu) & 1u);
                    wr16(r11 + 0x4eu, (u16)r9);
                    if ((r9 & 0xffffu) != 0u) {
                        r12 = r12 | 0x800000u;
                    }
                    r8 = (u32)rd16(r10 + 0x50u);
                    wr16(r11 + 0x50u, (u16)r8);
                    if (r8 != 0u) {
                        r12 = r12 | 0x400000u;
                    }
                    r8 = (u32)((s32)ppc_mulhw(715827883, (s32)((u32)rd16(r10 + 0x52u) - (u32)rd16(r10 + 0x50u))) >> 4);
                    r9 = r8 + ((r8 >> 0x1fu) & 1u);
                    wr16(r11 + 0x52u, (u16)r9);
                    if ((r9 & 0xffffu) != 0u) {
                        r12 = r12 | 0x800000u;
                    }
                    r8 = (u32)rd16(r10 + 0x58u);
                    wr16(r11 + 0x54u, (u16)r8);
                    if (r8 != 0u) {
                        r12 = r12 | 0x4000000u;
                    }
                    r8 = (u32)((s32)ppc_mulhw(715827883, (s32)((u32)rd16(r10 + 0x5au) - (u32)rd16(r10 + 0x58u))) >> 4);
                    r9 = r8 + ((r8 >> 0x1fu) & 1u);
                    wr16(r11 + 0x56u, (u16)r9);
                    if ((r9 & 0xffffu) != 0u) {
                        r12 = r12 | 0x10000000u;
                    }
                    r8 = (u32)rd16(r10 + 0x5cu);
                    wr16(r11 + 0x58u, (u16)r8);
                    if (r8 != 0u) {
                        r12 = r12 | 0x8000000u;
                    }
                    r8 = (u32)((s32)ppc_mulhw(715827883, (s32)((u32)rd16(r10 + 0x5eu) - (u32)rd16(r10 + 0x5cu))) >> 4);
                    r9 = r8 + ((r8 >> 0x1fu) & 1u);
                    wr16(r11 + 0x5au, (u16)r9);
                    if ((r9 & 0xffffu) != 0u) {
                        r12 = r12 | 0x10000000u;
                    }
                    r8 = (u32)rd16(r10 + 0x3cu);
                    wr16(r11 + 0x5cu, (u16)r8);
                    if (r8 != 0u) {
                        r12 = r12 | 8u;
                    }
                    r8 = (u32)((s32)ppc_mulhw(715827883, (s32)((u32)rd16(r10 + 0x3eu) - (u32)rd16(r10 + 0x3cu))) >> 4);
                    r9 = r8 + ((r8 >> 0x1fu) & 1u);
                    wr16(r11 + 0x5eu, (u16)r9);
                    if ((r9 & 0xffffu) != 0u) {
                        r12 = r12 | 0x10u;
                    }
                    r8 = (u32)rd16(r10 + 0x48u);
                    wr16(r11 + 0x60u, (u16)r8);
                    if (r8 != 0u) {
                        r12 = r12 | 0x80000u;
                    }
                    r8 = (u32)((s32)ppc_mulhw(715827883, (s32)((u32)rd16(r10 + 0x4au) - (u32)rd16(r10 + 0x48u))) >> 4);
                    r9 = r8 + ((r8 >> 0x1fu) & 1u);
                    wr16(r11 + 0x62u, (u16)r9);
                    if ((r9 & 0xffffu) != 0u) {
                        r12 = r12 | 0x100000u;
                    }
                    r8 = (u32)rd16(r10 + 0x54u);
                    wr16(r11 + 0x64u, (u16)r8);
                    if (r8 != 0u) {
                        r12 = r12 | 0x1000000u;
                    }
                    r8 = (u32)((s32)ppc_mulhw(715827883, (s32)((u32)rd16(r10 + 0x56u) - (u32)rd16(r10 + 0x54u))) >> 4);
                    r9 = r8 + ((r8 >> 0x1fu) & 1u);
                    wr16(r11 + 0x66u, (u16)r9);
                    if ((r9 & 0xffffu) != 0u) {
                        r12 = r12 | 0x2000000u;
                    }
                    r8 = (u32)rd16(r10 + 0x60u);
                    wr16(r11 + 0x68u, (u16)r8);
                    if (r8 != 0u) {
                        r12 = r12 | 0x20000000u;
                    }
                    r8 = (u32)((s32)ppc_mulhw(715827883, (s32)((u32)rd16(r10 + 0x62u) - (u32)rd16(r10 + 0x60u))) >> 4);
                    r9 = r8 + ((r8 >> 0x1fu) & 1u);
                    wr16(r11 + 0x6au, (u16)r9);
                    if ((r9 & 0xffffu) != 0u) {
                        r12 = r12 | 0x40000000u;
                    }
                    wr32(r11 + 0x34u, r12);
                    wr32(r11 + 0x1cu, rd32(r11 + 0x1cu) | 0x12u);
                }
            }
            r7 = r7 + 0x64u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    return;
}
