#include "tc_rt.h"

void fn_80201bc4(s32 param_1, s32 param_2)
{
    u32 fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 1u;
    r0 = rd32((u32)param_2 + 0x3ecu);
    r31 = r0;
    if ((s32)r0 > (s32)rd32((u32)param_1 + 0xcu)) {
        r31 = 0u;
    }
    r6 = rd32(0x803541c4u);
    do {
        if ((r6 & 4u) == 0u) {
            r7 = rd32(0x803541c8u);
            if ((r7 & 1u) == 0u) {
                r5 = rd32(0x803541bcu);
                if (r5 != 0u) {
                    r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r3 != 1u) {
                        if (r3 != 2u) {
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
                if (r5 != 0u) {
                    r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r3 != 1u) {
                        if (r3 != 2u) {
                            r3 = 0u;
                        } else {
                            r3 = r4 & rd32(rd32(0x803541a8u));
                        }
                    } else {
                        r3 = r4 & rd32(rd32(0x80354198u));
                    }
                } else {
                    r3 = 0u;
                }
                if (r3 != 0u) break;
            }
            if ((r6 & 2u) == 0u) {
                if ((r7 & 8u) != 0u) {
                    fl_ = 1u;
                    break;
                }
                r5 = rd32(0x803541bcu);
                if (r5 != 0u) {
                    r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r3 != 1u) {
                        if (r3 != 2u) {
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
                if (r5 != 0u) {
                    r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r3 != 1u) {
                        if (r3 != 2u) {
                            r3 = 0u;
                        } else {
                            r3 = r4 & rd32(rd32(0x803541a8u));
                        }
                    } else {
                        r3 = r4 & rd32(rd32(0x80354198u));
                    }
                } else {
                    r3 = 0u;
                }
                if (r3 == 0u) {
                    fl_ = 1u;
                    break;
                }
            }
            if (r31 != 2u) {
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
    } else if ((r31 - 3u) <= 1u) {
        r30 = 2u;
    }
    r6 = rd32(0x803541c8u);
    r9 = r6 & 1u;
    do {
        if (r9 == 0u) {
            r8 = r6 & 4u;
            if (r8 == 0u) {
                r7 = rd32(0x803541bcu);
                if (r7 != 0u) {
                    r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r3 != 1u) {
                        if (r3 != 2u) {
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
                if (r7 != 0u) {
                    r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r3 != 1u) {
                        if (r3 != 2u) {
                            r3 = 0u;
                        } else {
                            r3 = r4 & rd32(rd32(0x803541acu));
                        }
                    } else {
                        r3 = r4 & rd32(rd32(0x8035419cu));
                    }
                } else {
                    r3 = 0u;
                }
                if (r3 != 0u) break;
            }
            do {
                if (r8 == 0u) {
                    if (r9 == 0u) {
                        r5 = rd32(0x803541bcu);
                        if (r5 != 0u) {
                            r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                            if (r3 != 1u) {
                                if (r3 != 2u) {
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
                        if (r5 != 0u) {
                            r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                            if (r3 != 1u) {
                                if (r3 != 2u) {
                                    r3 = 0u;
                                } else {
                                    r3 = r4 & rd32(rd32(0x803541acu));
                                }
                            } else {
                                r3 = r4 & rd32(rd32(0x8035419cu));
                            }
                        } else {
                            r3 = 0u;
                        }
                        if (r3 != 0u) break;
                    }
                    r7 = r6 & 8u;
                    do {
                        if (r7 == 0u) {
                            r6 = r6 & 2u;
                            if (r6 == 0u) {
                                r5 = rd32(0x803541bcu);
                                if (r5 != 0u) {
                                    r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                                    if (r3 != 1u) {
                                        if (r3 != 2u) {
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
                                if (r5 != 0u) {
                                    r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                                    if (r3 != 1u) {
                                        if (r3 != 2u) {
                                            r3 = 0u;
                                        } else {
                                            r3 = r4 & rd32(rd32(0x803541acu));
                                        }
                                    } else {
                                        r3 = r4 & rd32(rd32(0x8035419cu));
                                    }
                                } else {
                                    r3 = 0u;
                                }
                                if (r3 != 0u) break;
                            }
                            if (r6 == 0u) {
                                if (r7 != 0u) {
                                    fl_ = 2u;
                                    break;
                                }
                                r5 = rd32(0x803541bcu);
                                if (r5 != 0u) {
                                    r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                                    if (r3 != 1u) {
                                        if (r3 != 2u) {
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
                                if (r5 != 0u) {
                                    r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                                    if (r3 != 1u) {
                                        if (r3 != 2u) {
                                            r3 = 0u;
                                        } else {
                                            r3 = r4 & rd32(rd32(0x803541acu));
                                        }
                                    } else {
                                        r3 = r4 & rd32(rd32(0x8035419cu));
                                    }
                                } else {
                                    r3 = 0u;
                                }
                                if (r3 == 0u) {
                                    fl_ = 2u;
                                    break;
                                }
                            }
                            r31 = 2u;
                            fl_ = 2u;
                            break;
                        }
                    } while (0);
                    if (fl_ == 2u) {
                        fl_ = 0u;
                        fl_ = 3u;
                        break;
                    }
                    r31 = 6u;
                    fl_ = 3u;
                    break;
                }
            } while (0);
            if (fl_ == 3u) {
                fl_ = 0u;
                fl_ = 4u;
                break;
            }
            r7 = r6 & 8u;
            do {
                if (r7 == 0u) {
                    r6 = r6 & 2u;
                    if (r6 == 0u) {
                        r5 = rd32(0x803541bcu);
                        if (r5 != 0u) {
                            r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                            if (r3 != 1u) {
                                if (r3 != 2u) {
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
                        if (r5 != 0u) {
                            r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                            if (r3 != 1u) {
                                if (r3 != 2u) {
                                    r3 = 0u;
                                } else {
                                    r3 = r4 & rd32(rd32(0x803541acu));
                                }
                            } else {
                                r3 = r4 & rd32(rd32(0x8035419cu));
                            }
                        } else {
                            r3 = 0u;
                        }
                        if (r3 != 0u) break;
                    }
                    do {
                        if (r6 == 0u) {
                            if (r7 == 0u) {
                                r5 = rd32(0x803541bcu);
                                if (r5 != 0u) {
                                    r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                                    if (r3 != 1u) {
                                        if (r3 != 2u) {
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
                                if (r5 != 0u) {
                                    r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                                    if (r3 != 1u) {
                                        if (r3 != 2u) {
                                            r3 = 0u;
                                        } else {
                                            r3 = r4 & rd32(rd32(0x803541acu));
                                        }
                                    } else {
                                        r3 = r4 & rd32(rd32(0x8035419cu));
                                    }
                                } else {
                                    r3 = 0u;
                                }
                                if (r3 != 0u) break;
                            }
                            r31 = 4u;
                            fl_ = 5u;
                            break;
                        }
                    } while (0);
                    if (fl_ == 5u) {
                        fl_ = 0u;
                        fl_ = 6u;
                        break;
                    }
                    r31 = 3u;
                    fl_ = 6u;
                    break;
                }
            } while (0);
            if (fl_ == 6u) {
                fl_ = 0u;
                fl_ = 4u;
                break;
            }
            r31 = 5u;
            fl_ = 4u;
            break;
        }
    } while (0);
    if (fl_ == 4u) {
        fl_ = 0u;
    } else {
        r7 = r6 & 8u;
        do {
            if (r7 == 0u) {
                r6 = r6 & 2u;
                if (r6 == 0u) {
                    r5 = rd32(0x803541bcu);
                    if (r5 != 0u) {
                        r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                        if (r3 != 1u) {
                            if (r3 != 2u) {
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
                    if (r5 != 0u) {
                        r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                        if (r3 != 1u) {
                            if (r3 != 2u) {
                                r3 = 0u;
                            } else {
                                r3 = r4 & rd32(rd32(0x803541acu));
                            }
                        } else {
                            r3 = r4 & rd32(rd32(0x8035419cu));
                        }
                    } else {
                        r3 = 0u;
                    }
                    if (r3 != 0u) break;
                }
                if (r6 != 0u) {
                    r31 = 1u;
                    fl_ = 7u;
                    break;
                }
                if (r7 == 0u) {
                    r5 = rd32(0x803541bcu);
                    if (r5 != 0u) {
                        r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                        if (r3 != 1u) {
                            if (r3 != 2u) {
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
                    if (r5 != 0u) {
                        r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                        if (r3 != 1u) {
                            if (r3 != 2u) {
                                r3 = 0u;
                            } else {
                                r3 = r4 & rd32(rd32(0x803541acu));
                            }
                        } else {
                            r3 = r4 & rd32(rd32(0x8035419cu));
                        }
                    } else {
                        r3 = 0u;
                    }
                    if (r3 != 0u) {
                        r31 = 1u;
                        fl_ = 7u;
                        break;
                    }
                }
                r31 = 0u;
                fl_ = 7u;
                break;
            }
        } while (0);
        if (fl_ == 7u) {
            fl_ = 0u;
        } else {
            r31 = 7u;
        }
    }
    if (r30 != 1u) {
        a.r[0] = (u32)param_2;
        a.r[1] = r0;
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
