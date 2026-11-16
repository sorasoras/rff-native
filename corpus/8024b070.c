#include "tc_rt.h"

void fn_8024b070(void)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r26 = 0, r27 = 0;
    TcArgs a = {0};
    if (rd32(0x8057191cu) != 0u) {
        r26 = 0u;
        r27 = 0u;
        while (r26 < rd32(0x80571920u)) {
            r4 = rd32(0x80571918u);
            r3 = 0u;
            r0 = 0u;
            r5 = r4 + r27;
            r4 = rd32(r4 + r27);
            if (r4 != 0u) {
                r6 = 0u;
                if ((rd32(r5 + 4u) & 0x20000000u) != 0u) {
                    r3 = 1u;
                    wr16(r5 + 0x3cu, rd16(r5 + 0x3eu));
                    wr32(r5 + 4u, rd32(r5 + 4u) & 0xdfffffffu);
                }
                r8 = rd32(r5 + 4u);
                if ((r8 & 0x10000000u) != 0u) {
                    if ((r8 & 8u) == 0u) {
                        r3 = rd32(r5 + 8u);
                        if ((s32)r3 > -904) {
                            if ((s32)r3 < 60) {
                                r3 = (r3 << 1u) & 0xfffffffeu;
                                r3 = r3 - 0x7fc72ed0u;
                                r3 = (u32)rd16(r3 + 0x710u);
                            } else {
                                r3 = 0xff64u;
                            }
                        } else {
                            r3 = 0u;
                        }
                        wr16(r5 + 0x3eu, (u16)r3);
                    } else {
                        wr16(r5 + 0x3eu, 0u);
                    }
                    r3 = 1u;
                    wr32(r5 + 4u, (rd32(r5 + 4u) & 0xefffffffu) | 0x20000000u);
                }
                if ((rd32(r5 + 4u) & 0x80000000u) != 0u) {
                    r0 = 1u;
                    wr16(r5 + 0x40u, rd16(r5 + 0x42u));
                    wr16(r5 + 0x44u, rd16(r5 + 0x46u));
                    wr16(r5 + 0x48u, rd16(r5 + 0x4au));
                    wr16(r5 + 0x4cu, rd16(r5 + 0x4eu));
                    wr16(r5 + 0x50u, rd16(r5 + 0x52u));
                    wr16(r5 + 0x54u, rd16(r5 + 0x56u));
                    wr16(r5 + 0x58u, rd16(r5 + 0x5au));
                    wr16(r5 + 0x5cu, rd16(r5 + 0x5eu));
                    wr16(r5 + 0x60u, rd16(r5 + 0x62u));
                    wr16(r5 + 0x64u, rd16(r5 + 0x66u));
                    wr16(r5 + 0x68u, rd16(r5 + 0x6au));
                    wr16(r5 + 0x6cu, rd16(r5 + 0x6eu));
                    wr32(r5 + 4u, rd32(r5 + 4u) & 0x7fffffffu);
                }
                if ((rd32(r5 + 4u) & 0x40000000u) != 0u) {
                    r0 = rd32(0x80571924u);
                    c0lt = (s32)r0 < 3;
                    if (r0 == 3u) {
                        r0 = rd32(r5 + 0x24u) + (rd32(r5 + 0x2cu) + rd32(r5 + 0x20u));
                        if ((s32)r0 > -904) {
                            if ((s32)r0 < 60) {
                                r0 = (r0 << 1u) & 0xfffffffeu;
                                r0 = (u32)rd16(r0 - 0x7fc727c0u);
                            } else {
                                r0 = 0xff64u;
                            }
                        } else {
                            r0 = 0u;
                        }
                        wr16(r5 + 0x42u, (u16)r0);
                        r0 = rd32(r5 + 0x28u) + (rd32(r5 + 0x2cu) + rd32(r5 + 0x20u));
                        if ((s32)r0 > -904) {
                            if ((s32)r0 < 60) {
                                r0 = (r0 << 1u) & 0xfffffffeu;
                                r0 = (u32)rd16(r0 - 0x7fc727c0u);
                            } else {
                                r0 = 0xff64u;
                            }
                        } else {
                            r0 = 0u;
                        }
                        wr16(r5 + 0x46u, (u16)r0);
                        r0 = rd32(r5 + 0x34u) + (rd32(r5 + 0x30u) + rd32(r5 + 0x20u));
                        if ((s32)r0 > -904) {
                            if ((s32)r0 < 60) {
                                r0 = (r0 << 1u) & 0xfffffffeu;
                                r0 = (u32)rd16(r0 - 0x7fc727c0u);
                            } else {
                                r0 = 0xff64u;
                            }
                        } else {
                            r0 = 0u;
                        }
                        wr16(r5 + 0x4au, (u16)r0);
                        r0 = rd32(r5 + 0x38u) + (rd32(r5 + 0x30u) + rd32(r5 + 0x20u));
                        if ((s32)r0 > -904) {
                            if ((s32)r0 < 60) {
                                r0 = (r0 << 1u) & 0xfffffffeu;
                                r0 = (u32)rd16(r0 - 0x7fc727c0u);
                            } else {
                                r0 = 0xff64u;
                            }
                        } else {
                            r0 = 0u;
                        }
                        wr16(r5 + 0x66u, (u16)r0);
                        if ((rd32(r5 + 4u) & 1u) == 0u) {
                            r0 = rd32(r5 + 0x2cu) + rd32(r5 + 0x24u) + (rd32(r5 + 0x20u) + rd32(r5 + 0xcu));
                            if ((s32)r0 > -904) {
                                if ((s32)r0 < 60) {
                                    r0 = (r0 << 1u) & 0xfffffffeu;
                                    r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                } else {
                                    r0 = 0xff64u;
                                }
                            } else {
                                r0 = 0u;
                            }
                            wr16(r5 + 0x4eu, (u16)r0);
                            r0 = rd32(r5 + 0x2cu) + rd32(r5 + 0x28u) + (rd32(r5 + 0x20u) + rd32(r5 + 0xcu));
                            if ((s32)r0 > -904) {
                                if ((s32)r0 < 60) {
                                    r0 = (r0 << 1u) & 0xfffffffeu;
                                    r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                } else {
                                    r0 = 0xff64u;
                                }
                            } else {
                                r0 = 0u;
                            }
                            wr16(r5 + 0x52u, (u16)r0);
                            r0 = rd32(r5 + 0x30u) + rd32(r5 + 0x34u) + (rd32(r5 + 0x20u) + rd32(r5 + 0xcu));
                            if ((s32)r0 > -904) {
                                if ((s32)r0 < 60) {
                                    r0 = (r0 << 1u) & 0xfffffffeu;
                                    r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                } else {
                                    r0 = 0xff64u;
                                }
                            } else {
                                r0 = 0u;
                            }
                            wr16(r5 + 0x56u, (u16)r0);
                            r0 = rd32(r5 + 0x30u) + rd32(r5 + 0x38u) + (rd32(r5 + 0x20u) + rd32(r5 + 0xcu));
                            if ((s32)r0 > -904) {
                                if ((s32)r0 < 60) {
                                    r0 = (r0 << 1u) & 0xfffffffeu;
                                    r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                } else {
                                    r0 = 0xff64u;
                                }
                            } else {
                                r0 = 0u;
                            }
                            wr16(r5 + 0x6au, (u16)r0);
                        } else {
                            r0 = rd32(r5 + 0x24u) + (rd32(r5 + 0x2cu) + rd32(r5 + 0xcu));
                            if ((s32)r0 > -904) {
                                if ((s32)r0 < 60) {
                                    r0 = (r0 << 1u) & 0xfffffffeu;
                                    r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                } else {
                                    r0 = 0xff64u;
                                }
                            } else {
                                r0 = 0u;
                            }
                            wr16(r5 + 0x4eu, (u16)r0);
                            r0 = rd32(r5 + 0x28u) + (rd32(r5 + 0x2cu) + rd32(r5 + 0xcu));
                            if ((s32)r0 > -904) {
                                if ((s32)r0 < 60) {
                                    r0 = (r0 << 1u) & 0xfffffffeu;
                                    r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                } else {
                                    r0 = 0xff64u;
                                }
                            } else {
                                r0 = 0u;
                            }
                            wr16(r5 + 0x52u, (u16)r0);
                            r0 = rd32(r5 + 0x34u) + (rd32(r5 + 0x30u) + rd32(r5 + 0xcu));
                            if ((s32)r0 > -904) {
                                if ((s32)r0 < 60) {
                                    r0 = (r0 << 1u) & 0xfffffffeu;
                                    r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                } else {
                                    r0 = 0xff64u;
                                }
                            } else {
                                r0 = 0u;
                            }
                            wr16(r5 + 0x56u, (u16)r0);
                            r0 = rd32(r5 + 0x38u) + (rd32(r5 + 0x30u) + rd32(r5 + 0xcu));
                            if ((s32)r0 > -904) {
                                if ((s32)r0 < 60) {
                                    r0 = (r0 << 1u) & 0xfffffffeu;
                                    r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                } else {
                                    r0 = 0xff64u;
                                }
                            } else {
                                r0 = 0u;
                            }
                            wr16(r5 + 0x6au, (u16)r0);
                        }
                        if ((rd32(r5 + 4u) & 2u) == 0u) {
                            r0 = rd32(r5 + 0x2cu) + rd32(r5 + 0x24u) + (rd32(r5 + 0x20u) + rd32(r5 + 0x10u));
                            if ((s32)r0 > -904) {
                                if ((s32)r0 < 60) {
                                    r0 = (r0 << 1u) & 0xfffffffeu;
                                    r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                } else {
                                    r0 = 0xff64u;
                                }
                            } else {
                                r0 = 0u;
                            }
                            wr16(r5 + 0x5au, (u16)r0);
                            r0 = rd32(r5 + 0x2cu) + rd32(r5 + 0x28u) + (rd32(r5 + 0x20u) + rd32(r5 + 0x10u));
                            if ((s32)r0 > -904) {
                                if ((s32)r0 < 60) {
                                    r0 = (r0 << 1u) & 0xfffffffeu;
                                    r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                } else {
                                    r0 = 0xff64u;
                                }
                            } else {
                                r0 = 0u;
                            }
                            wr16(r5 + 0x5eu, (u16)r0);
                            r0 = rd32(r5 + 0x30u) + rd32(r5 + 0x34u) + (rd32(r5 + 0x20u) + rd32(r5 + 0x10u));
                            if ((s32)r0 > -904) {
                                if ((s32)r0 < 60) {
                                    r0 = (r0 << 1u) & 0xfffffffeu;
                                    r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                } else {
                                    r0 = 0xff64u;
                                }
                            } else {
                                r0 = 0u;
                            }
                            wr16(r5 + 0x62u, (u16)r0);
                            r0 = rd32(r5 + 0x30u) + rd32(r5 + 0x38u) + (rd32(r5 + 0x20u) + rd32(r5 + 0x10u));
                            if ((s32)r0 > -904) {
                                if ((s32)r0 < 60) {
                                    r0 = (r0 << 1u) & 0xfffffffeu;
                                    r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                } else {
                                    r0 = 0xff64u;
                                }
                            } else {
                                r0 = 0u;
                            }
                            wr16(r5 + 0x6eu, (u16)r0);
                        } else {
                            r0 = rd32(r5 + 0x24u) + (rd32(r5 + 0x2cu) + rd32(r5 + 0x10u));
                            if ((s32)r0 > -904) {
                                if ((s32)r0 < 60) {
                                    r0 = (r0 << 1u) & 0xfffffffeu;
                                    r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                } else {
                                    r0 = 0xff64u;
                                }
                            } else {
                                r0 = 0u;
                            }
                            wr16(r5 + 0x5au, (u16)r0);
                            r0 = rd32(r5 + 0x28u) + (rd32(r5 + 0x2cu) + rd32(r5 + 0x10u));
                            if ((s32)r0 > -904) {
                                if ((s32)r0 < 60) {
                                    r0 = (r0 << 1u) & 0xfffffffeu;
                                    r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                } else {
                                    r0 = 0xff64u;
                                }
                            } else {
                                r0 = 0u;
                            }
                            wr16(r5 + 0x5eu, (u16)r0);
                            r0 = rd32(r5 + 0x34u) + (rd32(r5 + 0x30u) + rd32(r5 + 0x10u));
                            if ((s32)r0 > -904) {
                                if ((s32)r0 < 60) {
                                    r0 = (r0 << 1u) & 0xfffffffeu;
                                    r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                } else {
                                    r0 = 0xff64u;
                                }
                            } else {
                                r0 = 0u;
                            }
                            wr16(r5 + 0x62u, (u16)r0);
                            r0 = rd32(r5 + 0x38u) + (rd32(r5 + 0x30u) + rd32(r5 + 0x10u));
                            if ((s32)r0 > -904) {
                                if ((s32)r0 < 60) {
                                    r0 = (r0 << 1u) & 0xfffffffeu;
                                    r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                } else {
                                    r0 = 0xff64u;
                                }
                            } else {
                                r0 = 0u;
                            }
                            wr16(r5 + 0x6eu, (u16)r0);
                        }
                        r6 = 0x80000000u;
                    } else if (c0lt) {
                        c0lt = (s32)r0 < 0;
                        if (r0 == 0u) {
                            r0 = rd32(r5 + 0x20u) + rd32(r5 + 0x2cu);
                            if ((s32)r0 > -904) {
                                if ((s32)r0 < 60) {
                                    r0 = (r0 << 1u) & 0xfffffffeu;
                                    r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                } else {
                                    r0 = 0xff64u;
                                }
                            } else {
                                r0 = 0u;
                            }
                            wr16(r5 + 0x42u, (u16)r0);
                            r0 = rd32(r5 + 0x20u) + rd32(r5 + 0x2cu);
                            if ((s32)r0 > -904) {
                                if ((s32)r0 < 60) {
                                    r0 = (r0 << 1u) & 0xfffffffeu;
                                    r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                } else {
                                    r0 = 0xff64u;
                                }
                            } else {
                                r0 = 0u;
                            }
                            wr16(r5 + 0x46u, (u16)r0);
                            r7 = rd32(r5 + 0x20u) + rd32(r5 + 0x30u) - 0x1eu;
                            if ((s32)r7 > -904) {
                                if ((s32)r7 < 60) {
                                    r7 = ((r7 << 1u) & 0xfffffffeu) - 0x7fc72ed0u;
                                    r0 = (u32)rd16(r7 + 0x710u);
                                } else {
                                    r0 = 0xff64u;
                                }
                            } else {
                                r0 = 0u;
                            }
                            wr16(r5 + 0x4au, (u16)r0);
                            if ((rd32(r5 + 4u) & 1u) == 0u) {
                                r0 = rd32(r5 + 0xcu) + (rd32(r5 + 0x2cu) + rd32(r5 + 0x20u));
                                if ((s32)r0 > -904) {
                                    if ((s32)r0 < 60) {
                                        r0 = (r0 << 1u) & 0xfffffffeu;
                                        r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                    } else {
                                        r0 = 0xff64u;
                                    }
                                } else {
                                    r0 = 0u;
                                }
                                wr16(r5 + 0x4eu, (u16)r0);
                                r0 = rd32(r5 + 0xcu) + (rd32(r5 + 0x2cu) + rd32(r5 + 0x20u));
                                if ((s32)r0 > -904) {
                                    if ((s32)r0 < 60) {
                                        r0 = (r0 << 1u) & 0xfffffffeu;
                                        r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                    } else {
                                        r0 = 0xff64u;
                                    }
                                } else {
                                    r0 = 0u;
                                }
                                wr16(r5 + 0x52u, (u16)r0);
                                r7 = rd32(r5 + 0x20u) + rd32(r5 + 0xcu) + rd32(r5 + 0x30u) - 0x1eu;
                                if ((s32)r7 > -904) {
                                    if ((s32)r7 < 60) {
                                        r7 = ((r7 << 1u) & 0xfffffffeu) - 0x7fc72ed0u;
                                        r0 = (u32)rd16(r7 + 0x710u);
                                    } else {
                                        r0 = 0xff64u;
                                    }
                                } else {
                                    r0 = 0u;
                                }
                                wr16(r5 + 0x56u, (u16)r0);
                            } else {
                                r0 = rd32(r5 + 0xcu) + rd32(r5 + 0x2cu);
                                if ((s32)r0 > -904) {
                                    if ((s32)r0 < 60) {
                                        r0 = (r0 << 1u) & 0xfffffffeu;
                                        r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                    } else {
                                        r0 = 0xff64u;
                                    }
                                } else {
                                    r0 = 0u;
                                }
                                wr16(r5 + 0x4eu, (u16)r0);
                                r0 = rd32(r5 + 0xcu) + rd32(r5 + 0x2cu);
                                if ((s32)r0 > -904) {
                                    if ((s32)r0 < 60) {
                                        r0 = (r0 << 1u) & 0xfffffffeu;
                                        r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                    } else {
                                        r0 = 0xff64u;
                                    }
                                } else {
                                    r0 = 0u;
                                }
                                wr16(r5 + 0x52u, (u16)r0);
                                r7 = rd32(r5 + 0xcu) + rd32(r5 + 0x30u) - 0x1eu;
                                if ((s32)r7 > -904) {
                                    if ((s32)r7 < 60) {
                                        r7 = ((r7 << 1u) & 0xfffffffeu) - 0x7fc72ed0u;
                                        r0 = (u32)rd16(r7 + 0x710u);
                                    } else {
                                        r0 = 0xff64u;
                                    }
                                } else {
                                    r0 = 0u;
                                }
                                wr16(r5 + 0x56u, (u16)r0);
                            }
                            if ((rd32(r5 + 4u) & 2u) == 0u) {
                                r0 = rd32(r5 + 0x10u) + (rd32(r5 + 0x2cu) + rd32(r5 + 0x20u));
                                if ((s32)r0 > -904) {
                                    if ((s32)r0 < 60) {
                                        r0 = (r0 << 1u) & 0xfffffffeu;
                                        r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                    } else {
                                        r0 = 0xff64u;
                                    }
                                } else {
                                    r0 = 0u;
                                }
                                wr16(r5 + 0x5au, (u16)r0);
                                r0 = rd32(r5 + 0x10u) + (rd32(r5 + 0x2cu) + rd32(r5 + 0x20u));
                                if ((s32)r0 > -904) {
                                    if ((s32)r0 < 60) {
                                        r0 = (r0 << 1u) & 0xfffffffeu;
                                        r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                    } else {
                                        r0 = 0xff64u;
                                    }
                                } else {
                                    r0 = 0u;
                                }
                                wr16(r5 + 0x5eu, (u16)r0);
                                r7 = rd32(r5 + 0x20u) + rd32(r5 + 0x10u) + rd32(r5 + 0x30u) - 0x1eu;
                                if ((s32)r7 > -904) {
                                    if ((s32)r7 < 60) {
                                        r7 = ((r7 << 1u) & 0xfffffffeu) - 0x7fc72ed0u;
                                        r0 = (u32)rd16(r7 + 0x710u);
                                    } else {
                                        r0 = 0xff64u;
                                    }
                                } else {
                                    r0 = 0u;
                                }
                                wr16(r5 + 0x62u, (u16)r0);
                            } else {
                                r0 = rd32(r5 + 0x10u) + rd32(r5 + 0x2cu);
                                if ((s32)r0 > -904) {
                                    if ((s32)r0 < 60) {
                                        r0 = (r0 << 1u) & 0xfffffffeu;
                                        r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                    } else {
                                        r0 = 0xff64u;
                                    }
                                } else {
                                    r0 = 0u;
                                }
                                wr16(r5 + 0x5au, (u16)r0);
                                r0 = rd32(r5 + 0x10u) + rd32(r5 + 0x2cu);
                                if ((s32)r0 > -904) {
                                    if ((s32)r0 < 60) {
                                        r0 = (r0 << 1u) & 0xfffffffeu;
                                        r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                    } else {
                                        r0 = 0xff64u;
                                    }
                                } else {
                                    r0 = 0u;
                                }
                                wr16(r5 + 0x5eu, (u16)r0);
                                r7 = rd32(r5 + 0x10u) + rd32(r5 + 0x30u) - 0x1eu;
                                if ((s32)r7 > -904) {
                                    if ((s32)r7 < 60) {
                                        r7 = ((r7 << 1u) & 0xfffffffeu) - 0x7fc72ed0u;
                                        r0 = (u32)rd16(r7 + 0x710u);
                                    } else {
                                        r0 = 0xff64u;
                                    }
                                } else {
                                    r0 = 0u;
                                }
                                wr16(r5 + 0x62u, (u16)r0);
                            }
                            if ((rd32(r5 + 4u) & 4u) == 0u) {
                                r0 = rd32(r5 + 0x14u) + (rd32(r5 + 0x2cu) + rd32(r5 + 0x20u));
                                if ((s32)r0 > -904) {
                                    if ((s32)r0 < 60) {
                                        r0 = (r0 << 1u) & 0xfffffffeu;
                                        r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                    } else {
                                        r0 = 0xff64u;
                                    }
                                } else {
                                    r0 = 0u;
                                }
                                wr16(r5 + 0x66u, (u16)r0);
                                r0 = rd32(r5 + 0x14u) + (rd32(r5 + 0x2cu) + rd32(r5 + 0x20u));
                                if ((s32)r0 > -904) {
                                    if ((s32)r0 < 60) {
                                        r0 = (r0 << 1u) & 0xfffffffeu;
                                        r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                    } else {
                                        r0 = 0xff64u;
                                    }
                                } else {
                                    r0 = 0u;
                                }
                                wr16(r5 + 0x6au, (u16)r0);
                                r7 = rd32(r5 + 0x20u) + rd32(r5 + 0x14u) + rd32(r5 + 0x30u) - 0x1eu;
                                if ((s32)r7 > -904) {
                                    if ((s32)r7 < 60) {
                                        r7 = ((r7 << 1u) & 0xfffffffeu) - 0x7fc72ed0u;
                                        r0 = (u32)rd16(r7 + 0x710u);
                                    } else {
                                        r0 = 0xff64u;
                                    }
                                } else {
                                    r0 = 0u;
                                }
                                wr16(r5 + 0x6eu, (u16)r0);
                            } else {
                                r0 = rd32(r5 + 0x14u) + rd32(r5 + 0x2cu);
                                if ((s32)r0 > -904) {
                                    if ((s32)r0 < 60) {
                                        r0 = (r0 << 1u) & 0xfffffffeu;
                                        r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                    } else {
                                        r0 = 0xff64u;
                                    }
                                } else {
                                    r0 = 0u;
                                }
                                wr16(r5 + 0x66u, (u16)r0);
                                r0 = rd32(r5 + 0x14u) + rd32(r5 + 0x2cu);
                                if ((s32)r0 > -904) {
                                    if ((s32)r0 < 60) {
                                        r0 = (r0 << 1u) & 0xfffffffeu;
                                        r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                    } else {
                                        r0 = 0xff64u;
                                    }
                                } else {
                                    r0 = 0u;
                                }
                                wr16(r5 + 0x6au, (u16)r0);
                                r7 = rd32(r5 + 0x14u) + rd32(r5 + 0x30u) - 0x1eu;
                                if ((s32)r7 > -904) {
                                    if ((s32)r7 < 60) {
                                        r7 = ((r7 << 1u) & 0xfffffffeu) - 0x7fc72ed0u;
                                        r0 = (u32)rd16(r7 + 0x710u);
                                    } else {
                                        r0 = 0xff64u;
                                    }
                                } else {
                                    r0 = 0u;
                                }
                                wr16(r5 + 0x6eu, (u16)r0);
                            }
                        } else if (!c0lt) {
                            r0 = rd32(r5 + 0x24u) + (rd32(r5 + 0x2cu) + rd32(r5 + 0x20u));
                            if ((s32)r0 > -904) {
                                if ((s32)r0 < 60) {
                                    r0 = (r0 << 1u) & 0xfffffffeu;
                                    r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                } else {
                                    r0 = 0xff64u;
                                }
                            } else {
                                r0 = 0u;
                            }
                            wr16(r5 + 0x42u, (u16)r0);
                            r0 = rd32(r5 + 0x28u) + (rd32(r5 + 0x2cu) + rd32(r5 + 0x20u));
                            if ((s32)r0 > -904) {
                                if ((s32)r0 < 60) {
                                    r0 = (r0 << 1u) & 0xfffffffeu;
                                    r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                } else {
                                    r0 = 0xff64u;
                                }
                            } else {
                                r0 = 0u;
                            }
                            wr16(r5 + 0x46u, (u16)r0);
                            r7 = rd32(r5 + 0x20u) + rd32(r5 + 0x30u) - 0x1eu;
                            if ((s32)r7 > -904) {
                                if ((s32)r7 < 60) {
                                    r7 = ((r7 << 1u) & 0xfffffffeu) - 0x7fc72ed0u;
                                    r0 = (u32)rd16(r7 + 0x710u);
                                } else {
                                    r0 = 0xff64u;
                                }
                            } else {
                                r0 = 0u;
                            }
                            wr16(r5 + 0x4au, (u16)r0);
                            if ((rd32(r5 + 4u) & 1u) == 0u) {
                                r0 = rd32(r5 + 0x2cu) + rd32(r5 + 0x24u) + (rd32(r5 + 0x20u) + rd32(r5 + 0xcu));
                                if ((s32)r0 > -904) {
                                    if ((s32)r0 < 60) {
                                        r0 = (r0 << 1u) & 0xfffffffeu;
                                        r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                    } else {
                                        r0 = 0xff64u;
                                    }
                                } else {
                                    r0 = 0u;
                                }
                                wr16(r5 + 0x4eu, (u16)r0);
                                r0 = rd32(r5 + 0x2cu) + rd32(r5 + 0x28u) + (rd32(r5 + 0x20u) + rd32(r5 + 0xcu));
                                if ((s32)r0 > -904) {
                                    if ((s32)r0 < 60) {
                                        r0 = (r0 << 1u) & 0xfffffffeu;
                                        r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                    } else {
                                        r0 = 0xff64u;
                                    }
                                } else {
                                    r0 = 0u;
                                }
                                wr16(r5 + 0x52u, (u16)r0);
                                r7 = rd32(r5 + 0x20u) + rd32(r5 + 0xcu) + rd32(r5 + 0x30u) - 0x1eu;
                                if ((s32)r7 > -904) {
                                    if ((s32)r7 < 60) {
                                        r7 = ((r7 << 1u) & 0xfffffffeu) - 0x7fc72ed0u;
                                        r0 = (u32)rd16(r7 + 0x710u);
                                    } else {
                                        r0 = 0xff64u;
                                    }
                                } else {
                                    r0 = 0u;
                                }
                                wr16(r5 + 0x56u, (u16)r0);
                            } else {
                                r0 = rd32(r5 + 0x24u) + (rd32(r5 + 0x2cu) + rd32(r5 + 0xcu));
                                if ((s32)r0 > -904) {
                                    if ((s32)r0 < 60) {
                                        r0 = (r0 << 1u) & 0xfffffffeu;
                                        r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                    } else {
                                        r0 = 0xff64u;
                                    }
                                } else {
                                    r0 = 0u;
                                }
                                wr16(r5 + 0x4eu, (u16)r0);
                                r0 = rd32(r5 + 0x28u) + (rd32(r5 + 0x2cu) + rd32(r5 + 0xcu));
                                if ((s32)r0 > -904) {
                                    if ((s32)r0 < 60) {
                                        r0 = (r0 << 1u) & 0xfffffffeu;
                                        r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                    } else {
                                        r0 = 0xff64u;
                                    }
                                } else {
                                    r0 = 0u;
                                }
                                wr16(r5 + 0x52u, (u16)r0);
                                r7 = rd32(r5 + 0xcu) + rd32(r5 + 0x30u) - 0x1eu;
                                if ((s32)r7 > -904) {
                                    if ((s32)r7 < 60) {
                                        r7 = ((r7 << 1u) & 0xfffffffeu) - 0x7fc72ed0u;
                                        r0 = (u32)rd16(r7 + 0x710u);
                                    } else {
                                        r0 = 0xff64u;
                                    }
                                } else {
                                    r0 = 0u;
                                }
                                wr16(r5 + 0x56u, (u16)r0);
                            }
                            if ((rd32(r5 + 4u) & 2u) == 0u) {
                                r0 = rd32(r5 + 0x2cu) + rd32(r5 + 0x24u) + (rd32(r5 + 0x20u) + rd32(r5 + 0x10u));
                                if ((s32)r0 > -904) {
                                    if ((s32)r0 < 60) {
                                        r0 = (r0 << 1u) & 0xfffffffeu;
                                        r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                    } else {
                                        r0 = 0xff64u;
                                    }
                                } else {
                                    r0 = 0u;
                                }
                                wr16(r5 + 0x5au, (u16)r0);
                                r0 = rd32(r5 + 0x2cu) + rd32(r5 + 0x28u) + (rd32(r5 + 0x20u) + rd32(r5 + 0x10u));
                                if ((s32)r0 > -904) {
                                    if ((s32)r0 < 60) {
                                        r0 = (r0 << 1u) & 0xfffffffeu;
                                        r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                    } else {
                                        r0 = 0xff64u;
                                    }
                                } else {
                                    r0 = 0u;
                                }
                                wr16(r5 + 0x5eu, (u16)r0);
                                r7 = rd32(r5 + 0x20u) + rd32(r5 + 0x10u) + rd32(r5 + 0x30u) - 0x1eu;
                                if ((s32)r7 > -904) {
                                    if ((s32)r7 < 60) {
                                        r7 = ((r7 << 1u) & 0xfffffffeu) - 0x7fc72ed0u;
                                        r0 = (u32)rd16(r7 + 0x710u);
                                    } else {
                                        r0 = 0xff64u;
                                    }
                                } else {
                                    r0 = 0u;
                                }
                                wr16(r5 + 0x62u, (u16)r0);
                            } else {
                                r0 = rd32(r5 + 0x24u) + (rd32(r5 + 0x2cu) + rd32(r5 + 0x10u));
                                if ((s32)r0 > -904) {
                                    if ((s32)r0 < 60) {
                                        r0 = (r0 << 1u) & 0xfffffffeu;
                                        r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                    } else {
                                        r0 = 0xff64u;
                                    }
                                } else {
                                    r0 = 0u;
                                }
                                wr16(r5 + 0x5au, (u16)r0);
                                r0 = rd32(r5 + 0x28u) + (rd32(r5 + 0x2cu) + rd32(r5 + 0x10u));
                                if ((s32)r0 > -904) {
                                    if ((s32)r0 < 60) {
                                        r0 = (r0 << 1u) & 0xfffffffeu;
                                        r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                    } else {
                                        r0 = 0xff64u;
                                    }
                                } else {
                                    r0 = 0u;
                                }
                                wr16(r5 + 0x5eu, (u16)r0);
                                r7 = rd32(r5 + 0x10u) + rd32(r5 + 0x30u) - 0x1eu;
                                if ((s32)r7 > -904) {
                                    if ((s32)r7 < 60) {
                                        r7 = ((r7 << 1u) & 0xfffffffeu) - 0x7fc72ed0u;
                                        r0 = (u32)rd16(r7 + 0x710u);
                                    } else {
                                        r0 = 0xff64u;
                                    }
                                } else {
                                    r0 = 0u;
                                }
                                wr16(r5 + 0x62u, (u16)r0);
                            }
                            if ((rd32(r5 + 4u) & 4u) == 0u) {
                                r0 = rd32(r5 + 0x2cu) + rd32(r5 + 0x24u) + (rd32(r5 + 0x20u) + rd32(r5 + 0x14u));
                                if ((s32)r0 > -904) {
                                    if ((s32)r0 < 60) {
                                        r0 = (r0 << 1u) & 0xfffffffeu;
                                        r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                    } else {
                                        r0 = 0xff64u;
                                    }
                                } else {
                                    r0 = 0u;
                                }
                                wr16(r5 + 0x66u, (u16)r0);
                                r0 = rd32(r5 + 0x2cu) + rd32(r5 + 0x28u) + (rd32(r5 + 0x20u) + rd32(r5 + 0x14u));
                                if ((s32)r0 > -904) {
                                    if ((s32)r0 < 60) {
                                        r0 = (r0 << 1u) & 0xfffffffeu;
                                        r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                    } else {
                                        r0 = 0xff64u;
                                    }
                                } else {
                                    r0 = 0u;
                                }
                                wr16(r5 + 0x6au, (u16)r0);
                                r7 = rd32(r5 + 0x20u) + rd32(r5 + 0x14u) + rd32(r5 + 0x30u) - 0x1eu;
                                if ((s32)r7 > -904) {
                                    if ((s32)r7 < 60) {
                                        r7 = ((r7 << 1u) & 0xfffffffeu) - 0x7fc72ed0u;
                                        r0 = (u32)rd16(r7 + 0x710u);
                                    } else {
                                        r0 = 0xff64u;
                                    }
                                } else {
                                    r0 = 0u;
                                }
                                wr16(r5 + 0x6eu, (u16)r0);
                            } else {
                                r0 = rd32(r5 + 0x24u) + (rd32(r5 + 0x2cu) + rd32(r5 + 0x14u));
                                if ((s32)r0 > -904) {
                                    if ((s32)r0 < 60) {
                                        r0 = (r0 << 1u) & 0xfffffffeu;
                                        r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                    } else {
                                        r0 = 0xff64u;
                                    }
                                } else {
                                    r0 = 0u;
                                }
                                wr16(r5 + 0x66u, (u16)r0);
                                r0 = rd32(r5 + 0x28u) + (rd32(r5 + 0x2cu) + rd32(r5 + 0x14u));
                                if ((s32)r0 > -904) {
                                    if ((s32)r0 < 60) {
                                        r0 = (r0 << 1u) & 0xfffffffeu;
                                        r0 = (u32)rd16(r0 - 0x7fc727c0u);
                                    } else {
                                        r0 = 0xff64u;
                                    }
                                } else {
                                    r0 = 0u;
                                }
                                wr16(r5 + 0x6au, (u16)r0);
                                r7 = rd32(r5 + 0x14u) + rd32(r5 + 0x30u) - 0x1eu;
                                if ((s32)r7 > -904) {
                                    if ((s32)r7 < 60) {
                                        r7 = ((r7 << 1u) & 0xfffffffeu) - 0x7fc72ed0u;
                                        r0 = (u32)rd16(r7 + 0x710u);
                                    } else {
                                        r0 = 0xff64u;
                                    }
                                } else {
                                    r0 = 0u;
                                }
                                wr16(r5 + 0x6eu, (u16)r0);
                            }
                        }
                    }
                    r0 = 1u;
                    wr32(r5 + 4u, (rd32(r5 + 4u) & 0xbfffffffu) | 0x80000000u);
                }
                if (r3 != 0u) {
                    wr16(r4 + 0x92u, rd16(r5 + 0x3cu));
                    r3 = (u32)((s32)ppc_mulhw(715827883, (s32)((u32)rd16(r5 + 0x3eu) - (u32)rd16(r5 + 0x3cu))) >> 4);
                    r3 = r3 + ((r3 >> 0x1fu) & 1u);
                    wr16(r4 + 0x94u, (u16)r3);
                    wr32(r4 + 0x1cu, rd32(r4 + 0x1cu) | 0x100u);
                }
                if (r0 != 0u) {
                    r0 = (u32)rd16(r5 + 0x40u);
                    r3 = r4 + 0x3eu;
                    wr16(r4 + 0x3cu, (u16)r0);
                    if (r0 != 0u) {
                        r6 = r6 | 1u;
                    }
                    r0 = (u32)((s32)ppc_mulhw(715827883, (s32)((u32)rd16(r5 + 0x42u) - (u32)rd16(r5 + 0x40u))) >> 4);
                    r7 = r0 + ((r0 >> 0x1fu) & 1u);
                    wr16(r3, (u16)r7);
                    if ((r7 & 0xffffu) != 0u) {
                        r6 = r6 | 4u;
                    }
                    r0 = (u32)rd16(r5 + 0x44u);
                    wr16(r3 + 2u, (u16)r0);
                    if (r0 != 0u) {
                        r6 = r6 | 2u;
                    }
                    r0 = (u32)((s32)ppc_mulhw(715827883, (s32)((u32)rd16(r5 + 0x46u) - (u32)rd16(r5 + 0x44u))) >> 4);
                    r7 = r0 + ((r0 >> 0x1fu) & 1u);
                    wr16(r3 + 4u, (u16)r7);
                    if ((r7 & 0xffffu) != 0u) {
                        r6 = r6 | 4u;
                    }
                    r0 = (u32)rd16(r5 + 0x4cu);
                    wr16(r3 + 6u, (u16)r0);
                    if (r0 != 0u) {
                        r6 = r6 | 0x10000u;
                    }
                    r0 = (u32)((s32)ppc_mulhw(715827883, (s32)((u32)rd16(r5 + 0x4eu) - (u32)rd16(r5 + 0x4cu))) >> 4);
                    r7 = r0 + ((r0 >> 0x1fu) & 1u);
                    wr16(r3 + 8u, (u16)r7);
                    if ((r7 & 0xffffu) != 0u) {
                        r6 = r6 | 0x40000u;
                    }
                    r0 = (u32)rd16(r5 + 0x50u);
                    wr16(r3 + 0xau, (u16)r0);
                    if (r0 != 0u) {
                        r6 = r6 | 0x20000u;
                    }
                    r0 = (u32)((s32)ppc_mulhw(715827883, (s32)((u32)rd16(r5 + 0x52u) - (u32)rd16(r5 + 0x50u))) >> 4);
                    r7 = r0 + ((r0 >> 0x1fu) & 1u);
                    wr16(r3 + 0xcu, (u16)r7);
                    if ((r7 & 0xffffu) != 0u) {
                        r6 = r6 | 0x40000u;
                    }
                    r0 = (u32)rd16(r5 + 0x58u);
                    wr16(r3 + 0xeu, (u16)r0);
                    if (r0 != 0u) {
                        r6 = r6 | 0x200000u;
                    }
                    r0 = (u32)((s32)ppc_mulhw(715827883, (s32)((u32)rd16(r5 + 0x5au) - (u32)rd16(r5 + 0x58u))) >> 4);
                    r7 = r0 + ((r0 >> 0x1fu) & 1u);
                    wr16(r3 + 0x10u, (u16)r7);
                    if ((r7 & 0xffffu) != 0u) {
                        r6 = r6 | 0x800000u;
                    }
                    r0 = (u32)rd16(r5 + 0x5cu);
                    wr16(r3 + 0x12u, (u16)r0);
                    if (r0 != 0u) {
                        r6 = r6 | 0x400000u;
                    }
                    r0 = (u32)((s32)ppc_mulhw(715827883, (s32)((u32)rd16(r5 + 0x5eu) - (u32)rd16(r5 + 0x5cu))) >> 4);
                    r7 = r0 + ((r0 >> 0x1fu) & 1u);
                    wr16(r3 + 0x14u, (u16)r7);
                    if ((r7 & 0xffffu) != 0u) {
                        r6 = r6 | 0x800000u;
                    }
                    r0 = (u32)rd16(r5 + 0x64u);
                    wr16(r3 + 0x16u, (u16)r0);
                    if (r0 != 0u) {
                        r6 = r6 | 0x4000000u;
                    }
                    r0 = (u32)((s32)ppc_mulhw(715827883, (s32)((u32)rd16(r5 + 0x66u) - (u32)rd16(r5 + 0x64u))) >> 4);
                    r7 = r0 + ((r0 >> 0x1fu) & 1u);
                    wr16(r3 + 0x18u, (u16)r7);
                    if ((r7 & 0xffffu) != 0u) {
                        r6 = r6 | 0x10000000u;
                    }
                    r0 = (u32)rd16(r5 + 0x68u);
                    wr16(r3 + 0x1au, (u16)r0);
                    if (r0 != 0u) {
                        r6 = r6 | 0x8000000u;
                    }
                    r0 = (u32)((s32)ppc_mulhw(715827883, (s32)((u32)rd16(r5 + 0x6au) - (u32)rd16(r5 + 0x68u))) >> 4);
                    r7 = r0 + ((r0 >> 0x1fu) & 1u);
                    wr16(r3 + 0x1cu, (u16)r7);
                    if ((r7 & 0xffffu) != 0u) {
                        r6 = r6 | 0x10000000u;
                    }
                    r0 = (u32)rd16(r5 + 0x48u);
                    wr16(r3 + 0x1eu, (u16)r0);
                    if (r0 != 0u) {
                        r6 = r6 | 8u;
                    }
                    r0 = (u32)((s32)ppc_mulhw(715827883, (s32)((u32)rd16(r5 + 0x4au) - (u32)rd16(r5 + 0x48u))) >> 4);
                    r7 = r0 + ((r0 >> 0x1fu) & 1u);
                    wr16(r3 + 0x20u, (u16)r7);
                    if ((r7 & 0xffffu) != 0u) {
                        r6 = r6 | 0x10u;
                    }
                    r0 = (u32)rd16(r5 + 0x54u);
                    wr16(r3 + 0x22u, (u16)r0);
                    if (r0 != 0u) {
                        r6 = r6 | 0x80000u;
                    }
                    r0 = (u32)((s32)ppc_mulhw(715827883, (s32)((u32)rd16(r5 + 0x56u) - (u32)rd16(r5 + 0x54u))) >> 4);
                    r7 = r0 + ((r0 >> 0x1fu) & 1u);
                    wr16(r3 + 0x24u, (u16)r7);
                    if ((r7 & 0xffffu) != 0u) {
                        r6 = r6 | 0x100000u;
                    }
                    r0 = (u32)rd16(r5 + 0x60u);
                    wr16(r3 + 0x26u, (u16)r0);
                    if (r0 != 0u) {
                        r6 = r6 | 0x1000000u;
                    }
                    r0 = (u32)((s32)ppc_mulhw(715827883, (s32)((u32)rd16(r5 + 0x62u) - (u32)rd16(r5 + 0x60u))) >> 4);
                    r7 = r0 + ((r0 >> 0x1fu) & 1u);
                    wr16(r3 + 0x28u, (u16)r7);
                    if ((r7 & 0xffffu) != 0u) {
                        r6 = r6 | 0x2000000u;
                    }
                    r0 = (u32)rd16(r5 + 0x6cu);
                    wr16(r3 + 0x2au, (u16)r0);
                    if (r0 != 0u) {
                        r6 = r6 | 0x20000000u;
                    }
                    r0 = (u32)((s32)ppc_mulhw(715827883, (s32)((u32)rd16(r5 + 0x6eu) - (u32)rd16(r5 + 0x6cu))) >> 4);
                    r5 = r0 + ((r0 >> 0x1fu) & 1u);
                    wr16(r3 + 0x2cu, (u16)r5);
                    if ((r5 & 0xffffu) != 0u) {
                        r6 = r6 | 0x40000000u;
                    }
                    wr32(r4 + 0x34u, r6);
                    wr32(r4 + 0x1cu, rd32(r4 + 0x1cu) | 0x12u);
                }
                a.r[0] = r26;
                a.r[1] = r4;
                (void)tc_call(0x8024c700u, &a);
            }
            r27 = r27 + 0x70u;
            r26 = r26 + 1u;
        }
    }
    return;
}
