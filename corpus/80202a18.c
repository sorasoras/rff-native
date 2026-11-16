#include "tc_rt.h"

void fn_80202a18(s32 param_1, s32 param_2)
{
    u32 fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 2u;
    r5 = rd32((u32)param_2 + 0x3ecu);
    r31 = r5;
    if ((s32)r5 > (s32)rd32((u32)param_1 + 0xcu)) {
        r31 = 0u;
    }
    r0 = rd32(0x803541c4u);
    do {
        if ((r0 & 1u) == 0u) {
            r3 = rd32(0x803541c8u);
            if ((r3 & 4u) == 0u) {
                r8 = rd32(0x803541bcu);
                if (r8 != 0u) {
                    r4 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r4 != 1u) {
                        if (r4 != 2u) {
                            r6 = 0u;
                        } else {
                            r6 = rd32(0x80354164u);
                        }
                    } else {
                        r6 = rd32(0x80354130u);
                    }
                } else {
                    r6 = 0u;
                }
                if (r8 != 0u) {
                    r4 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r4 != 1u) {
                        if (r4 != 2u) {
                            r4 = 0u;
                        } else {
                            r4 = r6 & rd32(rd32(0x803541a8u));
                        }
                    } else {
                        r4 = r6 & rd32(rd32(0x80354198u));
                    }
                } else {
                    r4 = 0u;
                }
                if (r4 != 0u) break;
            }
            do {
                if ((r0 & 8u) == 0u) {
                    if ((r3 & 2u) == 0u) {
                        r7 = rd32(0x803541bcu);
                        if (r7 != 0u) {
                            r4 = rd32(rd32(0x805711ccu) + 0xfcu);
                            if (r4 != 1u) {
                                if (r4 != 2u) {
                                    r6 = 0u;
                                } else {
                                    r6 = rd32(0x8035416cu);
                                }
                            } else {
                                r6 = rd32(0x80354138u);
                            }
                        } else {
                            r6 = 0u;
                        }
                        if (r7 != 0u) {
                            r4 = rd32(rd32(0x805711ccu) + 0xfcu);
                            if (r4 != 1u) {
                                if (r4 != 2u) {
                                    r4 = 0u;
                                } else {
                                    r4 = r6 & rd32(rd32(0x803541a8u));
                                }
                            } else {
                                r4 = r6 & rd32(rd32(0x80354198u));
                            }
                        } else {
                            r4 = 0u;
                        }
                        if (r4 != 0u) break;
                    }
                    r0 = r0 & 2u;
                    if (r0 == 0u) {
                        if ((r3 & 8u) != 0u) {
                            fl_ = 1u;
                            break;
                        }
                        r6 = rd32(0x803541bcu);
                        if (r6 != 0u) {
                            r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                            if (r0 != 1u) {
                                if (r0 != 2u) {
                                    r4 = 0u;
                                } else {
                                    r4 = rd32(0x80354170u);
                                }
                            } else {
                                r4 = rd32(0x8035413cu);
                            }
                        } else {
                            r4 = 0u;
                        }
                        if (r6 != 0u) {
                            r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                            if (r0 != 1u) {
                                if (r0 != 2u) {
                                    r0 = 0u;
                                } else {
                                    r0 = r4 & rd32(rd32(0x803541a8u));
                                }
                            } else {
                                r0 = r4 & rd32(rd32(0x80354198u));
                            }
                        } else {
                            r0 = 0u;
                        }
                        if (r0 == 0u) {
                            fl_ = 1u;
                            break;
                        }
                    }
                    if (r31 != 1u) {
                        fl_ = 1u;
                        break;
                    }
                    r30 = 0u;
                    fl_ = 1u;
                    break;
                }
            } while (0);
            if (fl_ == 1u) {
                fl_ = 0u;
                fl_ = 2u;
                break;
            }
            if (r31 != 3u) {
                fl_ = 2u;
                break;
            }
            r30 = 1u;
            fl_ = 2u;
            break;
        }
    } while (0);
    if (fl_ == 2u) {
        fl_ = 0u;
    } else if (r31 == 0u) {
        r30 = 1u;
    }
    r7 = rd32(0x803541c8u);
    r10 = r7 & 1u;
    do {
        if (r10 != 0u) {
            r31 = 0u;
        } else {
            r9 = r7 & 4u;
            if (r9 == 0u) {
                r8 = rd32(0x803541bcu);
                if (r8 != 0u) {
                    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r0 != 1u) {
                        if (r0 != 2u) {
                            r4 = 0u;
                        } else {
                            r4 = rd32(0x80354164u);
                        }
                    } else {
                        r4 = rd32(0x80354130u);
                    }
                } else {
                    r4 = 0u;
                }
                if (r8 != 0u) {
                    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r0 != 1u) {
                        if (r0 != 2u) {
                            r0 = 0u;
                        } else {
                            r0 = r4 & rd32(rd32(0x803541acu));
                        }
                    } else {
                        r0 = r4 & rd32(rd32(0x8035419cu));
                    }
                } else {
                    r0 = 0u;
                }
                if (r0 != 0u) {
                    r31 = 0u;
                    break;
                }
            }
            if (r9 != 0u) {
                r31 = 2u;
            } else {
                if (r10 == 0u) {
                    r6 = rd32(0x803541bcu);
                    if (r6 != 0u) {
                        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                        if (r0 != 1u) {
                            if (r0 != 2u) {
                                r4 = 0u;
                            } else {
                                r4 = rd32(0x80354168u);
                            }
                        } else {
                            r4 = rd32(0x80354134u);
                        }
                    } else {
                        r4 = 0u;
                    }
                    if (r6 != 0u) {
                        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                        if (r0 != 1u) {
                            if (r0 != 2u) {
                                r0 = 0u;
                            } else {
                                r0 = r4 & rd32(rd32(0x803541acu));
                            }
                        } else {
                            r0 = r4 & rd32(rd32(0x8035419cu));
                        }
                    } else {
                        r0 = 0u;
                    }
                    if (r0 != 0u) {
                        r31 = 2u;
                        break;
                    }
                }
                r8 = r7 & 8u;
                do {
                    if (r8 == 0u) {
                        r7 = r7 & 2u;
                        if (r7 == 0u) {
                            r6 = rd32(0x803541bcu);
                            if (r6 != 0u) {
                                r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                                if (r0 != 1u) {
                                    if (r0 != 2u) {
                                        r4 = 0u;
                                    } else {
                                        r4 = rd32(0x8035416cu);
                                    }
                                } else {
                                    r4 = rd32(0x80354138u);
                                }
                            } else {
                                r4 = 0u;
                            }
                            if (r6 != 0u) {
                                r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                                if (r0 != 1u) {
                                    if (r0 != 2u) {
                                        r0 = 0u;
                                    } else {
                                        r0 = r4 & rd32(rd32(0x803541acu));
                                    }
                                } else {
                                    r0 = r4 & rd32(rd32(0x8035419cu));
                                }
                            } else {
                                r0 = 0u;
                            }
                            if (r0 != 0u) break;
                        }
                        if (r7 == 0u) {
                            if (r8 != 0u) {
                                fl_ = 3u;
                                break;
                            }
                            r6 = rd32(0x803541bcu);
                            if (r6 != 0u) {
                                r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                                if (r0 != 1u) {
                                    if (r0 != 2u) {
                                        r4 = 0u;
                                    } else {
                                        r4 = rd32(0x80354170u);
                                    }
                                } else {
                                    r4 = rd32(0x8035413cu);
                                }
                            } else {
                                r4 = 0u;
                            }
                            if (r6 != 0u) {
                                r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                                if (r0 != 1u) {
                                    if (r0 != 2u) {
                                        r0 = 0u;
                                    } else {
                                        r0 = r4 & rd32(rd32(0x803541acu));
                                    }
                                } else {
                                    r0 = r4 & rd32(rd32(0x8035419cu));
                                }
                            } else {
                                r0 = 0u;
                            }
                            if (r0 == 0u) {
                                fl_ = 3u;
                                break;
                            }
                        }
                        r31 = 1u;
                        fl_ = 3u;
                        break;
                    }
                } while (0);
                if (fl_ == 3u) {
                    fl_ = 0u;
                } else {
                    r31 = 3u;
                }
            }
        }
    } while (0);
    if (r30 != 2u) {
        a.r[0] = (u32)param_2;
        a.r[1] = r5;
        a.r[2] = r30;
        (void)tc_call(0x80119fb0u, &a);
        wr32((u32)param_2 + 0x3e8u, r30);
        r31 = 0u;
    }
    a.r[0] = (u32)param_2;
    a.r[1] = r31;
    a.r[2] = rd32((u32)param_2 + 0x3e8u);
    (void)tc_call(0x80119fb0u, &a);
    wr32((u32)param_2 + 0x3ecu, r31);
    return;
}
